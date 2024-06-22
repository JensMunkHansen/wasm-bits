// JavaScript wrapper for vtkDisplaySizedImplicitPlaneRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkDisplaySizedImplicitPlaneRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkDisplaySizedImplicitPlaneRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkPolyDataAlgorithm.h"
#include "vtkPlane.h"
#include "vtkProperty.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkAbstractWidget.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkDisplaySizedImplicitPlaneRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkDisplaySizedImplicitPlaneRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkDisplaySizedImplicitPlaneRepresentation>(vtkDisplaySizedImplicitPlaneRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDisplaySizedImplicitPlaneRepresentation_class) {
  using InteractionStateType=vtkDisplaySizedImplicitPlaneRepresentation::InteractionStateType;
  emscripten::class_<vtkDisplaySizedImplicitPlaneRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkDisplaySizedImplicitPlaneRepresentation")
    .smart_ptr<vtkSmartPointer<vtkDisplaySizedImplicitPlaneRepresentation>>("vtkSmartPointer<vtkDisplaySizedImplicitPlaneRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDisplaySizedImplicitPlaneRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDisplaySizedImplicitPlaneRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDisplaySizedImplicitPlaneRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDisplaySizedImplicitPlaneRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDisplaySizedImplicitPlaneRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDisplaySizedImplicitPlaneRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDisplaySizedImplicitPlaneRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOrigin", emscripten::select_overload<void(vtkDisplaySizedImplicitPlaneRepresentation&, double, double, double)>([](vtkDisplaySizedImplicitPlaneRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkDisplaySizedImplicitPlaneRepresentation&, double, double, double)>([](vtkDisplaySizedImplicitPlaneRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetNormalToCamera", &vtkDisplaySizedImplicitPlaneRepresentation::SetNormalToCamera)
    .function("SetNormalToXAxis", &vtkDisplaySizedImplicitPlaneRepresentation::SetNormalToXAxis)
    .function("GetNormalToXAxis", &vtkDisplaySizedImplicitPlaneRepresentation::GetNormalToXAxis)
    .function("NormalToXAxisOn", &vtkDisplaySizedImplicitPlaneRepresentation::NormalToXAxisOn)
    .function("NormalToXAxisOff", &vtkDisplaySizedImplicitPlaneRepresentation::NormalToXAxisOff)
    .function("SetNormalToYAxis", &vtkDisplaySizedImplicitPlaneRepresentation::SetNormalToYAxis)
    .function("GetNormalToYAxis", &vtkDisplaySizedImplicitPlaneRepresentation::GetNormalToYAxis)
    .function("NormalToYAxisOn", &vtkDisplaySizedImplicitPlaneRepresentation::NormalToYAxisOn)
    .function("NormalToYAxisOff", &vtkDisplaySizedImplicitPlaneRepresentation::NormalToYAxisOff)
    .function("SetNormalToZAxis", &vtkDisplaySizedImplicitPlaneRepresentation::SetNormalToZAxis)
    .function("GetNormalToZAxis", &vtkDisplaySizedImplicitPlaneRepresentation::GetNormalToZAxis)
    .function("NormalToZAxisOn", &vtkDisplaySizedImplicitPlaneRepresentation::NormalToZAxisOn)
    .function("NormalToZAxisOff", &vtkDisplaySizedImplicitPlaneRepresentation::NormalToZAxisOff)
    .function("SetLockNormalToCamera", &vtkDisplaySizedImplicitPlaneRepresentation::SetLockNormalToCamera)
    .function("GetLockNormalToCamera", &vtkDisplaySizedImplicitPlaneRepresentation::GetLockNormalToCamera)
    .function("LockNormalToCameraOn", &vtkDisplaySizedImplicitPlaneRepresentation::LockNormalToCameraOn)
    .function("LockNormalToCameraOff", &vtkDisplaySizedImplicitPlaneRepresentation::LockNormalToCameraOff)
    .function("SetRadiusMultiplier", &vtkDisplaySizedImplicitPlaneRepresentation::SetRadiusMultiplier)
    .function("GetRadiusMultiplierMinValue", &vtkDisplaySizedImplicitPlaneRepresentation::GetRadiusMultiplierMinValue)
    .function("GetRadiusMultiplierMaxValue", &vtkDisplaySizedImplicitPlaneRepresentation::GetRadiusMultiplierMaxValue)
    .function("GetRadiusMultiplier", &vtkDisplaySizedImplicitPlaneRepresentation::GetRadiusMultiplier)
    .function("SetDrawPlane", &vtkDisplaySizedImplicitPlaneRepresentation::SetDrawPlane)
    .function("GetDrawPlane", &vtkDisplaySizedImplicitPlaneRepresentation::GetDrawPlane)
    .function("DrawPlaneOn", &vtkDisplaySizedImplicitPlaneRepresentation::DrawPlaneOn)
    .function("DrawPlaneOff", &vtkDisplaySizedImplicitPlaneRepresentation::DrawPlaneOff)
    .function("SetDrawOutline", &vtkDisplaySizedImplicitPlaneRepresentation::SetDrawOutline)
    .function("GetDrawOutline", &vtkDisplaySizedImplicitPlaneRepresentation::GetDrawOutline)
    .function("DrawOutlineOn", &vtkDisplaySizedImplicitPlaneRepresentation::DrawOutlineOn)
    .function("DrawOutlineOff", &vtkDisplaySizedImplicitPlaneRepresentation::DrawOutlineOff)
    .function("SetDrawIntersectionEdges", &vtkDisplaySizedImplicitPlaneRepresentation::SetDrawIntersectionEdges)
    .function("GetDrawIntersectionEdges", &vtkDisplaySizedImplicitPlaneRepresentation::GetDrawIntersectionEdges)
    .function("DrawIntersectionEdgesOn", &vtkDisplaySizedImplicitPlaneRepresentation::DrawIntersectionEdgesOn)
    .function("DrawIntersectionEdgesOff", &vtkDisplaySizedImplicitPlaneRepresentation::DrawIntersectionEdgesOff)
    .function("SetOutlineTranslation", &vtkDisplaySizedImplicitPlaneRepresentation::SetOutlineTranslation)
    .function("GetOutlineTranslation", &vtkDisplaySizedImplicitPlaneRepresentation::GetOutlineTranslation)
    .function("OutlineTranslationOn", &vtkDisplaySizedImplicitPlaneRepresentation::OutlineTranslationOn)
    .function("OutlineTranslationOff", &vtkDisplaySizedImplicitPlaneRepresentation::OutlineTranslationOff)
    .function("SetOutsideBounds", &vtkDisplaySizedImplicitPlaneRepresentation::SetOutsideBounds)
    .function("GetOutsideBounds", &vtkDisplaySizedImplicitPlaneRepresentation::GetOutsideBounds)
    .function("OutsideBoundsOn", &vtkDisplaySizedImplicitPlaneRepresentation::OutsideBoundsOn)
    .function("OutsideBoundsOff", &vtkDisplaySizedImplicitPlaneRepresentation::OutsideBoundsOff)
    .function("SetXTranslationAxisOn", &vtkDisplaySizedImplicitPlaneRepresentation::SetXTranslationAxisOn)
    .function("SetYTranslationAxisOn", &vtkDisplaySizedImplicitPlaneRepresentation::SetYTranslationAxisOn)
    .function("SetZTranslationAxisOn", &vtkDisplaySizedImplicitPlaneRepresentation::SetZTranslationAxisOn)
    .function("SetTranslationAxisOff", &vtkDisplaySizedImplicitPlaneRepresentation::SetTranslationAxisOff)
    .function("IsTranslationConstrained", &vtkDisplaySizedImplicitPlaneRepresentation::IsTranslationConstrained)
    .function("SetWidgetBounds", emscripten::select_overload<void(vtkDisplaySizedImplicitPlaneRepresentation&, double, double, double, double, double, double)>([](vtkDisplaySizedImplicitPlaneRepresentation& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetWidgetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetConstrainToWidgetBounds", &vtkDisplaySizedImplicitPlaneRepresentation::SetConstrainToWidgetBounds)
    .function("GetConstrainToWidgetBounds", &vtkDisplaySizedImplicitPlaneRepresentation::GetConstrainToWidgetBounds)
    .function("ConstrainToWidgetBoundsOn", &vtkDisplaySizedImplicitPlaneRepresentation::ConstrainToWidgetBoundsOn)
    .function("ConstrainToWidgetBoundsOff", &vtkDisplaySizedImplicitPlaneRepresentation::ConstrainToWidgetBoundsOff)
    .function("SetConstrainMaximumSizeToWidgetBounds", &vtkDisplaySizedImplicitPlaneRepresentation::SetConstrainMaximumSizeToWidgetBounds)
    .function("GetConstrainMaximumSizeToWidgetBounds", &vtkDisplaySizedImplicitPlaneRepresentation::GetConstrainMaximumSizeToWidgetBounds)
    .function("ConstrainMaximumSizeToWidgetBoundsOn", &vtkDisplaySizedImplicitPlaneRepresentation::ConstrainMaximumSizeToWidgetBoundsOn)
    .function("ConstrainMaximumSizeToWidgetBoundsOff", &vtkDisplaySizedImplicitPlaneRepresentation::ConstrainMaximumSizeToWidgetBoundsOff)
    .function("SetScaleEnabled", &vtkDisplaySizedImplicitPlaneRepresentation::SetScaleEnabled)
    .function("GetScaleEnabled", &vtkDisplaySizedImplicitPlaneRepresentation::GetScaleEnabled)
    .function("ScaleEnabledOn", &vtkDisplaySizedImplicitPlaneRepresentation::ScaleEnabledOn)
    .function("ScaleEnabledOff", &vtkDisplaySizedImplicitPlaneRepresentation::ScaleEnabledOff)
    .function("GetPolyData", &vtkDisplaySizedImplicitPlaneRepresentation::GetPolyData, emscripten::allow_raw_pointers())
    .function("GetPolyDataAlgorithm", &vtkDisplaySizedImplicitPlaneRepresentation::GetPolyDataAlgorithm, emscripten::allow_raw_pointers())
    .function("GetPlane", &vtkDisplaySizedImplicitPlaneRepresentation::GetPlane, emscripten::allow_raw_pointers())
    .function("SetPlane", &vtkDisplaySizedImplicitPlaneRepresentation::SetPlane, emscripten::allow_raw_pointers())
    .function("UpdatePlacement", &vtkDisplaySizedImplicitPlaneRepresentation::UpdatePlacement)
    .function("GetNormalProperty", &vtkDisplaySizedImplicitPlaneRepresentation::GetNormalProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedNormalProperty", &vtkDisplaySizedImplicitPlaneRepresentation::GetSelectedNormalProperty, emscripten::allow_raw_pointers())
    .function("GetSphereProperty", &vtkDisplaySizedImplicitPlaneRepresentation::GetSphereProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedSphereProperty", &vtkDisplaySizedImplicitPlaneRepresentation::GetSelectedSphereProperty, emscripten::allow_raw_pointers())
    .function("GetPlaneProperty", &vtkDisplaySizedImplicitPlaneRepresentation::GetPlaneProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedPlaneProperty", &vtkDisplaySizedImplicitPlaneRepresentation::GetSelectedPlaneProperty, emscripten::allow_raw_pointers())
    .function("GetOutlineProperty", &vtkDisplaySizedImplicitPlaneRepresentation::GetOutlineProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedOutlineProperty", &vtkDisplaySizedImplicitPlaneRepresentation::GetSelectedOutlineProperty, emscripten::allow_raw_pointers())
    .function("GetEdgesProperty", &vtkDisplaySizedImplicitPlaneRepresentation::GetEdgesProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedEdgesProperty", &vtkDisplaySizedImplicitPlaneRepresentation::GetSelectedEdgesProperty, emscripten::allow_raw_pointers())
    .function("GetIntersectionEdgesProperty", &vtkDisplaySizedImplicitPlaneRepresentation::GetIntersectionEdgesProperty, emscripten::allow_raw_pointers())
    .function("SetInteractionColor", emscripten::select_overload<void(vtkDisplaySizedImplicitPlaneRepresentation&, double, double, double)>([](vtkDisplaySizedImplicitPlaneRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetInteractionColor( arg_0, arg_1, arg_2); }))
    .function("SetHandleColor", emscripten::select_overload<void(vtkDisplaySizedImplicitPlaneRepresentation&, double, double, double)>([](vtkDisplaySizedImplicitPlaneRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetHandleColor( arg_0, arg_1, arg_2); }))
    .function("SetForegroundColor", emscripten::select_overload<void(vtkDisplaySizedImplicitPlaneRepresentation&, double, double, double)>([](vtkDisplaySizedImplicitPlaneRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetForegroundColor( arg_0, arg_1, arg_2); }))
    .function("SetBumpDistance", &vtkDisplaySizedImplicitPlaneRepresentation::SetBumpDistance)
    .function("GetBumpDistanceMinValue", &vtkDisplaySizedImplicitPlaneRepresentation::GetBumpDistanceMinValue)
    .function("GetBumpDistanceMaxValue", &vtkDisplaySizedImplicitPlaneRepresentation::GetBumpDistanceMaxValue)
    .function("GetBumpDistance", &vtkDisplaySizedImplicitPlaneRepresentation::GetBumpDistance)
    .function("BumpPlane", &vtkDisplaySizedImplicitPlaneRepresentation::BumpPlane)
    .function("PushPlane", &vtkDisplaySizedImplicitPlaneRepresentation::PushPlane)
    .function("GetPickCameraFocalInfo", &vtkDisplaySizedImplicitPlaneRepresentation::GetPickCameraFocalInfo)
    .function("SetPickCameraFocalInfo", &vtkDisplaySizedImplicitPlaneRepresentation::SetPickCameraFocalInfo)
    .function("PickCameraFocalInfoOn", &vtkDisplaySizedImplicitPlaneRepresentation::PickCameraFocalInfoOn)
    .function("PickCameraFocalInfoOff", &vtkDisplaySizedImplicitPlaneRepresentation::PickCameraFocalInfoOff)
    .function("PickOrigin", &vtkDisplaySizedImplicitPlaneRepresentation::PickOrigin)
    .function("PickNormal", &vtkDisplaySizedImplicitPlaneRepresentation::PickNormal)
    .function("ComputeInteractionState", &vtkDisplaySizedImplicitPlaneRepresentation::ComputeInteractionState)
    .function("BuildRepresentation", &vtkDisplaySizedImplicitPlaneRepresentation::BuildRepresentation)
    .function("StartComplexInteraction", emscripten::optional_override([](vtkDisplaySizedImplicitPlaneRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.StartComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ComplexInteraction", emscripten::optional_override([](vtkDisplaySizedImplicitPlaneRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.ComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ComputeComplexInteractionState", emscripten::optional_override([](vtkDisplaySizedImplicitPlaneRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3, int arg_4) -> int {  return self.ComputeComplexInteractionState( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3), arg_4);}), emscripten::allow_raw_pointers())
    .function("EndComplexInteraction", emscripten::optional_override([](vtkDisplaySizedImplicitPlaneRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.EndComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("GetActors", &vtkDisplaySizedImplicitPlaneRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkDisplaySizedImplicitPlaneRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkDisplaySizedImplicitPlaneRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkDisplaySizedImplicitPlaneRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkDisplaySizedImplicitPlaneRepresentation::HasTranslucentPolygonalGeometry)
    .function("SetInteractionState", &vtkDisplaySizedImplicitPlaneRepresentation::SetInteractionState)
    .function("GetInteractionStateMinValue", &vtkDisplaySizedImplicitPlaneRepresentation::GetInteractionStateMinValue)
    .function("GetInteractionStateMaxValue", &vtkDisplaySizedImplicitPlaneRepresentation::GetInteractionStateMaxValue)
    .function("SetRepresentationState", &vtkDisplaySizedImplicitPlaneRepresentation::SetRepresentationState)
    .function("GetRepresentationState", &vtkDisplaySizedImplicitPlaneRepresentation::GetRepresentationState)
    .function("GetUnderlyingPlane", &vtkDisplaySizedImplicitPlaneRepresentation::GetUnderlyingPlane, emscripten::allow_raw_pointers())
    .function("GetSnapToAxes", &vtkDisplaySizedImplicitPlaneRepresentation::GetSnapToAxes)
    .function("SetSnapToAxes", &vtkDisplaySizedImplicitPlaneRepresentation::SetSnapToAxes)
    .function("SnapToAxesOn", &vtkDisplaySizedImplicitPlaneRepresentation::SnapToAxesOn)
    .function("SnapToAxesOff", &vtkDisplaySizedImplicitPlaneRepresentation::SnapToAxesOff)
    .function("GetAlwaysSnapToNearestAxis", &vtkDisplaySizedImplicitPlaneRepresentation::GetAlwaysSnapToNearestAxis)
    .function("SetAlwaysSnapToNearestAxis", &vtkDisplaySizedImplicitPlaneRepresentation::SetAlwaysSnapToNearestAxis);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkDisplaySizedImplicitPlaneRepresentation_0_2_constants) {
    typedef vtkDisplaySizedImplicitPlaneRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[8] = {
      { "vtkDisplaySizedImplicitPlaneRepresentation_InteractionStateType_Outside", vtkDisplaySizedImplicitPlaneRepresentation::Outside },
      { "vtkDisplaySizedImplicitPlaneRepresentation_InteractionStateType_Moving", vtkDisplaySizedImplicitPlaneRepresentation::Moving },
      { "vtkDisplaySizedImplicitPlaneRepresentation_InteractionStateType_MovingOutline", vtkDisplaySizedImplicitPlaneRepresentation::MovingOutline },
      { "vtkDisplaySizedImplicitPlaneRepresentation_InteractionStateType_MovingOrigin", vtkDisplaySizedImplicitPlaneRepresentation::MovingOrigin },
      { "vtkDisplaySizedImplicitPlaneRepresentation_InteractionStateType_Rotating", vtkDisplaySizedImplicitPlaneRepresentation::Rotating },
      { "vtkDisplaySizedImplicitPlaneRepresentation_InteractionStateType_Pushing", vtkDisplaySizedImplicitPlaneRepresentation::Pushing },
      { "vtkDisplaySizedImplicitPlaneRepresentation_InteractionStateType_ResizeDiskRadius", vtkDisplaySizedImplicitPlaneRepresentation::ResizeDiskRadius },
      { "vtkDisplaySizedImplicitPlaneRepresentation_InteractionStateType_Scaling", vtkDisplaySizedImplicitPlaneRepresentation::Scaling },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
