// JavaScript wrapper for vtkPlotPie with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotPieEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotPie.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkRect.h"
#include "vtkColorSeries.h"
#include "vtkVector.h"
#include "vtkPlotPie.h"

template<> void emscripten::internal::raw_destructor<vtkPlotPie>(vtkPlotPie * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotPie_class) {
  emscripten::class_<vtkPlotPie, emscripten::base<vtkPlot>>("vtkPlotPie")
    .smart_ptr<vtkSmartPointer<vtkPlotPie>>("vtkSmartPointer<vtkPlotPie>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlotPie>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotPie::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotPie& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotPie::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotPie::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotPie::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotPie& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkPlotPie::Paint, emscripten::allow_raw_pointers())
    .function("PaintLegend", &vtkPlotPie::PaintLegend, emscripten::allow_raw_pointers())
    .function("SetDimensions", emscripten::select_overload<void(vtkPlotPie&, int, int, int, int)>([](vtkPlotPie& self, int arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetDimensions( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetColorSeries", &vtkPlotPie::SetColorSeries, emscripten::allow_raw_pointers())
    .function("GetColorSeries", &vtkPlotPie::GetColorSeries, emscripten::allow_raw_pointers())
    .function("UpdateCache", &vtkPlotPie::UpdateCache);
}
