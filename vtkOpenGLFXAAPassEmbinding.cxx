// JavaScript wrapper for vtkOpenGLFXAAPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLFXAAPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLFXAAPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkFXAAOptions.h"
#include "vtkOpenGLFXAAPass.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLFXAAPass>(vtkOpenGLFXAAPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLFXAAPass_class) {
  emscripten::class_<vtkOpenGLFXAAPass, emscripten::base<vtkImageProcessingPass>>("vtkOpenGLFXAAPass")
    .smart_ptr<vtkSmartPointer<vtkOpenGLFXAAPass>>("vtkSmartPointer<vtkOpenGLFXAAPass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLFXAAPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLFXAAPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLFXAAPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLFXAAPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLFXAAPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLFXAAPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLFXAAPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkOpenGLFXAAPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetFXAAOptions", &vtkOpenGLFXAAPass::GetFXAAOptions, emscripten::allow_raw_pointers())
    .function("SetFXAAOptions", &vtkOpenGLFXAAPass::SetFXAAOptions, emscripten::allow_raw_pointers());
}
