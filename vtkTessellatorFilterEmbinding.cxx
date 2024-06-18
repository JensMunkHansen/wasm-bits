// JavaScript wrapper for vtkTessellatorFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkTessellatorFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkTessellatorFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStreamingTessellator.h"
#include "vtkDataSetEdgeSubdivisionCriterion.h"
#include "vtkTessellatorFilter.h"

template<> void emscripten::internal::raw_destructor<vtkTessellatorFilter>(vtkTessellatorFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTessellatorFilter_class) {
  emscripten::class_<vtkTessellatorFilter, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkTessellatorFilter")
    .smart_ptr<vtkSmartPointer<vtkTessellatorFilter>>("vtkSmartPointer<vtkTessellatorFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTessellatorFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTessellatorFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTessellatorFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTessellatorFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTessellatorFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTessellatorFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTessellatorFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTessellator", &vtkTessellatorFilter::SetTessellator, emscripten::allow_raw_pointers())
    .function("GetTessellator", &vtkTessellatorFilter::GetTessellator, emscripten::allow_raw_pointers())
    .function("SetSubdivider", &vtkTessellatorFilter::SetSubdivider, emscripten::allow_raw_pointers())
    .function("GetSubdivider", &vtkTessellatorFilter::GetSubdivider, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkTessellatorFilter::GetMTime)
    .function("SetOutputDimension", &vtkTessellatorFilter::SetOutputDimension)
    .function("GetOutputDimensionMinValue", &vtkTessellatorFilter::GetOutputDimensionMinValue)
    .function("GetOutputDimensionMaxValue", &vtkTessellatorFilter::GetOutputDimensionMaxValue)
    .function("GetOutputDimension", emscripten::select_overload<int(vtkTessellatorFilter&)>([](vtkTessellatorFilter& self) -> int { return self.GetOutputDimension(); }))
    .function("GetOutputDimension", emscripten::select_overload<int(vtkTessellatorFilter&)>([](vtkTessellatorFilter& self) -> int { return self.GetOutputDimension(); }))
    .function("SetMaximumNumberOfSubdivisions", &vtkTessellatorFilter::SetMaximumNumberOfSubdivisions)
    .function("GetMaximumNumberOfSubdivisions", &vtkTessellatorFilter::GetMaximumNumberOfSubdivisions)
    .function("SetChordError", &vtkTessellatorFilter::SetChordError)
    .function("GetChordError", &vtkTessellatorFilter::GetChordError)
    .function("ResetFieldCriteria", &vtkTessellatorFilter::ResetFieldCriteria)
    .function("SetFieldCriterion", &vtkTessellatorFilter::SetFieldCriterion)
    .function("GetMergePoints", &vtkTessellatorFilter::GetMergePoints)
    .function("SetMergePoints", &vtkTessellatorFilter::SetMergePoints)
    .function("MergePointsOn", &vtkTessellatorFilter::MergePointsOn)
    .function("MergePointsOff", &vtkTessellatorFilter::MergePointsOff);
}
