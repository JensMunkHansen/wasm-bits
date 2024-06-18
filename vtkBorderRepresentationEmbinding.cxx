// JavaScript wrapper for vtkBorderRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkBorderRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkBorderRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCoordinate.h"
#include "vtkProperty2D.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkBorderRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBorderRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkBorderRepresentation>(vtkBorderRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBorderRepresentation_class) {
  using InteractionStateType=vtkBorderRepresentation::InteractionStateType;
  emscripten::class_<vtkBorderRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkBorderRepresentation")
    .smart_ptr<vtkSmartPointer<vtkBorderRepresentation>>("vtkSmartPointer<vtkBorderRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBorderRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBorderRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBorderRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBorderRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBorderRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBorderRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBorderRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPositionCoordinate", &vtkBorderRepresentation::GetPositionCoordinate, emscripten::allow_raw_pointers())
    .function("SetPosition", emscripten::select_overload<void(vtkBorderRepresentation&, double, double)>([](vtkBorderRepresentation& self, double arg_0, double arg_1) -> void { return self.SetPosition( arg_0, arg_1); }))
    .function("GetPosition2Coordinate", &vtkBorderRepresentation::GetPosition2Coordinate, emscripten::allow_raw_pointers())
    .function("SetPosition2", emscripten::select_overload<void(vtkBorderRepresentation&, double, double)>([](vtkBorderRepresentation& self, double arg_0, double arg_1) -> void { return self.SetPosition2( arg_0, arg_1); }))
    .function("SetShowBorder", &vtkBorderRepresentation::SetShowBorder)
    .function("GetShowBorderMinValue", &vtkBorderRepresentation::GetShowBorderMinValue)
    .function("GetShowBorderMaxValue", &vtkBorderRepresentation::GetShowBorderMaxValue)
    .function("GetShowBorder", &vtkBorderRepresentation::GetShowBorder)
    .function("SetShowBorderToOff", &vtkBorderRepresentation::SetShowBorderToOff)
    .function("SetShowBorderToOn", &vtkBorderRepresentation::SetShowBorderToOn)
    .function("SetShowBorderToActive", &vtkBorderRepresentation::SetShowBorderToActive)
    .function("SetShowVerticalBorder", &vtkBorderRepresentation::SetShowVerticalBorder)
    .function("GetShowVerticalBorderMinValue", &vtkBorderRepresentation::GetShowVerticalBorderMinValue)
    .function("GetShowVerticalBorderMaxValue", &vtkBorderRepresentation::GetShowVerticalBorderMaxValue)
    .function("GetShowVerticalBorder", &vtkBorderRepresentation::GetShowVerticalBorder)
    .function("SetShowHorizontalBorder", &vtkBorderRepresentation::SetShowHorizontalBorder)
    .function("GetShowHorizontalBorderMinValue", &vtkBorderRepresentation::GetShowHorizontalBorderMinValue)
    .function("GetShowHorizontalBorderMaxValue", &vtkBorderRepresentation::GetShowHorizontalBorderMaxValue)
    .function("GetShowHorizontalBorder", &vtkBorderRepresentation::GetShowHorizontalBorder)
    .function("GetBorderProperty", &vtkBorderRepresentation::GetBorderProperty, emscripten::allow_raw_pointers())
    .function("SetShowPolygon", &vtkBorderRepresentation::SetShowPolygon)
    .function("GetShowPolygon", &vtkBorderRepresentation::GetShowPolygon)
    .function("SetShowPolygonToOff", &vtkBorderRepresentation::SetShowPolygonToOff)
    .function("SetShowPolygonToOn", &vtkBorderRepresentation::SetShowPolygonToOn)
    .function("SetShowPolygonToActive", &vtkBorderRepresentation::SetShowPolygonToActive)
    .function("SetShowPolygonBackground", &vtkBorderRepresentation::SetShowPolygonBackground)
    .function("GetShowPolygonBackgroundMinValue", &vtkBorderRepresentation::GetShowPolygonBackgroundMinValue)
    .function("GetShowPolygonBackgroundMaxValue", &vtkBorderRepresentation::GetShowPolygonBackgroundMaxValue)
    .function("GetShowPolygonBackground", &vtkBorderRepresentation::GetShowPolygonBackground)
    .function("SetEnforceNormalizedViewportBounds", &vtkBorderRepresentation::SetEnforceNormalizedViewportBounds)
    .function("GetEnforceNormalizedViewportBounds", &vtkBorderRepresentation::GetEnforceNormalizedViewportBounds)
    .function("EnforceNormalizedViewportBoundsOn", &vtkBorderRepresentation::EnforceNormalizedViewportBoundsOn)
    .function("EnforceNormalizedViewportBoundsOff", &vtkBorderRepresentation::EnforceNormalizedViewportBoundsOff)
    .function("SetProportionalResize", &vtkBorderRepresentation::SetProportionalResize)
    .function("GetProportionalResize", &vtkBorderRepresentation::GetProportionalResize)
    .function("ProportionalResizeOn", &vtkBorderRepresentation::ProportionalResizeOn)
    .function("ProportionalResizeOff", &vtkBorderRepresentation::ProportionalResizeOff)
    .function("SetMinimumNormalizedViewportSize", emscripten::select_overload<void(vtkBorderRepresentation&, double, double)>([](vtkBorderRepresentation& self, double arg_0, double arg_1) -> void { return self.SetMinimumNormalizedViewportSize( arg_0, arg_1); }))
    .function("SetMinimumSize", emscripten::select_overload<void(vtkBorderRepresentation&, int, int)>([](vtkBorderRepresentation& self, int arg_0, int arg_1) -> void { return self.SetMinimumSize( arg_0, arg_1); }))
    .function("SetMaximumSize", emscripten::select_overload<void(vtkBorderRepresentation&, int, int)>([](vtkBorderRepresentation& self, int arg_0, int arg_1) -> void { return self.SetMaximumSize( arg_0, arg_1); }))
    .function("SetTolerance", &vtkBorderRepresentation::SetTolerance)
    .function("GetToleranceMinValue", &vtkBorderRepresentation::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkBorderRepresentation::GetToleranceMaxValue)
    .function("GetTolerance", &vtkBorderRepresentation::GetTolerance)
    .function("SetMoving", &vtkBorderRepresentation::SetMoving)
    .function("GetMoving", &vtkBorderRepresentation::GetMoving)
    .function("MovingOn", &vtkBorderRepresentation::MovingOn)
    .function("MovingOff", &vtkBorderRepresentation::MovingOff)
    .function("SetWindowLocation", &vtkBorderRepresentation::SetWindowLocation)
    .function("GetWindowLocation", &vtkBorderRepresentation::GetWindowLocation)
    .function("UpdateWindowLocation", &vtkBorderRepresentation::UpdateWindowLocation)
    .function("SetInteractionState", &vtkBorderRepresentation::SetInteractionState)
    .function("GetInteractionStateMinValue", &vtkBorderRepresentation::GetInteractionStateMinValue)
    .function("GetInteractionStateMaxValue", &vtkBorderRepresentation::GetInteractionStateMaxValue)
    .function("GetMTime", &vtkBorderRepresentation::GetMTime)
    .function("BuildRepresentation", &vtkBorderRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkBorderRepresentation::ComputeInteractionState)
    .function("GetActors2D", &vtkBorderRepresentation::GetActors2D, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkBorderRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkBorderRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkBorderRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkBorderRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkBorderRepresentation::HasTranslucentPolygonalGeometry)
    .function("SetBWActorDisplayOverlayEdges", &vtkBorderRepresentation::SetBWActorDisplayOverlayEdges)
    .function("SetBWActorDisplayOverlayPolygon", &vtkBorderRepresentation::SetBWActorDisplayOverlayPolygon)
    .function("SetBorderColor", emscripten::select_overload<void(vtkBorderRepresentation&, double, double, double)>([](vtkBorderRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBorderColor( arg_0, arg_1, arg_2); }))
    .function("SetBorderThickness", &vtkBorderRepresentation::SetBorderThickness)
    .function("GetBorderThicknessMinValue", &vtkBorderRepresentation::GetBorderThicknessMinValue)
    .function("GetBorderThicknessMaxValue", &vtkBorderRepresentation::GetBorderThicknessMaxValue)
    .function("GetBorderThickness", &vtkBorderRepresentation::GetBorderThickness)
    .function("SetCornerRadiusStrength", &vtkBorderRepresentation::SetCornerRadiusStrength)
    .function("GetCornerRadiusStrengthMinValue", &vtkBorderRepresentation::GetCornerRadiusStrengthMinValue)
    .function("GetCornerRadiusStrengthMaxValue", &vtkBorderRepresentation::GetCornerRadiusStrengthMaxValue)
    .function("GetCornerRadiusStrength", &vtkBorderRepresentation::GetCornerRadiusStrength)
    .function("SetCornerResolution", &vtkBorderRepresentation::SetCornerResolution)
    .function("GetCornerResolutionMinValue", &vtkBorderRepresentation::GetCornerResolutionMinValue)
    .function("GetCornerResolutionMaxValue", &vtkBorderRepresentation::GetCornerResolutionMaxValue)
    .function("GetCornerResolution", &vtkBorderRepresentation::GetCornerResolution)
    .function("SetPolygonColor", emscripten::select_overload<void(vtkBorderRepresentation&, double, double, double)>([](vtkBorderRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPolygonColor( arg_0, arg_1, arg_2); }))
    .function("SetPolygonOpacity", &vtkBorderRepresentation::SetPolygonOpacity)
    .function("GetPolygonOpacityMinValue", &vtkBorderRepresentation::GetPolygonOpacityMinValue)
    .function("GetPolygonOpacityMaxValue", &vtkBorderRepresentation::GetPolygonOpacityMaxValue)
    .function("GetPolygonOpacity", &vtkBorderRepresentation::GetPolygonOpacity)
    .function("SetPolygonRGBA", emscripten::select_overload<void(vtkBorderRepresentation&, double, double, double, double)>([](vtkBorderRepresentation& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetPolygonRGBA( arg_0, arg_1, arg_2, arg_3); }));
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBorderRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[10] = {
      { "vtkBorderRepresentation_BORDER_OFF", vtkBorderRepresentation::BORDER_OFF },
      { "vtkBorderRepresentation_BORDER_ON", vtkBorderRepresentation::BORDER_ON },
      { "vtkBorderRepresentation_BORDER_ACTIVE", vtkBorderRepresentation::BORDER_ACTIVE },
      { "vtkBorderRepresentation_AnyLocation", vtkBorderRepresentation::AnyLocation },
      { "vtkBorderRepresentation_LowerLeftCorner", vtkBorderRepresentation::LowerLeftCorner },
      { "vtkBorderRepresentation_LowerRightCorner", vtkBorderRepresentation::LowerRightCorner },
      { "vtkBorderRepresentation_LowerCenter", vtkBorderRepresentation::LowerCenter },
      { "vtkBorderRepresentation_UpperLeftCorner", vtkBorderRepresentation::UpperLeftCorner },
      { "vtkBorderRepresentation_UpperRightCorner", vtkBorderRepresentation::UpperRightCorner },
      { "vtkBorderRepresentation_UpperCenter", vtkBorderRepresentation::UpperCenter },
  };
  for (int c = 0; c < 10; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBorderRepresentation_1_2_constants) {
    typedef vtkBorderRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[10] = {
      { "vtkBorderRepresentation_InteractionStateType_Outside", vtkBorderRepresentation::Outside },
      { "vtkBorderRepresentation_InteractionStateType_Inside", vtkBorderRepresentation::Inside },
      { "vtkBorderRepresentation_InteractionStateType_AdjustingP0", vtkBorderRepresentation::AdjustingP0 },
      { "vtkBorderRepresentation_InteractionStateType_AdjustingP1", vtkBorderRepresentation::AdjustingP1 },
      { "vtkBorderRepresentation_InteractionStateType_AdjustingP2", vtkBorderRepresentation::AdjustingP2 },
      { "vtkBorderRepresentation_InteractionStateType_AdjustingP3", vtkBorderRepresentation::AdjustingP3 },
      { "vtkBorderRepresentation_InteractionStateType_AdjustingE0", vtkBorderRepresentation::AdjustingE0 },
      { "vtkBorderRepresentation_InteractionStateType_AdjustingE1", vtkBorderRepresentation::AdjustingE1 },
      { "vtkBorderRepresentation_InteractionStateType_AdjustingE2", vtkBorderRepresentation::AdjustingE2 },
      { "vtkBorderRepresentation_InteractionStateType_AdjustingE3", vtkBorderRepresentation::AdjustingE3 },
  };
  for (int c = 0; c < 10; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
