// JavaScript wrapper for vtkPReflectionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPReflectionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPReflectionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPReflectionFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPReflectionFilter>(vtkPReflectionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPReflectionFilter_class) {
  emscripten::class_<vtkPReflectionFilter, emscripten::base<vtkReflectionFilter>>("vtkPReflectionFilter")
    .smart_ptr<vtkSmartPointer<vtkPReflectionFilter>>("vtkSmartPointer<vtkPReflectionFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPReflectionFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPReflectionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPReflectionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPReflectionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPReflectionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPReflectionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPReflectionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkPReflectionFilter::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPReflectionFilter::GetController, emscripten::allow_raw_pointers());
}
