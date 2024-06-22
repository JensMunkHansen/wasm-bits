// JavaScript wrapper for vtkCubeAxesActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkCubeAxesActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkCubeAxesActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkStringArray.h"
#include "vtkCamera.h"
#include "vtkWindow.h"
#include "vtkTextProperty.h"
#include "vtkProperty.h"
#include "vtkCubeAxesActor.h"

EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkCubeAxesActor_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCubeAxesActor>(vtkCubeAxesActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCubeAxesActor_class) {
  using GridVisibility=vtkCubeAxesActor::GridVisibility;
  emscripten::class_<vtkCubeAxesActor, emscripten::base<vtkActor>>("vtkCubeAxesActor")
    .smart_ptr<vtkSmartPointer<vtkCubeAxesActor>>("vtkSmartPointer<vtkCubeAxesActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCubeAxesActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCubeAxesActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCubeAxesActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCubeAxesActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCubeAxesActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCubeAxesActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCubeAxesActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderOpaqueGeometry", &vtkCubeAxesActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentGeometry", &vtkCubeAxesActor::RenderTranslucentGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkCubeAxesActor::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkCubeAxesActor::RenderOverlay, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkCubeAxesActor::HasTranslucentPolygonalGeometry)
    .function("SetRebuildAxes", &vtkCubeAxesActor::SetRebuildAxes)
    .function("GetRebuildAxes", &vtkCubeAxesActor::GetRebuildAxes)
    .function("SetBounds", emscripten::select_overload<void(vtkCubeAxesActor&, double, double, double, double, double, double)>([](vtkCubeAxesActor& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetRenderedBounds", emscripten::select_overload<std::uintptr_t(vtkCubeAxesActor&)>([](vtkCubeAxesActor& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetRenderedBounds()); }))
    .function("SetXAxisRange", emscripten::select_overload<void(vtkCubeAxesActor&, double, double)>([](vtkCubeAxesActor& self, double arg_0, double arg_1) -> void { return self.SetXAxisRange( arg_0, arg_1); }))
    .function("SetYAxisRange", emscripten::select_overload<void(vtkCubeAxesActor&, double, double)>([](vtkCubeAxesActor& self, double arg_0, double arg_1) -> void { return self.SetYAxisRange( arg_0, arg_1); }))
    .function("SetZAxisRange", emscripten::select_overload<void(vtkCubeAxesActor&, double, double)>([](vtkCubeAxesActor& self, double arg_0, double arg_1) -> void { return self.SetZAxisRange( arg_0, arg_1); }))
    .function("GetAxisLabels", &vtkCubeAxesActor::GetAxisLabels, emscripten::allow_raw_pointers())
    .function("SetAxisLabels", &vtkCubeAxesActor::SetAxisLabels, emscripten::allow_raw_pointers())
    .function("SetScreenSize", &vtkCubeAxesActor::SetScreenSize)
    .function("GetScreenSize", &vtkCubeAxesActor::GetScreenSize)
    .function("SetLabelOffset", &vtkCubeAxesActor::SetLabelOffset)
    .function("GetLabelOffset", &vtkCubeAxesActor::GetLabelOffset)
    .function("SetCamera", &vtkCubeAxesActor::SetCamera, emscripten::allow_raw_pointers())
    .function("GetCamera", &vtkCubeAxesActor::GetCamera, emscripten::allow_raw_pointers())
    .function("SetFlyMode", &vtkCubeAxesActor::SetFlyMode)
    .function("GetFlyModeMinValue", &vtkCubeAxesActor::GetFlyModeMinValue)
    .function("GetFlyModeMaxValue", &vtkCubeAxesActor::GetFlyModeMaxValue)
    .function("GetFlyMode", &vtkCubeAxesActor::GetFlyMode)
    .function("SetFlyModeToOuterEdges", &vtkCubeAxesActor::SetFlyModeToOuterEdges)
    .function("SetFlyModeToClosestTriad", &vtkCubeAxesActor::SetFlyModeToClosestTriad)
    .function("SetFlyModeToFurthestTriad", &vtkCubeAxesActor::SetFlyModeToFurthestTriad)
    .function("SetFlyModeToStaticTriad", &vtkCubeAxesActor::SetFlyModeToStaticTriad)
    .function("SetFlyModeToStaticEdges", &vtkCubeAxesActor::SetFlyModeToStaticEdges)
    .function("SetXTitle", emscripten::optional_override([](vtkCubeAxesActor& self, const std::string & arg_0) -> void {  return self.SetXTitle( arg_0.c_str());}))
    .function("GetXTitle", emscripten::optional_override([](vtkCubeAxesActor& self) -> std::string {  return self.GetXTitle();}))
    .function("SetXUnits", emscripten::optional_override([](vtkCubeAxesActor& self, const std::string & arg_0) -> void {  return self.SetXUnits( arg_0.c_str());}))
    .function("GetXUnits", emscripten::optional_override([](vtkCubeAxesActor& self) -> std::string {  return self.GetXUnits();}))
    .function("SetYTitle", emscripten::optional_override([](vtkCubeAxesActor& self, const std::string & arg_0) -> void {  return self.SetYTitle( arg_0.c_str());}))
    .function("GetYTitle", emscripten::optional_override([](vtkCubeAxesActor& self) -> std::string {  return self.GetYTitle();}))
    .function("SetYUnits", emscripten::optional_override([](vtkCubeAxesActor& self, const std::string & arg_0) -> void {  return self.SetYUnits( arg_0.c_str());}))
    .function("GetYUnits", emscripten::optional_override([](vtkCubeAxesActor& self) -> std::string {  return self.GetYUnits();}))
    .function("SetZTitle", emscripten::optional_override([](vtkCubeAxesActor& self, const std::string & arg_0) -> void {  return self.SetZTitle( arg_0.c_str());}))
    .function("GetZTitle", emscripten::optional_override([](vtkCubeAxesActor& self) -> std::string {  return self.GetZTitle();}))
    .function("SetZUnits", emscripten::optional_override([](vtkCubeAxesActor& self, const std::string & arg_0) -> void {  return self.SetZUnits( arg_0.c_str());}))
    .function("GetZUnits", emscripten::optional_override([](vtkCubeAxesActor& self) -> std::string {  return self.GetZUnits();}))
    .function("SetXLabelFormat", emscripten::optional_override([](vtkCubeAxesActor& self, const std::string & arg_0) -> void {  return self.SetXLabelFormat( arg_0.c_str());}))
    .function("GetXLabelFormat", emscripten::optional_override([](vtkCubeAxesActor& self) -> std::string {  return self.GetXLabelFormat();}))
    .function("SetYLabelFormat", emscripten::optional_override([](vtkCubeAxesActor& self, const std::string & arg_0) -> void {  return self.SetYLabelFormat( arg_0.c_str());}))
    .function("GetYLabelFormat", emscripten::optional_override([](vtkCubeAxesActor& self) -> std::string {  return self.GetYLabelFormat();}))
    .function("SetZLabelFormat", emscripten::optional_override([](vtkCubeAxesActor& self, const std::string & arg_0) -> void {  return self.SetZLabelFormat( arg_0.c_str());}))
    .function("GetZLabelFormat", emscripten::optional_override([](vtkCubeAxesActor& self) -> std::string {  return self.GetZLabelFormat();}))
    .function("SetInertia", &vtkCubeAxesActor::SetInertia)
    .function("GetInertiaMinValue", &vtkCubeAxesActor::GetInertiaMinValue)
    .function("GetInertiaMaxValue", &vtkCubeAxesActor::GetInertiaMaxValue)
    .function("GetInertia", &vtkCubeAxesActor::GetInertia)
    .function("SetCornerOffset", &vtkCubeAxesActor::SetCornerOffset)
    .function("GetCornerOffset", &vtkCubeAxesActor::GetCornerOffset)
    .function("ReleaseGraphicsResources", &vtkCubeAxesActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetEnableDistanceLOD", &vtkCubeAxesActor::SetEnableDistanceLOD)
    .function("GetEnableDistanceLOD", &vtkCubeAxesActor::GetEnableDistanceLOD)
    .function("SetDistanceLODThreshold", &vtkCubeAxesActor::SetDistanceLODThreshold)
    .function("GetDistanceLODThresholdMinValue", &vtkCubeAxesActor::GetDistanceLODThresholdMinValue)
    .function("GetDistanceLODThresholdMaxValue", &vtkCubeAxesActor::GetDistanceLODThresholdMaxValue)
    .function("GetDistanceLODThreshold", &vtkCubeAxesActor::GetDistanceLODThreshold)
    .function("SetEnableViewAngleLOD", &vtkCubeAxesActor::SetEnableViewAngleLOD)
    .function("GetEnableViewAngleLOD", &vtkCubeAxesActor::GetEnableViewAngleLOD)
    .function("SetViewAngleLODThreshold", &vtkCubeAxesActor::SetViewAngleLODThreshold)
    .function("GetViewAngleLODThresholdMinValue", &vtkCubeAxesActor::GetViewAngleLODThresholdMinValue)
    .function("GetViewAngleLODThresholdMaxValue", &vtkCubeAxesActor::GetViewAngleLODThresholdMaxValue)
    .function("GetViewAngleLODThreshold", &vtkCubeAxesActor::GetViewAngleLODThreshold)
    .function("SetXAxisVisibility", &vtkCubeAxesActor::SetXAxisVisibility)
    .function("GetXAxisVisibility", &vtkCubeAxesActor::GetXAxisVisibility)
    .function("XAxisVisibilityOn", &vtkCubeAxesActor::XAxisVisibilityOn)
    .function("XAxisVisibilityOff", &vtkCubeAxesActor::XAxisVisibilityOff)
    .function("SetYAxisVisibility", &vtkCubeAxesActor::SetYAxisVisibility)
    .function("GetYAxisVisibility", &vtkCubeAxesActor::GetYAxisVisibility)
    .function("YAxisVisibilityOn", &vtkCubeAxesActor::YAxisVisibilityOn)
    .function("YAxisVisibilityOff", &vtkCubeAxesActor::YAxisVisibilityOff)
    .function("SetZAxisVisibility", &vtkCubeAxesActor::SetZAxisVisibility)
    .function("GetZAxisVisibility", &vtkCubeAxesActor::GetZAxisVisibility)
    .function("ZAxisVisibilityOn", &vtkCubeAxesActor::ZAxisVisibilityOn)
    .function("ZAxisVisibilityOff", &vtkCubeAxesActor::ZAxisVisibilityOff)
    .function("SetXAxisLabelVisibility", &vtkCubeAxesActor::SetXAxisLabelVisibility)
    .function("GetXAxisLabelVisibility", &vtkCubeAxesActor::GetXAxisLabelVisibility)
    .function("XAxisLabelVisibilityOn", &vtkCubeAxesActor::XAxisLabelVisibilityOn)
    .function("XAxisLabelVisibilityOff", &vtkCubeAxesActor::XAxisLabelVisibilityOff)
    .function("SetYAxisLabelVisibility", &vtkCubeAxesActor::SetYAxisLabelVisibility)
    .function("GetYAxisLabelVisibility", &vtkCubeAxesActor::GetYAxisLabelVisibility)
    .function("YAxisLabelVisibilityOn", &vtkCubeAxesActor::YAxisLabelVisibilityOn)
    .function("YAxisLabelVisibilityOff", &vtkCubeAxesActor::YAxisLabelVisibilityOff)
    .function("SetZAxisLabelVisibility", &vtkCubeAxesActor::SetZAxisLabelVisibility)
    .function("GetZAxisLabelVisibility", &vtkCubeAxesActor::GetZAxisLabelVisibility)
    .function("ZAxisLabelVisibilityOn", &vtkCubeAxesActor::ZAxisLabelVisibilityOn)
    .function("ZAxisLabelVisibilityOff", &vtkCubeAxesActor::ZAxisLabelVisibilityOff)
    .function("SetXAxisTickVisibility", &vtkCubeAxesActor::SetXAxisTickVisibility)
    .function("GetXAxisTickVisibility", &vtkCubeAxesActor::GetXAxisTickVisibility)
    .function("XAxisTickVisibilityOn", &vtkCubeAxesActor::XAxisTickVisibilityOn)
    .function("XAxisTickVisibilityOff", &vtkCubeAxesActor::XAxisTickVisibilityOff)
    .function("SetYAxisTickVisibility", &vtkCubeAxesActor::SetYAxisTickVisibility)
    .function("GetYAxisTickVisibility", &vtkCubeAxesActor::GetYAxisTickVisibility)
    .function("YAxisTickVisibilityOn", &vtkCubeAxesActor::YAxisTickVisibilityOn)
    .function("YAxisTickVisibilityOff", &vtkCubeAxesActor::YAxisTickVisibilityOff)
    .function("SetZAxisTickVisibility", &vtkCubeAxesActor::SetZAxisTickVisibility)
    .function("GetZAxisTickVisibility", &vtkCubeAxesActor::GetZAxisTickVisibility)
    .function("ZAxisTickVisibilityOn", &vtkCubeAxesActor::ZAxisTickVisibilityOn)
    .function("ZAxisTickVisibilityOff", &vtkCubeAxesActor::ZAxisTickVisibilityOff)
    .function("SetXAxisMinorTickVisibility", &vtkCubeAxesActor::SetXAxisMinorTickVisibility)
    .function("GetXAxisMinorTickVisibility", &vtkCubeAxesActor::GetXAxisMinorTickVisibility)
    .function("XAxisMinorTickVisibilityOn", &vtkCubeAxesActor::XAxisMinorTickVisibilityOn)
    .function("XAxisMinorTickVisibilityOff", &vtkCubeAxesActor::XAxisMinorTickVisibilityOff)
    .function("SetYAxisMinorTickVisibility", &vtkCubeAxesActor::SetYAxisMinorTickVisibility)
    .function("GetYAxisMinorTickVisibility", &vtkCubeAxesActor::GetYAxisMinorTickVisibility)
    .function("YAxisMinorTickVisibilityOn", &vtkCubeAxesActor::YAxisMinorTickVisibilityOn)
    .function("YAxisMinorTickVisibilityOff", &vtkCubeAxesActor::YAxisMinorTickVisibilityOff)
    .function("SetZAxisMinorTickVisibility", &vtkCubeAxesActor::SetZAxisMinorTickVisibility)
    .function("GetZAxisMinorTickVisibility", &vtkCubeAxesActor::GetZAxisMinorTickVisibility)
    .function("ZAxisMinorTickVisibilityOn", &vtkCubeAxesActor::ZAxisMinorTickVisibilityOn)
    .function("ZAxisMinorTickVisibilityOff", &vtkCubeAxesActor::ZAxisMinorTickVisibilityOff)
    .function("SetDrawXGridlines", &vtkCubeAxesActor::SetDrawXGridlines)
    .function("GetDrawXGridlines", &vtkCubeAxesActor::GetDrawXGridlines)
    .function("DrawXGridlinesOn", &vtkCubeAxesActor::DrawXGridlinesOn)
    .function("DrawXGridlinesOff", &vtkCubeAxesActor::DrawXGridlinesOff)
    .function("SetDrawYGridlines", &vtkCubeAxesActor::SetDrawYGridlines)
    .function("GetDrawYGridlines", &vtkCubeAxesActor::GetDrawYGridlines)
    .function("DrawYGridlinesOn", &vtkCubeAxesActor::DrawYGridlinesOn)
    .function("DrawYGridlinesOff", &vtkCubeAxesActor::DrawYGridlinesOff)
    .function("SetDrawZGridlines", &vtkCubeAxesActor::SetDrawZGridlines)
    .function("GetDrawZGridlines", &vtkCubeAxesActor::GetDrawZGridlines)
    .function("DrawZGridlinesOn", &vtkCubeAxesActor::DrawZGridlinesOn)
    .function("DrawZGridlinesOff", &vtkCubeAxesActor::DrawZGridlinesOff)
    .function("SetDrawXInnerGridlines", &vtkCubeAxesActor::SetDrawXInnerGridlines)
    .function("GetDrawXInnerGridlines", &vtkCubeAxesActor::GetDrawXInnerGridlines)
    .function("DrawXInnerGridlinesOn", &vtkCubeAxesActor::DrawXInnerGridlinesOn)
    .function("DrawXInnerGridlinesOff", &vtkCubeAxesActor::DrawXInnerGridlinesOff)
    .function("SetDrawYInnerGridlines", &vtkCubeAxesActor::SetDrawYInnerGridlines)
    .function("GetDrawYInnerGridlines", &vtkCubeAxesActor::GetDrawYInnerGridlines)
    .function("DrawYInnerGridlinesOn", &vtkCubeAxesActor::DrawYInnerGridlinesOn)
    .function("DrawYInnerGridlinesOff", &vtkCubeAxesActor::DrawYInnerGridlinesOff)
    .function("SetDrawZInnerGridlines", &vtkCubeAxesActor::SetDrawZInnerGridlines)
    .function("GetDrawZInnerGridlines", &vtkCubeAxesActor::GetDrawZInnerGridlines)
    .function("DrawZInnerGridlinesOn", &vtkCubeAxesActor::DrawZInnerGridlinesOn)
    .function("DrawZInnerGridlinesOff", &vtkCubeAxesActor::DrawZInnerGridlinesOff)
    .function("SetDrawXGridpolys", &vtkCubeAxesActor::SetDrawXGridpolys)
    .function("GetDrawXGridpolys", &vtkCubeAxesActor::GetDrawXGridpolys)
    .function("DrawXGridpolysOn", &vtkCubeAxesActor::DrawXGridpolysOn)
    .function("DrawXGridpolysOff", &vtkCubeAxesActor::DrawXGridpolysOff)
    .function("SetDrawYGridpolys", &vtkCubeAxesActor::SetDrawYGridpolys)
    .function("GetDrawYGridpolys", &vtkCubeAxesActor::GetDrawYGridpolys)
    .function("DrawYGridpolysOn", &vtkCubeAxesActor::DrawYGridpolysOn)
    .function("DrawYGridpolysOff", &vtkCubeAxesActor::DrawYGridpolysOff)
    .function("SetDrawZGridpolys", &vtkCubeAxesActor::SetDrawZGridpolys)
    .function("GetDrawZGridpolys", &vtkCubeAxesActor::GetDrawZGridpolys)
    .function("DrawZGridpolysOn", &vtkCubeAxesActor::DrawZGridpolysOn)
    .function("DrawZGridpolysOff", &vtkCubeAxesActor::DrawZGridpolysOff)
    .function("GetTitleTextProperty", &vtkCubeAxesActor::GetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("SetXAxesTitleProperty", &vtkCubeAxesActor::SetXAxesTitleProperty, emscripten::allow_raw_pointers())
    .function("GetXAxesTitleProperty", &vtkCubeAxesActor::GetXAxesTitleProperty, emscripten::allow_raw_pointers())
    .function("SetYAxesTitleProperty", &vtkCubeAxesActor::SetYAxesTitleProperty, emscripten::allow_raw_pointers())
    .function("GetYAxesTitleProperty", &vtkCubeAxesActor::GetYAxesTitleProperty, emscripten::allow_raw_pointers())
    .function("SetZAxesTitleProperty", &vtkCubeAxesActor::SetZAxesTitleProperty, emscripten::allow_raw_pointers())
    .function("GetZAxesTitleProperty", &vtkCubeAxesActor::GetZAxesTitleProperty, emscripten::allow_raw_pointers())
    .function("GetLabelTextProperty", &vtkCubeAxesActor::GetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("SetXAxesLabelProperty", &vtkCubeAxesActor::SetXAxesLabelProperty, emscripten::allow_raw_pointers())
    .function("GetXAxesLabelProperty", &vtkCubeAxesActor::GetXAxesLabelProperty, emscripten::allow_raw_pointers())
    .function("SetYAxesLabelProperty", &vtkCubeAxesActor::SetYAxesLabelProperty, emscripten::allow_raw_pointers())
    .function("GetYAxesLabelProperty", &vtkCubeAxesActor::GetYAxesLabelProperty, emscripten::allow_raw_pointers())
    .function("SetZAxesLabelProperty", &vtkCubeAxesActor::SetZAxesLabelProperty, emscripten::allow_raw_pointers())
    .function("GetZAxesLabelProperty", &vtkCubeAxesActor::GetZAxesLabelProperty, emscripten::allow_raw_pointers())
    .function("SetXAxesLinesProperty", &vtkCubeAxesActor::SetXAxesLinesProperty, emscripten::allow_raw_pointers())
    .function("GetXAxesLinesProperty", &vtkCubeAxesActor::GetXAxesLinesProperty, emscripten::allow_raw_pointers())
    .function("SetYAxesLinesProperty", &vtkCubeAxesActor::SetYAxesLinesProperty, emscripten::allow_raw_pointers())
    .function("GetYAxesLinesProperty", &vtkCubeAxesActor::GetYAxesLinesProperty, emscripten::allow_raw_pointers())
    .function("SetZAxesLinesProperty", &vtkCubeAxesActor::SetZAxesLinesProperty, emscripten::allow_raw_pointers())
    .function("GetZAxesLinesProperty", &vtkCubeAxesActor::GetZAxesLinesProperty, emscripten::allow_raw_pointers())
    .function("SetXAxesGridlinesProperty", &vtkCubeAxesActor::SetXAxesGridlinesProperty, emscripten::allow_raw_pointers())
    .function("GetXAxesGridlinesProperty", &vtkCubeAxesActor::GetXAxesGridlinesProperty, emscripten::allow_raw_pointers())
    .function("SetYAxesGridlinesProperty", &vtkCubeAxesActor::SetYAxesGridlinesProperty, emscripten::allow_raw_pointers())
    .function("GetYAxesGridlinesProperty", &vtkCubeAxesActor::GetYAxesGridlinesProperty, emscripten::allow_raw_pointers())
    .function("SetZAxesGridlinesProperty", &vtkCubeAxesActor::SetZAxesGridlinesProperty, emscripten::allow_raw_pointers())
    .function("GetZAxesGridlinesProperty", &vtkCubeAxesActor::GetZAxesGridlinesProperty, emscripten::allow_raw_pointers())
    .function("SetXAxesInnerGridlinesProperty", &vtkCubeAxesActor::SetXAxesInnerGridlinesProperty, emscripten::allow_raw_pointers())
    .function("GetXAxesInnerGridlinesProperty", &vtkCubeAxesActor::GetXAxesInnerGridlinesProperty, emscripten::allow_raw_pointers())
    .function("SetYAxesInnerGridlinesProperty", &vtkCubeAxesActor::SetYAxesInnerGridlinesProperty, emscripten::allow_raw_pointers())
    .function("GetYAxesInnerGridlinesProperty", &vtkCubeAxesActor::GetYAxesInnerGridlinesProperty, emscripten::allow_raw_pointers())
    .function("SetZAxesInnerGridlinesProperty", &vtkCubeAxesActor::SetZAxesInnerGridlinesProperty, emscripten::allow_raw_pointers())
    .function("GetZAxesInnerGridlinesProperty", &vtkCubeAxesActor::GetZAxesInnerGridlinesProperty, emscripten::allow_raw_pointers())
    .function("SetXAxesGridpolysProperty", &vtkCubeAxesActor::SetXAxesGridpolysProperty, emscripten::allow_raw_pointers())
    .function("GetXAxesGridpolysProperty", &vtkCubeAxesActor::GetXAxesGridpolysProperty, emscripten::allow_raw_pointers())
    .function("SetYAxesGridpolysProperty", &vtkCubeAxesActor::SetYAxesGridpolysProperty, emscripten::allow_raw_pointers())
    .function("GetYAxesGridpolysProperty", &vtkCubeAxesActor::GetYAxesGridpolysProperty, emscripten::allow_raw_pointers())
    .function("SetZAxesGridpolysProperty", &vtkCubeAxesActor::SetZAxesGridpolysProperty, emscripten::allow_raw_pointers())
    .function("GetZAxesGridpolysProperty", &vtkCubeAxesActor::GetZAxesGridpolysProperty, emscripten::allow_raw_pointers())
    .function("SetTickLocation", &vtkCubeAxesActor::SetTickLocation)
    .function("GetTickLocationMinValue", &vtkCubeAxesActor::GetTickLocationMinValue)
    .function("GetTickLocationMaxValue", &vtkCubeAxesActor::GetTickLocationMaxValue)
    .function("GetTickLocation", &vtkCubeAxesActor::GetTickLocation)
    .function("SetTickLocationToInside", &vtkCubeAxesActor::SetTickLocationToInside)
    .function("SetTickLocationToOutside", &vtkCubeAxesActor::SetTickLocationToOutside)
    .function("SetTickLocationToBoth", &vtkCubeAxesActor::SetTickLocationToBoth)
    .function("SetLabelScaling", &vtkCubeAxesActor::SetLabelScaling)
    .function("SetUseTextActor3D", &vtkCubeAxesActor::SetUseTextActor3D)
    .function("GetUseTextActor3D", &vtkCubeAxesActor::GetUseTextActor3D)
    .function("SetUse2DMode", &vtkCubeAxesActor::SetUse2DMode)
    .function("GetUse2DMode", &vtkCubeAxesActor::GetUse2DMode)
    .function("SetSaveTitlePosition", &vtkCubeAxesActor::SetSaveTitlePosition)
    .function("SetOrientedBounds", emscripten::select_overload<void(vtkCubeAxesActor&, double, double, double, double, double, double)>([](vtkCubeAxesActor& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetOrientedBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetUseOrientedBounds", &vtkCubeAxesActor::SetUseOrientedBounds)
    .function("GetUseOrientedBounds", &vtkCubeAxesActor::GetUseOrientedBounds)
    .function("SetAxisBaseForX", emscripten::select_overload<void(vtkCubeAxesActor&, double, double, double)>([](vtkCubeAxesActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAxisBaseForX( arg_0, arg_1, arg_2); }))
    .function("SetAxisBaseForY", emscripten::select_overload<void(vtkCubeAxesActor&, double, double, double)>([](vtkCubeAxesActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAxisBaseForY( arg_0, arg_1, arg_2); }))
    .function("SetAxisBaseForZ", emscripten::select_overload<void(vtkCubeAxesActor&, double, double, double)>([](vtkCubeAxesActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAxisBaseForZ( arg_0, arg_1, arg_2); }))
    .function("SetAxisOrigin", emscripten::select_overload<void(vtkCubeAxesActor&, double, double, double)>([](vtkCubeAxesActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAxisOrigin( arg_0, arg_1, arg_2); }))
    .function("SetUseAxisOrigin", &vtkCubeAxesActor::SetUseAxisOrigin)
    .function("GetUseAxisOrigin", &vtkCubeAxesActor::GetUseAxisOrigin)
    .function("SetGridLineLocation", &vtkCubeAxesActor::SetGridLineLocation)
    .function("GetGridLineLocation", &vtkCubeAxesActor::GetGridLineLocation)
    .function("SetStickyAxes", &vtkCubeAxesActor::SetStickyAxes)
    .function("GetStickyAxes", &vtkCubeAxesActor::GetStickyAxes)
    .function("StickyAxesOn", &vtkCubeAxesActor::StickyAxesOn)
    .function("StickyAxesOff", &vtkCubeAxesActor::StickyAxesOff)
    .function("SetCenterStickyAxes", &vtkCubeAxesActor::SetCenterStickyAxes)
    .function("GetCenterStickyAxes", &vtkCubeAxesActor::GetCenterStickyAxes)
    .function("CenterStickyAxesOn", &vtkCubeAxesActor::CenterStickyAxesOn)
    .function("CenterStickyAxesOff", &vtkCubeAxesActor::CenterStickyAxesOff);
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkCubeAxesActor_0_2_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "vtkCubeAxesActor_VTK_FLY_OUTER_EDGES", vtkCubeAxesActor::VTK_FLY_OUTER_EDGES },
      { "vtkCubeAxesActor_VTK_FLY_CLOSEST_TRIAD", vtkCubeAxesActor::VTK_FLY_CLOSEST_TRIAD },
      { "vtkCubeAxesActor_VTK_FLY_FURTHEST_TRIAD", vtkCubeAxesActor::VTK_FLY_FURTHEST_TRIAD },
      { "vtkCubeAxesActor_VTK_FLY_STATIC_TRIAD", vtkCubeAxesActor::VTK_FLY_STATIC_TRIAD },
      { "vtkCubeAxesActor_VTK_FLY_STATIC_EDGES", vtkCubeAxesActor::VTK_FLY_STATIC_EDGES },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkCubeAxesActor_1_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkCubeAxesActor_VTK_TICKS_INSIDE", vtkCubeAxesActor::VTK_TICKS_INSIDE },
      { "vtkCubeAxesActor_VTK_TICKS_OUTSIDE", vtkCubeAxesActor::VTK_TICKS_OUTSIDE },
      { "vtkCubeAxesActor_VTK_TICKS_BOTH", vtkCubeAxesActor::VTK_TICKS_BOTH },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkCubeAxesActor_2_2_constants) {
    typedef vtkCubeAxesActor::GridVisibility cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkCubeAxesActor_GridVisibility_VTK_GRID_LINES_ALL", vtkCubeAxesActor::VTK_GRID_LINES_ALL },
      { "vtkCubeAxesActor_GridVisibility_VTK_GRID_LINES_CLOSEST", vtkCubeAxesActor::VTK_GRID_LINES_CLOSEST },
      { "vtkCubeAxesActor_GridVisibility_VTK_GRID_LINES_FURTHEST", vtkCubeAxesActor::VTK_GRID_LINES_FURTHEST },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
