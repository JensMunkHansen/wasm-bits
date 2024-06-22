// JavaScript wrapper for vtkAdaptiveTemporalInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkAdaptiveTemporalInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkAdaptiveTemporalInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAdaptiveTemporalInterpolator.h"

template<> void emscripten::internal::raw_destructor<vtkAdaptiveTemporalInterpolator>(vtkAdaptiveTemporalInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAdaptiveTemporalInterpolator_class) {
  emscripten::class_<vtkAdaptiveTemporalInterpolator, emscripten::base<vtkTemporalInterpolator>>("vtkAdaptiveTemporalInterpolator")
    .smart_ptr<vtkSmartPointer<vtkAdaptiveTemporalInterpolator>>("vtkSmartPointer<vtkAdaptiveTemporalInterpolator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAdaptiveTemporalInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAdaptiveTemporalInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAdaptiveTemporalInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAdaptiveTemporalInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAdaptiveTemporalInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAdaptiveTemporalInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAdaptiveTemporalInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
