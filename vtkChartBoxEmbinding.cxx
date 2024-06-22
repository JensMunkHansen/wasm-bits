// JavaScript wrapper for vtkChartBox with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartBoxEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkChartBox.h
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
#include "vtkAxis.h"
#include "vtkPlotBox.h"
#include "vtkContextMouseEvent.h"
#include "vtkTooltipItem.h"
#include "vtkVector.h"
#include "vtkRect.h"
#include "vtkChartBox.h"

template<> void emscripten::internal::raw_destructor<vtkChartBox>(vtkChartBox * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkChartBox_class) {
  emscripten::class_<vtkChartBox, emscripten::base<vtkChart>>("vtkChartBox")
    .smart_ptr<vtkSmartPointer<vtkChartBox>>("vtkSmartPointer<vtkChartBox>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkChartBox>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartBox::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkChartBox& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkChartBox::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkChartBox::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartBox::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkChartBox& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", &vtkChartBox::Update)
    .function("Paint", &vtkChartBox::Paint, emscripten::allow_raw_pointers())
    .function("SetColumnVisibility", emscripten::select_overload<void(vtkChartBox&, const vtkStdString&, bool)>([](vtkChartBox& self, const vtkStdString& arg_0, bool arg_1) -> void { return self.SetColumnVisibility( arg_0, arg_1); }))
    .function("SetColumnVisibility", emscripten::select_overload<void(vtkChartBox&, int, bool)>([](vtkChartBox& self, int arg_0, bool arg_1) -> void { return self.SetColumnVisibility( arg_0, arg_1); }))
    .function("SetColumnVisibilityAll", &vtkChartBox::SetColumnVisibilityAll)
    .function("GetColumnVisibility", emscripten::select_overload<bool(vtkChartBox&, const vtkStdString&)>([](vtkChartBox& self, const vtkStdString& arg_0) -> bool { return self.GetColumnVisibility( arg_0); }))
    .function("GetColumnVisibility", emscripten::select_overload<bool(vtkChartBox&, int)>([](vtkChartBox& self, int arg_0) -> bool { return self.GetColumnVisibility( arg_0); }))
    .function("GetColumnId", &vtkChartBox::GetColumnId)
    .function("GetVisibleColumns", &vtkChartBox::GetVisibleColumns, emscripten::allow_raw_pointers())
    .function("GetSelectedColumn", &vtkChartBox::GetSelectedColumn)
    .function("SetSelectedColumn", &vtkChartBox::SetSelectedColumn)
    .function("GetPlot", &vtkChartBox::GetPlot, emscripten::allow_raw_pointers())
    .function("GetNumberOfPlots", &vtkChartBox::GetNumberOfPlots)
    .function("GetYAxis", &vtkChartBox::GetYAxis, emscripten::allow_raw_pointers())
    .function("GetXPosition", &vtkChartBox::GetXPosition)
    .function("GetNumberOfVisibleColumns", &vtkChartBox::GetNumberOfVisibleColumns)
    .function("SetPlot", &vtkChartBox::SetPlot, emscripten::allow_raw_pointers())
    .function("Hit", &vtkChartBox::Hit)
    .function("MouseMoveEvent", &vtkChartBox::MouseMoveEvent)
    .function("MouseButtonPressEvent", &vtkChartBox::MouseButtonPressEvent)
    .function("MouseButtonReleaseEvent", &vtkChartBox::MouseButtonReleaseEvent)
    .function("SetTooltip", &vtkChartBox::SetTooltip, emscripten::allow_raw_pointers())
    .function("GetTooltip", &vtkChartBox::GetTooltip, emscripten::allow_raw_pointers())
    .function("SetTooltipInfo", &vtkChartBox::SetTooltipInfo, emscripten::allow_raw_pointers())
    .function("SetSize", &vtkChartBox::SetSize)
    .function("SetGeometry", &vtkChartBox::SetGeometry)
    .function("SetLayoutStrategy", &vtkChartBox::SetLayoutStrategy);
}

EMSCRIPTEN_BINDINGS(vtkChartBoxData_class) {
  emscripten::class_<vtkChartBoxData>("vtkChartBoxData");
}
