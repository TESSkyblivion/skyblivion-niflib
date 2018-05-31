#ifndef  _TYPED_VISITOR_H_
#define _TYPED_VISITOR_H_

#include <visitor.h>
#include <compound_visitor.h>
#include <obj/NiObject.h>
#include <queue>
#include <type_traits>

namespace Niflib {

	typedef std::deque<std::reference_wrapper<NiObject>> niobjects_queue;

	class StackVisitor : public VisitorImpl<StackVisitor> {
	public:
		StackVisitor() : VisitorImpl<StackVisitor>(*this) {}

		template <typename NiObjectT> inline void visit(NiObjectT& obj, const NifInfo& info)
		{
			start(obj, info);
			for (NiObjectRef ref : obj.GetRefs()) { ref->accept(*this, info); }
			end(obj, info);
		}

		virtual inline void start(NiObject& in, const NifInfo& info, NiObject& parent) = 0;
		virtual inline void end(NiObject& in, const NifInfo& info, NiObject& parent) = 0;

		virtual NiObject& getRoot() { return stack.back(); }
	private:
		virtual inline void start(NiObject& in, const NifInfo& info) { stack.push_front(in); start(in, info, stack.front()); }
		virtual inline void end(NiObject& in, const NifInfo& info) { end(in, info, stack.front()); stack.pop_front(); }
	protected:
		niobjects_queue stack;
	};

	class CompleteStackVisitor : public VisitorImpl<CompleteStackVisitor>, public CompoundVisitorImpl<CompleteStackVisitor> {
	public:
		CompleteStackVisitor() : 
			VisitorImpl<CompleteStackVisitor>(*this), 
			CompoundVisitorImpl<CompleteStackVisitor>(*this) {}

		template<class NiObjectT>
		typename enable_if<is_base_of<NiObject, NiObjectT>::value, bool>::type
		inline visit(NiObjectT& obj, const NifInfo& info)
		{
			//start(obj, info);
			//for (Compound* cref : obj.GetCompounds()) { cref->accept(*this, info); }
			//for (NiObjectRef ref : obj.GetRefs()) { ref->accept(*this, info); }
			//end(obj, info);
		}

		template<typename CompoundT>
		typename enable_if<is_base_of<Compound, CompoundT>::value, bool>::type
		inline visit(CompoundT& obj, const NifInfo& info)
		{
			//start(obj, info, getRoot());
			//for (Compound* cref : obj.GetCompounds()) { cref->accept(*this, info); }
			//end(obj, info, getRoot());
		}

		virtual inline void start(NiObject& in, const NifInfo& info, NiObject& parent) = 0;
		virtual inline void end(NiObject& in, const NifInfo& info, NiObject& parent) = 0;

		virtual inline void start(Compound& in, const NifInfo& info, NiObject& parent) = 0;
		virtual inline void end(Compound& in, const NifInfo& info, NiObject& parent) = 0;

		virtual NiObject& getRoot() { return stack.back(); }
	private:
		virtual inline void start(NiObject& in, const NifInfo& info) { stack.push_front(in); start(in, info, stack.front()); }
		virtual inline void end(NiObject& in, const NifInfo& info) { end(in, info, stack.front()); stack.pop_front(); }
	protected:
		niobjects_queue stack;
	};

