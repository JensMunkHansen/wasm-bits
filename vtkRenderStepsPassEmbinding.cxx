// JavaScript wrapper for vtkRenderStepsPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderStepsPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkRenderStepsPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkCameraPass.h"
#include "vtkRenderPass.h"
#include "vtkRenderStepsPass.h"

template<> void emscripten::internal::raw_destructor<vtkRenderStepsPass>(vtkRenderStepsPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderStepsPass_class) {
  emscripten::class_<vtkRenderStepsPass, emscripten::base<vtkRenderPass>>("vtkRenderStepsPass")
    .smart_ptr<vtkSmartPointer<vtkRenderStepsPass>>("vtkSmartPointer<vtkRenderStepsPass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRenderStepsPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderStepsPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderStepsPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderStepsPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderStepsPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderStepsPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderStepsPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkRenderStepsPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetCameraPass", &vtkRenderStepsPass::GetCameraPass, emscripten::allow_raw_pointers())
    .function("SetCameraPass", &vtkRenderStepsPass::SetCameraPass, emscripten::allow_raw_pointers())
    .function("GetLightsPass", &vtkRenderStepsPass::GetLightsPass, emscripten::allow_raw_pointers())
    .function("SetLightsPass", &vtkRenderStepsPass::SetLightsPass, emscripten::allow_raw_pointers())
    .function("GetOpaquePass", &vtkRenderStepsPass::GetOpaquePass, emscripten::allow_raw_pointers())
    .function("SetOpaquePass", &vtkRenderStepsPass::SetOpaquePass, emscripten::allow_raw_pointers())
    .function("GetTranslucentPass", &vtkRenderStepsPass::GetTranslucentPass, emscripten::allow_raw_pointers())
    .function("SetTranslucentPass", &vtkRenderStepsPass::SetTranslucentPass, emscripten::allow_raw_pointers())
    .function("GetVolumetricPass", &vtkRenderStepsPass::GetVolumetricPass, emscripten::allow_raw_pointers())
    .function("SetVolumetricPass", &vtkRenderStepsPass::SetVolumetricPass, emscripten::allow_raw_pointers())
    .function("GetOverlayPass", &vtkRenderStepsPass::GetOverlayPass, emscripten::allow_raw_pointers())
    .function("SetOverlayPass", &vtkRenderStepsPass::SetOverlayPass, emscripten::allow_raw_pointers())
    .function("GetPostProcessPass", &vtkRenderStepsPass::GetPostProcessPass, emscripten::allow_raw_pointers())
    .function("SetPostProcessPass", &vtkRenderStepsPass::SetPostProcessPass, emscripten::allow_raw_pointers());
}
