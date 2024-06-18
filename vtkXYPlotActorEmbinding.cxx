// JavaScript wrapper for vtkXYPlotActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkXYPlotActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkXYPlotActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkPolyData.h"
#include "vtkLegendBoxActor.h"
#include "vtkGlyphSource2D.h"
#include "vtkAxisActor2D.h"
#include "vtkTextProperty.h"
#include "vtkViewport.h"
#include "vtkProperty2D.h"
#include "vtkWindow.h"
#include "vtkXYPlotActor.h"

EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkXYPlotActor_0_1_constants) {
  const struct { const char *name; int value; }
    constants[9] = {
      { "VTK_XYPLOT_INDEX", 0 },
      { "VTK_XYPLOT_ARC_LENGTH", 1 },
      { "VTK_XYPLOT_NORMALIZED_ARC_LENGTH", 2 },
      { "VTK_XYPLOT_VALUE", 3 },
      { "VTK_XYPLOT_ROW", 0 },
      { "VTK_XYPLOT_COLUMN", 1 },
      { "VTK_XYPLOT_Y_AXIS_TOP", 0 },
      { "VTK_XYPLOT_Y_AXIS_HCENTER", 1 },
      { "VTK_XYPLOT_Y_AXIS_VCENTER", 2 },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkXYPlotActor_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkXYPlotActor>(vtkXYPlotActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXYPlotActor_class) {
  using Alignment=vtkXYPlotActor::Alignment;
  emscripten::class_<vtkXYPlotActor, emscripten::base<vtkActor2D>>("vtkXYPlotActor")
    .smart_ptr<vtkSmartPointer<vtkXYPlotActor>>("vtkSmartPointer<vtkXYPlotActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXYPlotActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXYPlotActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXYPlotActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXYPlotActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXYPlotActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXYPlotActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXYPlotActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddDataSetInput", emscripten::select_overload<void(vtkXYPlotActor&, vtkDataSet*, const std::string &, int)>([](vtkXYPlotActor& self, vtkDataSet* arg_0, const std::string & arg_1, int arg_2) -> void { return self.AddDataSetInput( arg_0, arg_1.c_str(), arg_2); }), emscripten::allow_raw_pointers())
    .function("AddDataSetInput", emscripten::select_overload<void(vtkXYPlotActor&, vtkDataSet*)>([](vtkXYPlotActor& self, vtkDataSet* arg_0) -> void { return self.AddDataSetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddDataSetInputConnection", emscripten::select_overload<void(vtkXYPlotActor&, vtkAlgorithmOutput*, const std::string &, int)>([](vtkXYPlotActor& self, vtkAlgorithmOutput* arg_0, const std::string & arg_1, int arg_2) -> void { return self.AddDataSetInputConnection( arg_0, arg_1.c_str(), arg_2); }), emscripten::allow_raw_pointers())
    .function("AddDataSetInputConnection", emscripten::select_overload<void(vtkXYPlotActor&, vtkAlgorithmOutput*)>([](vtkXYPlotActor& self, vtkAlgorithmOutput* arg_0) -> void { return self.AddDataSetInputConnection( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveDataSetInput", emscripten::select_overload<void(vtkXYPlotActor&, vtkDataSet*, const std::string &, int)>([](vtkXYPlotActor& self, vtkDataSet* arg_0, const std::string & arg_1, int arg_2) -> void { return self.RemoveDataSetInput( arg_0, arg_1.c_str(), arg_2); }), emscripten::allow_raw_pointers())
    .function("RemoveDataSetInput", emscripten::select_overload<void(vtkXYPlotActor&, vtkDataSet*)>([](vtkXYPlotActor& self, vtkDataSet* arg_0) -> void { return self.RemoveDataSetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveDataSetInputConnection", emscripten::select_overload<void(vtkXYPlotActor&, vtkAlgorithmOutput*, const std::string &, int)>([](vtkXYPlotActor& self, vtkAlgorithmOutput* arg_0, const std::string & arg_1, int arg_2) -> void { return self.RemoveDataSetInputConnection( arg_0, arg_1.c_str(), arg_2); }), emscripten::allow_raw_pointers())
    .function("RemoveDataSetInputConnection", emscripten::select_overload<void(vtkXYPlotActor&, vtkAlgorithmOutput*)>([](vtkXYPlotActor& self, vtkAlgorithmOutput* arg_0) -> void { return self.RemoveDataSetInputConnection( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveAllDataSetInputConnections", &vtkXYPlotActor::RemoveAllDataSetInputConnections)
    .function("GetDataSetInputConnection", &vtkXYPlotActor::GetDataSetInputConnection, emscripten::allow_raw_pointers())
    .function("GetNumberOfDataSetInputConnections", &vtkXYPlotActor::GetNumberOfDataSetInputConnections)
    .function("SetPointComponent", &vtkXYPlotActor::SetPointComponent)
    .function("GetPointComponent", &vtkXYPlotActor::GetPointComponent)
    .function("SetXValues", &vtkXYPlotActor::SetXValues)
    .function("GetXValuesMinValue", &vtkXYPlotActor::GetXValuesMinValue)
    .function("GetXValuesMaxValue", &vtkXYPlotActor::GetXValuesMaxValue)
    .function("GetXValues", &vtkXYPlotActor::GetXValues)
    .function("SetXValuesToIndex", &vtkXYPlotActor::SetXValuesToIndex)
    .function("SetXValuesToArcLength", &vtkXYPlotActor::SetXValuesToArcLength)
    .function("SetXValuesToNormalizedArcLength", &vtkXYPlotActor::SetXValuesToNormalizedArcLength)
    .function("SetXValuesToValue", &vtkXYPlotActor::SetXValuesToValue)
    .function("GetXValuesAsString", emscripten::optional_override([](vtkXYPlotActor& self) -> std::string {  return self.GetXValuesAsString();}))
    .function("AddDataObjectInput", &vtkXYPlotActor::AddDataObjectInput, emscripten::allow_raw_pointers())
    .function("AddDataObjectInputConnection", &vtkXYPlotActor::AddDataObjectInputConnection, emscripten::allow_raw_pointers())
    .function("RemoveDataObjectInputConnection", &vtkXYPlotActor::RemoveDataObjectInputConnection, emscripten::allow_raw_pointers())
    .function("RemoveDataObjectInput", &vtkXYPlotActor::RemoveDataObjectInput, emscripten::allow_raw_pointers())
    .function("RemoveAllDataObjectInputConnections", &vtkXYPlotActor::RemoveAllDataObjectInputConnections)
    .function("GetDataObjectInputConnection", &vtkXYPlotActor::GetDataObjectInputConnection, emscripten::allow_raw_pointers())
    .function("GetNumberOfDataObjectInputConnections", &vtkXYPlotActor::GetNumberOfDataObjectInputConnections)
    .function("SetDataObjectPlotMode", &vtkXYPlotActor::SetDataObjectPlotMode)
    .function("GetDataObjectPlotModeMinValue", &vtkXYPlotActor::GetDataObjectPlotModeMinValue)
    .function("GetDataObjectPlotModeMaxValue", &vtkXYPlotActor::GetDataObjectPlotModeMaxValue)
    .function("GetDataObjectPlotMode", &vtkXYPlotActor::GetDataObjectPlotMode)
    .function("SetDataObjectPlotModeToRows", &vtkXYPlotActor::SetDataObjectPlotModeToRows)
    .function("SetDataObjectPlotModeToColumns", &vtkXYPlotActor::SetDataObjectPlotModeToColumns)
    .function("GetDataObjectPlotModeAsString", emscripten::optional_override([](vtkXYPlotActor& self) -> std::string {  return self.GetDataObjectPlotModeAsString();}))
    .function("SetDataObjectXComponent", &vtkXYPlotActor::SetDataObjectXComponent)
    .function("GetDataObjectXComponent", &vtkXYPlotActor::GetDataObjectXComponent)
    .function("SetDataObjectYComponent", &vtkXYPlotActor::SetDataObjectYComponent)
    .function("GetDataObjectYComponent", &vtkXYPlotActor::GetDataObjectYComponent)
    .function("SetPlotColor", emscripten::select_overload<void(vtkXYPlotActor&, int, double, double, double)>([](vtkXYPlotActor& self, int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetPlotColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetPlotSymbol", &vtkXYPlotActor::SetPlotSymbol, emscripten::allow_raw_pointers())
    .function("GetPlotSymbol", &vtkXYPlotActor::GetPlotSymbol, emscripten::allow_raw_pointers())
    .function("SetPlotLabel", emscripten::optional_override([](vtkXYPlotActor& self, int arg_0, const std::string & arg_1) -> void {  return self.SetPlotLabel( arg_0, arg_1.c_str());}))
    .function("GetPlotLabel", emscripten::optional_override([](vtkXYPlotActor& self, int arg_0) -> std::string {  return self.GetPlotLabel( arg_0);}))
    .function("GetPlotCurvePoints", &vtkXYPlotActor::GetPlotCurvePoints)
    .function("SetPlotCurvePoints", &vtkXYPlotActor::SetPlotCurvePoints)
    .function("PlotCurvePointsOn", &vtkXYPlotActor::PlotCurvePointsOn)
    .function("PlotCurvePointsOff", &vtkXYPlotActor::PlotCurvePointsOff)
    .function("GetPlotCurveLines", &vtkXYPlotActor::GetPlotCurveLines)
    .function("SetPlotCurveLines", &vtkXYPlotActor::SetPlotCurveLines)
    .function("PlotCurveLinesOn", &vtkXYPlotActor::PlotCurveLinesOn)
    .function("PlotCurveLinesOff", &vtkXYPlotActor::PlotCurveLinesOff)
    .function("SetPlotLines", emscripten::select_overload<void(vtkXYPlotActor&, int, int)>([](vtkXYPlotActor& self, int arg_0, int arg_1) -> void { return self.SetPlotLines( arg_0, arg_1); }))
    .function("SetPlotLines", emscripten::select_overload<void(vtkXYPlotActor&, int)>([](vtkXYPlotActor& self, int arg_0) -> void { return self.SetPlotLines( arg_0); }))
    .function("GetPlotLines", emscripten::select_overload<int(vtkXYPlotActor&, int)>([](vtkXYPlotActor& self, int arg_0) -> int { return self.GetPlotLines( arg_0); }))
    .function("GetPlotLines", emscripten::select_overload<int(vtkXYPlotActor&)>([](vtkXYPlotActor& self) -> int { return self.GetPlotLines(); }))
    .function("SetPlotPoints", emscripten::select_overload<void(vtkXYPlotActor&, int, int)>([](vtkXYPlotActor& self, int arg_0, int arg_1) -> void { return self.SetPlotPoints( arg_0, arg_1); }))
    .function("SetPlotPoints", emscripten::select_overload<void(vtkXYPlotActor&, int)>([](vtkXYPlotActor& self, int arg_0) -> void { return self.SetPlotPoints( arg_0); }))
    .function("GetPlotPoints", emscripten::select_overload<int(vtkXYPlotActor&, int)>([](vtkXYPlotActor& self, int arg_0) -> int { return self.GetPlotPoints( arg_0); }))
    .function("GetPlotPoints", emscripten::select_overload<int(vtkXYPlotActor&)>([](vtkXYPlotActor& self) -> int { return self.GetPlotPoints(); }))
    .function("SetExchangeAxes", &vtkXYPlotActor::SetExchangeAxes)
    .function("GetExchangeAxes", &vtkXYPlotActor::GetExchangeAxes)
    .function("ExchangeAxesOn", &vtkXYPlotActor::ExchangeAxesOn)
    .function("ExchangeAxesOff", &vtkXYPlotActor::ExchangeAxesOff)
    .function("SetReverseXAxis", &vtkXYPlotActor::SetReverseXAxis)
    .function("GetReverseXAxis", &vtkXYPlotActor::GetReverseXAxis)
    .function("ReverseXAxisOn", &vtkXYPlotActor::ReverseXAxisOn)
    .function("ReverseXAxisOff", &vtkXYPlotActor::ReverseXAxisOff)
    .function("SetReverseYAxis", &vtkXYPlotActor::SetReverseYAxis)
    .function("GetReverseYAxis", &vtkXYPlotActor::GetReverseYAxis)
    .function("ReverseYAxisOn", &vtkXYPlotActor::ReverseYAxisOn)
    .function("ReverseYAxisOff", &vtkXYPlotActor::ReverseYAxisOff)
    .function("GetLegendActor", &vtkXYPlotActor::GetLegendActor, emscripten::allow_raw_pointers())
    .function("GetGlyphSource", &vtkXYPlotActor::GetGlyphSource, emscripten::allow_raw_pointers())
    .function("SetTitle", emscripten::optional_override([](vtkXYPlotActor& self, const std::string & arg_0) -> void {  return self.SetTitle( arg_0.c_str());}))
    .function("GetTitle", emscripten::optional_override([](vtkXYPlotActor& self) -> std::string {  return self.GetTitle();}))
    .function("SetXTitle", emscripten::optional_override([](vtkXYPlotActor& self, const std::string & arg_0) -> void {  return self.SetXTitle( arg_0.c_str());}))
    .function("GetXTitle", emscripten::optional_override([](vtkXYPlotActor& self) -> std::string {  return self.GetXTitle();}))
    .function("SetYTitle", emscripten::optional_override([](vtkXYPlotActor& self, const std::string & arg_0) -> void {  return self.SetYTitle( arg_0.c_str());}))
    .function("GetYTitle", emscripten::optional_override([](vtkXYPlotActor& self) -> std::string {  return self.GetYTitle();}))
    .function("GetXAxisActor2D", &vtkXYPlotActor::GetXAxisActor2D, emscripten::allow_raw_pointers())
    .function("GetYAxisActor2D", &vtkXYPlotActor::GetYAxisActor2D, emscripten::allow_raw_pointers())
    .function("SetXRange", emscripten::select_overload<void(vtkXYPlotActor&, double, double)>([](vtkXYPlotActor& self, double arg_0, double arg_1) -> void { return self.SetXRange( arg_0, arg_1); }))
    .function("SetYRange", emscripten::select_overload<void(vtkXYPlotActor&, double, double)>([](vtkXYPlotActor& self, double arg_0, double arg_1) -> void { return self.SetYRange( arg_0, arg_1); }))
    .function("SetPlotRange", &vtkXYPlotActor::SetPlotRange)
    .function("SetNumberOfXLabels", &vtkXYPlotActor::SetNumberOfXLabels)
    .function("GetNumberOfXLabelsMinValue", &vtkXYPlotActor::GetNumberOfXLabelsMinValue)
    .function("GetNumberOfXLabelsMaxValue", &vtkXYPlotActor::GetNumberOfXLabelsMaxValue)
    .function("GetNumberOfXLabels", &vtkXYPlotActor::GetNumberOfXLabels)
    .function("SetNumberOfYLabels", &vtkXYPlotActor::SetNumberOfYLabels)
    .function("GetNumberOfYLabelsMinValue", &vtkXYPlotActor::GetNumberOfYLabelsMinValue)
    .function("GetNumberOfYLabelsMaxValue", &vtkXYPlotActor::GetNumberOfYLabelsMaxValue)
    .function("GetNumberOfYLabels", &vtkXYPlotActor::GetNumberOfYLabels)
    .function("SetNumberOfLabels", &vtkXYPlotActor::SetNumberOfLabels)
    .function("SetAdjustXLabels", &vtkXYPlotActor::SetAdjustXLabels)
    .function("GetAdjustXLabels", &vtkXYPlotActor::GetAdjustXLabels)
    .function("SetAdjustYLabels", &vtkXYPlotActor::SetAdjustYLabels)
    .function("GetAdjustYLabels", &vtkXYPlotActor::GetAdjustYLabels)
    .function("SetNumberOfXMinorTicks", &vtkXYPlotActor::SetNumberOfXMinorTicks)
    .function("GetNumberOfXMinorTicks", &vtkXYPlotActor::GetNumberOfXMinorTicks)
    .function("SetNumberOfYMinorTicks", &vtkXYPlotActor::SetNumberOfYMinorTicks)
    .function("GetNumberOfYMinorTicks", &vtkXYPlotActor::GetNumberOfYMinorTicks)
    .function("SetLegend", &vtkXYPlotActor::SetLegend)
    .function("GetLegend", &vtkXYPlotActor::GetLegend)
    .function("LegendOn", &vtkXYPlotActor::LegendOn)
    .function("LegendOff", &vtkXYPlotActor::LegendOff)
    .function("SetTitlePosition", emscripten::select_overload<void(vtkXYPlotActor&, double, double)>([](vtkXYPlotActor& self, double arg_0, double arg_1) -> void { return self.SetTitlePosition( arg_0, arg_1); }))
    .function("SetAdjustTitlePosition", &vtkXYPlotActor::SetAdjustTitlePosition)
    .function("GetAdjustTitlePosition", &vtkXYPlotActor::GetAdjustTitlePosition)
    .function("AdjustTitlePositionOn", &vtkXYPlotActor::AdjustTitlePositionOn)
    .function("AdjustTitlePositionOff", &vtkXYPlotActor::AdjustTitlePositionOff)
    .function("SetAdjustTitlePositionMode", &vtkXYPlotActor::SetAdjustTitlePositionMode)
    .function("GetAdjustTitlePositionMode", &vtkXYPlotActor::GetAdjustTitlePositionMode)
    .function("SetLegendPosition", emscripten::select_overload<void(vtkXYPlotActor&, double, double)>([](vtkXYPlotActor& self, double arg_0, double arg_1) -> void { return self.SetLegendPosition( arg_0, arg_1); }))
    .function("SetLegendPosition2", emscripten::select_overload<void(vtkXYPlotActor&, double, double)>([](vtkXYPlotActor& self, double arg_0, double arg_1) -> void { return self.SetLegendPosition2( arg_0, arg_1); }))
    .function("SetTitleTextProperty", &vtkXYPlotActor::SetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("GetTitleTextProperty", &vtkXYPlotActor::GetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("SetAxisTitleTextProperty", &vtkXYPlotActor::SetAxisTitleTextProperty, emscripten::allow_raw_pointers())
    .function("GetAxisTitleTextProperty", &vtkXYPlotActor::GetAxisTitleTextProperty, emscripten::allow_raw_pointers())
    .function("SetAxisLabelTextProperty", &vtkXYPlotActor::SetAxisLabelTextProperty, emscripten::allow_raw_pointers())
    .function("GetAxisLabelTextProperty", &vtkXYPlotActor::GetAxisLabelTextProperty, emscripten::allow_raw_pointers())
    .function("SetLogx", &vtkXYPlotActor::SetLogx)
    .function("GetLogx", &vtkXYPlotActor::GetLogx)
    .function("LogxOn", &vtkXYPlotActor::LogxOn)
    .function("LogxOff", &vtkXYPlotActor::LogxOff)
    .function("SetLabelFormat", emscripten::optional_override([](vtkXYPlotActor& self, const std::string & arg_0) -> void {  return self.SetLabelFormat( arg_0.c_str());}))
    .function("GetLabelFormat", emscripten::optional_override([](vtkXYPlotActor& self) -> std::string {  return self.GetLabelFormat();}))
    .function("SetXLabelFormat", emscripten::optional_override([](vtkXYPlotActor& self, const std::string & arg_0) -> void {  return self.SetXLabelFormat( arg_0.c_str());}))
    .function("GetXLabelFormat", emscripten::optional_override([](vtkXYPlotActor& self) -> std::string {  return self.GetXLabelFormat();}))
    .function("SetYLabelFormat", emscripten::optional_override([](vtkXYPlotActor& self, const std::string & arg_0) -> void {  return self.SetYLabelFormat( arg_0.c_str());}))
    .function("GetYLabelFormat", emscripten::optional_override([](vtkXYPlotActor& self) -> std::string {  return self.GetYLabelFormat();}))
    .function("SetBorder", &vtkXYPlotActor::SetBorder)
    .function("GetBorderMinValue", &vtkXYPlotActor::GetBorderMinValue)
    .function("GetBorderMaxValue", &vtkXYPlotActor::GetBorderMaxValue)
    .function("GetBorder", &vtkXYPlotActor::GetBorder)
    .function("PlotPointsOn", &vtkXYPlotActor::PlotPointsOn)
    .function("PlotPointsOff", &vtkXYPlotActor::PlotPointsOff)
    .function("PlotLinesOn", &vtkXYPlotActor::PlotLinesOn)
    .function("PlotLinesOff", &vtkXYPlotActor::PlotLinesOff)
    .function("SetGlyphSize", &vtkXYPlotActor::SetGlyphSize)
    .function("GetGlyphSizeMinValue", &vtkXYPlotActor::GetGlyphSizeMinValue)
    .function("GetGlyphSizeMaxValue", &vtkXYPlotActor::GetGlyphSizeMaxValue)
    .function("GetGlyphSize", &vtkXYPlotActor::GetGlyphSize)
    .function("ViewportToPlotCoordinate", emscripten::select_overload<void(vtkXYPlotActor&, vtkViewport*)>([](vtkXYPlotActor& self, vtkViewport* arg_0) -> void { return self.ViewportToPlotCoordinate( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetPlotCoordinate", emscripten::select_overload<void(vtkXYPlotActor&, double, double)>([](vtkXYPlotActor& self, double arg_0, double arg_1) -> void { return self.SetPlotCoordinate( arg_0, arg_1); }))
    .function("PlotToViewportCoordinate", emscripten::select_overload<void(vtkXYPlotActor&, vtkViewport*)>([](vtkXYPlotActor& self, vtkViewport* arg_0) -> void { return self.PlotToViewportCoordinate( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetViewportCoordinate", emscripten::select_overload<void(vtkXYPlotActor&, double, double)>([](vtkXYPlotActor& self, double arg_0, double arg_1) -> void { return self.SetViewportCoordinate( arg_0, arg_1); }))
    .function("IsInPlot", &vtkXYPlotActor::IsInPlot, emscripten::allow_raw_pointers())
    .function("SetChartBox", &vtkXYPlotActor::SetChartBox)
    .function("GetChartBox", &vtkXYPlotActor::GetChartBox)
    .function("ChartBoxOn", &vtkXYPlotActor::ChartBoxOn)
    .function("ChartBoxOff", &vtkXYPlotActor::ChartBoxOff)
    .function("SetChartBorder", &vtkXYPlotActor::SetChartBorder)
    .function("GetChartBorder", &vtkXYPlotActor::GetChartBorder)
    .function("ChartBorderOn", &vtkXYPlotActor::ChartBorderOn)
    .function("ChartBorderOff", &vtkXYPlotActor::ChartBorderOff)
    .function("GetChartBoxProperty", &vtkXYPlotActor::GetChartBoxProperty, emscripten::allow_raw_pointers())
    .function("SetShowReferenceXLine", &vtkXYPlotActor::SetShowReferenceXLine)
    .function("GetShowReferenceXLine", &vtkXYPlotActor::GetShowReferenceXLine)
    .function("ShowReferenceXLineOn", &vtkXYPlotActor::ShowReferenceXLineOn)
    .function("ShowReferenceXLineOff", &vtkXYPlotActor::ShowReferenceXLineOff)
    .function("SetReferenceXValue", &vtkXYPlotActor::SetReferenceXValue)
    .function("GetReferenceXValue", &vtkXYPlotActor::GetReferenceXValue)
    .function("SetShowReferenceYLine", &vtkXYPlotActor::SetShowReferenceYLine)
    .function("GetShowReferenceYLine", &vtkXYPlotActor::GetShowReferenceYLine)
    .function("ShowReferenceYLineOn", &vtkXYPlotActor::ShowReferenceYLineOn)
    .function("ShowReferenceYLineOff", &vtkXYPlotActor::ShowReferenceYLineOff)
    .function("SetReferenceYValue", &vtkXYPlotActor::SetReferenceYValue)
    .function("GetReferenceYValue", &vtkXYPlotActor::GetReferenceYValue)
    .function("GetMTime", &vtkXYPlotActor::GetMTime)
    .function("RenderOpaqueGeometry", &vtkXYPlotActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkXYPlotActor::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkXYPlotActor::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkXYPlotActor::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkXYPlotActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetXTitlePosition", &vtkXYPlotActor::SetXTitlePosition)
    .function("GetXTitlePosition", &vtkXYPlotActor::GetXTitlePosition)
    .function("SetYTitlePosition", &vtkXYPlotActor::SetYTitlePosition)
    .function("GetYTitlePosition", &vtkXYPlotActor::GetYTitlePosition)
    .function("SetYTitlePositionToTop", &vtkXYPlotActor::SetYTitlePositionToTop)
    .function("SetYTitlePositionToHCenter", &vtkXYPlotActor::SetYTitlePositionToHCenter)
    .function("SetYTitlePositionToVCenter", &vtkXYPlotActor::SetYTitlePositionToVCenter)
    .function("SetPlotGlyphType", &vtkXYPlotActor::SetPlotGlyphType)
    .function("SetLineWidth", &vtkXYPlotActor::SetLineWidth)
    .function("AddUserCurvesPoint", &vtkXYPlotActor::AddUserCurvesPoint)
    .function("RemoveAllActiveCurves", &vtkXYPlotActor::RemoveAllActiveCurves)
    .function("SetLegendBorder", &vtkXYPlotActor::SetLegendBorder)
    .function("SetLegendBox", &vtkXYPlotActor::SetLegendBox)
    .function("SetLegendUseBackground", &vtkXYPlotActor::SetLegendUseBackground)
    .function("SetLegendBackgroundColor", &vtkXYPlotActor::SetLegendBackgroundColor)
    .function("SetTitleColor", &vtkXYPlotActor::SetTitleColor)
    .function("SetTitleFontFamily", &vtkXYPlotActor::SetTitleFontFamily)
    .function("SetTitleBold", &vtkXYPlotActor::SetTitleBold)
    .function("SetTitleItalic", &vtkXYPlotActor::SetTitleItalic)
    .function("SetTitleShadow", &vtkXYPlotActor::SetTitleShadow)
    .function("SetTitleFontSize", &vtkXYPlotActor::SetTitleFontSize)
    .function("SetTitleJustification", &vtkXYPlotActor::SetTitleJustification)
    .function("SetTitleVerticalJustification", &vtkXYPlotActor::SetTitleVerticalJustification)
    .function("SetXAxisColor", &vtkXYPlotActor::SetXAxisColor)
    .function("SetYAxisColor", &vtkXYPlotActor::SetYAxisColor)
    .function("SetAxisTitleColor", &vtkXYPlotActor::SetAxisTitleColor)
    .function("SetAxisTitleFontFamily", &vtkXYPlotActor::SetAxisTitleFontFamily)
    .function("SetAxisTitleBold", &vtkXYPlotActor::SetAxisTitleBold)
    .function("SetAxisTitleItalic", &vtkXYPlotActor::SetAxisTitleItalic)
    .function("SetAxisTitleShadow", &vtkXYPlotActor::SetAxisTitleShadow)
    .function("SetAxisTitleFontSize", &vtkXYPlotActor::SetAxisTitleFontSize)
    .function("SetAxisTitleJustification", &vtkXYPlotActor::SetAxisTitleJustification)
    .function("SetAxisTitleVerticalJustification", &vtkXYPlotActor::SetAxisTitleVerticalJustification)
    .function("SetAxisLabelColor", &vtkXYPlotActor::SetAxisLabelColor)
    .function("SetAxisLabelFontFamily", &vtkXYPlotActor::SetAxisLabelFontFamily)
    .function("SetAxisLabelBold", &vtkXYPlotActor::SetAxisLabelBold)
    .function("SetAxisLabelItalic", &vtkXYPlotActor::SetAxisLabelItalic)
    .function("SetAxisLabelShadow", &vtkXYPlotActor::SetAxisLabelShadow)
    .function("SetAxisLabelFontSize", &vtkXYPlotActor::SetAxisLabelFontSize)
    .function("SetAxisLabelJustification", &vtkXYPlotActor::SetAxisLabelJustification)
    .function("SetAxisLabelVerticalJustification", &vtkXYPlotActor::SetAxisLabelVerticalJustification);
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkXYPlotActor_0_2_constants) {
    typedef vtkXYPlotActor::Alignment cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[12] = {
      { "vtkXYPlotActor_Alignment_AlignLeft", vtkXYPlotActor::AlignLeft },
      { "vtkXYPlotActor_Alignment_AlignRight", vtkXYPlotActor::AlignRight },
      { "vtkXYPlotActor_Alignment_AlignHCenter", vtkXYPlotActor::AlignHCenter },
      { "vtkXYPlotActor_Alignment_AlignTop", vtkXYPlotActor::AlignTop },
      { "vtkXYPlotActor_Alignment_AlignBottom", vtkXYPlotActor::AlignBottom },
      { "vtkXYPlotActor_Alignment_AlignVCenter", vtkXYPlotActor::AlignVCenter },
      { "vtkXYPlotActor_Alignment_AlignAxisLeft", vtkXYPlotActor::AlignAxisLeft },
      { "vtkXYPlotActor_Alignment_AlignAxisRight", vtkXYPlotActor::AlignAxisRight },
      { "vtkXYPlotActor_Alignment_AlignAxisHCenter", vtkXYPlotActor::AlignAxisHCenter },
      { "vtkXYPlotActor_Alignment_AlignAxisTop", vtkXYPlotActor::AlignAxisTop },
      { "vtkXYPlotActor_Alignment_AlignAxisBottom", vtkXYPlotActor::AlignAxisBottom },
      { "vtkXYPlotActor_Alignment_AlignAxisVCenter", vtkXYPlotActor::AlignAxisVCenter },
  };
  for (int c = 0; c < 12; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
