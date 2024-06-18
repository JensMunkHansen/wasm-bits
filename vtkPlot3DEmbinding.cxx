// JavaScript wrapper for vtkPlot3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlot3DEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlot3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPen.h"
#include "vtkTable.h"
#include "vtkStdString.h"
#include "vtkDataArray.h"
#include "vtkPoints.h"
#include "vtkChartXYZ.h"
#include "vtkIdTypeArray.h"
#include "vtkPlot3D.h"

template<> void emscripten::internal::raw_destructor<vtkPlot3D>(vtkPlot3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlot3D_class) {
  emscripten::class_<vtkPlot3D, emscripten::base<vtkContextItem>>("vtkPlot3D")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlot3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlot3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlot3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlot3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlot3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlot3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPen", &vtkPlot3D::SetPen, emscripten::allow_raw_pointers())
    .function("GetPen", &vtkPlot3D::GetPen, emscripten::allow_raw_pointers())
    .function("SetSelectionPen", &vtkPlot3D::SetSelectionPen, emscripten::allow_raw_pointers())
    .function("GetSelectionPen", &vtkPlot3D::GetSelectionPen, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlot3D&, vtkTable*)>([](vtkPlot3D& self, vtkTable* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlot3D&, vtkTable*, const vtkStdString&, const vtkStdString&, const vtkStdString&)>([](vtkPlot3D& self, vtkTable* arg_0, const vtkStdString& arg_1, const vtkStdString& arg_2, const vtkStdString& arg_3) -> void { return self.SetInputData( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlot3D&, vtkTable*, int, int, int)>([](vtkPlot3D& self, vtkTable* arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetInputData( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlot3D&, vtkTable*, const vtkStdString&, const vtkStdString&, const vtkStdString&, const vtkStdString&)>([](vtkPlot3D& self, vtkTable* arg_0, const vtkStdString& arg_1, const vtkStdString& arg_2, const vtkStdString& arg_3, const vtkStdString& arg_4) -> void { return self.SetInputData( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("SetColors", &vtkPlot3D::SetColors, emscripten::allow_raw_pointers())
    .function("GetVTKPoints", &vtkPlot3D::GetVTKPoints, emscripten::allow_raw_pointers())
    .function("GetChart", &vtkPlot3D::GetChart, emscripten::allow_raw_pointers())
    .function("SetChart", &vtkPlot3D::SetChart, emscripten::allow_raw_pointers())
    .function("GetXAxisLabel", &vtkPlot3D::GetXAxisLabel)
    .function("GetYAxisLabel", &vtkPlot3D::GetYAxisLabel)
    .function("GetZAxisLabel", &vtkPlot3D::GetZAxisLabel)
    .function("SetSelection", &vtkPlot3D::SetSelection, emscripten::allow_raw_pointers())
    .function("GetSelection", &vtkPlot3D::GetSelection, emscripten::allow_raw_pointers());
}
