// JavaScript wrapper for vtkEventData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkEventDataEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkEventData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkEventData.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkEventData_enums) {
  emscripten::enum_<vtkEventDataDevice>("vtkEventDataDevice")
    .value("Unknown", vtkEventDataDevice::Unknown)
    .value("HeadMountedDisplay", vtkEventDataDevice::HeadMountedDisplay)
    .value("RightController", vtkEventDataDevice::RightController)
    .value("LeftController", vtkEventDataDevice::LeftController)
    .value("GenericTracker", vtkEventDataDevice::GenericTracker)
    .value("Any", vtkEventDataDevice::Any)
    .value("NumberOfDevices", vtkEventDataDevice::NumberOfDevices);
  emscripten::enum_<vtkEventDataDeviceInput>("vtkEventDataDeviceInput")
    .value("Unknown", vtkEventDataDeviceInput::Unknown)
    .value("Any", vtkEventDataDeviceInput::Any)
    .value("Trigger", vtkEventDataDeviceInput::Trigger)
    .value("TrackPad", vtkEventDataDeviceInput::TrackPad)
    .value("Joystick", vtkEventDataDeviceInput::Joystick)
    .value("Grip", vtkEventDataDeviceInput::Grip)
    .value("ApplicationMenu", vtkEventDataDeviceInput::ApplicationMenu)
    .value("NumberOfInputs", vtkEventDataDeviceInput::NumberOfInputs);
  emscripten::enum_<vtkEventDataAction>("vtkEventDataAction")
    .value("Unknown", vtkEventDataAction::Unknown)
    .value("Any", vtkEventDataAction::Any)
    .value("Press", vtkEventDataAction::Press)
    .value("Release", vtkEventDataAction::Release)
    .value("Touch", vtkEventDataAction::Touch)
    .value("Untouch", vtkEventDataAction::Untouch)
    .value("NumberOfActions", vtkEventDataAction::NumberOfActions);
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkEventData_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkEventDataNumberOfDevices", (static_cast < int > (vtkEventDataDevice::NumberOfDevices)) },
      { "vtkEventDataNumberOfInputs", (static_cast < int > (vtkEventDataDeviceInput::NumberOfInputs)) },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkEventData>(vtkEventData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEventData_class) {
  emscripten::class_<vtkEventData, emscripten::base<vtkObjectBase>>("vtkEventData")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEventData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEventData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEventData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEventData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEventData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEventData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetType", &vtkEventData::GetType)
    .function("SetType", &vtkEventData::SetType)
    .function("GetAsEventDataForDevice", &vtkEventData::GetAsEventDataForDevice, emscripten::allow_raw_pointers())
    .function("GetAsEventDataDevice3D", &vtkEventData::GetAsEventDataDevice3D, emscripten::allow_raw_pointers());
}
template<> void emscripten::internal::raw_destructor<vtkEventDataForDevice>(vtkEventDataForDevice * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEventDataForDevice_class) {
  emscripten::class_<vtkEventDataForDevice, emscripten::base<vtkEventData>>("vtkEventDataForDevice")
    .smart_ptr<vtkSmartPointer<vtkEventDataForDevice>>("vtkSmartPointer<vtkEventDataForDevice>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEventDataForDevice>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEventDataForDevice::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEventDataForDevice& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEventDataForDevice::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEventDataForDevice::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEventDataForDevice::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEventDataForDevice& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDevice", &vtkEventDataForDevice::GetDevice)
    .function("GetInput", &vtkEventDataForDevice::GetInput)
    .function("GetAction", &vtkEventDataForDevice::GetAction)
    .function("SetDevice", &vtkEventDataForDevice::SetDevice)
    .function("SetInput", &vtkEventDataForDevice::SetInput)
    .function("SetAction", &vtkEventDataForDevice::SetAction)
    .function("DeviceMatches", &vtkEventDataForDevice::DeviceMatches)
    .function("GetAsEventDataForDevice", &vtkEventDataForDevice::GetAsEventDataForDevice, emscripten::allow_raw_pointers());
}
template<> void emscripten::internal::raw_destructor<vtkEventDataDevice3D>(vtkEventDataDevice3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEventDataDevice3D_class) {
  emscripten::class_<vtkEventDataDevice3D, emscripten::base<vtkEventDataForDevice>>("vtkEventDataDevice3D")
    .smart_ptr<vtkSmartPointer<vtkEventDataDevice3D>>("vtkSmartPointer<vtkEventDataDevice3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEventDataDevice3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEventDataDevice3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEventDataDevice3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEventDataDevice3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEventDataDevice3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEventDataDevice3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEventDataDevice3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetAsEventDataDevice3D", &vtkEventDataDevice3D::GetAsEventDataDevice3D, emscripten::allow_raw_pointers())
    .function("SetTrackPadPosition", emscripten::select_overload<void(vtkEventDataDevice3D&, double, double)>([](vtkEventDataDevice3D& self, double arg_0, double arg_1) -> void { return self.SetTrackPadPosition( arg_0, arg_1); }));
}
