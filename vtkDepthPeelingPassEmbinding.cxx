// JavaScript wrapper for vtkDepthPeelingPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkDepthPeelingPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkDepthPeelingPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkRenderPass.h"
#include "vtkAbstractMapper.h"
#include "vtkProp.h"
#include "vtkShaderProgram.h"
#include "vtkOpenGLVertexArrayObject.h"
#include "vtkTextureObject.h"
#include "vtkDepthPeelingPass.h"

template<> void emscripten::internal::raw_destructor<vtkDepthPeelingPass>(vtkDepthPeelingPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDepthPeelingPass_class) {
  emscripten::class_<vtkDepthPeelingPass, emscripten::base<vtkOpenGLRenderPass>>("vtkDepthPeelingPass")
    .smart_ptr<vtkSmartPointer<vtkDepthPeelingPass>>("vtkSmartPointer<vtkDepthPeelingPass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDepthPeelingPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDepthPeelingPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDepthPeelingPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDepthPeelingPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDepthPeelingPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDepthPeelingPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDepthPeelingPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkDepthPeelingPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetTranslucentPass", &vtkDepthPeelingPass::GetTranslucentPass, emscripten::allow_raw_pointers())
    .function("SetTranslucentPass", &vtkDepthPeelingPass::SetTranslucentPass, emscripten::allow_raw_pointers())
    .function("SetOcclusionRatio", &vtkDepthPeelingPass::SetOcclusionRatio)
    .function("GetOcclusionRatioMinValue", &vtkDepthPeelingPass::GetOcclusionRatioMinValue)
    .function("GetOcclusionRatioMaxValue", &vtkDepthPeelingPass::GetOcclusionRatioMaxValue)
    .function("GetOcclusionRatio", &vtkDepthPeelingPass::GetOcclusionRatio)
    .function("SetMaximumNumberOfPeels", &vtkDepthPeelingPass::SetMaximumNumberOfPeels)
    .function("GetMaximumNumberOfPeels", &vtkDepthPeelingPass::GetMaximumNumberOfPeels)
    .function("SetShaderParameters", &vtkDepthPeelingPass::SetShaderParameters, emscripten::allow_raw_pointers())
    .function("SetOpaqueZTexture", &vtkDepthPeelingPass::SetOpaqueZTexture, emscripten::allow_raw_pointers())
    .function("SetOpaqueRGBATexture", &vtkDepthPeelingPass::SetOpaqueRGBATexture, emscripten::allow_raw_pointers())
    .function("SetDepthFormat", &vtkDepthPeelingPass::SetDepthFormat);
}
