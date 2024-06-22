// JavaScript wrapper for vtkSSAOPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkSSAOPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkSSAOPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkAbstractMapper.h"
#include "vtkProp.h"
#include "vtkShaderProgram.h"
#include "vtkOpenGLVertexArrayObject.h"
#include "vtkSSAOPass.h"

template<> void emscripten::internal::raw_destructor<vtkSSAOPass>(vtkSSAOPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSSAOPass_class) {
  emscripten::class_<vtkSSAOPass, emscripten::base<vtkImageProcessingPass>>("vtkSSAOPass")
    .smart_ptr<vtkSmartPointer<vtkSSAOPass>>("vtkSmartPointer<vtkSSAOPass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSSAOPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSSAOPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSSAOPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSSAOPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSSAOPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSSAOPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSSAOPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkSSAOPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetShaderParameters", &vtkSSAOPass::SetShaderParameters, emscripten::allow_raw_pointers())
    .function("GetRadius", &vtkSSAOPass::GetRadius)
    .function("SetRadius", &vtkSSAOPass::SetRadius)
    .function("GetKernelSize", &vtkSSAOPass::GetKernelSize)
    .function("SetKernelSize", &vtkSSAOPass::SetKernelSize)
    .function("GetKernelSizeMinValue", &vtkSSAOPass::GetKernelSizeMinValue)
    .function("GetKernelSizeMaxValue", &vtkSSAOPass::GetKernelSizeMaxValue)
    .function("GetBias", &vtkSSAOPass::GetBias)
    .function("SetBias", &vtkSSAOPass::SetBias)
    .function("GetBlur", &vtkSSAOPass::GetBlur)
    .function("SetBlur", &vtkSSAOPass::SetBlur)
    .function("BlurOn", &vtkSSAOPass::BlurOn)
    .function("BlurOff", &vtkSSAOPass::BlurOff)
    .function("SetDepthFormat", &vtkSSAOPass::SetDepthFormat)
    .function("GetVolumeOpacityThreshold", &vtkSSAOPass::GetVolumeOpacityThreshold)
    .function("SetVolumeOpacityThreshold", &vtkSSAOPass::SetVolumeOpacityThreshold)
    .function("GetVolumeOpacityThresholdMinValue", &vtkSSAOPass::GetVolumeOpacityThresholdMinValue)
    .function("GetVolumeOpacityThresholdMaxValue", &vtkSSAOPass::GetVolumeOpacityThresholdMaxValue);
}
