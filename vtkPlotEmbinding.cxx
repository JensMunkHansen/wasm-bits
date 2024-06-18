// JavaScript wrapper for vtkPlot with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlot.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkRect.h"
#include "vtkStdString.h"
#include "vtkVector.h"
#include "vtkContextPolygon.h"
#include "vtkPen.h"
#include "vtkBrush.h"
#include "vtkStringArray.h"
#include "vtkContextMapper2D.h"
#include "vtkTable.h"
#include "vtkAlgorithmOutput.h"
#include "vtkIdTypeArray.h"
#include "vtkAxis.h"
#include "vtkContextMouseEvent.h"
#include "vtkDataArray.h"
#include "vtkPlot.h"

template<> void emscripten::internal::raw_destructor<vtkPlot>(vtkPlot * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlot_class) {
  emscripten::class_<vtkPlot, emscripten::base<vtkContextItem>>("vtkPlot")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlot::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlot& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlot::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlot::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlot::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlot& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", &vtkPlot::Update)
    .function("SetLegendVisibility", &vtkPlot::SetLegendVisibility)
    .function("GetLegendVisibility", &vtkPlot::GetLegendVisibility)
    .function("LegendVisibilityOn", &vtkPlot::LegendVisibilityOn)
    .function("LegendVisibilityOff", &vtkPlot::LegendVisibilityOff)
    .function("PaintLegend", &vtkPlot::PaintLegend, emscripten::allow_raw_pointers())
    .function("SetTooltipLabelFormat", &vtkPlot::SetTooltipLabelFormat)
    .function("GetTooltipLabelFormat", &vtkPlot::GetTooltipLabelFormat)
    .function("SetTooltipNotation", &vtkPlot::SetTooltipNotation)
    .function("GetTooltipNotation", &vtkPlot::GetTooltipNotation)
    .function("SetTooltipPrecision", &vtkPlot::SetTooltipPrecision)
    .function("GetTooltipPrecision", &vtkPlot::GetTooltipPrecision)
    .function("GetTooltipLabel", &vtkPlot::GetTooltipLabel)
    .function("SelectPoints", &vtkPlot::SelectPoints)
    .function("SelectPointsInPolygon", &vtkPlot::SelectPointsInPolygon)
    .function("SetColor", emscripten::select_overload<void(vtkPlot&, unsigned char, unsigned char, unsigned char, unsigned char)>([](vtkPlot& self, unsigned char arg_0, unsigned char arg_1, unsigned char arg_2, unsigned char arg_3) -> void { return self.SetColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetColorF", emscripten::select_overload<void(vtkPlot&, double, double, double, double)>([](vtkPlot& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetColorF( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetColorF", emscripten::select_overload<void(vtkPlot&, double, double, double)>([](vtkPlot& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetColorF( arg_0, arg_1, arg_2); }))
    .function("SetWidth", &vtkPlot::SetWidth)
    .function("GetWidth", &vtkPlot::GetWidth)
    .function("SetPen", &vtkPlot::SetPen, emscripten::allow_raw_pointers())
    .function("GetPen", &vtkPlot::GetPen, emscripten::allow_raw_pointers())
    .function("SetBrush", &vtkPlot::SetBrush, emscripten::allow_raw_pointers())
    .function("GetBrush", &vtkPlot::GetBrush, emscripten::allow_raw_pointers())
    .function("SetSelectionPen", &vtkPlot::SetSelectionPen, emscripten::allow_raw_pointers())
    .function("GetSelectionPen", &vtkPlot::GetSelectionPen, emscripten::allow_raw_pointers())
    .function("SetSelectionBrush", &vtkPlot::SetSelectionBrush, emscripten::allow_raw_pointers())
    .function("GetSelectionBrush", &vtkPlot::GetSelectionBrush, emscripten::allow_raw_pointers())
    .function("SetLabel", &vtkPlot::SetLabel)
    .function("GetLabel", emscripten::select_overload<vtkStdString(vtkPlot&)>([](vtkPlot& self) -> vtkStdString { return self.GetLabel(); }))
    .function("GetLabel", emscripten::select_overload<vtkStdString(vtkPlot&, int)>([](vtkPlot& self, int arg_0) -> vtkStdString { return self.GetLabel( arg_0); }))
    .function("SetLabels", &vtkPlot::SetLabels, emscripten::allow_raw_pointers())
    .function("GetLabels", &vtkPlot::GetLabels, emscripten::allow_raw_pointers())
    .function("GetNumberOfLabels", &vtkPlot::GetNumberOfLabels)
    .function("SetIndexedLabels", &vtkPlot::SetIndexedLabels, emscripten::allow_raw_pointers())
    .function("GetIndexedLabels", &vtkPlot::GetIndexedLabels, emscripten::allow_raw_pointers())
    .function("GetData", &vtkPlot::GetData, emscripten::allow_raw_pointers())
    .function("GetUseIndexForXSeries", &vtkPlot::GetUseIndexForXSeries)
    .function("SetUseIndexForXSeries", &vtkPlot::SetUseIndexForXSeries)
    .function("SetInputData", emscripten::select_overload<void(vtkPlot&, vtkTable*)>([](vtkPlot& self, vtkTable* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlot&, vtkTable*, const vtkStdString&, const vtkStdString&)>([](vtkPlot& self, vtkTable* arg_0, const vtkStdString& arg_1, const vtkStdString& arg_2) -> void { return self.SetInputData( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlot&, vtkTable*, int, int)>([](vtkPlot& self, vtkTable* arg_0, int arg_1, int arg_2) -> void { return self.SetInputData( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetInputConnection", &vtkPlot::SetInputConnection, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkPlot::GetInput, emscripten::allow_raw_pointers())
    .function("GetInputConnection", &vtkPlot::GetInputConnection, emscripten::allow_raw_pointers())
    .function("SetInputArray", &vtkPlot::SetInputArray)
    .function("SetXAxisInputArrayToProcess", &vtkPlot::SetXAxisInputArrayToProcess)
    .function("GetXAxisInputArrayToProcess", &vtkPlot::GetXAxisInputArrayToProcess)
    .function("SetYAxisInputArrayToProcess", &vtkPlot::SetYAxisInputArrayToProcess)
    .function("GetYAxisInputArrayToProcess", &vtkPlot::GetYAxisInputArrayToProcess)
    .function("SetSelectable", &vtkPlot::SetSelectable)
    .function("GetSelectable", &vtkPlot::GetSelectable)
    .function("SelectableOn", &vtkPlot::SelectableOn)
    .function("SelectableOff", &vtkPlot::SelectableOff)
    .function("SetSelection", &vtkPlot::SetSelection, emscripten::allow_raw_pointers())
    .function("GetSelection", &vtkPlot::GetSelection, emscripten::allow_raw_pointers())
    .function("GetXAxis", &vtkPlot::GetXAxis, emscripten::allow_raw_pointers())
    .function("SetXAxis", &vtkPlot::SetXAxis, emscripten::allow_raw_pointers())
    .function("GetYAxis", &vtkPlot::GetYAxis, emscripten::allow_raw_pointers())
    .function("SetYAxis", &vtkPlot::SetYAxis, emscripten::allow_raw_pointers())
    .function("SetShiftScale", &vtkPlot::SetShiftScale)
    .function("GetShiftScale", &vtkPlot::GetShiftScale)
    .function("SetProperty", &vtkPlot::SetProperty)
    .function("GetProperty", &vtkPlot::GetProperty)
    .function("Hit", &vtkPlot::Hit)
    .function("UpdateCache", &vtkPlot::UpdateCache)
    .class_function("FilterSelectedPoints", &vtkPlot::FilterSelectedPoints, emscripten::allow_raw_pointers());
}
