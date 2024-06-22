// JavaScript wrapper for vtkPlotBar with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotBarEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotBar.h
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
#include "vtkScalarsToColors.h"
#include "vtkStringArray.h"
#include "vtkVector.h"
#include "vtkPlotBar.h"

template<> void emscripten::internal::raw_destructor<vtkPlotBar>(vtkPlotBar * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotBar_class) {
  emscripten::class_<vtkPlotBar, emscripten::base<vtkPlot>>("vtkPlotBar")
    .smart_ptr<vtkSmartPointer<vtkPlotBar>>("vtkSmartPointer<vtkPlotBar>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlotBar>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotBar::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotBar& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotBar::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotBar::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotBar::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotBar& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkPlotBar::Paint, emscripten::allow_raw_pointers())
    .function("PaintLegend", &vtkPlotBar::PaintLegend, emscripten::allow_raw_pointers())
    .function("SetColor", emscripten::select_overload<void(vtkPlotBar&, unsigned char, unsigned char, unsigned char, unsigned char)>([](vtkPlotBar& self, unsigned char arg_0, unsigned char arg_1, unsigned char arg_2, unsigned char arg_3) -> void { return self.SetColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetColorF", emscripten::select_overload<void(vtkPlotBar&, double, double, double, double)>([](vtkPlotBar& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetColorF( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetColorF", emscripten::select_overload<void(vtkPlotBar&, double, double, double)>([](vtkPlotBar& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetColorF( arg_0, arg_1, arg_2); }))
    .function("SetWidth", &vtkPlotBar::SetWidth)
    .function("GetWidth", &vtkPlotBar::GetWidth)
    .function("SetOffset", &vtkPlotBar::SetOffset)
    .function("GetOffset", &vtkPlotBar::GetOffset)
    .function("SetOrientation", &vtkPlotBar::SetOrientation)
    .function("GetOrientation", &vtkPlotBar::GetOrientation)
    .function("SetInputArray", &vtkPlotBar::SetInputArray)
    .function("SetColorSeries", &vtkPlotBar::SetColorSeries, emscripten::allow_raw_pointers())
    .function("GetColorSeries", &vtkPlotBar::GetColorSeries, emscripten::allow_raw_pointers())
    .function("SetLookupTable", &vtkPlotBar::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkPlotBar::GetLookupTable, emscripten::allow_raw_pointers())
    .function("CreateDefaultLookupTable", &vtkPlotBar::CreateDefaultLookupTable)
    .function("SetScalarVisibility", &vtkPlotBar::SetScalarVisibility)
    .function("GetScalarVisibility", &vtkPlotBar::GetScalarVisibility)
    .function("ScalarVisibilityOn", &vtkPlotBar::ScalarVisibilityOn)
    .function("ScalarVisibilityOff", &vtkPlotBar::ScalarVisibilityOff)
    .function("SetEnableOpacityMapping", &vtkPlotBar::SetEnableOpacityMapping)
    .function("GetEnableOpacityMapping", &vtkPlotBar::GetEnableOpacityMapping)
    .function("EnableOpacityMappingOn", &vtkPlotBar::EnableOpacityMappingOn)
    .function("EnableOpacityMappingOff", &vtkPlotBar::EnableOpacityMappingOff)
    .function("SelectColorArray", emscripten::select_overload<void(vtkPlotBar&, int)>([](vtkPlotBar& self, int arg_0) -> void { return self.SelectColorArray( arg_0); }))
    .function("SelectColorArray", emscripten::select_overload<void(vtkPlotBar&, const vtkStdString&)>([](vtkPlotBar& self, const vtkStdString& arg_0) -> void { return self.SelectColorArray( arg_0); }))
    .function("GetColorArrayName", &vtkPlotBar::GetColorArrayName)
    .function("GetLabels", &vtkPlotBar::GetLabels, emscripten::allow_raw_pointers())
    .function("SetGroupName", &vtkPlotBar::SetGroupName)
    .function("GetGroupName", &vtkPlotBar::GetGroupName)
    .function("GetTooltipLabel", &vtkPlotBar::GetTooltipLabel)
    .function("SelectPoints", &vtkPlotBar::SelectPoints)
    .function("GetBarsCount", &vtkPlotBar::GetBarsCount)
    .function("UpdateCache", &vtkPlotBar::UpdateCache);
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkPlotBar_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkPlotBar_VERTICAL", vtkPlotBar::VERTICAL },
      { "vtkPlotBar_HORIZONTAL", vtkPlotBar::HORIZONTAL },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
