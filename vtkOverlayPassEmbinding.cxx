// JavaScript wrapper for vtkOverlayPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOverlayPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOverlayPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkOverlayPass.h"

template<> void emscripten::internal::raw_destructor<vtkOverlayPass>(vtkOverlayPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOverlayPass_class) {
  emscripten::class_<vtkOverlayPass, emscripten::base<vtkDefaultPass>>("vtkOverlayPass")
    .smart_ptr<vtkSmartPointer<vtkOverlayPass>>("vtkSmartPointer<vtkOverlayPass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOverlayPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOverlayPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOverlayPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOverlayPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOverlayPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOverlayPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOverlayPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
