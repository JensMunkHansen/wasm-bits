// JavaScript wrapper for vtkPanoramicProjectionPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkPanoramicProjectionPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkPanoramicProjectionPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkPanoramicProjectionPass.h"

template<> void emscripten::internal::raw_destructor<vtkPanoramicProjectionPass>(vtkPanoramicProjectionPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPanoramicProjectionPass_class) {
  emscripten::class_<vtkPanoramicProjectionPass, emscripten::base<vtkImageProcessingPass>>("vtkPanoramicProjectionPass")
    .smart_ptr<vtkSmartPointer<vtkPanoramicProjectionPass>>("vtkSmartPointer<vtkPanoramicProjectionPass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPanoramicProjectionPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPanoramicProjectionPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPanoramicProjectionPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPanoramicProjectionPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPanoramicProjectionPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPanoramicProjectionPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPanoramicProjectionPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkPanoramicProjectionPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetCubeResolution", &vtkPanoramicProjectionPass::GetCubeResolution)
    .function("SetCubeResolution", &vtkPanoramicProjectionPass::SetCubeResolution)
    .function("GetProjectionType", &vtkPanoramicProjectionPass::GetProjectionType)
    .function("SetProjectionType", &vtkPanoramicProjectionPass::SetProjectionType)
    .function("GetProjectionTypeMinValue", &vtkPanoramicProjectionPass::GetProjectionTypeMinValue)
    .function("GetProjectionTypeMaxValue", &vtkPanoramicProjectionPass::GetProjectionTypeMaxValue)
    .function("SetProjectionTypeToEquirectangular", &vtkPanoramicProjectionPass::SetProjectionTypeToEquirectangular)
    .function("SetProjectionTypeToAzimuthal", &vtkPanoramicProjectionPass::SetProjectionTypeToAzimuthal)
    .function("GetAngle", &vtkPanoramicProjectionPass::GetAngle)
    .function("SetAngle", &vtkPanoramicProjectionPass::SetAngle)
    .function("GetAngleMinValue", &vtkPanoramicProjectionPass::GetAngleMinValue)
    .function("GetAngleMaxValue", &vtkPanoramicProjectionPass::GetAngleMaxValue)
    .function("GetInterpolate", &vtkPanoramicProjectionPass::GetInterpolate)
    .function("SetInterpolate", &vtkPanoramicProjectionPass::SetInterpolate)
    .function("InterpolateOn", &vtkPanoramicProjectionPass::InterpolateOn)
    .function("InterpolateOff", &vtkPanoramicProjectionPass::InterpolateOff);
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkPanoramicProjectionPass_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkPanoramicProjectionPass_Equirectangular", vtkPanoramicProjectionPass::Equirectangular },
      { "vtkPanoramicProjectionPass_Azimuthal", vtkPanoramicProjectionPass::Azimuthal },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
