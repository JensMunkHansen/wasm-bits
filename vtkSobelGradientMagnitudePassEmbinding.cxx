// JavaScript wrapper for vtkSobelGradientMagnitudePass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkSobelGradientMagnitudePassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkSobelGradientMagnitudePass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkSobelGradientMagnitudePass.h"

template<> void emscripten::internal::raw_destructor<vtkSobelGradientMagnitudePass>(vtkSobelGradientMagnitudePass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSobelGradientMagnitudePass_class) {
  emscripten::class_<vtkSobelGradientMagnitudePass, emscripten::base<vtkImageProcessingPass>>("vtkSobelGradientMagnitudePass")
    .smart_ptr<vtkSmartPointer<vtkSobelGradientMagnitudePass>>("vtkSmartPointer<vtkSobelGradientMagnitudePass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSobelGradientMagnitudePass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSobelGradientMagnitudePass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSobelGradientMagnitudePass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSobelGradientMagnitudePass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSobelGradientMagnitudePass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSobelGradientMagnitudePass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSobelGradientMagnitudePass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkSobelGradientMagnitudePass::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
