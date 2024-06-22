// JavaScript wrapper for vtkChartXY with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartXYEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkChartXY.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkPlot.h"
#include "vtkAxis.h"
#include "vtkChartLegend.h"
#include "vtkTooltipItem.h"
#include "vtkContextMouseEvent.h"
#include "vtkVector.h"
#include "vtkContextKeyEvent.h"
#include "vtkAnnotationLink.h"
#include "vtkIdTypeArray.h"
#include "vtkChartXY.h"

template<> void emscripten::internal::raw_destructor<vtkChartXY>(vtkChartXY * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkChartXY_class) {
  emscripten::class_<vtkChartXY, emscripten::base<vtkChart>>("vtkChartXY")
    .smart_ptr<vtkSmartPointer<vtkChartXY>>("vtkSmartPointer<vtkChartXY>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkChartXY>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartXY::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkChartXY& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkChartXY::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkChartXY::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartXY::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkChartXY& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", &vtkChartXY::Update)
    .function("Paint", &vtkChartXY::Paint, emscripten::allow_raw_pointers())
    .function("AddPlot", emscripten::select_overload<vtkPlot*(vtkChartXY&, int)>([](vtkChartXY& self, int arg_0) -> vtkPlot* { return self.AddPlot( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddPlot", emscripten::select_overload<int(vtkChartXY&, vtkPlot*)>([](vtkChartXY& self, vtkPlot* arg_0) -> int { return self.AddPlot( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddPlot", emscripten::select_overload<vtkPlot*(vtkChartXY&, int, unsigned int)>([](vtkChartXY& self, int arg_0, unsigned int arg_1) -> vtkPlot* { return self.AddPlot( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddPlot", emscripten::select_overload<int(vtkChartXY&, vtkPlot*, unsigned int)>([](vtkChartXY& self, vtkPlot* arg_0, unsigned int arg_1) -> int { return self.AddPlot( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("RemovePlot", &vtkChartXY::RemovePlot)
    .function("ClearPlots", &vtkChartXY::ClearPlots)
    .function("GetPlot", &vtkChartXY::GetPlot, emscripten::allow_raw_pointers())
    .function("GetPlotIndex", &vtkChartXY::GetPlotIndex, emscripten::allow_raw_pointers())
    .function("RaisePlot", &vtkChartXY::RaisePlot, emscripten::allow_raw_pointers())
    .function("StackPlotAbove", &vtkChartXY::StackPlotAbove, emscripten::allow_raw_pointers())
    .function("LowerPlot", &vtkChartXY::LowerPlot, emscripten::allow_raw_pointers())
    .function("StackPlotUnder", &vtkChartXY::StackPlotUnder, emscripten::allow_raw_pointers())
    .function("GetNumberOfPlots", &vtkChartXY::GetNumberOfPlots)
    .function("GetPlotCorner", &vtkChartXY::GetPlotCorner, emscripten::allow_raw_pointers())
    .function("SetPlotCorner", &vtkChartXY::SetPlotCorner, emscripten::allow_raw_pointers())
    .function("GetAxis", &vtkChartXY::GetAxis, emscripten::allow_raw_pointers())
    .function("SetAxis", &vtkChartXY::SetAxis, emscripten::allow_raw_pointers())
    .function("SetShowLegend", &vtkChartXY::SetShowLegend)
    .function("GetLegend", &vtkChartXY::GetLegend, emscripten::allow_raw_pointers())
    .function("SetTooltip", &vtkChartXY::SetTooltip, emscripten::allow_raw_pointers())
    .function("GetTooltip", &vtkChartXY::GetTooltip, emscripten::allow_raw_pointers())
    .function("GetNumberOfAxes", &vtkChartXY::GetNumberOfAxes)
    .function("RecalculateBounds", &vtkChartXY::RecalculateBounds)
    .function("SetSelectionMethod", &vtkChartXY::SetSelectionMethod)
    .function("RemovePlotSelections", &vtkChartXY::RemovePlotSelections)
    .function("SetDrawAxesAtOrigin", &vtkChartXY::SetDrawAxesAtOrigin)
    .function("GetDrawAxesAtOrigin", &vtkChartXY::GetDrawAxesAtOrigin)
    .function("DrawAxesAtOriginOn", &vtkChartXY::DrawAxesAtOriginOn)
    .function("DrawAxesAtOriginOff", &vtkChartXY::DrawAxesAtOriginOff)
    .function("SetAutoAxes", &vtkChartXY::SetAutoAxes)
    .function("GetAutoAxes", &vtkChartXY::GetAutoAxes)
    .function("AutoAxesOn", &vtkChartXY::AutoAxesOn)
    .function("AutoAxesOff", &vtkChartXY::AutoAxesOff)
    .function("SetHiddenAxisBorder", &vtkChartXY::SetHiddenAxisBorder)
    .function("GetHiddenAxisBorder", &vtkChartXY::GetHiddenAxisBorder)
    .function("SetForceAxesToBounds", &vtkChartXY::SetForceAxesToBounds)
    .function("GetForceAxesToBounds", &vtkChartXY::GetForceAxesToBounds)
    .function("ForceAxesToBoundsOn", &vtkChartXY::ForceAxesToBoundsOn)
    .function("ForceAxesToBoundsOff", &vtkChartXY::ForceAxesToBoundsOff)
    .function("SetIgnoreNanInBounds", &vtkChartXY::SetIgnoreNanInBounds)
    .function("GetIgnoreNanInBounds", &vtkChartXY::GetIgnoreNanInBounds)
    .function("IgnoreNanInBoundsOn", &vtkChartXY::IgnoreNanInBoundsOn)
    .function("IgnoreNanInBoundsOff", &vtkChartXY::IgnoreNanInBoundsOff)
    .function("SetBarWidthFraction", &vtkChartXY::SetBarWidthFraction)
    .function("GetBarWidthFraction", &vtkChartXY::GetBarWidthFraction)
    .function("SetZoomWithMouseWheel", &vtkChartXY::SetZoomWithMouseWheel)
    .function("GetZoomWithMouseWheel", &vtkChartXY::GetZoomWithMouseWheel)
    .function("ZoomWithMouseWheelOn", &vtkChartXY::ZoomWithMouseWheelOn)
    .function("ZoomWithMouseWheelOff", &vtkChartXY::ZoomWithMouseWheelOff)
    .function("SetAxisZoom", &vtkChartXY::SetAxisZoom)
    .function("GetAxisZoom", &vtkChartXY::GetAxisZoom)
    .function("SetAdjustLowerBoundForLogPlot", &vtkChartXY::SetAdjustLowerBoundForLogPlot)
    .function("GetAdjustLowerBoundForLogPlot", &vtkChartXY::GetAdjustLowerBoundForLogPlot)
    .function("AdjustLowerBoundForLogPlotOn", &vtkChartXY::AdjustLowerBoundForLogPlotOn)
    .function("AdjustLowerBoundForLogPlotOff", &vtkChartXY::AdjustLowerBoundForLogPlotOff)
    .function("SetDragPointAlongX", &vtkChartXY::SetDragPointAlongX)
    .function("GetDragPointAlongX", &vtkChartXY::GetDragPointAlongX)
    .function("DragPointAlongXOn", &vtkChartXY::DragPointAlongXOn)
    .function("DragPointAlongXOff", &vtkChartXY::DragPointAlongXOff)
    .function("SetDragPointAlongY", &vtkChartXY::SetDragPointAlongY)
    .function("GetDragPointAlongY", &vtkChartXY::GetDragPointAlongY)
    .function("DragPointAlongYOn", &vtkChartXY::DragPointAlongYOn)
    .function("DragPointAlongYOff", &vtkChartXY::DragPointAlongYOff)
    .function("SetTooltipInfo", &vtkChartXY::SetTooltipInfo, emscripten::allow_raw_pointers())
    .function("Hit", &vtkChartXY::Hit)
    .function("MouseEnterEvent", &vtkChartXY::MouseEnterEvent)
    .function("MouseMoveEvent", &vtkChartXY::MouseMoveEvent)
    .function("MouseLeaveEvent", &vtkChartXY::MouseLeaveEvent)
    .function("MouseButtonPressEvent", &vtkChartXY::MouseButtonPressEvent)
    .function("MouseButtonReleaseEvent", &vtkChartXY::MouseButtonReleaseEvent)
    .function("MouseWheelEvent", &vtkChartXY::MouseWheelEvent)
    .function("KeyPressEvent", &vtkChartXY::KeyPressEvent)
    .class_function("MakeSelection", emscripten::select_overload<void( vtkAnnotationLink*, vtkIdTypeArray*, vtkPlot*)>([]( vtkAnnotationLink* arg_0, vtkIdTypeArray* arg_1, vtkPlot* arg_2) -> void { return vtkChartXY::MakeSelection( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("MinusSelection", &vtkChartXY::MinusSelection, emscripten::allow_raw_pointers())
    .class_function("AddSelection", &vtkChartXY::AddSelection, emscripten::allow_raw_pointers())
    .class_function("ToggleSelection", &vtkChartXY::ToggleSelection, emscripten::allow_raw_pointers())
    .class_function("BuildSelection", emscripten::select_overload<void( vtkAnnotationLink*, int, vtkIdTypeArray*, vtkIdTypeArray*, vtkPlot*)>([]( vtkAnnotationLink* arg_0, int arg_1, vtkIdTypeArray* arg_2, vtkIdTypeArray* arg_3, vtkPlot* arg_4) -> void { return vtkChartXY::BuildSelection( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .class_function("GetMouseSelectionMode", &vtkChartXY::GetMouseSelectionMode);
}

EMSCRIPTEN_BINDINGS(vtkChartPlotData_class) {
  emscripten::class_<vtkChartPlotData>("vtkChartPlotData");
}
