// JavaScript wrapper for vtkChartParallelCoordinates with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartParallelCoordinatesEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkChartParallelCoordinates.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkStdString.h"
#include "vtkStringArray.h"
#include "vtkPlot.h"
#include "vtkChartLegend.h"
#include "vtkAxis.h"
#include "vtkPlotParallelCoordinates.h"
#include "vtkContextMouseEvent.h"
#include "vtkChartParallelCoordinates.h"

template<> void emscripten::internal::raw_destructor<vtkChartParallelCoordinates>(vtkChartParallelCoordinates * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkChartParallelCoordinates_class) {
  emscripten::class_<vtkChartParallelCoordinates, emscripten::base<vtkChart>>("vtkChartParallelCoordinates")
    .smart_ptr<vtkSmartPointer<vtkChartParallelCoordinates>>("vtkSmartPointer<vtkChartParallelCoordinates>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkChartParallelCoordinates>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartParallelCoordinates::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkChartParallelCoordinates& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkChartParallelCoordinates::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkChartParallelCoordinates::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartParallelCoordinates::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkChartParallelCoordinates& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", &vtkChartParallelCoordinates::Update)
    .function("Paint", &vtkChartParallelCoordinates::Paint, emscripten::allow_raw_pointers())
    .function("PaintRect", &vtkChartParallelCoordinates::PaintRect, emscripten::allow_raw_pointers())
    .function("SetColumnVisibility", &vtkChartParallelCoordinates::SetColumnVisibility)
    .function("SetColumnVisibilityAll", &vtkChartParallelCoordinates::SetColumnVisibilityAll)
    .function("GetColumnVisibility", &vtkChartParallelCoordinates::GetColumnVisibility)
    .function("GetVisibleColumns", &vtkChartParallelCoordinates::GetVisibleColumns, emscripten::allow_raw_pointers())
    .function("SetVisibleColumns", &vtkChartParallelCoordinates::SetVisibleColumns, emscripten::allow_raw_pointers())
    .function("GetPlot", &vtkChartParallelCoordinates::GetPlot, emscripten::allow_raw_pointers())
    .function("GetNumberOfPlots", &vtkChartParallelCoordinates::GetNumberOfPlots)
    .function("SetShowLegend", &vtkChartParallelCoordinates::SetShowLegend)
    .function("GetLegend", &vtkChartParallelCoordinates::GetLegend, emscripten::allow_raw_pointers())
    .function("GetAxis", &vtkChartParallelCoordinates::GetAxis, emscripten::allow_raw_pointers())
    .function("GetNumberOfAxes", &vtkChartParallelCoordinates::GetNumberOfAxes)
    .function("RecalculateBounds", &vtkChartParallelCoordinates::RecalculateBounds)
    .function("SetPlot", &vtkChartParallelCoordinates::SetPlot, emscripten::allow_raw_pointers())
    .function("Hit", &vtkChartParallelCoordinates::Hit)
    .function("MouseEnterEvent", &vtkChartParallelCoordinates::MouseEnterEvent)
    .function("MouseMoveEvent", &vtkChartParallelCoordinates::MouseMoveEvent)
    .function("MouseLeaveEvent", &vtkChartParallelCoordinates::MouseLeaveEvent)
    .function("MouseButtonPressEvent", &vtkChartParallelCoordinates::MouseButtonPressEvent)
    .function("MouseButtonReleaseEvent", &vtkChartParallelCoordinates::MouseButtonReleaseEvent)
    .function("MouseWheelEvent", &vtkChartParallelCoordinates::MouseWheelEvent)
    .function("UpdateCurrentAxisSelection", &vtkChartParallelCoordinates::UpdateCurrentAxisSelection);
}
