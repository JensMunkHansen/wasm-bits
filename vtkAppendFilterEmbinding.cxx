// JavaScript wrapper for vtkAppendFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkAppendFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkAppendFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkDataSetCollection.h"
#include "vtkAppendFilter.h"

template<> void emscripten::internal::raw_destructor<vtkAppendFilter>(vtkAppendFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAppendFilter_class) {
  emscripten::class_<vtkAppendFilter, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkAppendFilter")
    .smart_ptr<vtkSmartPointer<vtkAppendFilter>>("vtkSmartPointer<vtkAppendFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAppendFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAppendFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAppendFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAppendFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAppendFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkDataSet*(vtkAppendFilter&, int)>([](vtkAppendFilter& self, int arg_0) -> vtkDataSet* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataSet*(vtkAppendFilter&)>([](vtkAppendFilter& self) -> vtkDataSet* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetMergePoints", &vtkAppendFilter::GetMergePoints)
    .function("SetMergePoints", &vtkAppendFilter::SetMergePoints)
    .function("MergePointsOn", &vtkAppendFilter::MergePointsOn)
    .function("MergePointsOff", &vtkAppendFilter::MergePointsOff)
    .function("SetTolerance", &vtkAppendFilter::SetTolerance)
    .function("GetToleranceMinValue", &vtkAppendFilter::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkAppendFilter::GetToleranceMaxValue)
    .function("GetTolerance", &vtkAppendFilter::GetTolerance)
    .function("SetToleranceIsAbsolute", &vtkAppendFilter::SetToleranceIsAbsolute)
    .function("GetToleranceIsAbsolute", &vtkAppendFilter::GetToleranceIsAbsolute)
    .function("ToleranceIsAbsoluteOn", &vtkAppendFilter::ToleranceIsAbsoluteOn)
    .function("ToleranceIsAbsoluteOff", &vtkAppendFilter::ToleranceIsAbsoluteOff)
    .function("RemoveInputData", &vtkAppendFilter::RemoveInputData, emscripten::allow_raw_pointers())
    .function("GetInputList", &vtkAppendFilter::GetInputList, emscripten::allow_raw_pointers())
    .function("SetOutputPointsPrecision", &vtkAppendFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecisionMinValue", &vtkAppendFilter::GetOutputPointsPrecisionMinValue)
    .function("GetOutputPointsPrecisionMaxValue", &vtkAppendFilter::GetOutputPointsPrecisionMaxValue)
    .function("GetOutputPointsPrecision", &vtkAppendFilter::GetOutputPointsPrecision);
}
