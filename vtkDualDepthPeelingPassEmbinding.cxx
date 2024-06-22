// JavaScript wrapper for vtkDualDepthPeelingPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkDualDepthPeelingPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkDualDepthPeelingPass.h
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
#include "vtkDualDepthPeelingPass.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkDualDepthPeelingPass_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkDualDepthPeelingPass>(vtkDualDepthPeelingPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDualDepthPeelingPass_class) {
  emscripten::class_<vtkDualDepthPeelingPass, emscripten::base<vtkDepthPeelingPass>>("vtkDualDepthPeelingPass")
    .smart_ptr<vtkSmartPointer<vtkDualDepthPeelingPass>>("vtkSmartPointer<vtkDualDepthPeelingPass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDualDepthPeelingPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDualDepthPeelingPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDualDepthPeelingPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDualDepthPeelingPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDualDepthPeelingPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDualDepthPeelingPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDualDepthPeelingPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkDualDepthPeelingPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetVolumetricPass", &vtkDualDepthPeelingPass::GetVolumetricPass, emscripten::allow_raw_pointers())
    .function("SetVolumetricPass", &vtkDualDepthPeelingPass::SetVolumetricPass, emscripten::allow_raw_pointers())
    .function("SetShaderParameters", &vtkDualDepthPeelingPass::SetShaderParameters, emscripten::allow_raw_pointers())
    .function("GetShaderStageMTime", &vtkDualDepthPeelingPass::GetShaderStageMTime);
}
