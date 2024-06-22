// JavaScript wrapper for vtkAxisActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkAxisActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkAxisActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCoordinate.h"
#include "vtkTextProperty.h"
#include "vtkProperty.h"
#include "vtkCamera.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkStringArray.h"
#include "vtkAxisFollower.h"
#include "vtkProp3DAxisFollower.h"
#include "vtkAxisActor.h"

EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkAxisActor_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkAxisActor>(vtkAxisActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAxisActor_class) {
  using AlignLocation=vtkAxisActor::AlignLocation;
  emscripten::class_<vtkAxisActor, emscripten::base<vtkActor>>("vtkAxisActor")
    .smart_ptr<vtkSmartPointer<vtkAxisActor>>("vtkSmartPointer<vtkAxisActor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAxisActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxisActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAxisActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAxisActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAxisActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxisActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAxisActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPoint1Coordinate", &vtkAxisActor::GetPoint1Coordinate, emscripten::allow_raw_pointers())
    .function("SetPoint1", emscripten::select_overload<void(vtkAxisActor&, double, double, double)>([](vtkAxisActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint1( arg_0, arg_1, arg_2); }))
    .function("GetPoint1", emscripten::optional_override([](vtkAxisActor& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPoint1()) / sizeof(double);}))
    .function("GetPoint2Coordinate", &vtkAxisActor::GetPoint2Coordinate, emscripten::allow_raw_pointers())
    .function("SetPoint2", emscripten::select_overload<void(vtkAxisActor&, double, double, double)>([](vtkAxisActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint2( arg_0, arg_1, arg_2); }))
    .function("GetPoint2", emscripten::optional_override([](vtkAxisActor& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPoint2()) / sizeof(double);}))
    .function("SetRange", emscripten::select_overload<void(vtkAxisActor&, double, double)>([](vtkAxisActor& self, double arg_0, double arg_1) -> void { return self.SetRange( arg_0, arg_1); }))
    .function("SetBounds", emscripten::select_overload<void(vtkAxisActor&, double, double, double, double, double, double)>([](vtkAxisActor& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetLabelFormat", emscripten::optional_override([](vtkAxisActor& self, const std::string & arg_0) -> void {  return self.SetLabelFormat( arg_0.c_str());}))
    .function("GetLabelFormat", emscripten::optional_override([](vtkAxisActor& self) -> std::string {  return self.GetLabelFormat();}))
    .function("SetUseTextActor3D", &vtkAxisActor::SetUseTextActor3D)
    .function("GetUseTextActor3D", &vtkAxisActor::GetUseTextActor3D)
    .function("SetMinorTicksVisible", &vtkAxisActor::SetMinorTicksVisible)
    .function("GetMinorTicksVisible", &vtkAxisActor::GetMinorTicksVisible)
    .function("MinorTicksVisibleOn", &vtkAxisActor::MinorTicksVisibleOn)
    .function("MinorTicksVisibleOff", &vtkAxisActor::MinorTicksVisibleOff)
    .function("SetTitle", emscripten::optional_override([](vtkAxisActor& self, const std::string & arg_0) -> void {  return self.SetTitle( arg_0.c_str());}))
    .function("GetTitle", emscripten::optional_override([](vtkAxisActor& self) -> std::string {  return self.GetTitle();}))
    .function("SetExponent", emscripten::optional_override([](vtkAxisActor& self, const std::string & arg_0) -> void {  return self.SetExponent( arg_0.c_str());}))
    .function("GetExponent", emscripten::optional_override([](vtkAxisActor& self) -> std::string {  return self.GetExponent();}))
    .function("SetMajorTickSize", &vtkAxisActor::SetMajorTickSize)
    .function("GetMajorTickSize", &vtkAxisActor::GetMajorTickSize)
    .function("SetMinorTickSize", &vtkAxisActor::SetMinorTickSize)
    .function("GetMinorTickSize", &vtkAxisActor::GetMinorTickSize)
    .function("SetTickLocation", &vtkAxisActor::SetTickLocation)
    .function("GetTickLocationMinValue", &vtkAxisActor::GetTickLocationMinValue)
    .function("GetTickLocationMaxValue", &vtkAxisActor::GetTickLocationMaxValue)
    .function("GetTickLocation", &vtkAxisActor::GetTickLocation)
    .function("SetTickLocationToInside", &vtkAxisActor::SetTickLocationToInside)
    .function("SetTickLocationToOutside", &vtkAxisActor::SetTickLocationToOutside)
    .function("SetTickLocationToBoth", &vtkAxisActor::SetTickLocationToBoth)
    .function("SetAxisVisibility", &vtkAxisActor::SetAxisVisibility)
    .function("GetAxisVisibility", &vtkAxisActor::GetAxisVisibility)
    .function("AxisVisibilityOn", &vtkAxisActor::AxisVisibilityOn)
    .function("AxisVisibilityOff", &vtkAxisActor::AxisVisibilityOff)
    .function("SetTickVisibility", &vtkAxisActor::SetTickVisibility)
    .function("GetTickVisibility", &vtkAxisActor::GetTickVisibility)
    .function("TickVisibilityOn", &vtkAxisActor::TickVisibilityOn)
    .function("TickVisibilityOff", &vtkAxisActor::TickVisibilityOff)
    .function("SetLabelVisibility", &vtkAxisActor::SetLabelVisibility)
    .function("GetLabelVisibility", &vtkAxisActor::GetLabelVisibility)
    .function("LabelVisibilityOn", &vtkAxisActor::LabelVisibilityOn)
    .function("LabelVisibilityOff", &vtkAxisActor::LabelVisibilityOff)
    .function("SetTitleVisibility", &vtkAxisActor::SetTitleVisibility)
    .function("GetTitleVisibility", &vtkAxisActor::GetTitleVisibility)
    .function("TitleVisibilityOn", &vtkAxisActor::TitleVisibilityOn)
    .function("TitleVisibilityOff", &vtkAxisActor::TitleVisibilityOff)
    .function("SetExponentVisibility", &vtkAxisActor::SetExponentVisibility)
    .function("GetExponentVisibility", &vtkAxisActor::GetExponentVisibility)
    .function("ExponentVisibilityOn", &vtkAxisActor::ExponentVisibilityOn)
    .function("ExponentVisibilityOff", &vtkAxisActor::ExponentVisibilityOff)
    .function("SetLastMajorTickPointCorrection", &vtkAxisActor::SetLastMajorTickPointCorrection)
    .function("GetLastMajorTickPointCorrection", &vtkAxisActor::GetLastMajorTickPointCorrection)
    .function("LastMajorTickPointCorrectionOn", &vtkAxisActor::LastMajorTickPointCorrectionOn)
    .function("LastMajorTickPointCorrectionOff", &vtkAxisActor::LastMajorTickPointCorrectionOff)
    .function("SetTitleAlignLocation", &vtkAxisActor::SetTitleAlignLocation)
    .function("GetTitleAlignLocation", &vtkAxisActor::GetTitleAlignLocation)
    .function("SetExponentLocation", &vtkAxisActor::SetExponentLocation)
    .function("GetExponentLocation", &vtkAxisActor::GetExponentLocation)
    .function("SetTitleTextProperty", &vtkAxisActor::SetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("GetTitleTextProperty", &vtkAxisActor::GetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("SetLabelTextProperty", &vtkAxisActor::SetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("GetLabelTextProperty", &vtkAxisActor::GetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("SetAxisLinesProperty", &vtkAxisActor::SetAxisLinesProperty, emscripten::allow_raw_pointers())
    .function("GetAxisLinesProperty", &vtkAxisActor::GetAxisLinesProperty, emscripten::allow_raw_pointers())
    .function("SetAxisMainLineProperty", &vtkAxisActor::SetAxisMainLineProperty, emscripten::allow_raw_pointers())
    .function("GetAxisMainLineProperty", &vtkAxisActor::GetAxisMainLineProperty, emscripten::allow_raw_pointers())
    .function("SetAxisMajorTicksProperty", &vtkAxisActor::SetAxisMajorTicksProperty, emscripten::allow_raw_pointers())
    .function("GetAxisMajorTicksProperty", &vtkAxisActor::GetAxisMajorTicksProperty, emscripten::allow_raw_pointers())
    .function("SetAxisMinorTicksProperty", &vtkAxisActor::SetAxisMinorTicksProperty, emscripten::allow_raw_pointers())
    .function("GetAxisMinorTicksProperty", &vtkAxisActor::GetAxisMinorTicksProperty, emscripten::allow_raw_pointers())
    .function("SetGridlinesProperty", &vtkAxisActor::SetGridlinesProperty, emscripten::allow_raw_pointers())
    .function("GetGridlinesProperty", &vtkAxisActor::GetGridlinesProperty, emscripten::allow_raw_pointers())
    .function("SetInnerGridlinesProperty", &vtkAxisActor::SetInnerGridlinesProperty, emscripten::allow_raw_pointers())
    .function("GetInnerGridlinesProperty", &vtkAxisActor::GetInnerGridlinesProperty, emscripten::allow_raw_pointers())
    .function("SetGridpolysProperty", &vtkAxisActor::SetGridpolysProperty, emscripten::allow_raw_pointers())
    .function("GetGridpolysProperty", &vtkAxisActor::GetGridpolysProperty, emscripten::allow_raw_pointers())
    .function("SetDrawGridlines", &vtkAxisActor::SetDrawGridlines)
    .function("GetDrawGridlines", &vtkAxisActor::GetDrawGridlines)
    .function("DrawGridlinesOn", &vtkAxisActor::DrawGridlinesOn)
    .function("DrawGridlinesOff", &vtkAxisActor::DrawGridlinesOff)
    .function("SetDrawGridlinesOnly", &vtkAxisActor::SetDrawGridlinesOnly)
    .function("GetDrawGridlinesOnly", &vtkAxisActor::GetDrawGridlinesOnly)
    .function("DrawGridlinesOnlyOn", &vtkAxisActor::DrawGridlinesOnlyOn)
    .function("DrawGridlinesOnlyOff", &vtkAxisActor::DrawGridlinesOnlyOff)
    .function("SetDrawGridlinesLocation", &vtkAxisActor::SetDrawGridlinesLocation)
    .function("GetDrawGridlinesLocation", &vtkAxisActor::GetDrawGridlinesLocation)
    .function("SetDrawInnerGridlines", &vtkAxisActor::SetDrawInnerGridlines)
    .function("GetDrawInnerGridlines", &vtkAxisActor::GetDrawInnerGridlines)
    .function("DrawInnerGridlinesOn", &vtkAxisActor::DrawInnerGridlinesOn)
    .function("DrawInnerGridlinesOff", &vtkAxisActor::DrawInnerGridlinesOff)
    .function("SetGridlineXLength", &vtkAxisActor::SetGridlineXLength)
    .function("GetGridlineXLength", &vtkAxisActor::GetGridlineXLength)
    .function("SetGridlineYLength", &vtkAxisActor::SetGridlineYLength)
    .function("GetGridlineYLength", &vtkAxisActor::GetGridlineYLength)
    .function("SetGridlineZLength", &vtkAxisActor::SetGridlineZLength)
    .function("GetGridlineZLength", &vtkAxisActor::GetGridlineZLength)
    .function("SetDrawGridpolys", &vtkAxisActor::SetDrawGridpolys)
    .function("GetDrawGridpolys", &vtkAxisActor::GetDrawGridpolys)
    .function("DrawGridpolysOn", &vtkAxisActor::DrawGridpolysOn)
    .function("DrawGridpolysOff", &vtkAxisActor::DrawGridpolysOff)
    .function("SetAxisType", &vtkAxisActor::SetAxisType)
    .function("GetAxisTypeMinValue", &vtkAxisActor::GetAxisTypeMinValue)
    .function("GetAxisTypeMaxValue", &vtkAxisActor::GetAxisTypeMaxValue)
    .function("GetAxisType", &vtkAxisActor::GetAxisType)
    .function("SetAxisTypeToX", &vtkAxisActor::SetAxisTypeToX)
    .function("SetAxisTypeToY", &vtkAxisActor::SetAxisTypeToY)
    .function("SetAxisTypeToZ", &vtkAxisActor::SetAxisTypeToZ)
    .function("SetLog", &vtkAxisActor::SetLog)
    .function("GetLog", &vtkAxisActor::GetLog)
    .function("LogOn", &vtkAxisActor::LogOn)
    .function("LogOff", &vtkAxisActor::LogOff)
    .function("SetAxisPosition", &vtkAxisActor::SetAxisPosition)
    .function("GetAxisPositionMinValue", &vtkAxisActor::GetAxisPositionMinValue)
    .function("GetAxisPositionMaxValue", &vtkAxisActor::GetAxisPositionMaxValue)
    .function("GetAxisPosition", &vtkAxisActor::GetAxisPosition)
    .function("SetAxisPositionToMinMin", &vtkAxisActor::SetAxisPositionToMinMin)
    .function("SetAxisPositionToMinMax", &vtkAxisActor::SetAxisPositionToMinMax)
    .function("SetAxisPositionToMaxMax", &vtkAxisActor::SetAxisPositionToMaxMax)
    .function("SetAxisPositionToMaxMin", &vtkAxisActor::SetAxisPositionToMaxMin)
    .function("SetCamera", &vtkAxisActor::SetCamera, emscripten::allow_raw_pointers())
    .function("GetCamera", &vtkAxisActor::GetCamera, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkAxisActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentGeometry", &vtkAxisActor::RenderTranslucentGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkAxisActor::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkAxisActor::RenderOverlay, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkAxisActor::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkAxisActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetLabelScale", emscripten::select_overload<void(vtkAxisActor&, double)>([](vtkAxisActor& self, double arg_0) -> void { return self.SetLabelScale( arg_0); }))
    .function("SetLabelScale", emscripten::select_overload<void(vtkAxisActor&, int, double)>([](vtkAxisActor& self, int arg_0, double arg_1) -> void { return self.SetLabelScale( arg_0, arg_1); }))
    .function("SetTitleScale", &vtkAxisActor::SetTitleScale)
    .function("SetMinorStart", &vtkAxisActor::SetMinorStart)
    .function("GetMinorStart", &vtkAxisActor::GetMinorStart)
    .function("GetMajorStart", &vtkAxisActor::GetMajorStart)
    .function("SetMajorStart", &vtkAxisActor::SetMajorStart)
    .function("SetDeltaMinor", &vtkAxisActor::SetDeltaMinor)
    .function("GetDeltaMinor", &vtkAxisActor::GetDeltaMinor)
    .function("GetDeltaMajor", &vtkAxisActor::GetDeltaMajor)
    .function("SetDeltaMajor", &vtkAxisActor::SetDeltaMajor)
    .function("SetMinorRangeStart", &vtkAxisActor::SetMinorRangeStart)
    .function("GetMinorRangeStart", &vtkAxisActor::GetMinorRangeStart)
    .function("SetMajorRangeStart", &vtkAxisActor::SetMajorRangeStart)
    .function("GetMajorRangeStart", &vtkAxisActor::GetMajorRangeStart)
    .function("SetDeltaRangeMinor", &vtkAxisActor::SetDeltaRangeMinor)
    .function("GetDeltaRangeMinor", &vtkAxisActor::GetDeltaRangeMinor)
    .function("SetDeltaRangeMajor", &vtkAxisActor::SetDeltaRangeMajor)
    .function("GetDeltaRangeMajor", &vtkAxisActor::GetDeltaRangeMajor)
    .function("SetLabels", &vtkAxisActor::SetLabels, emscripten::allow_raw_pointers())
    .function("BuildAxis", &vtkAxisActor::BuildAxis, emscripten::allow_raw_pointers())
    .function("GetTitleActor", &vtkAxisActor::GetTitleActor, emscripten::allow_raw_pointers())
    .function("GetExponentActor", &vtkAxisActor::GetExponentActor, emscripten::allow_raw_pointers())
    .function("GetTitleProp3D", &vtkAxisActor::GetTitleProp3D, emscripten::allow_raw_pointers())
    .function("GetExponentProp3D", &vtkAxisActor::GetExponentProp3D, emscripten::allow_raw_pointers())
    .function("GetNumberOfLabelsBuilt", &vtkAxisActor::GetNumberOfLabelsBuilt)
    .function("SetCalculateTitleOffset", &vtkAxisActor::SetCalculateTitleOffset)
    .function("GetCalculateTitleOffset", &vtkAxisActor::GetCalculateTitleOffset)
    .function("CalculateTitleOffsetOn", &vtkAxisActor::CalculateTitleOffsetOn)
    .function("CalculateTitleOffsetOff", &vtkAxisActor::CalculateTitleOffsetOff)
    .function("SetCalculateLabelOffset", &vtkAxisActor::SetCalculateLabelOffset)
    .function("GetCalculateLabelOffset", &vtkAxisActor::GetCalculateLabelOffset)
    .function("CalculateLabelOffsetOn", &vtkAxisActor::CalculateLabelOffsetOn)
    .function("CalculateLabelOffsetOff", &vtkAxisActor::CalculateLabelOffsetOff)
    .function("SetUse2DMode", &vtkAxisActor::SetUse2DMode)
    .function("GetUse2DMode", &vtkAxisActor::GetUse2DMode)
    .function("SetVerticalOffsetXTitle2D", &vtkAxisActor::SetVerticalOffsetXTitle2D)
    .function("GetVerticalOffsetXTitle2D", &vtkAxisActor::GetVerticalOffsetXTitle2D)
    .function("SetHorizontalOffsetYTitle2D", &vtkAxisActor::SetHorizontalOffsetYTitle2D)
    .function("GetHorizontalOffsetYTitle2D", &vtkAxisActor::GetHorizontalOffsetYTitle2D)
    .function("SetSaveTitlePosition", &vtkAxisActor::SetSaveTitlePosition)
    .function("GetSaveTitlePosition", &vtkAxisActor::GetSaveTitlePosition)
    .function("SetAxisBaseForX", emscripten::select_overload<void(vtkAxisActor&, double, double, double)>([](vtkAxisActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAxisBaseForX( arg_0, arg_1, arg_2); }))
    .function("SetAxisBaseForY", emscripten::select_overload<void(vtkAxisActor&, double, double, double)>([](vtkAxisActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAxisBaseForY( arg_0, arg_1, arg_2); }))
    .function("SetAxisBaseForZ", emscripten::select_overload<void(vtkAxisActor&, double, double, double)>([](vtkAxisActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAxisBaseForZ( arg_0, arg_1, arg_2); }))
    .function("SetAxisOnOrigin", &vtkAxisActor::SetAxisOnOrigin)
    .function("GetAxisOnOrigin", &vtkAxisActor::GetAxisOnOrigin)
    .function("SetScreenSize", &vtkAxisActor::SetScreenSize)
    .function("GetScreenSize", &vtkAxisActor::GetScreenSize)
    .function("SetLabelOffset", &vtkAxisActor::SetLabelOffset)
    .function("GetLabelOffset", &vtkAxisActor::GetLabelOffset)
    .function("SetExponentOffset", &vtkAxisActor::SetExponentOffset)
    .function("GetExponentOffset", &vtkAxisActor::GetExponentOffset)
    .function("SetTitleOffset", emscripten::select_overload<void(vtkAxisActor&, double, double)>([](vtkAxisActor& self, double arg_0, double arg_1) -> void { return self.SetTitleOffset( arg_0, arg_1); }));
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkAxisActor_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkAxisActor_VTK_TICKS_INSIDE", vtkAxisActor::VTK_TICKS_INSIDE },
      { "vtkAxisActor_VTK_TICKS_OUTSIDE", vtkAxisActor::VTK_TICKS_OUTSIDE },
      { "vtkAxisActor_VTK_TICKS_BOTH", vtkAxisActor::VTK_TICKS_BOTH },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkAxisActor_1_2_constants) {
    typedef vtkAxisActor::AlignLocation cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkAxisActor_AlignLocation_VTK_ALIGN_TOP", vtkAxisActor::VTK_ALIGN_TOP },
      { "vtkAxisActor_AlignLocation_VTK_ALIGN_BOTTOM", vtkAxisActor::VTK_ALIGN_BOTTOM },
      { "vtkAxisActor_AlignLocation_VTK_ALIGN_POINT1", vtkAxisActor::VTK_ALIGN_POINT1 },
      { "vtkAxisActor_AlignLocation_VTK_ALIGN_POINT2", vtkAxisActor::VTK_ALIGN_POINT2 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkAxisActor_2_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkAxisActor_VTK_AXIS_TYPE_X", vtkAxisActor::VTK_AXIS_TYPE_X },
      { "vtkAxisActor_VTK_AXIS_TYPE_Y", vtkAxisActor::VTK_AXIS_TYPE_Y },
      { "vtkAxisActor_VTK_AXIS_TYPE_Z", vtkAxisActor::VTK_AXIS_TYPE_Z },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkAxisActor_3_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkAxisActor_VTK_AXIS_POS_MINMIN", vtkAxisActor::VTK_AXIS_POS_MINMIN },
      { "vtkAxisActor_VTK_AXIS_POS_MINMAX", vtkAxisActor::VTK_AXIS_POS_MINMAX },
      { "vtkAxisActor_VTK_AXIS_POS_MAXMAX", vtkAxisActor::VTK_AXIS_POS_MAXMAX },
      { "vtkAxisActor_VTK_AXIS_POS_MAXMIN", vtkAxisActor::VTK_AXIS_POS_MAXMIN },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
