// JavaScript wrapper for vtkOpenGLRenderer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLRendererEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLRenderer.h
*/
#include "vtkEmbindSmartPointerTraits.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFrameBufferObjectBase.h"
#include "vtkOpenGLState.h"
#include "vtkShaderProgram.h"
#include "vtkTransform.h"
#include "vtkPBRLUTTexture.h"
#include "vtkPBRIrradianceTexture.h"
#include "vtkPBRPrefilterTexture.h"
#include "vtkFloatArray.h"
#include "vtkTexture.h"
#include "vtkWindow.h"
#include "vtkOpenGLRenderer.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLRenderer_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkOpenGLRenderer>(vtkOpenGLRenderer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLRenderer_class) {
  using LightingComplexityEnum=vtkOpenGLRenderer::LightingComplexityEnum;
  emscripten::class_<vtkOpenGLRenderer, emscripten::base<vtkRenderer>>("vtkOpenGLRenderer")
    .smart_ptr<vtkSmartPointer<vtkOpenGLRenderer>>("vtkSmartPointer<vtkOpenGLRenderer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLRenderer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLRenderer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLRenderer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLRenderer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLRenderer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLRenderer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLRenderer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DeviceRender", &vtkOpenGLRenderer::DeviceRender)
    .function("DeviceRenderOpaqueGeometry", &vtkOpenGLRenderer::DeviceRenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("DeviceRenderTranslucentPolygonalGeometry", &vtkOpenGLRenderer::DeviceRenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("Clear", &vtkOpenGLRenderer::Clear)
    .function("UpdateLights", &vtkOpenGLRenderer::UpdateLights)
    .function("GetDepthPeelingHigherLayer", &vtkOpenGLRenderer::GetDepthPeelingHigherLayer)
    .class_function("HaveAppleQueryAllocationBug", &vtkOpenGLRenderer::HaveAppleQueryAllocationBug)
    .function("IsDualDepthPeelingSupported", &vtkOpenGLRenderer::IsDualDepthPeelingSupported)
    .function("GetState", &vtkOpenGLRenderer::GetState, emscripten::allow_raw_pointers())
    .function("GetLightingUniforms", emscripten::optional_override([](vtkOpenGLRenderer& self) -> std::string {  return self.GetLightingUniforms();}))
    .function("UpdateLightingUniforms", &vtkOpenGLRenderer::UpdateLightingUniforms, emscripten::allow_raw_pointers())
    .function("GetLightingComplexity", &vtkOpenGLRenderer::GetLightingComplexity)
    .function("GetLightingCount", &vtkOpenGLRenderer::GetLightingCount)
    .function("SetUserLightTransform", &vtkOpenGLRenderer::SetUserLightTransform, emscripten::allow_raw_pointers())
    .function("GetUserLightTransform", &vtkOpenGLRenderer::GetUserLightTransform, emscripten::allow_raw_pointers())
    .function("SetEnvMapLookupTable", &vtkOpenGLRenderer::SetEnvMapLookupTable, emscripten::allow_raw_pointers())
    .function("GetEnvMapLookupTable", &vtkOpenGLRenderer::GetEnvMapLookupTable, emscripten::allow_raw_pointers())
    .function("SetEnvMapIrradiance", &vtkOpenGLRenderer::SetEnvMapIrradiance, emscripten::allow_raw_pointers())
    .function("GetEnvMapIrradiance", &vtkOpenGLRenderer::GetEnvMapIrradiance, emscripten::allow_raw_pointers())
    .function("SetEnvMapPrefiltered", &vtkOpenGLRenderer::SetEnvMapPrefiltered, emscripten::allow_raw_pointers())
    .function("GetEnvMapPrefiltered", &vtkOpenGLRenderer::GetEnvMapPrefiltered, emscripten::allow_raw_pointers())
    .function("GetSphericalHarmonics", &vtkOpenGLRenderer::GetSphericalHarmonics, emscripten::allow_raw_pointers())
    .function("SetUseSphericalHarmonics", &vtkOpenGLRenderer::SetUseSphericalHarmonics)
    .function("GetUseSphericalHarmonics", &vtkOpenGLRenderer::GetUseSphericalHarmonics)
    .function("UseSphericalHarmonicsOn", &vtkOpenGLRenderer::UseSphericalHarmonicsOn)
    .function("UseSphericalHarmonicsOff", &vtkOpenGLRenderer::UseSphericalHarmonicsOff)
    .function("SetEnvironmentTexture", &vtkOpenGLRenderer::SetEnvironmentTexture, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLRenderer::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLRenderer_0_2_constants) {
    typedef vtkOpenGLRenderer::LightingComplexityEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkOpenGLRenderer_LightingComplexityEnum_NoLighting", vtkOpenGLRenderer::NoLighting },
      { "vtkOpenGLRenderer_LightingComplexityEnum_Headlight", vtkOpenGLRenderer::Headlight },
      { "vtkOpenGLRenderer_LightingComplexityEnum_Directional", vtkOpenGLRenderer::Directional },
      { "vtkOpenGLRenderer_LightingComplexityEnum_Positional", vtkOpenGLRenderer::Positional },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
