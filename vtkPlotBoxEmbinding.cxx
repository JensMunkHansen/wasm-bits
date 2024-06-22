// JavaScript wrapper for vtkPlotBox with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotBoxEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotBox.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkRect.h"
#include "vtkTable.h"
#include "vtkStdString.h"
#include "vtkStringArray.h"
#include "vtkVector.h"
#include "vtkScalarsToColors.h"
#include "vtkTextProperty.h"
#include "vtkPlotBox.h"

template<> void emscripten::internal::raw_destructor<vtkPlotBox>(vtkPlotBox * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotBox_class) {
  emscripten::class_<vtkPlotBox, emscripten::base<vtkPlot>>("vtkPlotBox")
    .smart_ptr<vtkSmartPointer<vtkPlotBox>>("vtkSmartPointer<vtkPlotBox>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlotBox>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotBox::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotBox& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotBox::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotBox::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotBox::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotBox& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkPlotBox::Paint, emscripten::allow_raw_pointers())
    .function("PaintLegend", &vtkPlotBox::PaintLegend, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlotBox&, vtkTable*)>([](vtkPlotBox& self, vtkTable* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlotBox&, vtkTable*, const vtkStdString&, const vtkStdString&)>([](vtkPlotBox& self, vtkTable* arg_0, const vtkStdString& arg_1, const vtkStdString& arg_2) -> void { return self.SetInputData( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetLabels", &vtkPlotBox::GetLabels, emscripten::allow_raw_pointers())
    .function("SetLookupTable", &vtkPlotBox::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkPlotBox::GetLookupTable, emscripten::allow_raw_pointers())
    .function("SetColumnColor", emscripten::optional_override([](vtkPlotBox& self, const vtkStdString& arg_0, std::uintptr_t arg_1) -> void {  return self.SetColumnColor( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("CreateDefaultLookupTable", &vtkPlotBox::CreateDefaultLookupTable)
    .function("GetBoxWidth", &vtkPlotBox::GetBoxWidth)
    .function("SetBoxWidth", &vtkPlotBox::SetBoxWidth)
    .function("GetTitleProperties", &vtkPlotBox::GetTitleProperties, emscripten::allow_raw_pointers())
    .function("UpdateCache", &vtkPlotBox::UpdateCache);
}
