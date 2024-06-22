// JavaScript wrapper for vtkDepthOfFieldPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkDepthOfFieldPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkDepthOfFieldPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkDepthOfFieldPass.h"

template<> void emscripten::internal::raw_destructor<vtkDepthOfFieldPass>(vtkDepthOfFieldPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDepthOfFieldPass_class) {
  emscripten::class_<vtkDepthOfFieldPass, emscripten::base<vtkDepthImageProcessingPass>>("vtkDepthOfFieldPass")
    .smart_ptr<vtkSmartPointer<vtkDepthOfFieldPass>>("vtkSmartPointer<vtkDepthOfFieldPass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDepthOfFieldPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDepthOfFieldPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDepthOfFieldPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDepthOfFieldPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDepthOfFieldPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDepthOfFieldPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDepthOfFieldPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAutomaticFocalDistance", &vtkDepthOfFieldPass::SetAutomaticFocalDistance)
    .function("GetAutomaticFocalDistance", &vtkDepthOfFieldPass::GetAutomaticFocalDistance)
    .function("AutomaticFocalDistanceOn", &vtkDepthOfFieldPass::AutomaticFocalDistanceOn)
    .function("AutomaticFocalDistanceOff", &vtkDepthOfFieldPass::AutomaticFocalDistanceOff)
    .function("ReleaseGraphicsResources", &vtkDepthOfFieldPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
