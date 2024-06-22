// JavaScript wrapper for vtkFramebufferPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkFramebufferPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkFramebufferPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkTextureObject.h"
#include "vtkFramebufferPass.h"

template<> void emscripten::internal::raw_destructor<vtkFramebufferPass>(vtkFramebufferPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFramebufferPass_class) {
  emscripten::class_<vtkFramebufferPass, emscripten::base<vtkDepthImageProcessingPass>>("vtkFramebufferPass")
    .smart_ptr<vtkSmartPointer<vtkFramebufferPass>>("vtkSmartPointer<vtkFramebufferPass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFramebufferPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFramebufferPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFramebufferPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFramebufferPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFramebufferPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFramebufferPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFramebufferPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkFramebufferPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetDepthFormat", &vtkFramebufferPass::SetDepthFormat)
    .function("SetColorFormat", &vtkFramebufferPass::SetColorFormat)
    .function("GetDepthTexture", &vtkFramebufferPass::GetDepthTexture, emscripten::allow_raw_pointers())
    .function("GetColorTexture", &vtkFramebufferPass::GetColorTexture, emscripten::allow_raw_pointers());
}
