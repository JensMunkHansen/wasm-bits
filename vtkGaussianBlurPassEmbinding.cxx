// JavaScript wrapper for vtkGaussianBlurPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkGaussianBlurPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkGaussianBlurPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkGaussianBlurPass.h"

template<> void emscripten::internal::raw_destructor<vtkGaussianBlurPass>(vtkGaussianBlurPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGaussianBlurPass_class) {
  emscripten::class_<vtkGaussianBlurPass, emscripten::base<vtkImageProcessingPass>>("vtkGaussianBlurPass")
    .smart_ptr<vtkSmartPointer<vtkGaussianBlurPass>>("vtkSmartPointer<vtkGaussianBlurPass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGaussianBlurPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGaussianBlurPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGaussianBlurPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGaussianBlurPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGaussianBlurPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGaussianBlurPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGaussianBlurPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkGaussianBlurPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
