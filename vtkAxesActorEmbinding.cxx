// JavaScript wrapper for vtkAxesActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkAxesActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkAxesActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPropCollection.h"
#include "vtkViewport.h"
#include "vtkProp.h"
#include "vtkWindow.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkCaptionActor2D.h"
#include "vtkAxesActor.h"

template<> void emscripten::internal::raw_destructor<vtkAxesActor>(vtkAxesActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAxesActor_class) {
  emscripten::class_<vtkAxesActor, emscripten::base<vtkProp3D>>("vtkAxesActor")
    .smart_ptr<vtkSmartPointer<vtkAxesActor>>("vtkSmartPointer<vtkAxesActor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAxesActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxesActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAxesActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAxesActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAxesActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxesActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAxesActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetActors", &vtkAxesActor::GetActors, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkAxesActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkAxesActor::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkAxesActor::RenderOverlay, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkAxesActor::HasTranslucentPolygonalGeometry)
    .function("ShallowCopy", &vtkAxesActor::ShallowCopy, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkAxesActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkAxesActor::GetMTime)
    .function("GetRedrawMTime", &vtkAxesActor::GetRedrawMTime)
    .function("SetTotalLength", emscripten::select_overload<void(vtkAxesActor&, double, double, double)>([](vtkAxesActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetTotalLength( arg_0, arg_1, arg_2); }))
    .function("SetNormalizedShaftLength", emscripten::select_overload<void(vtkAxesActor&, double, double, double)>([](vtkAxesActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormalizedShaftLength( arg_0, arg_1, arg_2); }))
    .function("SetNormalizedTipLength", emscripten::select_overload<void(vtkAxesActor&, double, double, double)>([](vtkAxesActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormalizedTipLength( arg_0, arg_1, arg_2); }))
    .function("SetNormalizedLabelPosition", emscripten::select_overload<void(vtkAxesActor&, double, double, double)>([](vtkAxesActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormalizedLabelPosition( arg_0, arg_1, arg_2); }))
    .function("SetConeResolution", &vtkAxesActor::SetConeResolution)
    .function("GetConeResolutionMinValue", &vtkAxesActor::GetConeResolutionMinValue)
    .function("GetConeResolutionMaxValue", &vtkAxesActor::GetConeResolutionMaxValue)
    .function("GetConeResolution", &vtkAxesActor::GetConeResolution)
    .function("SetSphereResolution", &vtkAxesActor::SetSphereResolution)
    .function("GetSphereResolutionMinValue", &vtkAxesActor::GetSphereResolutionMinValue)
    .function("GetSphereResolutionMaxValue", &vtkAxesActor::GetSphereResolutionMaxValue)
    .function("GetSphereResolution", &vtkAxesActor::GetSphereResolution)
    .function("SetCylinderResolution", &vtkAxesActor::SetCylinderResolution)
    .function("GetCylinderResolutionMinValue", &vtkAxesActor::GetCylinderResolutionMinValue)
    .function("GetCylinderResolutionMaxValue", &vtkAxesActor::GetCylinderResolutionMaxValue)
    .function("GetCylinderResolution", &vtkAxesActor::GetCylinderResolution)
    .function("SetConeRadius", &vtkAxesActor::SetConeRadius)
    .function("GetConeRadiusMinValue", &vtkAxesActor::GetConeRadiusMinValue)
    .function("GetConeRadiusMaxValue", &vtkAxesActor::GetConeRadiusMaxValue)
    .function("GetConeRadius", &vtkAxesActor::GetConeRadius)
    .function("SetSphereRadius", &vtkAxesActor::SetSphereRadius)
    .function("GetSphereRadiusMinValue", &vtkAxesActor::GetSphereRadiusMinValue)
    .function("GetSphereRadiusMaxValue", &vtkAxesActor::GetSphereRadiusMaxValue)
    .function("GetSphereRadius", &vtkAxesActor::GetSphereRadius)
    .function("SetCylinderRadius", &vtkAxesActor::SetCylinderRadius)
    .function("GetCylinderRadiusMinValue", &vtkAxesActor::GetCylinderRadiusMinValue)
    .function("GetCylinderRadiusMaxValue", &vtkAxesActor::GetCylinderRadiusMaxValue)
    .function("GetCylinderRadius", &vtkAxesActor::GetCylinderRadius)
    .function("SetShaftType", &vtkAxesActor::SetShaftType)
    .function("SetShaftTypeToCylinder", &vtkAxesActor::SetShaftTypeToCylinder)
    .function("SetShaftTypeToLine", &vtkAxesActor::SetShaftTypeToLine)
    .function("SetShaftTypeToUserDefined", &vtkAxesActor::SetShaftTypeToUserDefined)
    .function("GetShaftType", &vtkAxesActor::GetShaftType)
    .function("SetTipType", &vtkAxesActor::SetTipType)
    .function("SetTipTypeToCone", &vtkAxesActor::SetTipTypeToCone)
    .function("SetTipTypeToSphere", &vtkAxesActor::SetTipTypeToSphere)
    .function("SetTipTypeToUserDefined", &vtkAxesActor::SetTipTypeToUserDefined)
    .function("GetTipType", &vtkAxesActor::GetTipType)
    .function("SetUserDefinedTip", &vtkAxesActor::SetUserDefinedTip, emscripten::allow_raw_pointers())
    .function("GetUserDefinedTip", &vtkAxesActor::GetUserDefinedTip, emscripten::allow_raw_pointers())
    .function("SetUserDefinedShaft", &vtkAxesActor::SetUserDefinedShaft, emscripten::allow_raw_pointers())
    .function("GetUserDefinedShaft", &vtkAxesActor::GetUserDefinedShaft, emscripten::allow_raw_pointers())
    .function("GetXAxisTipProperty", &vtkAxesActor::GetXAxisTipProperty, emscripten::allow_raw_pointers())
    .function("GetYAxisTipProperty", &vtkAxesActor::GetYAxisTipProperty, emscripten::allow_raw_pointers())
    .function("GetZAxisTipProperty", &vtkAxesActor::GetZAxisTipProperty, emscripten::allow_raw_pointers())
    .function("GetXAxisShaftProperty", &vtkAxesActor::GetXAxisShaftProperty, emscripten::allow_raw_pointers())
    .function("GetYAxisShaftProperty", &vtkAxesActor::GetYAxisShaftProperty, emscripten::allow_raw_pointers())
    .function("GetZAxisShaftProperty", &vtkAxesActor::GetZAxisShaftProperty, emscripten::allow_raw_pointers())
    .function("GetXAxisCaptionActor2D", &vtkAxesActor::GetXAxisCaptionActor2D, emscripten::allow_raw_pointers())
    .function("GetYAxisCaptionActor2D", &vtkAxesActor::GetYAxisCaptionActor2D, emscripten::allow_raw_pointers())
    .function("GetZAxisCaptionActor2D", &vtkAxesActor::GetZAxisCaptionActor2D, emscripten::allow_raw_pointers())
    .function("SetXAxisLabelText", emscripten::optional_override([](vtkAxesActor& self, const std::string & arg_0) -> void {  return self.SetXAxisLabelText( arg_0.c_str());}))
    .function("GetXAxisLabelText", emscripten::optional_override([](vtkAxesActor& self) -> std::string {  return self.GetXAxisLabelText();}))
    .function("SetYAxisLabelText", emscripten::optional_override([](vtkAxesActor& self, const std::string & arg_0) -> void {  return self.SetYAxisLabelText( arg_0.c_str());}))
    .function("GetYAxisLabelText", emscripten::optional_override([](vtkAxesActor& self) -> std::string {  return self.GetYAxisLabelText();}))
    .function("SetZAxisLabelText", emscripten::optional_override([](vtkAxesActor& self, const std::string & arg_0) -> void {  return self.SetZAxisLabelText( arg_0.c_str());}))
    .function("GetZAxisLabelText", emscripten::optional_override([](vtkAxesActor& self) -> std::string {  return self.GetZAxisLabelText();}))
    .function("SetAxisLabels", &vtkAxesActor::SetAxisLabels)
    .function("GetAxisLabels", &vtkAxesActor::GetAxisLabels)
    .function("AxisLabelsOn", &vtkAxesActor::AxisLabelsOn)
    .function("AxisLabelsOff", &vtkAxesActor::AxisLabelsOff);
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkAxesActor_0_2_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "vtkAxesActor_CYLINDER_SHAFT", vtkAxesActor::CYLINDER_SHAFT },
      { "vtkAxesActor_LINE_SHAFT", vtkAxesActor::LINE_SHAFT },
      { "vtkAxesActor_USER_DEFINED_SHAFT", vtkAxesActor::USER_DEFINED_SHAFT },
      { "vtkAxesActor_CONE_TIP", vtkAxesActor::CONE_TIP },
      { "vtkAxesActor_SPHERE_TIP", vtkAxesActor::SPHERE_TIP },
      { "vtkAxesActor_USER_DEFINED_TIP", vtkAxesActor::USER_DEFINED_TIP },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
