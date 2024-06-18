// JavaScript wrapper for vtkCoordinateFrameRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCoordinateFrameRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCoordinateFrameRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProperty.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkCoordinateFrameRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCoordinateFrameRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCoordinateFrameRepresentation>(vtkCoordinateFrameRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCoordinateFrameRepresentation_class) {
  using InteractionStateType=vtkCoordinateFrameRepresentation::InteractionStateType;
  emscripten::class_<vtkCoordinateFrameRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkCoordinateFrameRepresentation")
    .smart_ptr<vtkSmartPointer<vtkCoordinateFrameRepresentation>>("vtkSmartPointer<vtkCoordinateFrameRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCoordinateFrameRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCoordinateFrameRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCoordinateFrameRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCoordinateFrameRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCoordinateFrameRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCoordinateFrameRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCoordinateFrameRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOrigin", emscripten::select_overload<void(vtkCoordinateFrameRepresentation&, double, double, double)>([](vtkCoordinateFrameRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkCoordinateFrameRepresentation&, double, double, double)>([](vtkCoordinateFrameRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetNormalToCamera", &vtkCoordinateFrameRepresentation::SetNormalToCamera)
    .function("SetDirection", emscripten::select_overload<void(vtkCoordinateFrameRepresentation&, double, double, double)>([](vtkCoordinateFrameRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDirection( arg_0, arg_1, arg_2); }))
    .function("SetXAxisVector", emscripten::select_overload<void(vtkCoordinateFrameRepresentation&, double, double, double)>([](vtkCoordinateFrameRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetXAxisVector( arg_0, arg_1, arg_2); }))
    .function("SetYAxisVector", emscripten::select_overload<void(vtkCoordinateFrameRepresentation&, double, double, double)>([](vtkCoordinateFrameRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetYAxisVector( arg_0, arg_1, arg_2); }))
    .function("SetZAxisVector", emscripten::select_overload<void(vtkCoordinateFrameRepresentation&, double, double, double)>([](vtkCoordinateFrameRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetZAxisVector( arg_0, arg_1, arg_2); }))
    .function("SetLockNormalToCamera", &vtkCoordinateFrameRepresentation::SetLockNormalToCamera)
    .function("GetLockNormalToCamera", &vtkCoordinateFrameRepresentation::GetLockNormalToCamera)
    .function("LockNormalToCameraOn", &vtkCoordinateFrameRepresentation::LockNormalToCameraOn)
    .function("LockNormalToCameraOff", &vtkCoordinateFrameRepresentation::LockNormalToCameraOff)
    .function("SetXTranslationAxisOn", &vtkCoordinateFrameRepresentation::SetXTranslationAxisOn)
    .function("SetYTranslationAxisOn", &vtkCoordinateFrameRepresentation::SetYTranslationAxisOn)
    .function("SetZTranslationAxisOn", &vtkCoordinateFrameRepresentation::SetZTranslationAxisOn)
    .function("SetTranslationAxisOff", &vtkCoordinateFrameRepresentation::SetTranslationAxisOff)
    .function("IsTranslationConstrained", &vtkCoordinateFrameRepresentation::IsTranslationConstrained)
    .function("UpdatePlacement", &vtkCoordinateFrameRepresentation::UpdatePlacement)
    .function("Reset", &vtkCoordinateFrameRepresentation::Reset)
    .function("ResetAxes", &vtkCoordinateFrameRepresentation::ResetAxes)
    .function("GetOriginProperty", &vtkCoordinateFrameRepresentation::GetOriginProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedOriginProperty", &vtkCoordinateFrameRepresentation::GetSelectedOriginProperty, emscripten::allow_raw_pointers())
    .function("GetXVectorProperty", &vtkCoordinateFrameRepresentation::GetXVectorProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedXVectorProperty", &vtkCoordinateFrameRepresentation::GetSelectedXVectorProperty, emscripten::allow_raw_pointers())
    .function("GetLockedXVectorProperty", &vtkCoordinateFrameRepresentation::GetLockedXVectorProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedLockedXVectorProperty", &vtkCoordinateFrameRepresentation::GetSelectedLockedXVectorProperty, emscripten::allow_raw_pointers())
    .function("GetUnlockedXVectorProperty", &vtkCoordinateFrameRepresentation::GetUnlockedXVectorProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedUnlockedXVectorProperty", &vtkCoordinateFrameRepresentation::GetSelectedUnlockedXVectorProperty, emscripten::allow_raw_pointers())
    .function("GetYVectorProperty", &vtkCoordinateFrameRepresentation::GetYVectorProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedYVectorProperty", &vtkCoordinateFrameRepresentation::GetSelectedYVectorProperty, emscripten::allow_raw_pointers())
    .function("GetLockedYVectorProperty", &vtkCoordinateFrameRepresentation::GetLockedYVectorProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedLockedYVectorProperty", &vtkCoordinateFrameRepresentation::GetSelectedLockedYVectorProperty, emscripten::allow_raw_pointers())
    .function("GetUnlockedYVectorProperty", &vtkCoordinateFrameRepresentation::GetUnlockedYVectorProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedUnlockedYVectorProperty", &vtkCoordinateFrameRepresentation::GetSelectedUnlockedYVectorProperty, emscripten::allow_raw_pointers())
    .function("GetZVectorProperty", &vtkCoordinateFrameRepresentation::GetZVectorProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedZVectorProperty", &vtkCoordinateFrameRepresentation::GetSelectedZVectorProperty, emscripten::allow_raw_pointers())
    .function("GetLockedZVectorProperty", &vtkCoordinateFrameRepresentation::GetLockedZVectorProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedLockedZVectorProperty", &vtkCoordinateFrameRepresentation::GetSelectedLockedZVectorProperty, emscripten::allow_raw_pointers())
    .function("GetUnlockedZVectorProperty", &vtkCoordinateFrameRepresentation::GetUnlockedZVectorProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedUnlockedZVectorProperty", &vtkCoordinateFrameRepresentation::GetSelectedUnlockedZVectorProperty, emscripten::allow_raw_pointers())
    .function("GetPickCameraFocalInfo", &vtkCoordinateFrameRepresentation::GetPickCameraFocalInfo)
    .function("SetPickCameraFocalInfo", &vtkCoordinateFrameRepresentation::SetPickCameraFocalInfo)
    .function("PickCameraFocalInfoOn", &vtkCoordinateFrameRepresentation::PickCameraFocalInfoOn)
    .function("PickCameraFocalInfoOff", &vtkCoordinateFrameRepresentation::PickCameraFocalInfoOff)
    .function("PickOrigin", &vtkCoordinateFrameRepresentation::PickOrigin)
    .function("PickNormal", &vtkCoordinateFrameRepresentation::PickNormal)
    .function("PickDirectionPoint", &vtkCoordinateFrameRepresentation::PickDirectionPoint)
    .function("GetLockedAxis", &vtkCoordinateFrameRepresentation::GetLockedAxis)
    .function("SetLockedAxis", &vtkCoordinateFrameRepresentation::SetLockedAxis)
    .function("ComputeInteractionState", &vtkCoordinateFrameRepresentation::ComputeInteractionState)
    .function("BuildRepresentation", &vtkCoordinateFrameRepresentation::BuildRepresentation)
    .function("GetActors", &vtkCoordinateFrameRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkCoordinateFrameRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkCoordinateFrameRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkCoordinateFrameRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkCoordinateFrameRepresentation::HasTranslucentPolygonalGeometry)
    .function("SetInteractionState", &vtkCoordinateFrameRepresentation::SetInteractionState)
    .function("GetInteractionStateMinValue", &vtkCoordinateFrameRepresentation::GetInteractionStateMinValue)
    .function("GetInteractionStateMaxValue", &vtkCoordinateFrameRepresentation::GetInteractionStateMaxValue)
    .function("SetRepresentationState", &vtkCoordinateFrameRepresentation::SetRepresentationState)
    .function("GetRepresentationState", &vtkCoordinateFrameRepresentation::GetRepresentationState)
    .function("SetLengthFactor", &vtkCoordinateFrameRepresentation::SetLengthFactor)
    .function("GetLengthFactorMinValue", &vtkCoordinateFrameRepresentation::GetLengthFactorMinValue)
    .function("GetLengthFactorMaxValue", &vtkCoordinateFrameRepresentation::GetLengthFactorMaxValue)
    .function("GetLengthFactor", &vtkCoordinateFrameRepresentation::GetLengthFactor);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCoordinateFrameRepresentation_0_2_constants) {
    typedef vtkCoordinateFrameRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[9] = {
      { "vtkCoordinateFrameRepresentation_InteractionStateType_Outside", vtkCoordinateFrameRepresentation::Outside },
      { "vtkCoordinateFrameRepresentation_InteractionStateType_Moving", vtkCoordinateFrameRepresentation::Moving },
      { "vtkCoordinateFrameRepresentation_InteractionStateType_MovingOrigin", vtkCoordinateFrameRepresentation::MovingOrigin },
      { "vtkCoordinateFrameRepresentation_InteractionStateType_RotatingXVector", vtkCoordinateFrameRepresentation::RotatingXVector },
      { "vtkCoordinateFrameRepresentation_InteractionStateType_RotatingYVector", vtkCoordinateFrameRepresentation::RotatingYVector },
      { "vtkCoordinateFrameRepresentation_InteractionStateType_RotatingZVector", vtkCoordinateFrameRepresentation::RotatingZVector },
      { "vtkCoordinateFrameRepresentation_InteractionStateType_ModifyingLockerXVector", vtkCoordinateFrameRepresentation::ModifyingLockerXVector },
      { "vtkCoordinateFrameRepresentation_InteractionStateType_ModifyingLockerYVector", vtkCoordinateFrameRepresentation::ModifyingLockerYVector },
      { "vtkCoordinateFrameRepresentation_InteractionStateType_ModifyingLockerZVector", vtkCoordinateFrameRepresentation::ModifyingLockerZVector },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
