// JavaScript wrapper for vtkPlotParallelCoordinates with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotParallelCoordinatesEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotParallelCoordinates.h
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
#include "vtkScalarsToColors.h"
#include "vtkPlotParallelCoordinates.h"

template<> void emscripten::internal::raw_destructor<vtkPlotParallelCoordinates>(vtkPlotParallelCoordinates * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotParallelCoordinates_class) {
  emscripten::class_<vtkPlotParallelCoordinates, emscripten::base<vtkPlot>>("vtkPlotParallelCoordinates")
    .smart_ptr<vtkSmartPointer<vtkPlotParallelCoordinates>>("vtkSmartPointer<vtkPlotParallelCoordinates>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPlotParallelCoordinates>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotParallelCoordinates::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotParallelCoordinates& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotParallelCoordinates::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotParallelCoordinates::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotParallelCoordinates::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotParallelCoordinates& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkPlotParallelCoordinates::Paint, emscripten::allow_raw_pointers())
    .function("PaintLegend", &vtkPlotParallelCoordinates::PaintLegend, emscripten::allow_raw_pointers())
    .function("SetSelectionRange", emscripten::select_overload<bool(vtkPlotParallelCoordinates&, int, float, float)>([](vtkPlotParallelCoordinates& self, int arg_0, float arg_1, float arg_2) -> bool { return self.SetSelectionRange( arg_0, arg_1, arg_2); }))
    .function("SetSelectionRange", emscripten::select_overload<bool(vtkPlotParallelCoordinates&, int, std::vector<float>)>([](vtkPlotParallelCoordinates& self, int arg_0, std::vector<float> arg_1) -> bool { return self.SetSelectionRange( arg_0, arg_1); }))
    .function("ResetSelectionRange", &vtkPlotParallelCoordinates::ResetSelectionRange)
    .function("SetInputData", emscripten::select_overload<void(vtkPlotParallelCoordinates&, vtkTable*)>([](vtkPlotParallelCoordinates& self, vtkTable* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlotParallelCoordinates&, vtkTable*, const vtkStdString&, const vtkStdString&)>([](vtkPlotParallelCoordinates& self, vtkTable* arg_0, const vtkStdString& arg_1, const vtkStdString& arg_2) -> void { return self.SetInputData( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetLookupTable", &vtkPlotParallelCoordinates::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkPlotParallelCoordinates::GetLookupTable, emscripten::allow_raw_pointers())
    .function("CreateDefaultLookupTable", &vtkPlotParallelCoordinates::CreateDefaultLookupTable)
    .function("SetScalarVisibility", &vtkPlotParallelCoordinates::SetScalarVisibility)
    .function("GetScalarVisibility", &vtkPlotParallelCoordinates::GetScalarVisibility)
    .function("ScalarVisibilityOn", &vtkPlotParallelCoordinates::ScalarVisibilityOn)
    .function("ScalarVisibilityOff", &vtkPlotParallelCoordinates::ScalarVisibilityOff)
    .function("SelectColorArray", emscripten::select_overload<void(vtkPlotParallelCoordinates&, int)>([](vtkPlotParallelCoordinates& self, int arg_0) -> void { return self.SelectColorArray( arg_0); }))
    .function("SelectColorArray", emscripten::select_overload<void(vtkPlotParallelCoordinates&, const vtkStdString&)>([](vtkPlotParallelCoordinates& self, const vtkStdString& arg_0) -> void { return self.SelectColorArray( arg_0); }))
    .function("SetColorMode", &vtkPlotParallelCoordinates::SetColorMode)
    .function("SetColorModeToDefault", &vtkPlotParallelCoordinates::SetColorModeToDefault)
    .function("SetColorModeToMapScalars", &vtkPlotParallelCoordinates::SetColorModeToMapScalars)
    .function("SetColorModeToDirectScalars", &vtkPlotParallelCoordinates::SetColorModeToDirectScalars)
    .function("GetColorMode", &vtkPlotParallelCoordinates::GetColorMode)
    .function("GetColorArrayName", &vtkPlotParallelCoordinates::GetColorArrayName)
    .function("UpdateCache", &vtkPlotParallelCoordinates::UpdateCache);
}
