// JavaScript wrapper for vtkInteractorStyleSwitch with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleSwitchEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleSwitch.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkInteractorStyle.h"
#include "vtkRenderer.h"
#include "vtkInteractorStyleSwitch.h"

EMSCRIPTEN_BINDINGS(vtkInteractionStyle_vtkInteractorStyleSwitch_0_1_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "VTKIS_JOYSTICK", 0 },
      { "VTKIS_TRACKBALL", 1 },
      { "VTKIS_CAMERA", 0 },
      { "VTKIS_ACTOR", 1 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkInteractorStyleSwitch>(vtkInteractorStyleSwitch * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleSwitch_class) {
  emscripten::class_<vtkInteractorStyleSwitch, emscripten::base<vtkInteractorStyleSwitchBase>>("vtkInteractorStyleSwitch")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleSwitch>>("vtkSmartPointer<vtkInteractorStyleSwitch>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractorStyleSwitch>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleSwitch::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleSwitch& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleSwitch::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleSwitch::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleSwitch::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleSwitch& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInteractor", &vtkInteractorStyleSwitch::SetInteractor, emscripten::allow_raw_pointers())
    .function("SetAutoAdjustCameraClippingRange", &vtkInteractorStyleSwitch::SetAutoAdjustCameraClippingRange)
    .function("GetCurrentStyle", &vtkInteractorStyleSwitch::GetCurrentStyle, emscripten::allow_raw_pointers())
    .function("SetCurrentStyleToJoystickActor", &vtkInteractorStyleSwitch::SetCurrentStyleToJoystickActor)
    .function("SetCurrentStyleToJoystickCamera", &vtkInteractorStyleSwitch::SetCurrentStyleToJoystickCamera)
    .function("SetCurrentStyleToTrackballActor", &vtkInteractorStyleSwitch::SetCurrentStyleToTrackballActor)
    .function("SetCurrentStyleToTrackballCamera", &vtkInteractorStyleSwitch::SetCurrentStyleToTrackballCamera)
    .function("SetCurrentStyleToMultiTouchCamera", &vtkInteractorStyleSwitch::SetCurrentStyleToMultiTouchCamera)
    .function("OnChar", &vtkInteractorStyleSwitch::OnChar)
    .function("SetDefaultRenderer", &vtkInteractorStyleSwitch::SetDefaultRenderer, emscripten::allow_raw_pointers())
    .function("SetCurrentRenderer", &vtkInteractorStyleSwitch::SetCurrentRenderer, emscripten::allow_raw_pointers());
}
