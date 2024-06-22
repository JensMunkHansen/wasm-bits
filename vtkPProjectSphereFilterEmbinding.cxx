// JavaScript wrapper for vtkPProjectSphereFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPProjectSphereFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPProjectSphereFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPProjectSphereFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPProjectSphereFilter>(vtkPProjectSphereFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPProjectSphereFilter_class) {
  emscripten::class_<vtkPProjectSphereFilter, emscripten::base<vtkProjectSphereFilter>>("vtkPProjectSphereFilter")
    .smart_ptr<vtkSmartPointer<vtkPProjectSphereFilter>>("vtkSmartPointer<vtkPProjectSphereFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPProjectSphereFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPProjectSphereFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPProjectSphereFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPProjectSphereFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPProjectSphereFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPProjectSphereFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPProjectSphereFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
