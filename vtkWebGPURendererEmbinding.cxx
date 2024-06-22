// JavaScript wrapper for vtkWebGPURenderer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkRenderingWebGPU.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkWebGPURendererEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/WebGPU/vtkWebGPURenderer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFrameBufferObjectBase.h"
#include "vtkSmartPointer.h"
#include "vtkTexture.h"
#include "vtkWindow.h"
#include "vtkTransform.h"
#include "vtkWebGPURenderer.h"

EMSCRIPTEN_BINDINGS(vtkRenderingWebGPU_vtkWebGPURenderer_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkWebGPURenderer>(vtkWebGPURenderer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebGPURenderer_class) {
  using LightingComplexityEnum=vtkWebGPURenderer::LightingComplexityEnum;
  emscripten::class_<vtkWebGPURenderer, emscripten::base<vtkRenderer>>("vtkWebGPURenderer")
    .smart_ptr<vtkSmartPointer<vtkWebGPURenderer>>("vtkSmartPointer<vtkWebGPURenderer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWebGPURenderer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPURenderer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebGPURenderer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebGPURenderer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebGPURenderer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPURenderer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebGPURenderer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetLightingComplexity", &vtkWebGPURenderer::GetLightingComplexity)
    .function("DeviceRender", &vtkWebGPURenderer::DeviceRender)
    .function("Clear", &vtkWebGPURenderer::Clear)
    .function("UpdateGeometry", &vtkWebGPURenderer::UpdateGeometry, emscripten::allow_raw_pointers())
    .function("UpdateComputeBuffers", &vtkWebGPURenderer::UpdateComputeBuffers)
    .function("UpdateComputePipelines", &vtkWebGPURenderer::UpdateComputePipelines)
    .function("RenderGeometry", &vtkWebGPURenderer::RenderGeometry)
    .function("UpdateLights", &vtkWebGPURenderer::UpdateLights)
    .function("SetEnvironmentTexture", &vtkWebGPURenderer::SetEnvironmentTexture, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkWebGPURenderer::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("AddComputePipeline", &vtkWebGPURenderer::AddComputePipeline)
    .function("SetUserLightTransform", &vtkWebGPURenderer::SetUserLightTransform, emscripten::allow_raw_pointers())
    .function("GetUserLightTransform", &vtkWebGPURenderer::GetUserLightTransform, emscripten::allow_raw_pointers())
    .function("SetUseRenderBundles", &vtkWebGPURenderer::SetUseRenderBundles)
    .function("UseRenderBundlesOn", &vtkWebGPURenderer::UseRenderBundlesOn)
    .function("UseRenderBundlesOff", &vtkWebGPURenderer::UseRenderBundlesOff)
    .function("GetUseRenderBundles", &vtkWebGPURenderer::GetUseRenderBundles);
}
EMSCRIPTEN_BINDINGS(vtkRenderingWebGPU_vtkWebGPURenderer_0_2_constants) {
    typedef vtkWebGPURenderer::LightingComplexityEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkWebGPURenderer_LightingComplexityEnum_NoLighting", vtkWebGPURenderer::NoLighting },
      { "vtkWebGPURenderer_LightingComplexityEnum_Headlight", vtkWebGPURenderer::Headlight },
      { "vtkWebGPURenderer_LightingComplexityEnum_Directional", vtkWebGPURenderer::Directional },
      { "vtkWebGPURenderer_LightingComplexityEnum_Positional", vtkWebGPURenderer::Positional },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
