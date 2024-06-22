// JavaScript wrapper for vtkWebGPUClearPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkRenderingWebGPU.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkWebGPUClearPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/WebGPU/vtkWebGPUClearPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWebGPUClearPass.h"

template<> void emscripten::internal::raw_destructor<vtkWebGPUClearPass>(vtkWebGPUClearPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebGPUClearPass_class) {
  emscripten::class_<vtkWebGPUClearPass, emscripten::base<vtkWebGPURenderPass>>("vtkWebGPUClearPass")
    .smart_ptr<vtkSmartPointer<vtkWebGPUClearPass>>("vtkSmartPointer<vtkWebGPUClearPass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWebGPUClearPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUClearPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebGPUClearPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebGPUClearPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebGPUClearPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUClearPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebGPUClearPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
