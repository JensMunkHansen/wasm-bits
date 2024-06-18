// JavaScript wrapper for vtkPlotLine with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotLineEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotLine.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkRect.h"
#include "vtkPlotLine.h"

template<> void emscripten::internal::raw_destructor<vtkPlotLine>(vtkPlotLine * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotLine_class) {
  emscripten::class_<vtkPlotLine, emscripten::base<vtkPlotPoints>>("vtkPlotLine")
    .smart_ptr<vtkSmartPointer<vtkPlotLine>>("vtkSmartPointer<vtkPlotLine>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPlotLine>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotLine::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotLine& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotLine::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotLine::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotLine::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotLine& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkPlotLine::Paint, emscripten::allow_raw_pointers())
    .function("PaintLegend", &vtkPlotLine::PaintLegend, emscripten::allow_raw_pointers())
    .function("SetPolyLine", &vtkPlotLine::SetPolyLine)
    .function("GetPolyLine", &vtkPlotLine::GetPolyLine)
    .function("PolyLineOn", &vtkPlotLine::PolyLineOn)
    .function("PolyLineOff", &vtkPlotLine::PolyLineOff);
}
