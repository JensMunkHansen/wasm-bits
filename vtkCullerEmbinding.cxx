// JavaScript wrapper for vtkCuller with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCullerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCuller.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkProp.h"
#include "vtkCuller.h"

template<> void emscripten::internal::raw_destructor<vtkCuller>(vtkCuller * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCuller_class) {
  emscripten::class_<vtkCuller, emscripten::base<vtkObject>>("vtkCuller")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCuller::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCuller& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCuller::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCuller::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCuller::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCuller& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
