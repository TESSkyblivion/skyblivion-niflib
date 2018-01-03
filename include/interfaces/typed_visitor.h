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
			start(obj, info);
			for (Compound* cref : obj.GetCompounds()) { cref->accept(*this, info); }
			for (NiObjectRef ref : obj.GetRefs()) { ref->accept(*this, info); }
			end(obj, info);
		}

		template<typename CompoundT>
		typename enable_if<is_base_of<Compound, CompoundT>::value, bool>::type
		inline visit(CompoundT& obj, const NifInfo& info)
		{
			start(obj, info, getRoot());
			for (Compound* cref : obj.GetCompounds()) { cref->accept(*this, info); }
			end(obj, info, getRoot());
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
}


#endif
