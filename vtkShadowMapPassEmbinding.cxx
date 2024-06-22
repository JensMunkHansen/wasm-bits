// JavaScript wrapper for vtkShadowMapPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkShadowMapPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkShadowMapPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkShadowMapBakerPass.h"
#include "vtkRenderPass.h"
#include "vtkInformationObjectBaseKey.h"
#include "vtkAbstractMapper.h"
#include "vtkProp.h"
#include "vtkShaderProgram.h"
#include "vtkOpenGLVertexArrayObject.h"
#include "vtkShadowMapPass.h"

template<> void emscripten::internal::raw_destructor<vtkShadowMapPass>(vtkShadowMapPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkShadowMapPass_class) {
  emscripten::class_<vtkShadowMapPass, emscripten::base<vtkOpenGLRenderPass>>("vtkShadowMapPass")
    .smart_ptr<vtkSmartPointer<vtkShadowMapPass>>("vtkSmartPointer<vtkShadowMapPass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkShadowMapPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShadowMapPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkShadowMapPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkShadowMapPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkShadowMapPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShadowMapPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkShadowMapPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkShadowMapPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetShadowMapBakerPass", &vtkShadowMapPass::GetShadowMapBakerPass, emscripten::allow_raw_pointers())
    .function("SetShadowMapBakerPass", &vtkShadowMapPass::SetShadowMapBakerPass, emscripten::allow_raw_pointers())
    .function("GetOpaqueSequence", &vtkShadowMapPass::GetOpaqueSequence, emscripten::allow_raw_pointers())
    .function("SetOpaqueSequence", &vtkShadowMapPass::SetOpaqueSequence, emscripten::allow_raw_pointers())
    .function("ShadowMapTransforms", &vtkShadowMapPass::ShadowMapTransforms)
    .function("GetShadowMapTextureUnits", &vtkShadowMapPass::GetShadowMapTextureUnits)
    .class_function("ShadowMapPass", &vtkShadowMapPass::ShadowMapPass, emscripten::allow_raw_pointers())
    .function("GetFragmentDeclaration", &vtkShadowMapPass::GetFragmentDeclaration)
    .function("GetFragmentImplementation", &vtkShadowMapPass::GetFragmentImplementation)
    .function("SetShaderParameters", &vtkShadowMapPass::SetShaderParameters, emscripten::allow_raw_pointers());
}
