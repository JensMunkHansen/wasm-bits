// JavaScript wrapper for vtkImageProcessingPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkImageProcessingPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkImageProcessingPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWindow.h"
#include "vtkRenderPass.h"
#include "vtkImageProcessingPass.h"

template<> void emscripten::internal::raw_destructor<vtkImageProcessingPass>(vtkImageProcessingPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageProcessingPass_class) {
  emscripten::class_<vtkImageProcessingPass, emscripten::base<vtkOpenGLRenderPass>>("vtkImageProcessingPass")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageProcessingPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageProcessingPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageProcessingPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageProcessingPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageProcessingPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageProcessingPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkImageProcessingPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetDelegatePass", &vtkImageProcessingPass::GetDelegatePass, emscripten::allow_raw_pointers())
    .function("SetDelegatePass", &vtkImageProcessingPass::SetDelegatePass, emscripten::allow_raw_pointers());
}
