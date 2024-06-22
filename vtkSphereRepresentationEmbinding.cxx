// JavaScript wrapper for vtkSphereRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkSphereRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkSphereRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkSphere.h"
#include "vtkProperty.h"
#include "vtkTextProperty.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkSphereRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkSphereRepresentation_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_SPHERE_OFF", 0 },
      { "VTK_SPHERE_WIREFRAME", 1 },
      { "VTK_SPHERE_SURFACE", 2 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkSphereRepresentation>(vtkSphereRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSphereRepresentation_class) {
  emscripten::class_<vtkSphereRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkSphereRepresentation")
    .smart_ptr<vtkSmartPointer<vtkSphereRepresentation>>("vtkSmartPointer<vtkSphereRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSphereRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphereRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSphereRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSphereRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSphereRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphereRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSphereRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkSphereRepresentation::SetRepresentation)
    .function("GetRepresentationMinValue", &vtkSphereRepresentation::GetRepresentationMinValue)
    .function("GetRepresentationMaxValue", &vtkSphereRepresentation::GetRepresentationMaxValue)
    .function("GetRepresentation", &vtkSphereRepresentation::GetRepresentation)
    .function("SetRepresentationToOff", &vtkSphereRepresentation::SetRepresentationToOff)
    .function("SetRepresentationToWireframe", &vtkSphereRepresentation::SetRepresentationToWireframe)
    .function("SetRepresentationToSurface", &vtkSphereRepresentation::SetRepresentationToSurface)
    .function("SetThetaResolution", &vtkSphereRepresentation::SetThetaResolution)
    .function("GetThetaResolution", &vtkSphereRepresentation::GetThetaResolution)
    .function("SetPhiResolution", &vtkSphereRepresentation::SetPhiResolution)
    .function("GetPhiResolution", &vtkSphereRepresentation::GetPhiResolution)
    .function("SetCenter", emscripten::select_overload<void(vtkSphereRepresentation&, double, double, double)>([](vtkSphereRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetRadius", &vtkSphereRepresentation::SetRadius)
    .function("GetRadius", &vtkSphereRepresentation::GetRadius)
    .function("SetHandleVisibility", &vtkSphereRepresentation::SetHandleVisibility)
    .function("GetHandleVisibility", &vtkSphereRepresentation::GetHandleVisibility)
    .function("HandleVisibilityOn", &vtkSphereRepresentation::HandleVisibilityOn)
    .function("HandleVisibilityOff", &vtkSphereRepresentation::HandleVisibilityOff)
    .function("SetHandlePosition", emscripten::select_overload<void(vtkSphereRepresentation&, double, double, double)>([](vtkSphereRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetHandlePosition( arg_0, arg_1, arg_2); }))
    .function("SetHandleDirection", emscripten::select_overload<void(vtkSphereRepresentation&, double, double, double)>([](vtkSphereRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetHandleDirection( arg_0, arg_1, arg_2); }))
    .function("SetHandleText", &vtkSphereRepresentation::SetHandleText)
    .function("GetHandleText", &vtkSphereRepresentation::GetHandleText)
    .function("HandleTextOn", &vtkSphereRepresentation::HandleTextOn)
    .function("HandleTextOff", &vtkSphereRepresentation::HandleTextOff)
    .function("SetRadialLine", &vtkSphereRepresentation::SetRadialLine)
    .function("GetRadialLine", &vtkSphereRepresentation::GetRadialLine)
    .function("RadialLineOn", &vtkSphereRepresentation::RadialLineOn)
    .function("RadialLineOff", &vtkSphereRepresentation::RadialLineOff)
    .function("SetCenterCursor", &vtkSphereRepresentation::SetCenterCursor)
    .function("GetCenterCursor", &vtkSphereRepresentation::GetCenterCursor)
    .function("CenterCursorOn", &vtkSphereRepresentation::CenterCursorOn)
    .function("CenterCursorOff", &vtkSphereRepresentation::CenterCursorOff)
    .function("GetPolyData", &vtkSphereRepresentation::GetPolyData, emscripten::allow_raw_pointers())
    .function("GetSphere", &vtkSphereRepresentation::GetSphere, emscripten::allow_raw_pointers())
    .function("GetSphereProperty", &vtkSphereRepresentation::GetSphereProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedSphereProperty", &vtkSphereRepresentation::GetSelectedSphereProperty, emscripten::allow_raw_pointers())
    .function("GetHandleProperty", &vtkSphereRepresentation::GetHandleProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedHandleProperty", &vtkSphereRepresentation::GetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("GetHandleTextProperty", &vtkSphereRepresentation::GetHandleTextProperty, emscripten::allow_raw_pointers())
    .function("GetRadialLineProperty", &vtkSphereRepresentation::GetRadialLineProperty, emscripten::allow_raw_pointers())
    .function("SetInteractionColor", emscripten::select_overload<void(vtkSphereRepresentation&, double, double, double)>([](vtkSphereRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetInteractionColor( arg_0, arg_1, arg_2); }))
    .function("SetHandleColor", emscripten::select_overload<void(vtkSphereRepresentation&, double, double, double)>([](vtkSphereRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetHandleColor( arg_0, arg_1, arg_2); }))
    .function("SetForegroundColor", emscripten::select_overload<void(vtkSphereRepresentation&, double, double, double)>([](vtkSphereRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetForegroundColor( arg_0, arg_1, arg_2); }))
    .function("SetInteractionState", &vtkSphereRepresentation::SetInteractionState)
    .function("BuildRepresentation", &vtkSphereRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkSphereRepresentation::ComputeInteractionState)
    .function("ReleaseGraphicsResources", &vtkSphereRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkSphereRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkSphereRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkSphereRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkSphereRepresentation::HasTranslucentPolygonalGeometry)
    .function("RegisterPickers", &vtkSphereRepresentation::RegisterPickers)
    .function("GetTranslationAxis", &vtkSphereRepresentation::GetTranslationAxis)
    .function("SetTranslationAxis", &vtkSphereRepresentation::SetTranslationAxis)
    .function("GetTranslationAxisMinValue", &vtkSphereRepresentation::GetTranslationAxisMinValue)
    .function("GetTranslationAxisMaxValue", &vtkSphereRepresentation::GetTranslationAxisMaxValue)
    .function("SetXTranslationAxisOn", &vtkSphereRepresentation::SetXTranslationAxisOn)
    .function("SetYTranslationAxisOn", &vtkSphereRepresentation::SetYTranslationAxisOn)
    .function("SetZTranslationAxisOn", &vtkSphereRepresentation::SetZTranslationAxisOn)
    .function("SetTranslationAxisOff", &vtkSphereRepresentation::SetTranslationAxisOff)
    .function("IsTranslationConstrained", &vtkSphereRepresentation::IsTranslationConstrained);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkSphereRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "vtkSphereRepresentation_Outside", vtkSphereRepresentation::Outside },
      { "vtkSphereRepresentation_MovingHandle", vtkSphereRepresentation::MovingHandle },
      { "vtkSphereRepresentation_OnSphere", vtkSphereRepresentation::OnSphere },
      { "vtkSphereRepresentation_Translating", vtkSphereRepresentation::Translating },
      { "vtkSphereRepresentation_Scaling", vtkSphereRepresentation::Scaling },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
