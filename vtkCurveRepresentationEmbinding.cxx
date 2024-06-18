// JavaScript wrapper for vtkCurveRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCurveRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCurveRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlaneSource.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkDoubleArray.h"
#include "vtkPoints.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkPropCollection.h"
#include "vtkCurveRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCurveRepresentation_0_1_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "VTK_PROJECTION_YZ", 0 },
      { "VTK_PROJECTION_XZ", 1 },
      { "VTK_PROJECTION_XY", 2 },
      { "VTK_PROJECTION_OBLIQUE", 3 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCurveRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCurveRepresentation>(vtkCurveRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCurveRepresentation_class) {
  using InteractionStateType=vtkCurveRepresentation::InteractionStateType;
  emscripten::class_<vtkCurveRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkCurveRepresentation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCurveRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCurveRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCurveRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCurveRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCurveRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCurveRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInteractionState", &vtkCurveRepresentation::SetInteractionState)
    .function("SetProjectToPlane", &vtkCurveRepresentation::SetProjectToPlane)
    .function("GetProjectToPlane", &vtkCurveRepresentation::GetProjectToPlane)
    .function("ProjectToPlaneOn", &vtkCurveRepresentation::ProjectToPlaneOn)
    .function("ProjectToPlaneOff", &vtkCurveRepresentation::ProjectToPlaneOff)
    .function("SetPlaneSource", &vtkCurveRepresentation::SetPlaneSource, emscripten::allow_raw_pointers())
    .function("SetProjectionNormal", &vtkCurveRepresentation::SetProjectionNormal)
    .function("GetProjectionNormalMinValue", &vtkCurveRepresentation::GetProjectionNormalMinValue)
    .function("GetProjectionNormalMaxValue", &vtkCurveRepresentation::GetProjectionNormalMaxValue)
    .function("GetProjectionNormal", &vtkCurveRepresentation::GetProjectionNormal)
    .function("SetProjectionNormalToXAxes", &vtkCurveRepresentation::SetProjectionNormalToXAxes)
    .function("SetProjectionNormalToYAxes", &vtkCurveRepresentation::SetProjectionNormalToYAxes)
    .function("SetProjectionNormalToZAxes", &vtkCurveRepresentation::SetProjectionNormalToZAxes)
    .function("SetProjectionNormalToOblique", &vtkCurveRepresentation::SetProjectionNormalToOblique)
    .function("SetProjectionPosition", &vtkCurveRepresentation::SetProjectionPosition)
    .function("GetProjectionPosition", &vtkCurveRepresentation::GetProjectionPosition)
    .function("GetHandleProperty", &vtkCurveRepresentation::GetHandleProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedHandleProperty", &vtkCurveRepresentation::GetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("GetLineProperty", &vtkCurveRepresentation::GetLineProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedLineProperty", &vtkCurveRepresentation::GetSelectedLineProperty, emscripten::allow_raw_pointers())
    .function("GetNumberOfHandles", &vtkCurveRepresentation::GetNumberOfHandles)
    .function("SetDirectional", &vtkCurveRepresentation::SetDirectional)
    .function("GetDirectional", &vtkCurveRepresentation::GetDirectional)
    .function("DirectionalOn", &vtkCurveRepresentation::DirectionalOn)
    .function("DirectionalOff", &vtkCurveRepresentation::DirectionalOff)
    .function("SetHandlePosition", emscripten::select_overload<void(vtkCurveRepresentation&, int, double, double, double)>([](vtkCurveRepresentation& self, int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetHandlePosition( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetHandlePosition", emscripten::select_overload<std::uintptr_t(vtkCurveRepresentation&, int)>([](vtkCurveRepresentation& self, int arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetHandlePosition( arg_0)); }))
    .function("SetClosed", &vtkCurveRepresentation::SetClosed)
    .function("GetClosed", &vtkCurveRepresentation::GetClosed)
    .function("ClosedOn", &vtkCurveRepresentation::ClosedOn)
    .function("ClosedOff", &vtkCurveRepresentation::ClosedOff)
    .function("IsClosed", &vtkCurveRepresentation::IsClosed)
    .function("ComputeInteractionState", &vtkCurveRepresentation::ComputeInteractionState)
    .function("ReleaseGraphicsResources", &vtkCurveRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkCurveRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkCurveRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkCurveRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkCurveRepresentation::HasTranslucentPolygonalGeometry)
    .function("SetLineColor", &vtkCurveRepresentation::SetLineColor)
    .function("SetInteractionColor", emscripten::select_overload<void(vtkCurveRepresentation&, double, double, double)>([](vtkCurveRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetInteractionColor( arg_0, arg_1, arg_2); }))
    .function("SetForegroundColor", emscripten::select_overload<void(vtkCurveRepresentation&, double, double, double)>([](vtkCurveRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetForegroundColor( arg_0, arg_1, arg_2); }))
    .function("RegisterPickers", &vtkCurveRepresentation::RegisterPickers)
    .function("SetCurrentHandleIndex", &vtkCurveRepresentation::SetCurrentHandleIndex)
    .function("GetCurrentHandleIndex", &vtkCurveRepresentation::GetCurrentHandleIndex)
    .function("GetTranslationAxis", &vtkCurveRepresentation::GetTranslationAxis)
    .function("SetTranslationAxis", &vtkCurveRepresentation::SetTranslationAxis)
    .function("GetTranslationAxisMinValue", &vtkCurveRepresentation::GetTranslationAxisMinValue)
    .function("GetTranslationAxisMaxValue", &vtkCurveRepresentation::GetTranslationAxisMaxValue)
    .function("SetXTranslationAxisOn", &vtkCurveRepresentation::SetXTranslationAxisOn)
    .function("SetYTranslationAxisOn", &vtkCurveRepresentation::SetYTranslationAxisOn)
    .function("SetZTranslationAxisOn", &vtkCurveRepresentation::SetZTranslationAxisOn)
    .function("SetTranslationAxisOff", &vtkCurveRepresentation::SetTranslationAxisOff)
    .function("IsTranslationConstrained", &vtkCurveRepresentation::IsTranslationConstrained)
    .function("GetActors", &vtkCurveRepresentation::GetActors, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCurveRepresentation_0_2_constants) {
    typedef vtkCurveRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[9] = {
      { "vtkCurveRepresentation_InteractionStateType_Outside", vtkCurveRepresentation::Outside },
      { "vtkCurveRepresentation_InteractionStateType_OnHandle", vtkCurveRepresentation::OnHandle },
      { "vtkCurveRepresentation_InteractionStateType_OnLine", vtkCurveRepresentation::OnLine },
      { "vtkCurveRepresentation_InteractionStateType_Moving", vtkCurveRepresentation::Moving },
      { "vtkCurveRepresentation_InteractionStateType_Scaling", vtkCurveRepresentation::Scaling },
      { "vtkCurveRepresentation_InteractionStateType_Spinning", vtkCurveRepresentation::Spinning },
      { "vtkCurveRepresentation_InteractionStateType_Inserting", vtkCurveRepresentation::Inserting },
      { "vtkCurveRepresentation_InteractionStateType_Erasing", vtkCurveRepresentation::Erasing },
      { "vtkCurveRepresentation_InteractionStateType_Pushing", vtkCurveRepresentation::Pushing },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
