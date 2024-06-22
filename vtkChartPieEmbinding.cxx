// JavaScript wrapper for vtkChartPie with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartPieEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkChartPie.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkPlot.h"
#include "vtkPlotPie.h"
#include "vtkChartLegend.h"
#include "vtkContextScene.h"
#include "vtkContextMouseEvent.h"
#include "vtkChartPie.h"

template<> void emscripten::internal::raw_destructor<vtkChartPie>(vtkChartPie * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkChartPie_class) {
  emscripten::class_<vtkChartPie, emscripten::base<vtkChart>>("vtkChartPie")
    .smart_ptr<vtkSmartPointer<vtkChartPie>>("vtkSmartPointer<vtkChartPie>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkChartPie>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartPie::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkChartPie& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkChartPie::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkChartPie::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartPie::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkChartPie& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", &vtkChartPie::Update)
    .function("Paint", &vtkChartPie::Paint, emscripten::allow_raw_pointers())
    .function("AddPlot", &vtkChartPie::AddPlot, emscripten::allow_raw_pointers())
    .function("SetPlot", &vtkChartPie::SetPlot, emscripten::allow_raw_pointers())
    .function("GetPlot", &vtkChartPie::GetPlot, emscripten::allow_raw_pointers())
    .function("GetNumberOfPlots", &vtkChartPie::GetNumberOfPlots)
    .function("SetShowLegend", &vtkChartPie::SetShowLegend)
    .function("GetLegend", &vtkChartPie::GetLegend, emscripten::allow_raw_pointers())
    .function("SetScene", &vtkChartPie::SetScene, emscripten::allow_raw_pointers())
    .function("Hit", &vtkChartPie::Hit)
    .function("MouseEnterEvent", &vtkChartPie::MouseEnterEvent)
    .function("MouseMoveEvent", &vtkChartPie::MouseMoveEvent)
    .function("MouseLeaveEvent", &vtkChartPie::MouseLeaveEvent)
    .function("MouseButtonPressEvent", &vtkChartPie::MouseButtonPressEvent)
    .function("MouseButtonReleaseEvent", &vtkChartPie::MouseButtonReleaseEvent)
    .function("MouseWheelEvent", &vtkChartPie::MouseWheelEvent);
}
