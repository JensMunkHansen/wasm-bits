// JavaScript wrapper for vtkFXAAOptions with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkFXAAOptionsEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkFXAAOptions.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFXAAOptions.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkFXAAOptions_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkFXAAOptions>(vtkFXAAOptions * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFXAAOptions_class) {
  using DebugOption=vtkFXAAOptions::DebugOption;
  emscripten::class_<vtkFXAAOptions, emscripten::base<vtkObject>>("vtkFXAAOptions")
    .smart_ptr<vtkSmartPointer<vtkFXAAOptions>>("vtkSmartPointer<vtkFXAAOptions>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFXAAOptions>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFXAAOptions::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFXAAOptions& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFXAAOptions::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFXAAOptions::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFXAAOptions::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFXAAOptions& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRelativeContrastThreshold", &vtkFXAAOptions::SetRelativeContrastThreshold)
    .function("GetRelativeContrastThresholdMinValue", &vtkFXAAOptions::GetRelativeContrastThresholdMinValue)
    .function("GetRelativeContrastThresholdMaxValue", &vtkFXAAOptions::GetRelativeContrastThresholdMaxValue)
    .function("GetRelativeContrastThreshold", &vtkFXAAOptions::GetRelativeContrastThreshold)
    .function("SetHardContrastThreshold", &vtkFXAAOptions::SetHardContrastThreshold)
    .function("GetHardContrastThresholdMinValue", &vtkFXAAOptions::GetHardContrastThresholdMinValue)
    .function("GetHardContrastThresholdMaxValue", &vtkFXAAOptions::GetHardContrastThresholdMaxValue)
    .function("GetHardContrastThreshold", &vtkFXAAOptions::GetHardContrastThreshold)
    .function("SetSubpixelBlendLimit", &vtkFXAAOptions::SetSubpixelBlendLimit)
    .function("GetSubpixelBlendLimitMinValue", &vtkFXAAOptions::GetSubpixelBlendLimitMinValue)
    .function("GetSubpixelBlendLimitMaxValue", &vtkFXAAOptions::GetSubpixelBlendLimitMaxValue)
    .function("GetSubpixelBlendLimit", &vtkFXAAOptions::GetSubpixelBlendLimit)
    .function("SetSubpixelContrastThreshold", &vtkFXAAOptions::SetSubpixelContrastThreshold)
    .function("GetSubpixelContrastThresholdMinValue", &vtkFXAAOptions::GetSubpixelContrastThresholdMinValue)
    .function("GetSubpixelContrastThresholdMaxValue", &vtkFXAAOptions::GetSubpixelContrastThresholdMaxValue)
    .function("GetSubpixelContrastThreshold", &vtkFXAAOptions::GetSubpixelContrastThreshold)
    .function("SetUseHighQualityEndpoints", &vtkFXAAOptions::SetUseHighQualityEndpoints)
    .function("GetUseHighQualityEndpoints", &vtkFXAAOptions::GetUseHighQualityEndpoints)
    .function("UseHighQualityEndpointsOn", &vtkFXAAOptions::UseHighQualityEndpointsOn)
    .function("UseHighQualityEndpointsOff", &vtkFXAAOptions::UseHighQualityEndpointsOff)
    .function("SetEndpointSearchIterations", &vtkFXAAOptions::SetEndpointSearchIterations)
    .function("GetEndpointSearchIterationsMinValue", &vtkFXAAOptions::GetEndpointSearchIterationsMinValue)
    .function("GetEndpointSearchIterationsMaxValue", &vtkFXAAOptions::GetEndpointSearchIterationsMaxValue)
    .function("GetEndpointSearchIterations", &vtkFXAAOptions::GetEndpointSearchIterations)
    .function("SetDebugOptionValue", &vtkFXAAOptions::SetDebugOptionValue)
    .function("GetDebugOptionValue", &vtkFXAAOptions::GetDebugOptionValue);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkFXAAOptions_0_2_constants) {
    typedef vtkFXAAOptions::DebugOption cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[8] = {
      { "vtkFXAAOptions_DebugOption_FXAA_NO_DEBUG", vtkFXAAOptions::FXAA_NO_DEBUG },
      { "vtkFXAAOptions_DebugOption_FXAA_DEBUG_SUBPIXEL_ALIASING", vtkFXAAOptions::FXAA_DEBUG_SUBPIXEL_ALIASING },
      { "vtkFXAAOptions_DebugOption_FXAA_DEBUG_EDGE_DIRECTION", vtkFXAAOptions::FXAA_DEBUG_EDGE_DIRECTION },
      { "vtkFXAAOptions_DebugOption_FXAA_DEBUG_EDGE_NUM_STEPS", vtkFXAAOptions::FXAA_DEBUG_EDGE_NUM_STEPS },
      { "vtkFXAAOptions_DebugOption_FXAA_DEBUG_EDGE_DISTANCE", vtkFXAAOptions::FXAA_DEBUG_EDGE_DISTANCE },
      { "vtkFXAAOptions_DebugOption_FXAA_DEBUG_EDGE_SAMPLE_OFFSET", vtkFXAAOptions::FXAA_DEBUG_EDGE_SAMPLE_OFFSET },
      { "vtkFXAAOptions_DebugOption_FXAA_DEBUG_ONLY_SUBPIX_AA", vtkFXAAOptions::FXAA_DEBUG_ONLY_SUBPIX_AA },
      { "vtkFXAAOptions_DebugOption_FXAA_DEBUG_ONLY_EDGE_AA", vtkFXAAOptions::FXAA_DEBUG_ONLY_EDGE_AA },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
