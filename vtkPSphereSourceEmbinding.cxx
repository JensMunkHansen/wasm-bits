// JavaScript wrapper for vtkPSphereSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPSphereSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPSphereSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPSphereSource.h"

template<> void emscripten::internal::raw_destructor<vtkPSphereSource>(vtkPSphereSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPSphereSource_class) {
  emscripten::class_<vtkPSphereSource, emscripten::base<vtkSphereSource>>("vtkPSphereSource")
    .smart_ptr<vtkSmartPointer<vtkPSphereSource>>("vtkSmartPointer<vtkPSphereSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPSphereSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPSphereSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPSphereSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPSphereSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPSphereSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPSphereSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPSphereSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetEstimatedMemorySize", &vtkPSphereSource::GetEstimatedMemorySize);
}
