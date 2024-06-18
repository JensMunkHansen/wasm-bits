// JavaScript wrapper for vtkLightsPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkLightsPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkLightsPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkLightsPass.h"

template<> void emscripten::internal::raw_destructor<vtkLightsPass>(vtkLightsPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLightsPass_class) {
  emscripten::class_<vtkLightsPass, emscripten::base<vtkRenderPass>>("vtkLightsPass")
    .smart_ptr<vtkSmartPointer<vtkLightsPass>>("vtkSmartPointer<vtkLightsPass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLightsPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightsPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLightsPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLightsPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLightsPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightsPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLightsPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
