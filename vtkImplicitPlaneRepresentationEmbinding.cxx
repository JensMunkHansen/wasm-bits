// JavaScript wrapper for vtkImplicitPlaneRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkImplicitPlaneRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkImplicitPlaneRepresentation.h
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
#include "vtkLookupTable.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkAbstractWidget.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkImplicitPlaneRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImplicitPlaneRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkImplicitPlaneRepresentation>(vtkImplicitPlaneRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitPlaneRepresentation_class) {
  using InteractionStateType=vtkImplicitPlaneRepresentation::InteractionStateType;
  emscripten::class_<vtkImplicitPlaneRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkImplicitPlaneRepresentation")
    .smart_ptr<vtkSmartPointer<vtkImplicitPlaneRepresentation>>("vtkSmartPointer<vtkImplicitPlaneRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImplicitPlaneRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitPlaneRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitPlaneRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitPlaneRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitPlaneRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitPlaneRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitPlaneRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOrigin", emscripten::select_overload<void(vtkImplicitPlaneRepresentation&, double, double, double)>([](vtkImplicitPlaneRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkImplicitPlaneRepresentation&, double, double, double)>([](vtkImplicitPlaneRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetNormalToCamera", &vtkImplicitPlaneRepresentation::SetNormalToCamera)
    .function("SetNormalToXAxis", &vtkImplicitPlaneRepresentation::SetNormalToXAxis)
    .function("GetNormalToXAxis", &vtkImplicitPlaneRepresentation::GetNormalToXAxis)
    .function("NormalToXAxisOn", &vtkImplicitPlaneRepresentation::NormalToXAxisOn)
    .function("NormalToXAxisOff", &vtkImplicitPlaneRepresentation::NormalToXAxisOff)
    .function("SetNormalToYAxis", &vtkImplicitPlaneRepresentation::SetNormalToYAxis)
    .function("GetNormalToYAxis", &vtkImplicitPlaneRepresentation::GetNormalToYAxis)
    .function("NormalToYAxisOn", &vtkImplicitPlaneRepresentation::NormalToYAxisOn)
    .function("NormalToYAxisOff", &vtkImplicitPlaneRepresentation::NormalToYAxisOff)
    .function("SetNormalToZAxis", &vtkImplicitPlaneRepresentation::SetNormalToZAxis)
    .function("GetNormalToZAxis", &vtkImplicitPlaneRepresentation::GetNormalToZAxis)
    .function("NormalToZAxisOn", &vtkImplicitPlaneRepresentation::NormalToZAxisOn)
    .function("NormalToZAxisOff", &vtkImplicitPlaneRepresentation::NormalToZAxisOff)
    .function("SetLockNormalToCamera", &vtkImplicitPlaneRepresentation::SetLockNormalToCamera)
    .function("GetLockNormalToCamera", &vtkImplicitPlaneRepresentation::GetLockNormalToCamera)
    .function("LockNormalToCameraOn", &vtkImplicitPlaneRepresentation::LockNormalToCameraOn)
    .function("LockNormalToCameraOff", &vtkImplicitPlaneRepresentation::LockNormalToCameraOff)
    .function("SetTubing", &vtkImplicitPlaneRepresentation::SetTubing)
    .function("GetTubing", &vtkImplicitPlaneRepresentation::GetTubing)
    .function("TubingOn", &vtkImplicitPlaneRepresentation::TubingOn)
    .function("TubingOff", &vtkImplicitPlaneRepresentation::TubingOff)
    .function("SetDrawPlane", &vtkImplicitPlaneRepresentation::SetDrawPlane)
    .function("GetDrawPlane", &vtkImplicitPlaneRepresentation::GetDrawPlane)
    .function("DrawPlaneOn", &vtkImplicitPlaneRepresentation::DrawPlaneOn)
    .function("DrawPlaneOff", &vtkImplicitPlaneRepresentation::DrawPlaneOff)
    .function("SetDrawOutline", &vtkImplicitPlaneRepresentation::SetDrawOutline)
    .function("GetDrawOutline", &vtkImplicitPlaneRepresentation::GetDrawOutline)
    .function("DrawOutlineOn", &vtkImplicitPlaneRepresentation::DrawOutlineOn)
    .function("DrawOutlineOff", &vtkImplicitPlaneRepresentation::DrawOutlineOff)
    .function("SetOutlineTranslation", &vtkImplicitPlaneRepresentation::SetOutlineTranslation)
    .function("GetOutlineTranslation", &vtkImplicitPlaneRepresentation::GetOutlineTranslation)
    .function("OutlineTranslationOn", &vtkImplicitPlaneRepresentation::OutlineTranslationOn)
    .function("OutlineTranslationOff", &vtkImplicitPlaneRepresentation::OutlineTranslationOff)
    .function("SetOutsideBounds", &vtkImplicitPlaneRepresentation::SetOutsideBounds)
    .function("GetOutsideBounds", &vtkImplicitPlaneRepresentation::GetOutsideBounds)
    .function("OutsideBoundsOn", &vtkImplicitPlaneRepresentation::OutsideBoundsOn)
    .function("OutsideBoundsOff", &vtkImplicitPlaneRepresentation::OutsideBoundsOff)
    .function("SetXTranslationAxisOn", &vtkImplicitPlaneRepresentation::SetXTranslationAxisOn)
    .function("SetYTranslationAxisOn", &vtkImplicitPlaneRepresentation::SetYTranslationAxisOn)
    .function("SetZTranslationAxisOn", &vtkImplicitPlaneRepresentation::SetZTranslationAxisOn)
    .function("SetTranslationAxisOff", &vtkImplicitPlaneRepresentation::SetTranslationAxisOff)
    .function("IsTranslationConstrained", &vtkImplicitPlaneRepresentation::IsTranslationConstrained)
    .function("SetWidgetBounds", emscripten::select_overload<void(vtkImplicitPlaneRepresentation&, double, double, double, double, double, double)>([](vtkImplicitPlaneRepresentation& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetWidgetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetConstrainToWidgetBounds", &vtkImplicitPlaneRepresentation::SetConstrainToWidgetBounds)
    .function("GetConstrainToWidgetBounds", &vtkImplicitPlaneRepresentation::GetConstrainToWidgetBounds)
    .function("ConstrainToWidgetBoundsOn", &vtkImplicitPlaneRepresentation::ConstrainToWidgetBoundsOn)
    .function("ConstrainToWidgetBoundsOff", &vtkImplicitPlaneRepresentation::ConstrainToWidgetBoundsOff)
    .function("SetScaleEnabled", &vtkImplicitPlaneRepresentation::SetScaleEnabled)
    .function("GetScaleEnabled", &vtkImplicitPlaneRepresentation::GetScaleEnabled)
    .function("ScaleEnabledOn", &vtkImplicitPlaneRepresentation::ScaleEnabledOn)
    .function("ScaleEnabledOff", &vtkImplicitPlaneRepresentation::ScaleEnabledOff)
    .function("GetPolyData", &vtkImplicitPlaneRepresentation::GetPolyData, emscripten::allow_raw_pointers())
    .function("GetPolyDataAlgorithm", &vtkImplicitPlaneRepresentation::GetPolyDataAlgorithm, emscripten::allow_raw_pointers())
    .function("GetPlane", &vtkImplicitPlaneRepresentation::GetPlane, emscripten::allow_raw_pointers())
    .function("SetPlane", &vtkImplicitPlaneRepresentation::SetPlane, emscripten::allow_raw_pointers())
    .function("UpdatePlacement", &vtkImplicitPlaneRepresentation::UpdatePlacement)
    .function("GetNormalProperty", &vtkImplicitPlaneRepresentation::GetNormalProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedNormalProperty", &vtkImplicitPlaneRepresentation::GetSelectedNormalProperty, emscripten::allow_raw_pointers())
    .function("GetPlaneProperty", &vtkImplicitPlaneRepresentation::GetPlaneProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedPlaneProperty", &vtkImplicitPlaneRepresentation::GetSelectedPlaneProperty, emscripten::allow_raw_pointers())
    .function("GetOutlineProperty", &vtkImplicitPlaneRepresentation::GetOutlineProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedOutlineProperty", &vtkImplicitPlaneRepresentation::GetSelectedOutlineProperty, emscripten::allow_raw_pointers())
    .function("GetEdgesProperty", &vtkImplicitPlaneRepresentation::GetEdgesProperty, emscripten::allow_raw_pointers())
    .function("SetInteractionColor", emscripten::select_overload<void(vtkImplicitPlaneRepresentation&, double, double, double)>([](vtkImplicitPlaneRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetInteractionColor( arg_0, arg_1, arg_2); }))
    .function("SetHandleColor", emscripten::select_overload<void(vtkImplicitPlaneRepresentation&, double, double, double)>([](vtkImplicitPlaneRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetHandleColor( arg_0, arg_1, arg_2); }))
    .function("SetForegroundColor", emscripten::select_overload<void(vtkImplicitPlaneRepresentation&, double, double, double)>([](vtkImplicitPlaneRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetForegroundColor( arg_0, arg_1, arg_2); }))
    .function("SetEdgeColor", emscripten::select_overload<void(vtkImplicitPlaneRepresentation&, vtkLookupTable*)>([](vtkImplicitPlaneRepresentation& self, vtkLookupTable* arg_0) -> void { return self.SetEdgeColor( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetEdgeColor", emscripten::select_overload<void(vtkImplicitPlaneRepresentation&, double, double, double)>([](vtkImplicitPlaneRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetEdgeColor( arg_0, arg_1, arg_2); }))
    .function("SetBumpDistance", &vtkImplicitPlaneRepresentation::SetBumpDistance)
    .function("GetBumpDistanceMinValue", &vtkImplicitPlaneRepresentation::GetBumpDistanceMinValue)
    .function("GetBumpDistanceMaxValue", &vtkImplicitPlaneRepresentation::GetBumpDistanceMaxValue)
    .function("GetBumpDistance", &vtkImplicitPlaneRepresentation::GetBumpDistance)
    .function("BumpPlane", &vtkImplicitPlaneRepresentation::BumpPlane)
    .function("PushPlane", &vtkImplicitPlaneRepresentation::PushPlane)
    .function("ComputeInteractionState", &vtkImplicitPlaneRepresentation::ComputeInteractionState)
    .function("BuildRepresentation", &vtkImplicitPlaneRepresentation::BuildRepresentation)
    .function("StartComplexInteraction", emscripten::optional_override([](vtkImplicitPlaneRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.StartComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ComplexInteraction", emscripten::optional_override([](vtkImplicitPlaneRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.ComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ComputeComplexInteractionState", emscripten::optional_override([](vtkImplicitPlaneRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3, int arg_4) -> int {  return self.ComputeComplexInteractionState( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3), arg_4);}), emscripten::allow_raw_pointers())
    .function("EndComplexInteraction", emscripten::optional_override([](vtkImplicitPlaneRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.EndComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("GetActors", &vtkImplicitPlaneRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkImplicitPlaneRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkImplicitPlaneRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkImplicitPlaneRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkImplicitPlaneRepresentation::HasTranslucentPolygonalGeometry)
    .function("SetInteractionState", &vtkImplicitPlaneRepresentation::SetInteractionState)
    .function("GetInteractionStateMinValue", &vtkImplicitPlaneRepresentation::GetInteractionStateMinValue)
    .function("GetInteractionStateMaxValue", &vtkImplicitPlaneRepresentation::GetInteractionStateMaxValue)
    .function("SetRepresentationState", &vtkImplicitPlaneRepresentation::SetRepresentationState)
    .function("GetRepresentationState", &vtkImplicitPlaneRepresentation::GetRepresentationState)
    .function("GetUnderlyingPlane", &vtkImplicitPlaneRepresentation::GetUnderlyingPlane, emscripten::allow_raw_pointers())
    .function("SetCropPlaneToBoundingBox", &vtkImplicitPlaneRepresentation::SetCropPlaneToBoundingBox)
    .function("GetCropPlaneToBoundingBox", &vtkImplicitPlaneRepresentation::GetCropPlaneToBoundingBox)
    .function("CropPlaneToBoundingBoxOn", &vtkImplicitPlaneRepresentation::CropPlaneToBoundingBoxOn)
    .function("CropPlaneToBoundingBoxOff", &vtkImplicitPlaneRepresentation::CropPlaneToBoundingBoxOff)
    .function("GetSnapToAxes", &vtkImplicitPlaneRepresentation::GetSnapToAxes)
    .function("SetSnapToAxes", &vtkImplicitPlaneRepresentation::SetSnapToAxes)
    .function("GetAlwaysSnapToNearestAxis", &vtkImplicitPlaneRepresentation::GetAlwaysSnapToNearestAxis)
    .function("SetAlwaysSnapToNearestAxis", &vtkImplicitPlaneRepresentation::SetAlwaysSnapToNearestAxis);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImplicitPlaneRepresentation_0_2_constants) {
    typedef vtkImplicitPlaneRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkImplicitPlaneRepresentation_InteractionStateType_Outside", vtkImplicitPlaneRepresentation::Outside },
      { "vtkImplicitPlaneRepresentation_InteractionStateType_Moving", vtkImplicitPlaneRepresentation::Moving },
      { "vtkImplicitPlaneRepresentation_InteractionStateType_MovingOutline", vtkImplicitPlaneRepresentation::MovingOutline },
      { "vtkImplicitPlaneRepresentation_InteractionStateType_MovingOrigin", vtkImplicitPlaneRepresentation::MovingOrigin },
      { "vtkImplicitPlaneRepresentation_InteractionStateType_Rotating", vtkImplicitPlaneRepresentation::Rotating },
      { "vtkImplicitPlaneRepresentation_InteractionStateType_Pushing", vtkImplicitPlaneRepresentation::Pushing },
      { "vtkImplicitPlaneRepresentation_InteractionStateType_Scaling", vtkImplicitPlaneRepresentation::Scaling },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
