// JavaScript wrapper for vtkPlotStacked with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotStackedEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotStacked.h
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
#include "vtkColorSeries.h"
#include "vtkStringArray.h"
#include "vtkVector.h"
#include "vtkPlotStacked.h"

template<> void emscripten::internal::raw_destructor<vtkPlotStacked>(vtkPlotStacked * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotStacked_class) {
  emscripten::class_<vtkPlotStacked, emscripten::base<vtkPlot>>("vtkPlotStacked")
    .smart_ptr<vtkSmartPointer<vtkPlotStacked>>("vtkSmartPointer<vtkPlotStacked>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlotStacked>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotStacked::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotStacked& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotStacked::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotStacked::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotStacked::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotStacked& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetColor", emscripten::select_overload<void(vtkPlotStacked&, unsigned char, unsigned char, unsigned char, unsigned char)>([](vtkPlotStacked& self, unsigned char arg_0, unsigned char arg_1, unsigned char arg_2, unsigned char arg_3) -> void { return self.SetColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetColorF", emscripten::select_overload<void(vtkPlotStacked&, double, double, double, double)>([](vtkPlotStacked& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetColorF( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetColorF", emscripten::select_overload<void(vtkPlotStacked&, double, double, double)>([](vtkPlotStacked& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetColorF( arg_0, arg_1, arg_2); }))
    .function("Paint", &vtkPlotStacked::Paint, emscripten::allow_raw_pointers())
    .function("PaintLegend", &vtkPlotStacked::PaintLegend, emscripten::allow_raw_pointers())
    .function("SetInputArray", &vtkPlotStacked::SetInputArray)
    .function("SetColorSeries", &vtkPlotStacked::SetColorSeries, emscripten::allow_raw_pointers())
    .function("GetColorSeries", &vtkPlotStacked::GetColorSeries, emscripten::allow_raw_pointers())
    .function("GetLabels", &vtkPlotStacked::GetLabels, emscripten::allow_raw_pointers())
    .function("SelectPoints", &vtkPlotStacked::SelectPoints)
    .function("UpdateCache", &vtkPlotStacked::UpdateCache);
}
