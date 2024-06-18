// JavaScript wrapper for vtkOpenGLRenderPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLRenderPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLRenderPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractMapper.h"
#include "vtkProp.h"
#include "vtkShaderProgram.h"
#include "vtkOpenGLVertexArrayObject.h"
#include "vtkInformationObjectBaseVectorKey.h"
#include "vtkOpenGLRenderPass.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLRenderPass>(vtkOpenGLRenderPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLRenderPass_class) {
  emscripten::class_<vtkOpenGLRenderPass, emscripten::base<vtkRenderPass>>("vtkOpenGLRenderPass")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLRenderPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLRenderPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLRenderPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLRenderPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLRenderPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLRenderPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetShaderParameters", &vtkOpenGLRenderPass::SetShaderParameters, emscripten::allow_raw_pointers())
    .function("GetShaderStageMTime", &vtkOpenGLRenderPass::GetShaderStageMTime)
    .class_function("RenderPasses", &vtkOpenGLRenderPass::RenderPasses, emscripten::allow_raw_pointers())
    .function("SetActiveDrawBuffers", &vtkOpenGLRenderPass::SetActiveDrawBuffers)
    .function("GetActiveDrawBuffers", &vtkOpenGLRenderPass::GetActiveDrawBuffers);
}
