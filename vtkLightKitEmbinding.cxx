// JavaScript wrapper for vtkLightKit with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkLightKitEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkLightKit.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkLightKit.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkLightKit_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkLightKit>(vtkLightKit * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLightKit_class) {
  using LightKitType=vtkLightKit::LightKitType;
  using LightKitSubType=vtkLightKit::LightKitSubType;
  emscripten::class_<vtkLightKit, emscripten::base<vtkObject>>("vtkLightKit")
    .smart_ptr<vtkSmartPointer<vtkLightKit>>("vtkSmartPointer<vtkLightKit>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLightKit>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightKit::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLightKit& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLightKit::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLightKit::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightKit::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLightKit& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetKeyLightIntensity", &vtkLightKit::SetKeyLightIntensity)
    .function("GetKeyLightIntensity", &vtkLightKit::GetKeyLightIntensity)
    .function("SetKeyToFillRatio", &vtkLightKit::SetKeyToFillRatio)
    .function("GetKeyToFillRatioMinValue", &vtkLightKit::GetKeyToFillRatioMinValue)
    .function("GetKeyToFillRatioMaxValue", &vtkLightKit::GetKeyToFillRatioMaxValue)
    .function("GetKeyToFillRatio", &vtkLightKit::GetKeyToFillRatio)
    .function("SetKeyToHeadRatio", &vtkLightKit::SetKeyToHeadRatio)
    .function("GetKeyToHeadRatioMinValue", &vtkLightKit::GetKeyToHeadRatioMinValue)
    .function("GetKeyToHeadRatioMaxValue", &vtkLightKit::GetKeyToHeadRatioMaxValue)
    .function("GetKeyToHeadRatio", &vtkLightKit::GetKeyToHeadRatio)
    .function("SetKeyToBackRatio", &vtkLightKit::SetKeyToBackRatio)
    .function("GetKeyToBackRatioMinValue", &vtkLightKit::GetKeyToBackRatioMinValue)
    .function("GetKeyToBackRatioMaxValue", &vtkLightKit::GetKeyToBackRatioMaxValue)
    .function("GetKeyToBackRatio", &vtkLightKit::GetKeyToBackRatio)
    .function("SetKeyLightWarmth", &vtkLightKit::SetKeyLightWarmth)
    .function("GetKeyLightWarmth", &vtkLightKit::GetKeyLightWarmth)
    .function("SetFillLightWarmth", &vtkLightKit::SetFillLightWarmth)
    .function("GetFillLightWarmth", &vtkLightKit::GetFillLightWarmth)
    .function("SetHeadLightWarmth", &vtkLightKit::SetHeadLightWarmth)
    .function("GetHeadLightWarmth", &vtkLightKit::GetHeadLightWarmth)
    .function("SetBackLightWarmth", &vtkLightKit::SetBackLightWarmth)
    .function("GetBackLightWarmth", &vtkLightKit::GetBackLightWarmth)
    .function("MaintainLuminanceOn", &vtkLightKit::MaintainLuminanceOn)
    .function("MaintainLuminanceOff", &vtkLightKit::MaintainLuminanceOff)
    .function("GetMaintainLuminance", &vtkLightKit::GetMaintainLuminance)
    .function("SetMaintainLuminance", &vtkLightKit::SetMaintainLuminance)
    .function("SetKeyLightAngle", emscripten::select_overload<void(vtkLightKit&, double, double)>([](vtkLightKit& self, double arg_0, double arg_1) -> void { return self.SetKeyLightAngle( arg_0, arg_1); }))
    .function("SetKeyLightElevation", &vtkLightKit::SetKeyLightElevation)
    .function("SetKeyLightAzimuth", &vtkLightKit::SetKeyLightAzimuth)
    .function("GetKeyLightElevation", &vtkLightKit::GetKeyLightElevation)
    .function("GetKeyLightAzimuth", &vtkLightKit::GetKeyLightAzimuth)
    .function("SetFillLightAngle", emscripten::select_overload<void(vtkLightKit&, double, double)>([](vtkLightKit& self, double arg_0, double arg_1) -> void { return self.SetFillLightAngle( arg_0, arg_1); }))
    .function("SetFillLightElevation", &vtkLightKit::SetFillLightElevation)
    .function("SetFillLightAzimuth", &vtkLightKit::SetFillLightAzimuth)
    .function("GetFillLightElevation", &vtkLightKit::GetFillLightElevation)
    .function("GetFillLightAzimuth", &vtkLightKit::GetFillLightAzimuth)
    .function("SetBackLightAngle", emscripten::select_overload<void(vtkLightKit&, double, double)>([](vtkLightKit& self, double arg_0, double arg_1) -> void { return self.SetBackLightAngle( arg_0, arg_1); }))
    .function("SetBackLightElevation", &vtkLightKit::SetBackLightElevation)
    .function("SetBackLightAzimuth", &vtkLightKit::SetBackLightAzimuth)
    .function("GetBackLightElevation", &vtkLightKit::GetBackLightElevation)
    .function("GetBackLightAzimuth", &vtkLightKit::GetBackLightAzimuth)
    .function("AddLightsToRenderer", &vtkLightKit::AddLightsToRenderer, emscripten::allow_raw_pointers())
    .function("RemoveLightsFromRenderer", &vtkLightKit::RemoveLightsFromRenderer, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkLightKit::DeepCopy, emscripten::allow_raw_pointers())
    .function("Modified", &vtkLightKit::Modified)
    .function("Update", &vtkLightKit::Update)
    .class_function("GetStringFromType", emscripten::optional_override([]( int arg_0) -> std::string {  return vtkLightKit::GetStringFromType( arg_0);}))
    .class_function("GetStringFromSubType", emscripten::optional_override([]( int arg_0) -> std::string {  return vtkLightKit::GetStringFromSubType( arg_0);}))
    .class_function("GetShortStringFromSubType", emscripten::optional_override([]( int arg_0) -> std::string {  return vtkLightKit::GetShortStringFromSubType( arg_0);}))
    .class_function("GetSubType", &vtkLightKit::GetSubType);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkLightKit_0_2_constants) {
    typedef vtkLightKit::LightKitType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkLightKit_LightKitType_TKeyLight", vtkLightKit::TKeyLight },
      { "vtkLightKit_LightKitType_TFillLight", vtkLightKit::TFillLight },
      { "vtkLightKit_LightKitType_TBackLight", vtkLightKit::TBackLight },
      { "vtkLightKit_LightKitType_THeadLight", vtkLightKit::THeadLight },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkLightKit_1_2_constants) {
    typedef vtkLightKit::LightKitSubType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkLightKit_LightKitSubType_Warmth", vtkLightKit::Warmth },
      { "vtkLightKit_LightKitSubType_Intensity", vtkLightKit::Intensity },
      { "vtkLightKit_LightKitSubType_Elevation", vtkLightKit::Elevation },
      { "vtkLightKit_LightKitSubType_Azimuth", vtkLightKit::Azimuth },
      { "vtkLightKit_LightKitSubType_KFRatio", vtkLightKit::KFRatio },
      { "vtkLightKit_LightKitSubType_KBRatio", vtkLightKit::KBRatio },
      { "vtkLightKit_LightKitSubType_KHRatio", vtkLightKit::KHRatio },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
