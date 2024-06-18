// JavaScript wrapper for vtkScalarBarActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkScalarBarActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkScalarBarActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkScalarsToColors.h"
#include "vtkPiecewiseFunction.h"
#include "vtkDoubleArray.h"
#include "vtkTextProperty.h"
#include "vtkProp.h"
#include "vtkTexturedActor2D.h"
#include "vtkProperty2D.h"
#include "vtkScalarBarActor.h"

EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkScalarBarActor_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_ORIENT_HORIZONTAL", 0 },
      { "VTK_ORIENT_VERTICAL", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkScalarBarActor>(vtkScalarBarActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkScalarBarActor_class) {
  emscripten::class_<vtkScalarBarActor, emscripten::base<vtkActor2D>>("vtkScalarBarActor")
    .smart_ptr<vtkSmartPointer<vtkScalarBarActor>>("vtkSmartPointer<vtkScalarBarActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkScalarBarActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScalarBarActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkScalarBarActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkScalarBarActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkScalarBarActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScalarBarActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkScalarBarActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderOpaqueGeometry", &vtkScalarBarActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkScalarBarActor::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkScalarBarActor::RenderOverlay, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkScalarBarActor::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkScalarBarActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetLookupTable", &vtkScalarBarActor::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkScalarBarActor::GetLookupTable, emscripten::allow_raw_pointers())
    .function("SetOpacityFunction", &vtkScalarBarActor::SetOpacityFunction, emscripten::allow_raw_pointers())
    .function("GetOpacityFunction", &vtkScalarBarActor::GetOpacityFunction, emscripten::allow_raw_pointers())
    .function("SetUseOpacity", &vtkScalarBarActor::SetUseOpacity)
    .function("GetUseOpacity", &vtkScalarBarActor::GetUseOpacity)
    .function("UseOpacityOn", &vtkScalarBarActor::UseOpacityOn)
    .function("UseOpacityOff", &vtkScalarBarActor::UseOpacityOff)
    .function("SetMaximumNumberOfColors", &vtkScalarBarActor::SetMaximumNumberOfColors)
    .function("GetMaximumNumberOfColorsMinValue", &vtkScalarBarActor::GetMaximumNumberOfColorsMinValue)
    .function("GetMaximumNumberOfColorsMaxValue", &vtkScalarBarActor::GetMaximumNumberOfColorsMaxValue)
    .function("GetMaximumNumberOfColors", &vtkScalarBarActor::GetMaximumNumberOfColors)
    .function("SetNumberOfLabels", &vtkScalarBarActor::SetNumberOfLabels)
    .function("GetNumberOfLabelsMinValue", &vtkScalarBarActor::GetNumberOfLabelsMinValue)
    .function("GetNumberOfLabelsMaxValue", &vtkScalarBarActor::GetNumberOfLabelsMaxValue)
    .function("GetNumberOfLabels", &vtkScalarBarActor::GetNumberOfLabels)
    .function("SetCustomLabels", &vtkScalarBarActor::SetCustomLabels, emscripten::allow_raw_pointers())
    .function("GetCustomLabels", &vtkScalarBarActor::GetCustomLabels, emscripten::allow_raw_pointers())
    .function("GetUseCustomLabels", &vtkScalarBarActor::GetUseCustomLabels)
    .function("SetUseCustomLabels", &vtkScalarBarActor::SetUseCustomLabels)
    .function("UseCustomLabelsOn", &vtkScalarBarActor::UseCustomLabelsOn)
    .function("UseCustomLabelsOff", &vtkScalarBarActor::UseCustomLabelsOff)
    .function("SetOrientation", &vtkScalarBarActor::SetOrientation)
    .function("GetOrientationMinValue", &vtkScalarBarActor::GetOrientationMinValue)
    .function("GetOrientationMaxValue", &vtkScalarBarActor::GetOrientationMaxValue)
    .function("GetOrientation", &vtkScalarBarActor::GetOrientation)
    .function("SetOrientationToHorizontal", &vtkScalarBarActor::SetOrientationToHorizontal)
    .function("SetOrientationToVertical", &vtkScalarBarActor::SetOrientationToVertical)
    .function("GetForceVerticalTitle", &vtkScalarBarActor::GetForceVerticalTitle)
    .function("SetForceVerticalTitle", &vtkScalarBarActor::SetForceVerticalTitle)
    .function("SetTitleTextProperty", &vtkScalarBarActor::SetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("GetTitleTextProperty", &vtkScalarBarActor::GetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("SetLabelTextProperty", &vtkScalarBarActor::SetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("GetLabelTextProperty", &vtkScalarBarActor::GetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("SetAnnotationTextProperty", &vtkScalarBarActor::SetAnnotationTextProperty, emscripten::allow_raw_pointers())
    .function("GetAnnotationTextProperty", &vtkScalarBarActor::GetAnnotationTextProperty, emscripten::allow_raw_pointers())
    .function("SetLabelFormat", emscripten::optional_override([](vtkScalarBarActor& self, const std::string & arg_0) -> void {  return self.SetLabelFormat( arg_0.c_str());}))
    .function("GetLabelFormat", emscripten::optional_override([](vtkScalarBarActor& self) -> std::string {  return self.GetLabelFormat();}))
    .function("SetTitle", emscripten::optional_override([](vtkScalarBarActor& self, const std::string & arg_0) -> void {  return self.SetTitle( arg_0.c_str());}))
    .function("GetTitle", emscripten::optional_override([](vtkScalarBarActor& self) -> std::string {  return self.GetTitle();}))
    .function("SetComponentTitle", emscripten::optional_override([](vtkScalarBarActor& self, const std::string & arg_0) -> void {  return self.SetComponentTitle( arg_0.c_str());}))
    .function("GetComponentTitle", emscripten::optional_override([](vtkScalarBarActor& self) -> std::string {  return self.GetComponentTitle();}))
    .function("ShallowCopy", &vtkScalarBarActor::ShallowCopy, emscripten::allow_raw_pointers())
    .function("SetTextureGridWidth", &vtkScalarBarActor::SetTextureGridWidth)
    .function("GetTextureGridWidth", &vtkScalarBarActor::GetTextureGridWidth)
    .function("GetTextureActor", &vtkScalarBarActor::GetTextureActor, emscripten::allow_raw_pointers())
    .function("SetTextPosition", &vtkScalarBarActor::SetTextPosition)
    .function("GetTextPositionMinValue", &vtkScalarBarActor::GetTextPositionMinValue)
    .function("GetTextPositionMaxValue", &vtkScalarBarActor::GetTextPositionMaxValue)
    .function("GetTextPosition", &vtkScalarBarActor::GetTextPosition)
    .function("SetTextPositionToPrecedeScalarBar", &vtkScalarBarActor::SetTextPositionToPrecedeScalarBar)
    .function("SetTextPositionToSucceedScalarBar", &vtkScalarBarActor::SetTextPositionToSucceedScalarBar)
    .function("SetMaximumWidthInPixels", &vtkScalarBarActor::SetMaximumWidthInPixels)
    .function("GetMaximumWidthInPixels", &vtkScalarBarActor::GetMaximumWidthInPixels)
    .function("SetMaximumHeightInPixels", &vtkScalarBarActor::SetMaximumHeightInPixels)
    .function("GetMaximumHeightInPixels", &vtkScalarBarActor::GetMaximumHeightInPixels)
    .function("SetAnnotationLeaderPadding", &vtkScalarBarActor::SetAnnotationLeaderPadding)
    .function("GetAnnotationLeaderPadding", &vtkScalarBarActor::GetAnnotationLeaderPadding)
    .function("SetDrawAnnotations", &vtkScalarBarActor::SetDrawAnnotations)
    .function("GetDrawAnnotations", &vtkScalarBarActor::GetDrawAnnotations)
    .function("DrawAnnotationsOn", &vtkScalarBarActor::DrawAnnotationsOn)
    .function("DrawAnnotationsOff", &vtkScalarBarActor::DrawAnnotationsOff)
    .function("SetDrawNanAnnotation", &vtkScalarBarActor::SetDrawNanAnnotation)
    .function("GetDrawNanAnnotation", &vtkScalarBarActor::GetDrawNanAnnotation)
    .function("DrawNanAnnotationOn", &vtkScalarBarActor::DrawNanAnnotationOn)
    .function("DrawNanAnnotationOff", &vtkScalarBarActor::DrawNanAnnotationOff)
    .function("SetDrawBelowRangeSwatch", &vtkScalarBarActor::SetDrawBelowRangeSwatch)
    .function("GetDrawBelowRangeSwatch", &vtkScalarBarActor::GetDrawBelowRangeSwatch)
    .function("DrawBelowRangeSwatchOn", &vtkScalarBarActor::DrawBelowRangeSwatchOn)
    .function("DrawBelowRangeSwatchOff", &vtkScalarBarActor::DrawBelowRangeSwatchOff)
    .function("SetBelowRangeAnnotation", emscripten::optional_override([](vtkScalarBarActor& self, const std::string & arg_0) -> void {  return self.SetBelowRangeAnnotation( arg_0.c_str());}))
    .function("GetBelowRangeAnnotation", emscripten::optional_override([](vtkScalarBarActor& self) -> std::string {  return self.GetBelowRangeAnnotation();}))
    .function("SetDrawAboveRangeSwatch", &vtkScalarBarActor::SetDrawAboveRangeSwatch)
    .function("GetDrawAboveRangeSwatch", &vtkScalarBarActor::GetDrawAboveRangeSwatch)
    .function("DrawAboveRangeSwatchOn", &vtkScalarBarActor::DrawAboveRangeSwatchOn)
    .function("DrawAboveRangeSwatchOff", &vtkScalarBarActor::DrawAboveRangeSwatchOff)
    .function("SetAboveRangeAnnotation", emscripten::optional_override([](vtkScalarBarActor& self, const std::string & arg_0) -> void {  return self.SetAboveRangeAnnotation( arg_0.c_str());}))
    .function("GetAboveRangeAnnotation", emscripten::optional_override([](vtkScalarBarActor& self) -> std::string {  return self.GetAboveRangeAnnotation();}))
    .function("SetFixedAnnotationLeaderLineColor", &vtkScalarBarActor::SetFixedAnnotationLeaderLineColor)
    .function("GetFixedAnnotationLeaderLineColor", &vtkScalarBarActor::GetFixedAnnotationLeaderLineColor)
    .function("FixedAnnotationLeaderLineColorOn", &vtkScalarBarActor::FixedAnnotationLeaderLineColorOn)
    .function("FixedAnnotationLeaderLineColorOff", &vtkScalarBarActor::FixedAnnotationLeaderLineColorOff)
    .function("SetNanAnnotation", emscripten::optional_override([](vtkScalarBarActor& self, const std::string & arg_0) -> void {  return self.SetNanAnnotation( arg_0.c_str());}))
    .function("GetNanAnnotation", emscripten::optional_override([](vtkScalarBarActor& self) -> std::string {  return self.GetNanAnnotation();}))
    .function("SetAnnotationTextScaling", &vtkScalarBarActor::SetAnnotationTextScaling)
    .function("GetAnnotationTextScaling", &vtkScalarBarActor::GetAnnotationTextScaling)
    .function("AnnotationTextScalingOn", &vtkScalarBarActor::AnnotationTextScalingOn)
    .function("AnnotationTextScalingOff", &vtkScalarBarActor::AnnotationTextScalingOff)
    .function("SetDrawBackground", &vtkScalarBarActor::SetDrawBackground)
    .function("GetDrawBackground", &vtkScalarBarActor::GetDrawBackground)
    .function("DrawBackgroundOn", &vtkScalarBarActor::DrawBackgroundOn)
    .function("DrawBackgroundOff", &vtkScalarBarActor::DrawBackgroundOff)
    .function("SetDrawFrame", &vtkScalarBarActor::SetDrawFrame)
    .function("GetDrawFrame", &vtkScalarBarActor::GetDrawFrame)
    .function("DrawFrameOn", &vtkScalarBarActor::DrawFrameOn)
    .function("DrawFrameOff", &vtkScalarBarActor::DrawFrameOff)
    .function("SetDrawColorBar", &vtkScalarBarActor::SetDrawColorBar)
    .function("GetDrawColorBar", &vtkScalarBarActor::GetDrawColorBar)
    .function("DrawColorBarOn", &vtkScalarBarActor::DrawColorBarOn)
    .function("DrawColorBarOff", &vtkScalarBarActor::DrawColorBarOff)
    .function("SetDrawTickLabels", &vtkScalarBarActor::SetDrawTickLabels)
    .function("GetDrawTickLabels", &vtkScalarBarActor::GetDrawTickLabels)
    .function("DrawTickLabelsOn", &vtkScalarBarActor::DrawTickLabelsOn)
    .function("DrawTickLabelsOff", &vtkScalarBarActor::DrawTickLabelsOff)
    .function("SetBackgroundProperty", &vtkScalarBarActor::SetBackgroundProperty, emscripten::allow_raw_pointers())
    .function("GetBackgroundProperty", &vtkScalarBarActor::GetBackgroundProperty, emscripten::allow_raw_pointers())
    .function("SetFrameProperty", &vtkScalarBarActor::SetFrameProperty, emscripten::allow_raw_pointers())
    .function("GetFrameProperty", &vtkScalarBarActor::GetFrameProperty, emscripten::allow_raw_pointers())
    .function("GetTextPad", &vtkScalarBarActor::GetTextPad)
    .function("SetTextPad", &vtkScalarBarActor::SetTextPad)
    .function("GetVerticalTitleSeparation", &vtkScalarBarActor::GetVerticalTitleSeparation)
    .function("SetVerticalTitleSeparation", &vtkScalarBarActor::SetVerticalTitleSeparation)
    .function("GetBarRatio", &vtkScalarBarActor::GetBarRatio)
    .function("SetBarRatio", &vtkScalarBarActor::SetBarRatio)
    .function("GetBarRatioMinValue", &vtkScalarBarActor::GetBarRatioMinValue)
    .function("GetBarRatioMaxValue", &vtkScalarBarActor::GetBarRatioMaxValue)
    .function("GetTitleRatio", &vtkScalarBarActor::GetTitleRatio)
    .function("SetTitleRatio", &vtkScalarBarActor::SetTitleRatio)
    .function("GetTitleRatioMinValue", &vtkScalarBarActor::GetTitleRatioMinValue)
    .function("GetTitleRatioMaxValue", &vtkScalarBarActor::GetTitleRatioMaxValue)
    .function("SetUnconstrainedFontSize", &vtkScalarBarActor::SetUnconstrainedFontSize)
    .function("GetUnconstrainedFontSize", &vtkScalarBarActor::GetUnconstrainedFontSize)
    .function("UnconstrainedFontSizeOn", &vtkScalarBarActor::UnconstrainedFontSizeOn)
    .function("UnconstrainedFontSizeOff", &vtkScalarBarActor::UnconstrainedFontSizeOff);
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkScalarBarActor_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkScalarBarActor_PrecedeScalarBar", vtkScalarBarActor::PrecedeScalarBar },
      { "vtkScalarBarActor_SucceedScalarBar", vtkScalarBarActor::SucceedScalarBar },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
