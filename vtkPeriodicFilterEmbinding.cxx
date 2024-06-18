// JavaScript wrapper for vtkPeriodicFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPeriodicFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPeriodicFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPeriodicFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersParallel_vtkPeriodicFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_ITERATION_MODE_DIRECT_NB", 0 },
      { "VTK_ITERATION_MODE_MAX", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkPeriodicFilter>(vtkPeriodicFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPeriodicFilter_class) {
  emscripten::class_<vtkPeriodicFilter, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkPeriodicFilter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPeriodicFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPeriodicFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPeriodicFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPeriodicFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPeriodicFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPeriodicFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetIterationMode", &vtkPeriodicFilter::SetIterationMode)
    .function("GetIterationModeMinValue", &vtkPeriodicFilter::GetIterationModeMinValue)
    .function("GetIterationModeMaxValue", &vtkPeriodicFilter::GetIterationModeMaxValue)
    .function("GetIterationMode", &vtkPeriodicFilter::GetIterationMode)
    .function("SetIterationModeToDirectNb", &vtkPeriodicFilter::SetIterationModeToDirectNb)
    .function("SetIterationModeToMax", &vtkPeriodicFilter::SetIterationModeToMax)
    .function("SetNumberOfPeriods", &vtkPeriodicFilter::SetNumberOfPeriods)
    .function("GetNumberOfPeriods", &vtkPeriodicFilter::GetNumberOfPeriods)
    .function("AddIndex", &vtkPeriodicFilter::AddIndex)
    .function("RemoveIndex", &vtkPeriodicFilter::RemoveIndex)
    .function("RemoveAllIndices", &vtkPeriodicFilter::RemoveAllIndices);
}