	template<typename T>
	class RecursiveFieldVisitor :
		public VisitorImpl<RecursiveFieldVisitor<T>>,
		public CompoundVisitorImpl<RecursiveFieldVisitor<T>>,
		public FieldVisitorImpl<RecursiveFieldVisitor<T>> {
	protected:
		NiObjectRef parent;
		vector<unsigned int> valid_field_indices;
		const NifInfo& nif_info;

		T& delegate;

	public:

		RecursiveFieldVisitor(T& a_delegate, const NifInfo& info) : delegate(a_delegate), nif_info(info),
			VisitorImpl<RecursiveFieldVisitor<T>>(*this),
			CompoundVisitorImpl<RecursiveFieldVisitor<T>>(*this),
			FieldVisitorImpl<RecursiveFieldVisitor<T>>(*this) {}

		//NiObjects
		template<class ObjectT, typename std::enable_if<std::is_base_of<NiObject, ObjectT>::value>::type* = nullptr>
		inline void visit(ObjectT& obj, const NifInfo& info)
		{
			//save frame
			NiObjectRef old_parent = parent;
			vector<unsigned int> old_valid_indices = valid_field_indices;

			//new frame
			parent = StaticCast<NiObject>(&obj);
			valid_field_indices = obj.GetValidFieldsIndices(info);

			start(*parent, info);
			delegate.visit_object(obj);
			obj.accept(*this);
			end(*parent, info);

			//restore frame
			valid_field_indices = old_valid_indices;
			parent = old_parent;
		}

		template<class ObjectT, typename std::enable_if<std::is_base_of<Compound, ObjectT>::value>::type* = nullptr>
		inline void visit(ObjectT& obj, const NifInfo& info)
		{
			//save frame
			vector<unsigned int> old_valid_indices = valid_field_indices;

			//new frame
			valid_field_indices = obj.GetValidFieldsIndices(info);

			delegate.visit_compound(obj);
			obj.accept(*this);

			//restore frame
			valid_field_indices = old_valid_indices;
		}

		//Handle special cases of NiObjects which need the parent to determine the
		//valid fields
		template<>
		inline void visit<BoneData>(BoneData& obj, const NifInfo& info)
		{
			NiSkinDataRef this_parent = DynamicCast<NiSkinData>(&*parent);

			//save frame
			vector<unsigned int> old_valid_indices = valid_field_indices;

			//new frame
			valid_field_indices = obj.GetValidFieldsIndices(info, *this_parent);

			delegate.visit_compound(obj);
			obj.accept(*this);

			//restore frame
			valid_field_indices = old_valid_indices;
		}

		template<>
		inline void visit<Morph>(Morph& obj, const NifInfo& info)
		{
			NiMorphDataRef this_parent = DynamicCast<NiMorphData>(&*parent);
			//save frame
			vector<unsigned int> old_valid_indices = valid_field_indices;

			//new frame
			valid_field_indices = obj.GetValidFieldsIndices(info, *this_parent);

			delegate.visit_compound(obj);
			obj.accept(*this);

			//restore frame
			valid_field_indices = old_valid_indices;
		}

		//Valid
		template<class FieldT>
		inline void visit(FieldT& field, const unsigned int field_index) {
			if (std::find(valid_field_indices.begin(), valid_field_indices.end(), field_index) != valid_field_indices.end()) {
				visit(field);
			}
		}

		//Iterable
		template<typename T, typename std::enable_if<IsIterable<T>>::type* = nullptr >
		inline void visit(T& field) {
			for (T::iterator it = field.begin(); it != field.end(); ++it)
				visit(*it);
		}

		//Single value, handle
		template<typename T, typename std::enable_if<!IsIterable<T>>::type* = nullptr >
		inline void visit(T& field) {
			handle(field);
		}

		template<typename T, typename std::enable_if<IsVisitableRef<T>>::type* = nullptr >
		inline void handle(T& field) {
			if (field != NULL) {
				field->accept(*this, nif_info);
			}
		}

		//single values
		template<typename T, typename std::enable_if<!IsVisitableRef<T>>::type* = nullptr >
		inline void handle(T& field) {
			handleValue(field);
		}

		//Single visitable
		template<typename T>
		static constexpr bool IsVisitable =
			std::is_base_of<Compound, T>::value;

		template<typename T, typename std::enable_if<IsVisitable<T>>::type* = nullptr >
		inline void handleValue(T& field) {
			field.accept(*this, nif_info);
		}

		template<typename T, typename std::enable_if<!IsVisitable<T>>::type* = nullptr >
		inline void handleValue(T& field) {
			visitImpl(field);
		}

		//Actual Handling
		template<class T>
		inline void visitImpl(T& field) {
			delegate.visit_field(field);
		}

		
		virtual inline void start(NiObject& in, const NifInfo& info) {}
		virtual inline void end(NiObject& in, const NifInfo& info) {}
	};

}


#endif
