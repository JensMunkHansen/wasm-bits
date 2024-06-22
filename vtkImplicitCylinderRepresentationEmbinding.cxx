// JavaScript wrapper for vtkImplicitCylinderRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkImplicitCylinderRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkImplicitCylinderRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCylinder.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkLookupTable.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkImplicitCylinderRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImplicitCylinderRepresentation_0_1_constants) {
  emscripten::constant("VTK_MAX_CYL_RESOLUTION", 2048);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImplicitCylinderRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkImplicitCylinderRepresentation>(vtkImplicitCylinderRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitCylinderRepresentation_class) {
  using InteractionStateType=vtkImplicitCylinderRepresentation::InteractionStateType;
  emscripten::class_<vtkImplicitCylinderRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkImplicitCylinderRepresentation")
    .smart_ptr<vtkSmartPointer<vtkImplicitCylinderRepresentation>>("vtkSmartPointer<vtkImplicitCylinderRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImplicitCylinderRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitCylinderRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitCylinderRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitCylinderRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitCylinderRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitCylinderRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitCylinderRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCenter", emscripten::select_overload<void(vtkImplicitCylinderRepresentation&, double, double, double)>([](vtkImplicitCylinderRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetAxis", emscripten::select_overload<void(vtkImplicitCylinderRepresentation&, double, double, double)>([](vtkImplicitCylinderRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAxis( arg_0, arg_1, arg_2); }))
    .function("SetRadius", &vtkImplicitCylinderRepresentation::SetRadius)
    .function("GetRadius", &vtkImplicitCylinderRepresentation::GetRadius)
    .function("SetMinRadius", &vtkImplicitCylinderRepresentation::SetMinRadius)
    .function("GetMinRadiusMinValue", &vtkImplicitCylinderRepresentation::GetMinRadiusMinValue)
    .function("GetMinRadiusMaxValue", &vtkImplicitCylinderRepresentation::GetMinRadiusMaxValue)
    .function("GetMinRadius", &vtkImplicitCylinderRepresentation::GetMinRadius)
    .function("SetMaxRadius", &vtkImplicitCylinderRepresentation::SetMaxRadius)
    .function("GetMaxRadiusMinValue", &vtkImplicitCylinderRepresentation::GetMaxRadiusMinValue)
    .function("GetMaxRadiusMaxValue", &vtkImplicitCylinderRepresentation::GetMaxRadiusMaxValue)
    .function("GetMaxRadius", &vtkImplicitCylinderRepresentation::GetMaxRadius)
    .function("SetAlongXAxis", &vtkImplicitCylinderRepresentation::SetAlongXAxis)
    .function("GetAlongXAxis", &vtkImplicitCylinderRepresentation::GetAlongXAxis)
    .function("AlongXAxisOn", &vtkImplicitCylinderRepresentation::AlongXAxisOn)
    .function("AlongXAxisOff", &vtkImplicitCylinderRepresentation::AlongXAxisOff)
    .function("SetAlongYAxis", &vtkImplicitCylinderRepresentation::SetAlongYAxis)
    .function("GetAlongYAxis", &vtkImplicitCylinderRepresentation::GetAlongYAxis)
    .function("AlongYAxisOn", &vtkImplicitCylinderRepresentation::AlongYAxisOn)
    .function("AlongYAxisOff", &vtkImplicitCylinderRepresentation::AlongYAxisOff)
    .function("SetAlongZAxis", &vtkImplicitCylinderRepresentation::SetAlongZAxis)
    .function("GetAlongZAxis", &vtkImplicitCylinderRepresentation::GetAlongZAxis)
    .function("AlongZAxisOn", &vtkImplicitCylinderRepresentation::AlongZAxisOn)
    .function("AlongZAxisOff", &vtkImplicitCylinderRepresentation::AlongZAxisOff)
    .function("SetDrawCylinder", &vtkImplicitCylinderRepresentation::SetDrawCylinder)
    .function("GetDrawCylinder", &vtkImplicitCylinderRepresentation::GetDrawCylinder)
    .function("DrawCylinderOn", &vtkImplicitCylinderRepresentation::DrawCylinderOn)
    .function("DrawCylinderOff", &vtkImplicitCylinderRepresentation::DrawCylinderOff)
    .function("SetResolution", &vtkImplicitCylinderRepresentation::SetResolution)
    .function("GetResolutionMinValue", &vtkImplicitCylinderRepresentation::GetResolutionMinValue)
    .function("GetResolutionMaxValue", &vtkImplicitCylinderRepresentation::GetResolutionMaxValue)
    .function("GetResolution", &vtkImplicitCylinderRepresentation::GetResolution)
    .function("SetTubing", &vtkImplicitCylinderRepresentation::SetTubing)
    .function("GetTubing", &vtkImplicitCylinderRepresentation::GetTubing)
    .function("TubingOn", &vtkImplicitCylinderRepresentation::TubingOn)
    .function("TubingOff", &vtkImplicitCylinderRepresentation::TubingOff)
    .function("SetOutlineTranslation", &vtkImplicitCylinderRepresentation::SetOutlineTranslation)
    .function("GetOutlineTranslation", &vtkImplicitCylinderRepresentation::GetOutlineTranslation)
    .function("OutlineTranslationOn", &vtkImplicitCylinderRepresentation::OutlineTranslationOn)
    .function("OutlineTranslationOff", &vtkImplicitCylinderRepresentation::OutlineTranslationOff)
    .function("SetOutsideBounds", &vtkImplicitCylinderRepresentation::SetOutsideBounds)
    .function("GetOutsideBounds", &vtkImplicitCylinderRepresentation::GetOutsideBounds)
    .function("OutsideBoundsOn", &vtkImplicitCylinderRepresentation::OutsideBoundsOn)
    .function("OutsideBoundsOff", &vtkImplicitCylinderRepresentation::OutsideBoundsOff)
    .function("SetWidgetBounds", emscripten::select_overload<void(vtkImplicitCylinderRepresentation&, double, double, double, double, double, double)>([](vtkImplicitCylinderRepresentation& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetWidgetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetConstrainToWidgetBounds", &vtkImplicitCylinderRepresentation::SetConstrainToWidgetBounds)
    .function("GetConstrainToWidgetBounds", &vtkImplicitCylinderRepresentation::GetConstrainToWidgetBounds)
    .function("ConstrainToWidgetBoundsOn", &vtkImplicitCylinderRepresentation::ConstrainToWidgetBoundsOn)
    .function("ConstrainToWidgetBoundsOff", &vtkImplicitCylinderRepresentation::ConstrainToWidgetBoundsOff)
    .function("SetScaleEnabled", &vtkImplicitCylinderRepresentation::SetScaleEnabled)
    .function("GetScaleEnabled", &vtkImplicitCylinderRepresentation::GetScaleEnabled)
    .function("ScaleEnabledOn", &vtkImplicitCylinderRepresentation::ScaleEnabledOn)
    .function("ScaleEnabledOff", &vtkImplicitCylinderRepresentation::ScaleEnabledOff)
    .function("GetCylinder", &vtkImplicitCylinderRepresentation::GetCylinder, emscripten::allow_raw_pointers())
    .function("GetPolyData", &vtkImplicitCylinderRepresentation::GetPolyData, emscripten::allow_raw_pointers())
    .function("UpdatePlacement", &vtkImplicitCylinderRepresentation::UpdatePlacement)
    .function("GetAxisProperty", &vtkImplicitCylinderRepresentation::GetAxisProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedAxisProperty", &vtkImplicitCylinderRepresentation::GetSelectedAxisProperty, emscripten::allow_raw_pointers())
    .function("GetCylinderProperty", &vtkImplicitCylinderRepresentation::GetCylinderProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedCylinderProperty", &vtkImplicitCylinderRepresentation::GetSelectedCylinderProperty, emscripten::allow_raw_pointers())
    .function("GetOutlineProperty", &vtkImplicitCylinderRepresentation::GetOutlineProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedOutlineProperty", &vtkImplicitCylinderRepresentation::GetSelectedOutlineProperty, emscripten::allow_raw_pointers())
    .function("GetEdgesProperty", &vtkImplicitCylinderRepresentation::GetEdgesProperty, emscripten::allow_raw_pointers())
    .function("SetInteractionColor", emscripten::select_overload<void(vtkImplicitCylinderRepresentation&, double, double, double)>([](vtkImplicitCylinderRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetInteractionColor( arg_0, arg_1, arg_2); }))
    .function("SetHandleColor", emscripten::select_overload<void(vtkImplicitCylinderRepresentation&, double, double, double)>([](vtkImplicitCylinderRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetHandleColor( arg_0, arg_1, arg_2); }))
    .function("SetForegroundColor", emscripten::select_overload<void(vtkImplicitCylinderRepresentation&, double, double, double)>([](vtkImplicitCylinderRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetForegroundColor( arg_0, arg_1, arg_2); }))
    .function("ComputeInteractionState", &vtkImplicitCylinderRepresentation::ComputeInteractionState)
    .function("BuildRepresentation", &vtkImplicitCylinderRepresentation::BuildRepresentation)
    .function("GetActors", &vtkImplicitCylinderRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkImplicitCylinderRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkImplicitCylinderRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkImplicitCylinderRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkImplicitCylinderRepresentation::HasTranslucentPolygonalGeometry)
    .function("SetBumpDistance", &vtkImplicitCylinderRepresentation::SetBumpDistance)
    .function("GetBumpDistanceMinValue", &vtkImplicitCylinderRepresentation::GetBumpDistanceMinValue)
    .function("GetBumpDistanceMaxValue", &vtkImplicitCylinderRepresentation::GetBumpDistanceMaxValue)
    .function("GetBumpDistance", &vtkImplicitCylinderRepresentation::GetBumpDistance)
    .function("BumpCylinder", &vtkImplicitCylinderRepresentation::BumpCylinder)
    .function("PushCylinder", &vtkImplicitCylinderRepresentation::PushCylinder)
    .function("SetInteractionState", &vtkImplicitCylinderRepresentation::SetInteractionState)
    .function("GetInteractionStateMinValue", &vtkImplicitCylinderRepresentation::GetInteractionStateMinValue)
    .function("GetInteractionStateMaxValue", &vtkImplicitCylinderRepresentation::GetInteractionStateMaxValue)
    .function("SetRepresentationState", &vtkImplicitCylinderRepresentation::SetRepresentationState)
    .function("GetRepresentationState", &vtkImplicitCylinderRepresentation::GetRepresentationState)
    .function("RegisterPickers", &vtkImplicitCylinderRepresentation::RegisterPickers)
    .function("GetTranslationAxis", &vtkImplicitCylinderRepresentation::GetTranslationAxis)
    .function("SetTranslationAxis", &vtkImplicitCylinderRepresentation::SetTranslationAxis)
    .function("GetTranslationAxisMinValue", &vtkImplicitCylinderRepresentation::GetTranslationAxisMinValue)
    .function("GetTranslationAxisMaxValue", &vtkImplicitCylinderRepresentation::GetTranslationAxisMaxValue)
    .function("SetXTranslationAxisOn", &vtkImplicitCylinderRepresentation::SetXTranslationAxisOn)
    .function("SetYTranslationAxisOn", &vtkImplicitCylinderRepresentation::SetYTranslationAxisOn)
    .function("SetZTranslationAxisOn", &vtkImplicitCylinderRepresentation::SetZTranslationAxisOn)
    .function("SetTranslationAxisOff", &vtkImplicitCylinderRepresentation::SetTranslationAxisOff)
    .function("IsTranslationConstrained", &vtkImplicitCylinderRepresentation::IsTranslationConstrained);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImplicitCylinderRepresentation_0_2_constants) {
    typedef vtkImplicitCylinderRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[8] = {
      { "vtkImplicitCylinderRepresentation_InteractionStateType_Outside", vtkImplicitCylinderRepresentation::Outside },
      { "vtkImplicitCylinderRepresentation_InteractionStateType_Moving", vtkImplicitCylinderRepresentation::Moving },
      { "vtkImplicitCylinderRepresentation_InteractionStateType_MovingOutline", vtkImplicitCylinderRepresentation::MovingOutline },
      { "vtkImplicitCylinderRepresentation_InteractionStateType_MovingCenter", vtkImplicitCylinderRepresentation::MovingCenter },
      { "vtkImplicitCylinderRepresentation_InteractionStateType_RotatingAxis", vtkImplicitCylinderRepresentation::RotatingAxis },
      { "vtkImplicitCylinderRepresentation_InteractionStateType_AdjustingRadius", vtkImplicitCylinderRepresentation::AdjustingRadius },
      { "vtkImplicitCylinderRepresentation_InteractionStateType_Scaling", vtkImplicitCylinderRepresentation::Scaling },
      { "vtkImplicitCylinderRepresentation_InteractionStateType_TranslatingCenter", vtkImplicitCylinderRepresentation::TranslatingCenter },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
