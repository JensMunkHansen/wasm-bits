// JavaScript wrapper for vtkShadowMapBakerPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkShadowMapBakerPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkShadowMapBakerPass.h
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
#include "vtkLight.h"
#include "vtkShadowMapBakerPass.h"

template<> void emscripten::internal::raw_destructor<vtkShadowMapBakerPass>(vtkShadowMapBakerPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkShadowMapBakerPass_class) {
  emscripten::class_<vtkShadowMapBakerPass, emscripten::base<vtkOpenGLRenderPass>>("vtkShadowMapBakerPass")
    .smart_ptr<vtkSmartPointer<vtkShadowMapBakerPass>>("vtkSmartPointer<vtkShadowMapBakerPass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkShadowMapBakerPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShadowMapBakerPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkShadowMapBakerPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkShadowMapBakerPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkShadowMapBakerPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShadowMapBakerPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkShadowMapBakerPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkShadowMapBakerPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetOpaqueSequence", &vtkShadowMapBakerPass::GetOpaqueSequence, emscripten::allow_raw_pointers())
    .function("SetOpaqueSequence", &vtkShadowMapBakerPass::SetOpaqueSequence, emscripten::allow_raw_pointers())
    .function("GetCompositeZPass", &vtkShadowMapBakerPass::GetCompositeZPass, emscripten::allow_raw_pointers())
    .function("SetCompositeZPass", &vtkShadowMapBakerPass::SetCompositeZPass, emscripten::allow_raw_pointers())
    .function("SetResolution", &vtkShadowMapBakerPass::SetResolution)
    .function("GetResolution", &vtkShadowMapBakerPass::GetResolution)
    .function("GetHasShadows", &vtkShadowMapBakerPass::GetHasShadows)
    .function("LightCreatesShadow", &vtkShadowMapBakerPass::LightCreatesShadow, emscripten::allow_raw_pointers())
    .function("GetNeedUpdate", &vtkShadowMapBakerPass::GetNeedUpdate)
    .function("SetUpToDate", &vtkShadowMapBakerPass::SetUpToDate);
}
