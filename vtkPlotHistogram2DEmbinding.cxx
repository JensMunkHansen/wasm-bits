// JavaScript wrapper for vtkPlotHistogram2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotHistogram2DEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotHistogram2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkImageData.h"
#include "vtkTable.h"
#include "vtkStdString.h"
#include "vtkScalarsToColors.h"
#include "vtkRect.h"
#include "vtkVector.h"
#include "vtkPlotHistogram2D.h"

template<> void emscripten::internal::raw_destructor<vtkPlotHistogram2D>(vtkPlotHistogram2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotHistogram2D_class) {
  emscripten::class_<vtkPlotHistogram2D, emscripten::base<vtkPlot>>("vtkPlotHistogram2D")
    .smart_ptr<vtkSmartPointer<vtkPlotHistogram2D>>("vtkSmartPointer<vtkPlotHistogram2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPlotHistogram2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotHistogram2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotHistogram2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotHistogram2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotHistogram2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotHistogram2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotHistogram2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", &vtkPlotHistogram2D::Update)
    .function("Paint", &vtkPlotHistogram2D::Paint, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlotHistogram2D&, vtkImageData*, int)>([](vtkPlotHistogram2D& self, vtkImageData* arg_0, int arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlotHistogram2D&, vtkTable*)>([](vtkPlotHistogram2D& self, vtkTable* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlotHistogram2D&, vtkTable*, const vtkStdString&, const vtkStdString&)>([](vtkPlotHistogram2D& self, vtkTable* arg_0, const vtkStdString& arg_1, const vtkStdString& arg_2) -> void { return self.SetInputData( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetInputImageData", &vtkPlotHistogram2D::GetInputImageData, emscripten::allow_raw_pointers())
    .function("SetTransferFunction", &vtkPlotHistogram2D::SetTransferFunction, emscripten::allow_raw_pointers())
    .function("GetTransferFunction", &vtkPlotHistogram2D::GetTransferFunction, emscripten::allow_raw_pointers())
    .function("SetPosition", &vtkPlotHistogram2D::SetPosition)
    .function("GetPosition", &vtkPlotHistogram2D::GetPosition)
    .function("SetArrayName", &vtkPlotHistogram2D::SetArrayName)
    .function("GetArrayName", &vtkPlotHistogram2D::GetArrayName)
    .function("GetTooltipLabel", &vtkPlotHistogram2D::GetTooltipLabel)
    .function("UpdateCache", &vtkPlotHistogram2D::UpdateCache);
}
