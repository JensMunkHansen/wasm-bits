// JavaScript wrapper for vtkCubeAxesActor2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkCubeAxesActor2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkCubeAxesActor2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataSet.h"
#include "vtkProp.h"
#include "vtkCamera.h"
#include "vtkAxisActor2D.h"
#include "vtkTextProperty.h"
#include "vtkWindow.h"
#include "vtkCubeAxesActor2D.h"

EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkCubeAxesActor2D_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCubeAxesActor2D>(vtkCubeAxesActor2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCubeAxesActor2D_class) {
  emscripten::class_<vtkCubeAxesActor2D, emscripten::base<vtkActor2D>>("vtkCubeAxesActor2D")
    .smart_ptr<vtkSmartPointer<vtkCubeAxesActor2D>>("vtkSmartPointer<vtkCubeAxesActor2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCubeAxesActor2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCubeAxesActor2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCubeAxesActor2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCubeAxesActor2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCubeAxesActor2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCubeAxesActor2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCubeAxesActor2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderOverlay", &vtkCubeAxesActor2D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkCubeAxesActor2D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkCubeAxesActor2D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkCubeAxesActor2D::HasTranslucentPolygonalGeometry)
    .function("SetInputConnection", &vtkCubeAxesActor2D::SetInputConnection, emscripten::allow_raw_pointers())
    .function("SetInputData", &vtkCubeAxesActor2D::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkCubeAxesActor2D::GetInput, emscripten::allow_raw_pointers())
    .function("SetViewProp", &vtkCubeAxesActor2D::SetViewProp, emscripten::allow_raw_pointers())
    .function("GetViewProp", &vtkCubeAxesActor2D::GetViewProp, emscripten::allow_raw_pointers())
    .function("SetBounds", emscripten::select_overload<void(vtkCubeAxesActor2D&, double, double, double, double, double, double)>([](vtkCubeAxesActor2D& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetRanges", emscripten::select_overload<void(vtkCubeAxesActor2D&, double, double, double, double, double, double)>([](vtkCubeAxesActor2D& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetRanges( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetXOrigin", &vtkCubeAxesActor2D::SetXOrigin)
    .function("SetYOrigin", &vtkCubeAxesActor2D::SetYOrigin)
    .function("SetZOrigin", &vtkCubeAxesActor2D::SetZOrigin)
    .function("SetUseRanges", &vtkCubeAxesActor2D::SetUseRanges)
    .function("GetUseRanges", &vtkCubeAxesActor2D::GetUseRanges)
    .function("UseRangesOn", &vtkCubeAxesActor2D::UseRangesOn)
    .function("UseRangesOff", &vtkCubeAxesActor2D::UseRangesOff)
    .function("SetCamera", &vtkCubeAxesActor2D::SetCamera, emscripten::allow_raw_pointers())
    .function("GetCamera", &vtkCubeAxesActor2D::GetCamera, emscripten::allow_raw_pointers())
    .function("SetFlyMode", &vtkCubeAxesActor2D::SetFlyMode)
    .function("GetFlyModeMinValue", &vtkCubeAxesActor2D::GetFlyModeMinValue)
    .function("GetFlyModeMaxValue", &vtkCubeAxesActor2D::GetFlyModeMaxValue)
    .function("GetFlyMode", &vtkCubeAxesActor2D::GetFlyMode)
    .function("SetFlyModeToOuterEdges", &vtkCubeAxesActor2D::SetFlyModeToOuterEdges)
    .function("SetFlyModeToClosestTriad", &vtkCubeAxesActor2D::SetFlyModeToClosestTriad)
    .function("SetFlyModeToNone", &vtkCubeAxesActor2D::SetFlyModeToNone)
    .function("SetScaling", &vtkCubeAxesActor2D::SetScaling)
    .function("GetScaling", &vtkCubeAxesActor2D::GetScaling)
    .function("ScalingOn", &vtkCubeAxesActor2D::ScalingOn)
    .function("ScalingOff", &vtkCubeAxesActor2D::ScalingOff)
    .function("SetNumberOfLabels", &vtkCubeAxesActor2D::SetNumberOfLabels)
    .function("GetNumberOfLabelsMinValue", &vtkCubeAxesActor2D::GetNumberOfLabelsMinValue)
    .function("GetNumberOfLabelsMaxValue", &vtkCubeAxesActor2D::GetNumberOfLabelsMaxValue)
    .function("GetNumberOfLabels", &vtkCubeAxesActor2D::GetNumberOfLabels)
    .function("SetXLabel", emscripten::optional_override([](vtkCubeAxesActor2D& self, const std::string & arg_0) -> void {  return self.SetXLabel( arg_0.c_str());}))
    .function("GetXLabel", emscripten::optional_override([](vtkCubeAxesActor2D& self) -> std::string {  return self.GetXLabel();}))
    .function("SetYLabel", emscripten::optional_override([](vtkCubeAxesActor2D& self, const std::string & arg_0) -> void {  return self.SetYLabel( arg_0.c_str());}))
    .function("GetYLabel", emscripten::optional_override([](vtkCubeAxesActor2D& self) -> std::string {  return self.GetYLabel();}))
    .function("SetZLabel", emscripten::optional_override([](vtkCubeAxesActor2D& self, const std::string & arg_0) -> void {  return self.SetZLabel( arg_0.c_str());}))
    .function("GetZLabel", emscripten::optional_override([](vtkCubeAxesActor2D& self) -> std::string {  return self.GetZLabel();}))
    .function("GetXAxisActor2D", &vtkCubeAxesActor2D::GetXAxisActor2D, emscripten::allow_raw_pointers())
    .function("GetYAxisActor2D", &vtkCubeAxesActor2D::GetYAxisActor2D, emscripten::allow_raw_pointers())
    .function("GetZAxisActor2D", &vtkCubeAxesActor2D::GetZAxisActor2D, emscripten::allow_raw_pointers())
    .function("SetAxisTitleTextProperty", &vtkCubeAxesActor2D::SetAxisTitleTextProperty, emscripten::allow_raw_pointers())
    .function("GetAxisTitleTextProperty", &vtkCubeAxesActor2D::GetAxisTitleTextProperty, emscripten::allow_raw_pointers())
    .function("SetAxisLabelTextProperty", &vtkCubeAxesActor2D::SetAxisLabelTextProperty, emscripten::allow_raw_pointers())
    .function("GetAxisLabelTextProperty", &vtkCubeAxesActor2D::GetAxisLabelTextProperty, emscripten::allow_raw_pointers())
    .function("SetLabelFormat", emscripten::optional_override([](vtkCubeAxesActor2D& self, const std::string & arg_0) -> void {  return self.SetLabelFormat( arg_0.c_str());}))
    .function("GetLabelFormat", emscripten::optional_override([](vtkCubeAxesActor2D& self) -> std::string {  return self.GetLabelFormat();}))
    .function("SetFontFactor", &vtkCubeAxesActor2D::SetFontFactor)
    .function("GetFontFactorMinValue", &vtkCubeAxesActor2D::GetFontFactorMinValue)
    .function("GetFontFactorMaxValue", &vtkCubeAxesActor2D::GetFontFactorMaxValue)
    .function("GetFontFactor", &vtkCubeAxesActor2D::GetFontFactor)
    .function("SetInertia", &vtkCubeAxesActor2D::SetInertia)
    .function("GetInertiaMinValue", &vtkCubeAxesActor2D::GetInertiaMinValue)
    .function("GetInertiaMaxValue", &vtkCubeAxesActor2D::GetInertiaMaxValue)
    .function("GetInertia", &vtkCubeAxesActor2D::GetInertia)
    .function("SetShowActualBounds", &vtkCubeAxesActor2D::SetShowActualBounds)
    .function("GetShowActualBoundsMinValue", &vtkCubeAxesActor2D::GetShowActualBoundsMinValue)
    .function("GetShowActualBoundsMaxValue", &vtkCubeAxesActor2D::GetShowActualBoundsMaxValue)
    .function("GetShowActualBounds", &vtkCubeAxesActor2D::GetShowActualBounds)
    .function("SetCornerOffset", &vtkCubeAxesActor2D::SetCornerOffset)
    .function("GetCornerOffset", &vtkCubeAxesActor2D::GetCornerOffset)
    .function("ReleaseGraphicsResources", &vtkCubeAxesActor2D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetXAxisVisibility", &vtkCubeAxesActor2D::SetXAxisVisibility)
    .function("GetXAxisVisibility", &vtkCubeAxesActor2D::GetXAxisVisibility)
    .function("XAxisVisibilityOn", &vtkCubeAxesActor2D::XAxisVisibilityOn)
    .function("XAxisVisibilityOff", &vtkCubeAxesActor2D::XAxisVisibilityOff)
    .function("SetYAxisVisibility", &vtkCubeAxesActor2D::SetYAxisVisibility)
    .function("GetYAxisVisibility", &vtkCubeAxesActor2D::GetYAxisVisibility)
    .function("YAxisVisibilityOn", &vtkCubeAxesActor2D::YAxisVisibilityOn)
    .function("YAxisVisibilityOff", &vtkCubeAxesActor2D::YAxisVisibilityOff)
    .function("SetZAxisVisibility", &vtkCubeAxesActor2D::SetZAxisVisibility)
    .function("GetZAxisVisibility", &vtkCubeAxesActor2D::GetZAxisVisibility)
    .function("ZAxisVisibilityOn", &vtkCubeAxesActor2D::ZAxisVisibilityOn)
    .function("ZAxisVisibilityOff", &vtkCubeAxesActor2D::ZAxisVisibilityOff)
    .function("ShallowCopy", emscripten::select_overload<void(vtkCubeAxesActor2D&, vtkCubeAxesActor2D*)>([](vtkCubeAxesActor2D& self, vtkCubeAxesActor2D* arg_0) -> void { return self.ShallowCopy( arg_0); }), emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkCubeAxesActor2D_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkCubeAxesActor2D_VTK_FLY_OUTER_EDGES", vtkCubeAxesActor2D::VTK_FLY_OUTER_EDGES },
      { "vtkCubeAxesActor2D_VTK_FLY_CLOSEST_TRIAD", vtkCubeAxesActor2D::VTK_FLY_CLOSEST_TRIAD },
      { "vtkCubeAxesActor2D_VTK_FLY_NONE", vtkCubeAxesActor2D::VTK_FLY_NONE },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
