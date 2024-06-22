// JavaScript wrapper for vtkPlotArea with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotAreaEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotArea.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkContext2D.h"
#include "vtkRect.h"
#include "vtkVector.h"
#include "vtkPlotArea.h"

template<> void emscripten::internal::raw_destructor<vtkPlotArea>(vtkPlotArea * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotArea_class) {
  emscripten::class_<vtkPlotArea, emscripten::base<vtkPlot>>("vtkPlotArea")
    .smart_ptr<vtkSmartPointer<vtkPlotArea>>("vtkSmartPointer<vtkPlotArea>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPlotArea>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotArea::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotArea& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotArea::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotArea::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotArea::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotArea& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetColor", emscripten::select_overload<void(vtkPlotArea&, unsigned char, unsigned char, unsigned char, unsigned char)>([](vtkPlotArea& self, unsigned char arg_0, unsigned char arg_1, unsigned char arg_2, unsigned char arg_3) -> void { return self.SetColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetColorF", emscripten::select_overload<void(vtkPlotArea&, double, double, double, double)>([](vtkPlotArea& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetColorF( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetColorF", emscripten::select_overload<void(vtkPlotArea&, double, double, double)>([](vtkPlotArea& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetColorF( arg_0, arg_1, arg_2); }))
    .function("GetValidPointMaskName", &vtkPlotArea::GetValidPointMaskName)
    .function("SetValidPointMaskName", &vtkPlotArea::SetValidPointMaskName)
    .function("Paint", &vtkPlotArea::Paint, emscripten::allow_raw_pointers())
    .function("PaintLegend", &vtkPlotArea::PaintLegend, emscripten::allow_raw_pointers())
    .function("GetTooltipLabel", &vtkPlotArea::GetTooltipLabel)
    .function("UpdateCache", &vtkPlotArea::UpdateCache)
    .function("SetInputArray", &vtkPlotArea::SetInputArray);
}
