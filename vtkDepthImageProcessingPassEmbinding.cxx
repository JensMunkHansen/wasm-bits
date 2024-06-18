// JavaScript wrapper for vtkDepthImageProcessingPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkDepthImageProcessingPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkDepthImageProcessingPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDepthImageProcessingPass.h"

template<> void emscripten::internal::raw_destructor<vtkDepthImageProcessingPass>(vtkDepthImageProcessingPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDepthImageProcessingPass_class) {
  emscripten::class_<vtkDepthImageProcessingPass, emscripten::base<vtkImageProcessingPass>>("vtkDepthImageProcessingPass")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDepthImageProcessingPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDepthImageProcessingPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDepthImageProcessingPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDepthImageProcessingPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDepthImageProcessingPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDepthImageProcessingPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
