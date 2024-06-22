// JavaScript wrapper for vtkAggregateDataSetFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkAggregateDataSetFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkAggregateDataSetFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAggregateDataSetFilter.h"

template<> void emscripten::internal::raw_destructor<vtkAggregateDataSetFilter>(vtkAggregateDataSetFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAggregateDataSetFilter_class) {
  emscripten::class_<vtkAggregateDataSetFilter, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkAggregateDataSetFilter")
    .smart_ptr<vtkSmartPointer<vtkAggregateDataSetFilter>>("vtkSmartPointer<vtkAggregateDataSetFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAggregateDataSetFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAggregateDataSetFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAggregateDataSetFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAggregateDataSetFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAggregateDataSetFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAggregateDataSetFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAggregateDataSetFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfTargetProcesses", &vtkAggregateDataSetFilter::SetNumberOfTargetProcesses)
    .function("GetNumberOfTargetProcesses", &vtkAggregateDataSetFilter::GetNumberOfTargetProcesses)
    .function("SetMergePoints", &vtkAggregateDataSetFilter::SetMergePoints)
    .function("GetMergePoints", &vtkAggregateDataSetFilter::GetMergePoints)
    .function("MergePointsOn", &vtkAggregateDataSetFilter::MergePointsOn)
    .function("MergePointsOff", &vtkAggregateDataSetFilter::MergePointsOff);
}
