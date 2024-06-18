// JavaScript wrapper for vtkAxisActor2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkAxisActor2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkAxisActor2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCoordinate.h"
#include "vtkPoints.h"
#include "vtkTextProperty.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkTextMapper.h"
#include "vtkProp.h"
#include "vtkAxisActor2D.h"

EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkAxisActor2D_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkAxisActor2D>(vtkAxisActor2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAxisActor2D_class) {
  using LabelMax=vtkAxisActor2D::LabelMax;
  emscripten::class_<vtkAxisActor2D, emscripten::base<vtkActor2D>>("vtkAxisActor2D")
    .smart_ptr<vtkSmartPointer<vtkAxisActor2D>>("vtkSmartPointer<vtkAxisActor2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAxisActor2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxisActor2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAxisActor2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAxisActor2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAxisActor2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxisActor2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAxisActor2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPoint1Coordinate", &vtkAxisActor2D::GetPoint1Coordinate, emscripten::allow_raw_pointers())
    .function("SetPoint1", emscripten::select_overload<void(vtkAxisActor2D&, double, double)>([](vtkAxisActor2D& self, double arg_0, double arg_1) -> void { return self.SetPoint1( arg_0, arg_1); }))
    .function("GetPoint1", emscripten::optional_override([](vtkAxisActor2D& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPoint1()) / sizeof(double);}))
    .function("GetPoint2Coordinate", &vtkAxisActor2D::GetPoint2Coordinate, emscripten::allow_raw_pointers())
    .function("SetPoint2", emscripten::select_overload<void(vtkAxisActor2D&, double, double)>([](vtkAxisActor2D& self, double arg_0, double arg_1) -> void { return self.SetPoint2( arg_0, arg_1); }))
    .function("GetPoint2", emscripten::optional_override([](vtkAxisActor2D& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPoint2()) / sizeof(double);}))
    .function("SetRange", emscripten::select_overload<void(vtkAxisActor2D&, double, double)>([](vtkAxisActor2D& self, double arg_0, double arg_1) -> void { return self.SetRange( arg_0, arg_1); }))
    .function("SetRulerMode", &vtkAxisActor2D::SetRulerMode)
    .function("GetRulerMode", &vtkAxisActor2D::GetRulerMode)
    .function("RulerModeOn", &vtkAxisActor2D::RulerModeOn)
    .function("RulerModeOff", &vtkAxisActor2D::RulerModeOff)
    .function("SetRulerDistance", &vtkAxisActor2D::SetRulerDistance)
    .function("GetRulerDistanceMinValue", &vtkAxisActor2D::GetRulerDistanceMinValue)
    .function("GetRulerDistanceMaxValue", &vtkAxisActor2D::GetRulerDistanceMaxValue)
    .function("GetRulerDistance", &vtkAxisActor2D::GetRulerDistance)
    .function("SetNumberOfLabels", &vtkAxisActor2D::SetNumberOfLabels)
    .function("GetNumberOfLabelsMinValue", &vtkAxisActor2D::GetNumberOfLabelsMinValue)
    .function("GetNumberOfLabelsMaxValue", &vtkAxisActor2D::GetNumberOfLabelsMaxValue)
    .function("GetNumberOfLabels", &vtkAxisActor2D::GetNumberOfLabels)
    .function("SetPrecision", &vtkAxisActor2D::SetPrecision)
    .function("GetPrecisionMinValue", &vtkAxisActor2D::GetPrecisionMinValue)
    .function("GetPrecisionMaxValue", &vtkAxisActor2D::GetPrecisionMaxValue)
    .function("GetPrecision", &vtkAxisActor2D::GetPrecision)
    .function("SetNotation", &vtkAxisActor2D::SetNotation)
    .function("GetNotationMinValue", &vtkAxisActor2D::GetNotationMinValue)
    .function("GetNotationMaxValue", &vtkAxisActor2D::GetNotationMaxValue)
    .function("GetNotation", &vtkAxisActor2D::GetNotation)
    .function("SetLabelFormat", emscripten::optional_override([](vtkAxisActor2D& self, const std::string & arg_0) -> void {  return self.SetLabelFormat( arg_0.c_str());}))
    .function("GetLabelFormat", emscripten::optional_override([](vtkAxisActor2D& self) -> std::string {  return self.GetLabelFormat();}))
    .function("SetSnapLabelsToGrid", &vtkAxisActor2D::SetSnapLabelsToGrid)
    .function("GetSnapLabelsToGrid", &vtkAxisActor2D::GetSnapLabelsToGrid)
    .function("SnapLabelsToGridOn", &vtkAxisActor2D::SnapLabelsToGridOn)
    .function("SnapLabelsToGridOff", &vtkAxisActor2D::SnapLabelsToGridOff)
    .function("SetAdjustLabels", &vtkAxisActor2D::SetAdjustLabels)
    .function("GetAdjustLabels", &vtkAxisActor2D::GetAdjustLabels)
    .function("AdjustLabelsOn", &vtkAxisActor2D::AdjustLabelsOn)
    .function("AdjustLabelsOff", &vtkAxisActor2D::AdjustLabelsOff)
    .function("SetSkipFirstTick", &vtkAxisActor2D::SetSkipFirstTick)
    .function("GetSkipFirstTick", &vtkAxisActor2D::GetSkipFirstTick)
    .function("SkipFirstTickOn", &vtkAxisActor2D::SkipFirstTickOn)
    .function("SkipFirstTickOff", &vtkAxisActor2D::SkipFirstTickOff)
    .function("GetAdjustedRange", emscripten::select_overload<std::uintptr_t(vtkAxisActor2D&)>([](vtkAxisActor2D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetAdjustedRange()); }))
    .function("GetAdjustedNumberOfLabels", &vtkAxisActor2D::GetAdjustedNumberOfLabels)
    .function("GetTickPositions", &vtkAxisActor2D::GetTickPositions, emscripten::allow_raw_pointers())
    .function("SetTitle", emscripten::optional_override([](vtkAxisActor2D& self, const std::string & arg_0) -> void {  return self.SetTitle( arg_0.c_str());}))
    .function("GetTitle", emscripten::optional_override([](vtkAxisActor2D& self) -> std::string {  return self.GetTitle();}))
    .function("SetTitleTextProperty", &vtkAxisActor2D::SetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("GetTitleTextProperty", &vtkAxisActor2D::GetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("SetLabelTextProperty", &vtkAxisActor2D::SetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("GetLabelTextProperty", &vtkAxisActor2D::GetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("SetTickLength", &vtkAxisActor2D::SetTickLength)
    .function("GetTickLengthMinValue", &vtkAxisActor2D::GetTickLengthMinValue)
    .function("GetTickLengthMaxValue", &vtkAxisActor2D::GetTickLengthMaxValue)
    .function("GetTickLength", &vtkAxisActor2D::GetTickLength)
    .function("SetNumberOfMinorTicks", &vtkAxisActor2D::SetNumberOfMinorTicks)
    .function("GetNumberOfMinorTicksMinValue", &vtkAxisActor2D::GetNumberOfMinorTicksMinValue)
    .function("GetNumberOfMinorTicksMaxValue", &vtkAxisActor2D::GetNumberOfMinorTicksMaxValue)
    .function("GetNumberOfMinorTicks", &vtkAxisActor2D::GetNumberOfMinorTicks)
    .function("SetMinorTickLength", &vtkAxisActor2D::SetMinorTickLength)
    .function("GetMinorTickLengthMinValue", &vtkAxisActor2D::GetMinorTickLengthMinValue)
    .function("GetMinorTickLengthMaxValue", &vtkAxisActor2D::GetMinorTickLengthMaxValue)
    .function("GetMinorTickLength", &vtkAxisActor2D::GetMinorTickLength)
    .function("SetTickOffset", &vtkAxisActor2D::SetTickOffset)
    .function("GetTickOffsetMinValue", &vtkAxisActor2D::GetTickOffsetMinValue)
    .function("GetTickOffsetMaxValue", &vtkAxisActor2D::GetTickOffsetMaxValue)
    .function("GetTickOffset", &vtkAxisActor2D::GetTickOffset)
    .function("SetAxisVisibility", &vtkAxisActor2D::SetAxisVisibility)
    .function("GetAxisVisibility", &vtkAxisActor2D::GetAxisVisibility)
    .function("AxisVisibilityOn", &vtkAxisActor2D::AxisVisibilityOn)
    .function("AxisVisibilityOff", &vtkAxisActor2D::AxisVisibilityOff)
    .function("SetTickVisibility", &vtkAxisActor2D::SetTickVisibility)
    .function("GetTickVisibility", &vtkAxisActor2D::GetTickVisibility)
    .function("TickVisibilityOn", &vtkAxisActor2D::TickVisibilityOn)
    .function("TickVisibilityOff", &vtkAxisActor2D::TickVisibilityOff)
    .function("SetLabelVisibility", &vtkAxisActor2D::SetLabelVisibility)
    .function("GetLabelVisibility", &vtkAxisActor2D::GetLabelVisibility)
    .function("LabelVisibilityOn", &vtkAxisActor2D::LabelVisibilityOn)
    .function("LabelVisibilityOff", &vtkAxisActor2D::LabelVisibilityOff)
    .function("SetTitleVisibility", &vtkAxisActor2D::SetTitleVisibility)
    .function("GetTitleVisibility", &vtkAxisActor2D::GetTitleVisibility)
    .function("TitleVisibilityOn", &vtkAxisActor2D::TitleVisibilityOn)
    .function("TitleVisibilityOff", &vtkAxisActor2D::TitleVisibilityOff)
    .function("SetTitlePosition", &vtkAxisActor2D::SetTitlePosition)
    .function("GetTitlePosition", &vtkAxisActor2D::GetTitlePosition)
    .function("SetFontFactor", &vtkAxisActor2D::SetFontFactor)
    .function("GetFontFactorMinValue", &vtkAxisActor2D::GetFontFactorMinValue)
    .function("GetFontFactorMaxValue", &vtkAxisActor2D::GetFontFactorMaxValue)
    .function("GetFontFactor", &vtkAxisActor2D::GetFontFactor)
    .function("SetLabelFactor", &vtkAxisActor2D::SetLabelFactor)
    .function("GetLabelFactorMinValue", &vtkAxisActor2D::GetLabelFactorMinValue)
    .function("GetLabelFactorMaxValue", &vtkAxisActor2D::GetLabelFactorMaxValue)
    .function("GetLabelFactor", &vtkAxisActor2D::GetLabelFactor)
    .function("UpdateGeometryAndRenderOpaqueGeometry", &vtkAxisActor2D::UpdateGeometryAndRenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkAxisActor2D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkAxisActor2D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkAxisActor2D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkAxisActor2D::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkAxisActor2D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetSizeFontRelativeToAxis", &vtkAxisActor2D::SetSizeFontRelativeToAxis)
    .function("GetSizeFontRelativeToAxis", &vtkAxisActor2D::GetSizeFontRelativeToAxis)
    .function("SizeFontRelativeToAxisOn", &vtkAxisActor2D::SizeFontRelativeToAxisOn)
    .function("SizeFontRelativeToAxisOff", &vtkAxisActor2D::SizeFontRelativeToAxisOff)
    .function("SetUseFontSizeFromProperty", &vtkAxisActor2D::SetUseFontSizeFromProperty)
    .function("GetUseFontSizeFromProperty", &vtkAxisActor2D::GetUseFontSizeFromProperty)
    .function("UseFontSizeFromPropertyOn", &vtkAxisActor2D::UseFontSizeFromPropertyOn)
    .function("UseFontSizeFromPropertyOff", &vtkAxisActor2D::UseFontSizeFromPropertyOff)
    .function("ShallowCopy", &vtkAxisActor2D::ShallowCopy, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkAxisActor2D_0_2_constants) {
  emscripten::constant("VTK_MAX_LABELS", static_cast<int>(25));
}
