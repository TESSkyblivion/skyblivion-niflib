#pragma once

#include <vector>

#include <interfaces\typed_visitor.h>
#include <obj/NiInterpolator.h>


/*Utility functions and visitors for NiInterpolators and derivatives*/

//namespace Niflib {
//
//	class InterpolatorVisitor : public VisitorImpl<InterpolatorVisitor> {
//
//	public:
//		InterpolatorVisitor(NiInterpolatorRef interpolator);
//
//		template <typename NiObjectT> inline void visit(NiObjectT& obj, const NifInfo& info) {}
//
//		template<> inline void visit(NiBSplineCompTransformInterpolator& obj, const NifInfo& info) {
//
//		}
//
//		template<typename Data> GetControlData(std::vector<Data>& dataHolder) {}
//
//		template<typename Data> SampleKeys(std::vector<Key<Data>>& dataHolder) {}
//
//	};
//
//}

