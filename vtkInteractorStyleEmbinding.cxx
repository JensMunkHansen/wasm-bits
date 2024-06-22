// JavaScript wrapper for vtkInteractorStyle with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkInteractorStyleEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkInteractorStyle.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkEventData.h"
#include "vtkStringArray.h"
#include "vtkProp.h"
#include "vtkActor2D.h"
#include "vtkProp3D.h"
#include "vtkTDxInteractorStyle.h"
#include "vtkInteractorStyle.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkInteractorStyle_0_1_constants) {
  const struct { const char *name; int value; }
    constants[26] = {
      { "VTKIS_START", 0 },
      { "VTKIS_NONE", 0 },
      { "VTKIS_ROTATE", 1 },
      { "VTKIS_PAN", 2 },
      { "VTKIS_SPIN", 3 },
      { "VTKIS_DOLLY", 4 },
      { "VTKIS_ZOOM", 5 },
      { "VTKIS_USCALE", 6 },
      { "VTKIS_TIMER", 7 },
      { "VTKIS_FORWARDFLY", 8 },
      { "VTKIS_REVERSEFLY", 9 },
      { "VTKIS_TWO_POINTER", 10 },
      { "VTKIS_CLIP", 11 },
      { "VTKIS_PICK", 12 },
      { "VTKIS_LOAD_CAMERA_POSE", 13 },
      { "VTKIS_POSITION_PROP", 14 },
      { "VTKIS_EXIT", 15 },
      { "VTKIS_TOGGLE_DRAW_CONTROLS", 16 },
      { "VTKIS_MENU", 17 },
      { "VTKIS_GESTURE", 18 },
      { "VTKIS_ENV_ROTATE", 19 },
      { "VTKIS_GROUNDMOVEMENT", 20 },
      { "VTKIS_ELEVATION", 21 },
      { "VTKIS_TELEPORTATION", 22 },
      { "VTKIS_ANIM_OFF", 0 },
      { "VTKIS_ANIM_ON", 1 },
  };
  for (int c = 0; c < 26; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkInteractorStyle>(vtkInteractorStyle * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyle_class) {
  emscripten::class_<vtkInteractorStyle, emscripten::base<vtkInteractorObserver>>("vtkInteractorStyle")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyle>>("vtkSmartPointer<vtkInteractorStyle>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkInteractorStyle>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyle::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyle& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyle::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyle::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyle::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyle& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInteractor", &vtkInteractorStyle::SetInteractor, emscripten::allow_raw_pointers())
    .function("SetEnabled", &vtkInteractorStyle::SetEnabled)
    .function("SetAutoAdjustCameraClippingRange", &vtkInteractorStyle::SetAutoAdjustCameraClippingRange)
    .function("GetAutoAdjustCameraClippingRangeMinValue", &vtkInteractorStyle::GetAutoAdjustCameraClippingRangeMinValue)
    .function("GetAutoAdjustCameraClippingRangeMaxValue", &vtkInteractorStyle::GetAutoAdjustCameraClippingRangeMaxValue)
    .function("GetAutoAdjustCameraClippingRange", &vtkInteractorStyle::GetAutoAdjustCameraClippingRange)
    .function("AutoAdjustCameraClippingRangeOn", &vtkInteractorStyle::AutoAdjustCameraClippingRangeOn)
    .function("AutoAdjustCameraClippingRangeOff", &vtkInteractorStyle::AutoAdjustCameraClippingRangeOff)
    .function("FindPokedRenderer", &vtkInteractorStyle::FindPokedRenderer)
    .function("GetState", &vtkInteractorStyle::GetState)
    .function("GetUseTimers", &vtkInteractorStyle::GetUseTimers)
    .function("SetUseTimers", &vtkInteractorStyle::SetUseTimers)
    .function("UseTimersOn", &vtkInteractorStyle::UseTimersOn)
    .function("UseTimersOff", &vtkInteractorStyle::UseTimersOff)
    .function("SetTimerDuration", &vtkInteractorStyle::SetTimerDuration)
    .function("GetTimerDurationMinValue", &vtkInteractorStyle::GetTimerDurationMinValue)
    .function("GetTimerDurationMaxValue", &vtkInteractorStyle::GetTimerDurationMaxValue)
    .function("GetTimerDuration", &vtkInteractorStyle::GetTimerDuration)
    .function("SetHandleObservers", &vtkInteractorStyle::SetHandleObservers)
    .function("GetHandleObservers", &vtkInteractorStyle::GetHandleObservers)
    .function("HandleObserversOn", &vtkInteractorStyle::HandleObserversOn)
    .function("HandleObserversOff", &vtkInteractorStyle::HandleObserversOff)
    .function("OnMouseMove", &vtkInteractorStyle::OnMouseMove)
    .function("OnLeftButtonDown", &vtkInteractorStyle::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkInteractorStyle::OnLeftButtonUp)
    .function("OnMiddleButtonDown", &vtkInteractorStyle::OnMiddleButtonDown)
    .function("OnMiddleButtonUp", &vtkInteractorStyle::OnMiddleButtonUp)
    .function("OnRightButtonDown", &vtkInteractorStyle::OnRightButtonDown)
    .function("OnRightButtonUp", &vtkInteractorStyle::OnRightButtonUp)
    .function("OnLeftButtonDoubleClick", &vtkInteractorStyle::OnLeftButtonDoubleClick)
    .function("OnMiddleButtonDoubleClick", &vtkInteractorStyle::OnMiddleButtonDoubleClick)
    .function("OnRightButtonDoubleClick", &vtkInteractorStyle::OnRightButtonDoubleClick)
    .function("OnMouseWheelForward", &vtkInteractorStyle::OnMouseWheelForward)
    .function("OnMouseWheelBackward", &vtkInteractorStyle::OnMouseWheelBackward)
    .function("OnMouseWheelLeft", &vtkInteractorStyle::OnMouseWheelLeft)
    .function("OnMouseWheelRight", &vtkInteractorStyle::OnMouseWheelRight)
    .function("OnFourthButtonDown", &vtkInteractorStyle::OnFourthButtonDown)
    .function("OnFourthButtonUp", &vtkInteractorStyle::OnFourthButtonUp)
    .function("OnFifthButtonDown", &vtkInteractorStyle::OnFifthButtonDown)
    .function("OnFifthButtonUp", &vtkInteractorStyle::OnFifthButtonUp)
    .function("OnMove3D", &vtkInteractorStyle::OnMove3D, emscripten::allow_raw_pointers())
    .function("OnButton3D", &vtkInteractorStyle::OnButton3D, emscripten::allow_raw_pointers())
    .function("OnPick3D", &vtkInteractorStyle::OnPick3D, emscripten::allow_raw_pointers())
    .function("OnClip3D", &vtkInteractorStyle::OnClip3D, emscripten::allow_raw_pointers())
    .function("OnSelect3D", &vtkInteractorStyle::OnSelect3D, emscripten::allow_raw_pointers())
    .function("OnMenu3D", &vtkInteractorStyle::OnMenu3D, emscripten::allow_raw_pointers())
    .function("OnNextPose3D", &vtkInteractorStyle::OnNextPose3D, emscripten::allow_raw_pointers())
    .function("OnPositionProp3D", &vtkInteractorStyle::OnPositionProp3D, emscripten::allow_raw_pointers())
    .function("OnViewerMovement3D", &vtkInteractorStyle::OnViewerMovement3D, emscripten::allow_raw_pointers())
    .function("OnElevation3D", &vtkInteractorStyle::OnElevation3D, emscripten::allow_raw_pointers())
    .function("OnChar", &vtkInteractorStyle::OnChar)
    .function("OnKeyDown", &vtkInteractorStyle::OnKeyDown)
    .function("OnKeyUp", &vtkInteractorStyle::OnKeyUp)
    .function("OnKeyPress", &vtkInteractorStyle::OnKeyPress)
    .function("OnKeyRelease", &vtkInteractorStyle::OnKeyRelease)
    .function("OnExpose", &vtkInteractorStyle::OnExpose)
    .function("OnConfigure", &vtkInteractorStyle::OnConfigure)
    .function("OnEnter", &vtkInteractorStyle::OnEnter)
    .function("OnLeave", &vtkInteractorStyle::OnLeave)
    .function("OnTimer", &vtkInteractorStyle::OnTimer)
    .function("Rotate", &vtkInteractorStyle::Rotate)
    .function("Spin", &vtkInteractorStyle::Spin)
    .function("Pan", &vtkInteractorStyle::Pan)
    .function("Dolly", &vtkInteractorStyle::Dolly)
    .function("Zoom", &vtkInteractorStyle::Zoom)
    .function("UniformScale", &vtkInteractorStyle::UniformScale)
    .function("EnvironmentRotate", &vtkInteractorStyle::EnvironmentRotate)
    .function("OnStartSwipe", &vtkInteractorStyle::OnStartSwipe)
    .function("OnSwipe", &vtkInteractorStyle::OnSwipe)
    .function("OnEndSwipe", &vtkInteractorStyle::OnEndSwipe)
    .function("OnStartPinch", &vtkInteractorStyle::OnStartPinch)
    .function("OnPinch", &vtkInteractorStyle::OnPinch)
    .function("OnEndPinch", &vtkInteractorStyle::OnEndPinch)
    .function("OnStartRotate", &vtkInteractorStyle::OnStartRotate)
    .function("OnRotate", &vtkInteractorStyle::OnRotate)
    .function("OnEndRotate", &vtkInteractorStyle::OnEndRotate)
    .function("OnStartPan", &vtkInteractorStyle::OnStartPan)
    .function("OnPan", &vtkInteractorStyle::OnPan)
    .function("OnEndPan", &vtkInteractorStyle::OnEndPan)
    .function("OnTap", &vtkInteractorStyle::OnTap)
    .function("OnLongTap", &vtkInteractorStyle::OnLongTap)
    .function("StartState", &vtkInteractorStyle::StartState)
    .function("StopState", &vtkInteractorStyle::StopState)
    .function("StartAnimate", &vtkInteractorStyle::StartAnimate)
    .function("StopAnimate", &vtkInteractorStyle::StopAnimate)
    .function("StartRotate", &vtkInteractorStyle::StartRotate)
    .function("EndRotate", &vtkInteractorStyle::EndRotate)
    .function("StartZoom", &vtkInteractorStyle::StartZoom)
    .function("EndZoom", &vtkInteractorStyle::EndZoom)
    .function("StartPan", &vtkInteractorStyle::StartPan)
    .function("EndPan", &vtkInteractorStyle::EndPan)
    .function("StartSpin", &vtkInteractorStyle::StartSpin)
    .function("EndSpin", &vtkInteractorStyle::EndSpin)
    .function("StartDolly", &vtkInteractorStyle::StartDolly)
    .function("EndDolly", &vtkInteractorStyle::EndDolly)
    .function("StartUniformScale", &vtkInteractorStyle::StartUniformScale)
    .function("EndUniformScale", &vtkInteractorStyle::EndUniformScale)
    .function("StartTimer", &vtkInteractorStyle::StartTimer)
    .function("EndTimer", &vtkInteractorStyle::EndTimer)
    .function("StartTwoPointer", &vtkInteractorStyle::StartTwoPointer)
    .function("EndTwoPointer", &vtkInteractorStyle::EndTwoPointer)
    .function("StartGesture", &vtkInteractorStyle::StartGesture)
    .function("EndGesture", &vtkInteractorStyle::EndGesture)
    .function("StartEnvRotate", &vtkInteractorStyle::StartEnvRotate)
    .function("EndEnvRotate", &vtkInteractorStyle::EndEnvRotate)
    .function("OnDropLocation", emscripten::optional_override([](vtkInteractorStyle& self, std::uintptr_t arg_0) -> void {  return self.OnDropLocation(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("OnDropFiles", &vtkInteractorStyle::OnDropFiles, emscripten::allow_raw_pointers())
    .function("HighlightProp", &vtkInteractorStyle::HighlightProp, emscripten::allow_raw_pointers())
    .function("HighlightActor2D", &vtkInteractorStyle::HighlightActor2D, emscripten::allow_raw_pointers())
    .function("HighlightProp3D", &vtkInteractorStyle::HighlightProp3D, emscripten::allow_raw_pointers())
    .function("SetPickColor", emscripten::select_overload<void(vtkInteractorStyle&, double, double, double)>([](vtkInteractorStyle& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPickColor( arg_0, arg_1, arg_2); }))
    .function("SetMouseWheelMotionFactor", &vtkInteractorStyle::SetMouseWheelMotionFactor)
    .function("GetMouseWheelMotionFactor", &vtkInteractorStyle::GetMouseWheelMotionFactor)
    .function("GetTDxStyle", &vtkInteractorStyle::GetTDxStyle, emscripten::allow_raw_pointers())
    .function("SetTDxStyle", &vtkInteractorStyle::SetTDxStyle, emscripten::allow_raw_pointers())
    .function("DelegateTDxEvent", emscripten::optional_override([](vtkInteractorStyle& self, unsigned long arg_0, std::uintptr_t arg_1) -> void {  return self.DelegateTDxEvent( arg_0,reinterpret_cast<void*>(arg_1));}));
}
