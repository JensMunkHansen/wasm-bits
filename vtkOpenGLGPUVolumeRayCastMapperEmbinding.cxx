// JavaScript wrapper for vtkOpenGLGPUVolumeRayCastMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolumeOpenGL2.js/vtkRenderingVolumeOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolumeOpenGL2.js/vtkOpenGLGPUVolumeRayCastMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/VolumeOpenGL2/vtkOpenGLGPUVolumeRayCastMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextureObject.h"
#include "vtkImageData.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkWindow.h"
#include "vtkOpenGLGPUVolumeRayCastMapper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingVolumeOpenGL2_vtkOpenGLGPUVolumeRayCastMapper_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkOpenGLGPUVolumeRayCastMapper>(vtkOpenGLGPUVolumeRayCastMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLGPUVolumeRayCastMapper_class) {
  using Passes=vtkOpenGLGPUVolumeRayCastMapper::Passes;
  emscripten::class_<vtkOpenGLGPUVolumeRayCastMapper, emscripten::base<vtkGPUVolumeRayCastMapper>>("vtkOpenGLGPUVolumeRayCastMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLGPUVolumeRayCastMapper>>("vtkSmartPointer<vtkOpenGLGPUVolumeRayCastMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLGPUVolumeRayCastMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLGPUVolumeRayCastMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLGPUVolumeRayCastMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLGPUVolumeRayCastMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLGPUVolumeRayCastMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLGPUVolumeRayCastMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLGPUVolumeRayCastMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDepthTexture", &vtkOpenGLGPUVolumeRayCastMapper::GetDepthTexture, emscripten::allow_raw_pointers())
    .function("GetColorTexture", &vtkOpenGLGPUVolumeRayCastMapper::GetColorTexture, emscripten::allow_raw_pointers())
    .function("GetDepthImage", &vtkOpenGLGPUVolumeRayCastMapper::GetDepthImage, emscripten::allow_raw_pointers())
    .function("GetColorImage", &vtkOpenGLGPUVolumeRayCastMapper::GetColorImage, emscripten::allow_raw_pointers())
    .function("GetCurrentPass", &vtkOpenGLGPUVolumeRayCastMapper::GetCurrentPass)
    .function("SetSharedDepthTexture", &vtkOpenGLGPUVolumeRayCastMapper::SetSharedDepthTexture, emscripten::allow_raw_pointers())
    .function("SetPartitions", &vtkOpenGLGPUVolumeRayCastMapper::SetPartitions)
    .function("PreLoadData", &vtkOpenGLGPUVolumeRayCastMapper::PreLoadData, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLGPUVolumeRayCastMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingVolumeOpenGL2_vtkOpenGLGPUVolumeRayCastMapper_0_2_constants) {
    typedef vtkOpenGLGPUVolumeRayCastMapper::Passes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkOpenGLGPUVolumeRayCastMapper_Passes_RenderPass", vtkOpenGLGPUVolumeRayCastMapper::RenderPass },
      { "vtkOpenGLGPUVolumeRayCastMapper_Passes_DepthPass", vtkOpenGLGPUVolumeRayCastMapper::DepthPass },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
