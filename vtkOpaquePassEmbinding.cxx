// JavaScript wrapper for vtkOpaquePass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpaquePassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpaquePass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkOpaquePass.h"

template<> void emscripten::internal::raw_destructor<vtkOpaquePass>(vtkOpaquePass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpaquePass_class) {
  emscripten::class_<vtkOpaquePass, emscripten::base<vtkDefaultPass>>("vtkOpaquePass")
    .smart_ptr<vtkSmartPointer<vtkOpaquePass>>("vtkSmartPointer<vtkOpaquePass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpaquePass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpaquePass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpaquePass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpaquePass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpaquePass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpaquePass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpaquePass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}