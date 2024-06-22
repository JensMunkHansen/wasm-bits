// JavaScript wrapper for vtkLight with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkLightEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkLight.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkMatrix4x4.h"
#include "vtkInformation.h"
#include "vtkLight.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkLight_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_LIGHT_TYPE_HEADLIGHT", 1 },
      { "VTK_LIGHT_TYPE_CAMERA_LIGHT", 2 },
      { "VTK_LIGHT_TYPE_SCENE_LIGHT", 3 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkLight>(vtkLight * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLight_class) {
  emscripten::class_<vtkLight, emscripten::base<vtkObject>>("vtkLight")
    .smart_ptr<vtkSmartPointer<vtkLight>>("vtkSmartPointer<vtkLight>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLight>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLight::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLight& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLight::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLight::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLight::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLight& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ShallowClone", &vtkLight::ShallowClone, emscripten::allow_raw_pointers())
    .function("Render", &vtkLight::Render, emscripten::allow_raw_pointers())
    .function("SetAmbientColor", emscripten::select_overload<void(vtkLight&, double, double, double)>([](vtkLight& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAmbientColor( arg_0, arg_1, arg_2); }))
    .function("SetDiffuseColor", emscripten::select_overload<void(vtkLight&, double, double, double)>([](vtkLight& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDiffuseColor( arg_0, arg_1, arg_2); }))
    .function("SetSpecularColor", emscripten::select_overload<void(vtkLight&, double, double, double)>([](vtkLight& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetSpecularColor( arg_0, arg_1, arg_2); }))
    .function("SetColor", emscripten::select_overload<void(vtkLight&, double, double, double)>([](vtkLight& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetColor( arg_0, arg_1, arg_2); }))
    .function("SetPosition", emscripten::select_overload<void(vtkLight&, double, double, double)>([](vtkLight& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPosition( arg_0, arg_1, arg_2); }))
    .function("SetPosition", emscripten::select_overload<void(vtkLight&, std::uintptr_t)>([](vtkLight& self, std::uintptr_t arg_0) -> void { return self.SetPosition(reinterpret_cast<float*>(arg_0 * sizeof(float))); }))
    .function("SetFocalPoint", emscripten::select_overload<void(vtkLight&, double, double, double)>([](vtkLight& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetFocalPoint( arg_0, arg_1, arg_2); }))
    .function("SetFocalPoint", emscripten::select_overload<void(vtkLight&, std::uintptr_t)>([](vtkLight& self, std::uintptr_t arg_0) -> void { return self.SetFocalPoint(reinterpret_cast<float*>(arg_0 * sizeof(float))); }))
    .function("SetIntensity", &vtkLight::SetIntensity)
    .function("GetIntensity", &vtkLight::GetIntensity)
    .function("SetSwitch", &vtkLight::SetSwitch)
    .function("GetSwitch", &vtkLight::GetSwitch)
    .function("SwitchOn", &vtkLight::SwitchOn)
    .function("SwitchOff", &vtkLight::SwitchOff)
    .function("SetPositional", &vtkLight::SetPositional)
    .function("GetPositional", &vtkLight::GetPositional)
    .function("PositionalOn", &vtkLight::PositionalOn)
    .function("PositionalOff", &vtkLight::PositionalOff)
    .function("SetExponent", &vtkLight::SetExponent)
    .function("GetExponentMinValue", &vtkLight::GetExponentMinValue)
    .function("GetExponentMaxValue", &vtkLight::GetExponentMaxValue)
    .function("GetExponent", &vtkLight::GetExponent)
    .function("SetConeAngle", &vtkLight::SetConeAngle)
    .function("GetConeAngle", &vtkLight::GetConeAngle)
    .function("SetAttenuationValues", emscripten::select_overload<void(vtkLight&, double, double, double)>([](vtkLight& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAttenuationValues( arg_0, arg_1, arg_2); }))
    .function("SetTransformMatrix", &vtkLight::SetTransformMatrix, emscripten::allow_raw_pointers())
    .function("GetTransformMatrix", &vtkLight::GetTransformMatrix, emscripten::allow_raw_pointers())
    .function("SetDirectionAngle", emscripten::select_overload<void(vtkLight&, double, double)>([](vtkLight& self, double arg_0, double arg_1) -> void { return self.SetDirectionAngle( arg_0, arg_1); }))
    .function("DeepCopy", &vtkLight::DeepCopy, emscripten::allow_raw_pointers())
    .function("SetLightType", &vtkLight::SetLightType)
    .function("GetLightType", &vtkLight::GetLightType)
    .function("SetLightTypeToHeadlight", &vtkLight::SetLightTypeToHeadlight)
    .function("SetLightTypeToSceneLight", &vtkLight::SetLightTypeToSceneLight)
    .function("SetLightTypeToCameraLight", &vtkLight::SetLightTypeToCameraLight)
    .function("LightTypeIsHeadlight", &vtkLight::LightTypeIsHeadlight)
    .function("LightTypeIsSceneLight", &vtkLight::LightTypeIsSceneLight)
    .function("LightTypeIsCameraLight", &vtkLight::LightTypeIsCameraLight)
    .function("SetShadowAttenuation", &vtkLight::SetShadowAttenuation)
    .function("GetShadowAttenuation", &vtkLight::GetShadowAttenuation)
    .function("GetInformation", &vtkLight::GetInformation, emscripten::allow_raw_pointers())
    .function("SetInformation", &vtkLight::SetInformation, emscripten::allow_raw_pointers());
}
