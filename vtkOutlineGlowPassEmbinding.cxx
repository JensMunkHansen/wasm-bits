// JavaScript wrapper for vtkOutlineGlowPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOutlineGlowPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOutlineGlowPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkOutlineGlowPass.h"

template<> void emscripten::internal::raw_destructor<vtkOutlineGlowPass>(vtkOutlineGlowPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOutlineGlowPass_class) {
  emscripten::class_<vtkOutlineGlowPass, emscripten::base<vtkImageProcessingPass>>("vtkOutlineGlowPass")
    .smart_ptr<vtkSmartPointer<vtkOutlineGlowPass>>("vtkSmartPointer<vtkOutlineGlowPass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOutlineGlowPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutlineGlowPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOutlineGlowPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOutlineGlowPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOutlineGlowPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutlineGlowPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOutlineGlowPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkOutlineGlowPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetOutlineIntensity", &vtkOutlineGlowPass::GetOutlineIntensity)
    .function("SetOutlineIntensity", &vtkOutlineGlowPass::SetOutlineIntensity);
}
