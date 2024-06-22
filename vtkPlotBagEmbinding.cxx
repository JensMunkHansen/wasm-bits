// JavaScript wrapper for vtkPlotBag with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotBagEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotBag.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkRect.h"
#include "vtkStringArray.h"
#include "vtkStdString.h"
#include "vtkVector.h"
#include "vtkTable.h"
#include "vtkPen.h"
#include "vtkPlotBag.h"

template<> void emscripten::internal::raw_destructor<vtkPlotBag>(vtkPlotBag * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotBag_class) {
  emscripten::class_<vtkPlotBag, emscripten::base<vtkPlotPoints>>("vtkPlotBag")
    .smart_ptr<vtkSmartPointer<vtkPlotBag>>("vtkSmartPointer<vtkPlotBag>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPlotBag>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotBag::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotBag& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotBag::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotBag::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotBag::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotBag& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkPlotBag::Paint, emscripten::allow_raw_pointers())
    .function("PaintLegend", &vtkPlotBag::PaintLegend, emscripten::allow_raw_pointers())
    .function("GetLabels", &vtkPlotBag::GetLabels, emscripten::allow_raw_pointers())
    .function("GetTooltipLabel", &vtkPlotBag::GetTooltipLabel)
    .function("SetInputData", emscripten::select_overload<void(vtkPlotBag&, vtkTable*)>([](vtkPlotBag& self, vtkTable* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlotBag&, vtkTable*, const vtkStdString&, const vtkStdString&)>([](vtkPlotBag& self, vtkTable* arg_0, const vtkStdString& arg_1, const vtkStdString& arg_2) -> void { return self.SetInputData( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlotBag&, vtkTable*, const vtkStdString&, const vtkStdString&, const vtkStdString&)>([](vtkPlotBag& self, vtkTable* arg_0, const vtkStdString& arg_1, const vtkStdString& arg_2, const vtkStdString& arg_3) -> void { return self.SetInputData( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlotBag&, vtkTable*, int, int, int)>([](vtkPlotBag& self, vtkTable* arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetInputData( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("SetBagVisible", &vtkPlotBag::SetBagVisible)
    .function("GetBagVisible", &vtkPlotBag::GetBagVisible)
    .function("SetLinePen", &vtkPlotBag::SetLinePen, emscripten::allow_raw_pointers())
    .function("GetLinePen", &vtkPlotBag::GetLinePen, emscripten::allow_raw_pointers())
    .function("SetPointPen", &vtkPlotBag::SetPointPen, emscripten::allow_raw_pointers())
    .function("GetPointPen", &vtkPlotBag::GetPointPen, emscripten::allow_raw_pointers())
    .function("UpdateCache", &vtkPlotBag::UpdateCache);
}
