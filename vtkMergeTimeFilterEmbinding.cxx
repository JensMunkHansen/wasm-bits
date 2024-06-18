// JavaScript wrapper for vtkMergeTimeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkMergeTimeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkMergeTimeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMergeTimeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkMergeTimeFilter>(vtkMergeTimeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMergeTimeFilter_class) {
  emscripten::class_<vtkMergeTimeFilter, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkMergeTimeFilter")
    .smart_ptr<vtkSmartPointer<vtkMergeTimeFilter>>("vtkSmartPointer<vtkMergeTimeFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMergeTimeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeTimeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMergeTimeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMergeTimeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMergeTimeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeTimeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMergeTimeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTolerance", &vtkMergeTimeFilter::SetTolerance)
    .function("GetToleranceMinValue", &vtkMergeTimeFilter::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkMergeTimeFilter::GetToleranceMaxValue)
    .function("GetTolerance", &vtkMergeTimeFilter::GetTolerance)
    .function("SetUseRelativeTolerance", &vtkMergeTimeFilter::SetUseRelativeTolerance)
    .function("GetUseRelativeTolerance", &vtkMergeTimeFilter::GetUseRelativeTolerance)
    .function("UseRelativeToleranceOn", &vtkMergeTimeFilter::UseRelativeToleranceOn)
    .function("UseRelativeToleranceOff", &vtkMergeTimeFilter::UseRelativeToleranceOff)
    .function("SetUseIntersection", &vtkMergeTimeFilter::SetUseIntersection)
    .function("GetUseIntersection", &vtkMergeTimeFilter::GetUseIntersection)
    .function("UseIntersectionOn", &vtkMergeTimeFilter::UseIntersectionOn)
    .function("UseIntersectionOff", &vtkMergeTimeFilter::UseIntersectionOff);
}
