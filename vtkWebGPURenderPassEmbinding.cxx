// JavaScript wrapper for vtkWebGPURenderPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkRenderingWebGPU.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkWebGPURenderPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/WebGPU/vtkWebGPURenderPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWebGPURenderPass.h"

template<> void emscripten::internal::raw_destructor<vtkWebGPURenderPass>(vtkWebGPURenderPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebGPURenderPass_class) {
  emscripten::class_<vtkWebGPURenderPass, emscripten::base<vtkRenderPass>>("vtkWebGPURenderPass")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPURenderPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebGPURenderPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebGPURenderPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebGPURenderPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPURenderPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebGPURenderPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
