// JavaScript wrapper for vtkPolarAxesActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkPolarAxesActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkPolarAxesActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkCamera.h"
#include "vtkWindow.h"
#include "vtkTextProperty.h"
#include "vtkProperty.h"
#include "vtkPolarAxesActor.h"

EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkPolarAxesActor_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPolarAxesActor>(vtkPolarAxesActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolarAxesActor_class) {
  using TitleLocation=vtkPolarAxesActor::TitleLocation;
  emscripten::class_<vtkPolarAxesActor, emscripten::base<vtkActor>>("vtkPolarAxesActor")
    .smart_ptr<vtkSmartPointer<vtkPolarAxesActor>>("vtkSmartPointer<vtkPolarAxesActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolarAxesActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolarAxesActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolarAxesActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolarAxesActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolarAxesActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolarAxesActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolarAxesActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderOpaqueGeometry", &vtkPolarAxesActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkPolarAxesActor::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkPolarAxesActor::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("SetPole", emscripten::select_overload<void(vtkPolarAxesActor&, double, double, double)>([](vtkPolarAxesActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPole( arg_0, arg_1, arg_2); }))
    .function("SetLog", &vtkPolarAxesActor::SetLog)
    .function("GetLog", &vtkPolarAxesActor::GetLog)
    .function("LogOn", &vtkPolarAxesActor::LogOn)
    .function("LogOff", &vtkPolarAxesActor::LogOff)
    .function("SetRequestedNumberOfRadialAxes", &vtkPolarAxesActor::SetRequestedNumberOfRadialAxes)
    .function("GetRequestedNumberOfRadialAxesMinValue", &vtkPolarAxesActor::GetRequestedNumberOfRadialAxesMinValue)
    .function("GetRequestedNumberOfRadialAxesMaxValue", &vtkPolarAxesActor::GetRequestedNumberOfRadialAxesMaxValue)
    .function("GetRequestedNumberOfRadialAxes", &vtkPolarAxesActor::GetRequestedNumberOfRadialAxes)
    .function("SetRequestedNumberOfPolarAxes", &vtkPolarAxesActor::SetRequestedNumberOfPolarAxes)
    .function("GetRequestedNumberOfPolarAxesMinValue", &vtkPolarAxesActor::GetRequestedNumberOfPolarAxesMinValue)
    .function("GetRequestedNumberOfPolarAxesMaxValue", &vtkPolarAxesActor::GetRequestedNumberOfPolarAxesMaxValue)
    .function("GetRequestedNumberOfPolarAxes", &vtkPolarAxesActor::GetRequestedNumberOfPolarAxes)
    .function("AutoSubdividePolarAxisOn", &vtkPolarAxesActor::AutoSubdividePolarAxisOn)
    .function("AutoSubdividePolarAxisOff", &vtkPolarAxesActor::AutoSubdividePolarAxisOff)
    .function("GetNumberOfPolarAxisTicks", &vtkPolarAxesActor::GetNumberOfPolarAxisTicks)
    .function("SetRange", emscripten::select_overload<void(vtkPolarAxesActor&, double, double)>([](vtkPolarAxesActor& self, double arg_0, double arg_1) -> void { return self.SetRange( arg_0, arg_1); }))
    .function("SetMinimumRadius", &vtkPolarAxesActor::SetMinimumRadius)
    .function("GetMinimumRadius", &vtkPolarAxesActor::GetMinimumRadius)
    .function("SetMaximumRadius", &vtkPolarAxesActor::SetMaximumRadius)
    .function("GetMaximumRadius", &vtkPolarAxesActor::GetMaximumRadius)
    .function("SetMinimumAngle", &vtkPolarAxesActor::SetMinimumAngle)
    .function("GetMinimumAngle", &vtkPolarAxesActor::GetMinimumAngle)
    .function("SetMaximumAngle", &vtkPolarAxesActor::SetMaximumAngle)
    .function("GetMaximumAngle", &vtkPolarAxesActor::GetMaximumAngle)
    .function("SetSmallestVisiblePolarAngle", &vtkPolarAxesActor::SetSmallestVisiblePolarAngle)
    .function("GetSmallestVisiblePolarAngleMinValue", &vtkPolarAxesActor::GetSmallestVisiblePolarAngleMinValue)
    .function("GetSmallestVisiblePolarAngleMaxValue", &vtkPolarAxesActor::GetSmallestVisiblePolarAngleMaxValue)
    .function("GetSmallestVisiblePolarAngle", &vtkPolarAxesActor::GetSmallestVisiblePolarAngle)
    .function("SetTickLocation", &vtkPolarAxesActor::SetTickLocation)
    .function("GetTickLocationMinValue", &vtkPolarAxesActor::GetTickLocationMinValue)
    .function("GetTickLocationMaxValue", &vtkPolarAxesActor::GetTickLocationMaxValue)
    .function("GetTickLocation", &vtkPolarAxesActor::GetTickLocation)
    .function("SetRadialUnits", &vtkPolarAxesActor::SetRadialUnits)
    .function("GetRadialUnits", &vtkPolarAxesActor::GetRadialUnits)
    .function("SetScreenSize", &vtkPolarAxesActor::SetScreenSize)
    .function("GetScreenSize", &vtkPolarAxesActor::GetScreenSize)
    .function("SetPolarTitleOffset", emscripten::select_overload<void(vtkPolarAxesActor&, double, double)>([](vtkPolarAxesActor& self, double arg_0, double arg_1) -> void { return self.SetPolarTitleOffset( arg_0, arg_1); }))
    .function("SetRadialTitleOffset", emscripten::select_overload<void(vtkPolarAxesActor&, double, double)>([](vtkPolarAxesActor& self, double arg_0, double arg_1) -> void { return self.SetRadialTitleOffset( arg_0, arg_1); }))
    .function("GetPolarLabelOffset", &vtkPolarAxesActor::GetPolarLabelOffset)
    .function("SetPolarLabelOffset", &vtkPolarAxesActor::SetPolarLabelOffset)
    .function("GetPolarExponentOffset", &vtkPolarAxesActor::GetPolarExponentOffset)
    .function("SetPolarExponentOffset", &vtkPolarAxesActor::SetPolarExponentOffset)
    .function("SetCamera", &vtkPolarAxesActor::SetCamera, emscripten::allow_raw_pointers())
    .function("GetCamera", &vtkPolarAxesActor::GetCamera, emscripten::allow_raw_pointers())
    .function("SetPolarAxisTitle", emscripten::optional_override([](vtkPolarAxesActor& self, const std::string & arg_0) -> void {  return self.SetPolarAxisTitle( arg_0.c_str());}))
    .function("GetPolarAxisTitle", emscripten::optional_override([](vtkPolarAxesActor& self) -> std::string {  return self.GetPolarAxisTitle();}))
    .function("SetPolarLabelFormat", emscripten::optional_override([](vtkPolarAxesActor& self, const std::string & arg_0) -> void {  return self.SetPolarLabelFormat( arg_0.c_str());}))
    .function("GetPolarLabelFormat", emscripten::optional_override([](vtkPolarAxesActor& self) -> std::string {  return self.GetPolarLabelFormat();}))
    .function("SetExponentLocation", &vtkPolarAxesActor::SetExponentLocation)
    .function("GetExponentLocationMinValue", &vtkPolarAxesActor::GetExponentLocationMinValue)
    .function("GetExponentLocationMaxValue", &vtkPolarAxesActor::GetExponentLocationMaxValue)
    .function("GetExponentLocation", &vtkPolarAxesActor::GetExponentLocation)
    .function("SetRadialAngleFormat", emscripten::optional_override([](vtkPolarAxesActor& self, const std::string & arg_0) -> void {  return self.SetRadialAngleFormat( arg_0.c_str());}))
    .function("GetRadialAngleFormat", emscripten::optional_override([](vtkPolarAxesActor& self) -> std::string {  return self.GetRadialAngleFormat();}))
    .function("ReleaseGraphicsResources", &vtkPolarAxesActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetEnableDistanceLOD", &vtkPolarAxesActor::SetEnableDistanceLOD)
    .function("GetEnableDistanceLOD", &vtkPolarAxesActor::GetEnableDistanceLOD)
    .function("SetDistanceLODThreshold", &vtkPolarAxesActor::SetDistanceLODThreshold)
    .function("GetDistanceLODThresholdMinValue", &vtkPolarAxesActor::GetDistanceLODThresholdMinValue)
    .function("GetDistanceLODThresholdMaxValue", &vtkPolarAxesActor::GetDistanceLODThresholdMaxValue)
    .function("GetDistanceLODThreshold", &vtkPolarAxesActor::GetDistanceLODThreshold)
    .function("SetEnableViewAngleLOD", &vtkPolarAxesActor::SetEnableViewAngleLOD)
    .function("GetEnableViewAngleLOD", &vtkPolarAxesActor::GetEnableViewAngleLOD)
    .function("SetViewAngleLODThreshold", &vtkPolarAxesActor::SetViewAngleLODThreshold)
    .function("GetViewAngleLODThresholdMinValue", &vtkPolarAxesActor::GetViewAngleLODThresholdMinValue)
    .function("GetViewAngleLODThresholdMaxValue", &vtkPolarAxesActor::GetViewAngleLODThresholdMaxValue)
    .function("GetViewAngleLODThreshold", &vtkPolarAxesActor::GetViewAngleLODThreshold)
    .function("SetPolarAxisVisibility", &vtkPolarAxesActor::SetPolarAxisVisibility)
    .function("GetPolarAxisVisibility", &vtkPolarAxesActor::GetPolarAxisVisibility)
    .function("PolarAxisVisibilityOn", &vtkPolarAxesActor::PolarAxisVisibilityOn)
    .function("PolarAxisVisibilityOff", &vtkPolarAxesActor::PolarAxisVisibilityOff)
    .function("SetDrawRadialGridlines", &vtkPolarAxesActor::SetDrawRadialGridlines)
    .function("GetDrawRadialGridlines", &vtkPolarAxesActor::GetDrawRadialGridlines)
    .function("DrawRadialGridlinesOn", &vtkPolarAxesActor::DrawRadialGridlinesOn)
    .function("DrawRadialGridlinesOff", &vtkPolarAxesActor::DrawRadialGridlinesOff)
    .function("SetDrawPolarArcsGridlines", &vtkPolarAxesActor::SetDrawPolarArcsGridlines)
    .function("GetDrawPolarArcsGridlines", &vtkPolarAxesActor::GetDrawPolarArcsGridlines)
    .function("DrawPolarArcsGridlinesOn", &vtkPolarAxesActor::DrawPolarArcsGridlinesOn)
    .function("DrawPolarArcsGridlinesOff", &vtkPolarAxesActor::DrawPolarArcsGridlinesOff)
    .function("SetPolarTitleVisibility", &vtkPolarAxesActor::SetPolarTitleVisibility)
    .function("GetPolarTitleVisibility", &vtkPolarAxesActor::GetPolarTitleVisibility)
    .function("PolarTitleVisibilityOn", &vtkPolarAxesActor::PolarTitleVisibilityOn)
    .function("PolarTitleVisibilityOff", &vtkPolarAxesActor::PolarTitleVisibilityOff)
    .function("SetRadialAxisTitleLocation", &vtkPolarAxesActor::SetRadialAxisTitleLocation)
    .function("GetRadialAxisTitleLocationMinValue", &vtkPolarAxesActor::GetRadialAxisTitleLocationMinValue)
    .function("GetRadialAxisTitleLocationMaxValue", &vtkPolarAxesActor::GetRadialAxisTitleLocationMaxValue)
    .function("GetRadialAxisTitleLocation", &vtkPolarAxesActor::GetRadialAxisTitleLocation)
    .function("SetPolarAxisTitleLocation", &vtkPolarAxesActor::SetPolarAxisTitleLocation)
    .function("GetPolarAxisTitleLocationMinValue", &vtkPolarAxesActor::GetPolarAxisTitleLocationMinValue)
    .function("GetPolarAxisTitleLocationMaxValue", &vtkPolarAxesActor::GetPolarAxisTitleLocationMaxValue)
    .function("GetPolarAxisTitleLocation", &vtkPolarAxesActor::GetPolarAxisTitleLocation)
    .function("SetPolarLabelVisibility", &vtkPolarAxesActor::SetPolarLabelVisibility)
    .function("GetPolarLabelVisibility", &vtkPolarAxesActor::GetPolarLabelVisibility)
    .function("PolarLabelVisibilityOn", &vtkPolarAxesActor::PolarLabelVisibilityOn)
    .function("PolarLabelVisibilityOff", &vtkPolarAxesActor::PolarLabelVisibilityOff)
    .function("SetArcTicksOriginToPolarAxis", &vtkPolarAxesActor::SetArcTicksOriginToPolarAxis)
    .function("GetArcTicksOriginToPolarAxis", &vtkPolarAxesActor::GetArcTicksOriginToPolarAxis)
    .function("ArcTicksOriginToPolarAxisOn", &vtkPolarAxesActor::ArcTicksOriginToPolarAxisOn)
    .function("ArcTicksOriginToPolarAxisOff", &vtkPolarAxesActor::ArcTicksOriginToPolarAxisOff)
    .function("SetRadialAxesOriginToPolarAxis", &vtkPolarAxesActor::SetRadialAxesOriginToPolarAxis)
    .function("GetRadialAxesOriginToPolarAxis", &vtkPolarAxesActor::GetRadialAxesOriginToPolarAxis)
    .function("RadialAxesOriginToPolarAxisOn", &vtkPolarAxesActor::RadialAxesOriginToPolarAxisOn)
    .function("RadialAxesOriginToPolarAxisOff", &vtkPolarAxesActor::RadialAxesOriginToPolarAxisOff)
    .function("SetPolarTickVisibility", &vtkPolarAxesActor::SetPolarTickVisibility)
    .function("GetPolarTickVisibility", &vtkPolarAxesActor::GetPolarTickVisibility)
    .function("PolarTickVisibilityOn", &vtkPolarAxesActor::PolarTickVisibilityOn)
    .function("PolarTickVisibilityOff", &vtkPolarAxesActor::PolarTickVisibilityOff)
    .function("SetAxisTickVisibility", &vtkPolarAxesActor::SetAxisTickVisibility)
    .function("GetAxisTickVisibility", &vtkPolarAxesActor::GetAxisTickVisibility)
    .function("AxisTickVisibilityOn", &vtkPolarAxesActor::AxisTickVisibilityOn)
    .function("AxisTickVisibilityOff", &vtkPolarAxesActor::AxisTickVisibilityOff)
    .function("SetAxisMinorTickVisibility", &vtkPolarAxesActor::SetAxisMinorTickVisibility)
    .function("GetAxisMinorTickVisibility", &vtkPolarAxesActor::GetAxisMinorTickVisibility)
    .function("AxisMinorTickVisibilityOn", &vtkPolarAxesActor::AxisMinorTickVisibilityOn)
    .function("AxisMinorTickVisibilityOff", &vtkPolarAxesActor::AxisMinorTickVisibilityOff)
    .function("SetAxisTickMatchesPolarAxes", &vtkPolarAxesActor::SetAxisTickMatchesPolarAxes)
    .function("GetAxisTickMatchesPolarAxes", &vtkPolarAxesActor::GetAxisTickMatchesPolarAxes)
    .function("AxisTickMatchesPolarAxesOn", &vtkPolarAxesActor::AxisTickMatchesPolarAxesOn)
    .function("AxisTickMatchesPolarAxesOff", &vtkPolarAxesActor::AxisTickMatchesPolarAxesOff)
    .function("SetArcTickVisibility", &vtkPolarAxesActor::SetArcTickVisibility)
    .function("GetArcTickVisibility", &vtkPolarAxesActor::GetArcTickVisibility)
    .function("ArcTickVisibilityOn", &vtkPolarAxesActor::ArcTickVisibilityOn)
    .function("ArcTickVisibilityOff", &vtkPolarAxesActor::ArcTickVisibilityOff)
    .function("SetArcMinorTickVisibility", &vtkPolarAxesActor::SetArcMinorTickVisibility)
    .function("GetArcMinorTickVisibility", &vtkPolarAxesActor::GetArcMinorTickVisibility)
    .function("ArcMinorTickVisibilityOn", &vtkPolarAxesActor::ArcMinorTickVisibilityOn)
    .function("ArcMinorTickVisibilityOff", &vtkPolarAxesActor::ArcMinorTickVisibilityOff)
    .function("SetArcTickMatchesRadialAxes", &vtkPolarAxesActor::SetArcTickMatchesRadialAxes)
    .function("GetArcTickMatchesRadialAxes", &vtkPolarAxesActor::GetArcTickMatchesRadialAxes)
    .function("ArcTickMatchesRadialAxesOn", &vtkPolarAxesActor::ArcTickMatchesRadialAxesOn)
    .function("ArcTickMatchesRadialAxesOff", &vtkPolarAxesActor::ArcTickMatchesRadialAxesOff)
    .function("SetArcMajorTickSize", &vtkPolarAxesActor::SetArcMajorTickSize)
    .function("GetArcMajorTickSize", &vtkPolarAxesActor::GetArcMajorTickSize)
    .function("SetPolarAxisMajorTickSize", &vtkPolarAxesActor::SetPolarAxisMajorTickSize)
    .function("GetPolarAxisMajorTickSize", &vtkPolarAxesActor::GetPolarAxisMajorTickSize)
    .function("SetLastRadialAxisMajorTickSize", &vtkPolarAxesActor::SetLastRadialAxisMajorTickSize)
    .function("GetLastRadialAxisMajorTickSize", &vtkPolarAxesActor::GetLastRadialAxisMajorTickSize)
    .function("SetPolarAxisTickRatioSize", &vtkPolarAxesActor::SetPolarAxisTickRatioSize)
    .function("GetPolarAxisTickRatioSize", &vtkPolarAxesActor::GetPolarAxisTickRatioSize)
    .function("SetLastAxisTickRatioSize", &vtkPolarAxesActor::SetLastAxisTickRatioSize)
    .function("GetLastAxisTickRatioSize", &vtkPolarAxesActor::GetLastAxisTickRatioSize)
    .function("SetArcTickRatioSize", &vtkPolarAxesActor::SetArcTickRatioSize)
    .function("GetArcTickRatioSize", &vtkPolarAxesActor::GetArcTickRatioSize)
    .function("SetTickRatioRadiusSize", &vtkPolarAxesActor::SetTickRatioRadiusSize)
    .function("GetTickRatioRadiusSize", &vtkPolarAxesActor::GetTickRatioRadiusSize)
    .function("SetPolarAxisMajorTickThickness", &vtkPolarAxesActor::SetPolarAxisMajorTickThickness)
    .function("GetPolarAxisMajorTickThickness", &vtkPolarAxesActor::GetPolarAxisMajorTickThickness)
    .function("SetLastRadialAxisMajorTickThickness", &vtkPolarAxesActor::SetLastRadialAxisMajorTickThickness)
    .function("GetLastRadialAxisMajorTickThickness", &vtkPolarAxesActor::GetLastRadialAxisMajorTickThickness)
    .function("SetArcMajorTickThickness", &vtkPolarAxesActor::SetArcMajorTickThickness)
    .function("GetArcMajorTickThickness", &vtkPolarAxesActor::GetArcMajorTickThickness)
    .function("SetPolarAxisTickRatioThickness", &vtkPolarAxesActor::SetPolarAxisTickRatioThickness)
    .function("GetPolarAxisTickRatioThickness", &vtkPolarAxesActor::GetPolarAxisTickRatioThickness)
    .function("SetLastAxisTickRatioThickness", &vtkPolarAxesActor::SetLastAxisTickRatioThickness)
    .function("GetLastAxisTickRatioThickness", &vtkPolarAxesActor::GetLastAxisTickRatioThickness)
    .function("SetArcTickRatioThickness", &vtkPolarAxesActor::SetArcTickRatioThickness)
    .function("GetArcTickRatioThickness", &vtkPolarAxesActor::GetArcTickRatioThickness)
    .function("SetDeltaRangeMajor", &vtkPolarAxesActor::SetDeltaRangeMajor)
    .function("GetDeltaRangeMajor", &vtkPolarAxesActor::GetDeltaRangeMajor)
    .function("SetDeltaRangeMinor", &vtkPolarAxesActor::SetDeltaRangeMinor)
    .function("GetDeltaRangeMinor", &vtkPolarAxesActor::GetDeltaRangeMinor)
    .function("SetRequestedDeltaRangePolarAxes", &vtkPolarAxesActor::SetRequestedDeltaRangePolarAxes)
    .function("GetRequestedDeltaRangePolarAxes", &vtkPolarAxesActor::GetRequestedDeltaRangePolarAxes)
    .function("SetDeltaAngleMajor", &vtkPolarAxesActor::SetDeltaAngleMajor)
    .function("GetDeltaAngleMajor", &vtkPolarAxesActor::GetDeltaAngleMajor)
    .function("SetDeltaAngleMinor", &vtkPolarAxesActor::SetDeltaAngleMinor)
    .function("GetDeltaAngleMinor", &vtkPolarAxesActor::GetDeltaAngleMinor)
    .function("SetRequestedDeltaAngleRadialAxes", &vtkPolarAxesActor::SetRequestedDeltaAngleRadialAxes)
    .function("GetRequestedDeltaAngleRadialAxes", &vtkPolarAxesActor::GetRequestedDeltaAngleRadialAxes)
    .function("SetRadialAxesVisibility", &vtkPolarAxesActor::SetRadialAxesVisibility)
    .function("GetRadialAxesVisibility", &vtkPolarAxesActor::GetRadialAxesVisibility)
    .function("RadialAxesVisibilityOn", &vtkPolarAxesActor::RadialAxesVisibilityOn)
    .function("RadialAxesVisibilityOff", &vtkPolarAxesActor::RadialAxesVisibilityOff)
    .function("SetRadialTitleVisibility", &vtkPolarAxesActor::SetRadialTitleVisibility)
    .function("GetRadialTitleVisibility", &vtkPolarAxesActor::GetRadialTitleVisibility)
    .function("RadialTitleVisibilityOn", &vtkPolarAxesActor::RadialTitleVisibilityOn)
    .function("RadialTitleVisibilityOff", &vtkPolarAxesActor::RadialTitleVisibilityOff)
    .function("SetPolarArcsVisibility", &vtkPolarAxesActor::SetPolarArcsVisibility)
    .function("GetPolarArcsVisibility", &vtkPolarAxesActor::GetPolarArcsVisibility)
    .function("PolarArcsVisibilityOn", &vtkPolarAxesActor::PolarArcsVisibilityOn)
    .function("PolarArcsVisibilityOff", &vtkPolarAxesActor::PolarArcsVisibilityOff)
    .function("SetUse2DMode", &vtkPolarAxesActor::SetUse2DMode)
    .function("GetUse2DMode", &vtkPolarAxesActor::GetUse2DMode)
    .function("SetPolarAxisTitleTextProperty", &vtkPolarAxesActor::SetPolarAxisTitleTextProperty, emscripten::allow_raw_pointers())
    .function("GetPolarAxisTitleTextProperty", &vtkPolarAxesActor::GetPolarAxisTitleTextProperty, emscripten::allow_raw_pointers())
    .function("SetPolarAxisLabelTextProperty", &vtkPolarAxesActor::SetPolarAxisLabelTextProperty, emscripten::allow_raw_pointers())
    .function("GetPolarAxisLabelTextProperty", &vtkPolarAxesActor::GetPolarAxisLabelTextProperty, emscripten::allow_raw_pointers())
    .function("SetLastRadialAxisTextProperty", &vtkPolarAxesActor::SetLastRadialAxisTextProperty, emscripten::allow_raw_pointers())
    .function("GetLastRadialAxisTextProperty", &vtkPolarAxesActor::GetLastRadialAxisTextProperty, emscripten::allow_raw_pointers())
    .function("SetSecondaryRadialAxesTextProperty", &vtkPolarAxesActor::SetSecondaryRadialAxesTextProperty, emscripten::allow_raw_pointers())
    .function("GetSecondaryRadialAxesTextProperty", &vtkPolarAxesActor::GetSecondaryRadialAxesTextProperty, emscripten::allow_raw_pointers())
    .function("SetPolarAxisProperty", &vtkPolarAxesActor::SetPolarAxisProperty, emscripten::allow_raw_pointers())
    .function("GetPolarAxisProperty", &vtkPolarAxesActor::GetPolarAxisProperty, emscripten::allow_raw_pointers())
    .function("SetLastRadialAxisProperty", &vtkPolarAxesActor::SetLastRadialAxisProperty, emscripten::allow_raw_pointers())
    .function("GetLastRadialAxisProperty", &vtkPolarAxesActor::GetLastRadialAxisProperty, emscripten::allow_raw_pointers())
    .function("SetSecondaryRadialAxesProperty", &vtkPolarAxesActor::SetSecondaryRadialAxesProperty, emscripten::allow_raw_pointers())
    .function("GetSecondaryRadialAxesProperty", &vtkPolarAxesActor::GetSecondaryRadialAxesProperty, emscripten::allow_raw_pointers())
    .function("SetPolarArcsProperty", &vtkPolarAxesActor::SetPolarArcsProperty, emscripten::allow_raw_pointers())
    .function("GetPolarArcsProperty", &vtkPolarAxesActor::GetPolarArcsProperty, emscripten::allow_raw_pointers())
    .function("SetSecondaryPolarArcsProperty", &vtkPolarAxesActor::SetSecondaryPolarArcsProperty, emscripten::allow_raw_pointers())
    .function("GetSecondaryPolarArcsProperty", &vtkPolarAxesActor::GetSecondaryPolarArcsProperty, emscripten::allow_raw_pointers())
    .function("SetBounds", emscripten::select_overload<void(vtkPolarAxesActor&, double, double, double, double, double, double)>([](vtkPolarAxesActor& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetRatio", &vtkPolarAxesActor::SetRatio)
    .function("GetRatioMinValue", &vtkPolarAxesActor::GetRatioMinValue)
    .function("GetRatioMaxValue", &vtkPolarAxesActor::GetRatioMaxValue)
    .function("GetRatio", &vtkPolarAxesActor::GetRatio)
    .function("SetPolarArcResolutionPerDegree", &vtkPolarAxesActor::SetPolarArcResolutionPerDegree)
    .function("GetPolarArcResolutionPerDegreeMinValue", &vtkPolarAxesActor::GetPolarArcResolutionPerDegreeMinValue)
    .function("GetPolarArcResolutionPerDegreeMaxValue", &vtkPolarAxesActor::GetPolarArcResolutionPerDegreeMaxValue)
    .function("GetPolarArcResolutionPerDegree", &vtkPolarAxesActor::GetPolarArcResolutionPerDegree);
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkPolarAxesActor_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkPolarAxesActor_VTK_EXPONENT_BOTTOM", vtkPolarAxesActor::VTK_EXPONENT_BOTTOM },
      { "vtkPolarAxesActor_VTK_EXPONENT_EXTERN", vtkPolarAxesActor::VTK_EXPONENT_EXTERN },
      { "vtkPolarAxesActor_VTK_EXPONENT_LABELS", vtkPolarAxesActor::VTK_EXPONENT_LABELS },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkPolarAxesActor_1_2_constants) {
    typedef vtkPolarAxesActor::TitleLocation cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkPolarAxesActor_TitleLocation_VTK_TITLE_BOTTOM", vtkPolarAxesActor::VTK_TITLE_BOTTOM },
      { "vtkPolarAxesActor_TitleLocation_VTK_TITLE_EXTERN", vtkPolarAxesActor::VTK_TITLE_EXTERN },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
