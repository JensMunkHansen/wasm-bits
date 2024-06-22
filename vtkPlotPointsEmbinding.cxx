// JavaScript wrapper for vtkPlotPoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotPointsEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotPoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkRect.h"
#include "vtkScalarsToColors.h"
#include "vtkStdString.h"
#include "vtkVector.h"
#include "vtkContextPolygon.h"
#include "vtkPlotPoints.h"

template<> void emscripten::internal::raw_destructor<vtkPlotPoints>(vtkPlotPoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotPoints_class) {
  emscripten::class_<vtkPlotPoints, emscripten::base<vtkPlot>>("vtkPlotPoints")
    .smart_ptr<vtkSmartPointer<vtkPlotPoints>>("vtkSmartPointer<vtkPlotPoints>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlotPoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotPoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotPoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotPoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotPoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotPoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotPoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkPlotPoints::Paint, emscripten::allow_raw_pointers())
    .function("PaintLegend", &vtkPlotPoints::PaintLegend, emscripten::allow_raw_pointers())
    .function("SetLookupTable", &vtkPlotPoints::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkPlotPoints::GetLookupTable, emscripten::allow_raw_pointers())
    .function("CreateDefaultLookupTable", &vtkPlotPoints::CreateDefaultLookupTable)
    .function("SetScalarVisibility", &vtkPlotPoints::SetScalarVisibility)
    .function("GetScalarVisibility", &vtkPlotPoints::GetScalarVisibility)
    .function("ScalarVisibilityOn", &vtkPlotPoints::ScalarVisibilityOn)
    .function("ScalarVisibilityOff", &vtkPlotPoints::ScalarVisibilityOff)
    .function("SelectColorArray", emscripten::select_overload<void(vtkPlotPoints&, int)>([](vtkPlotPoints& self, int arg_0) -> void { return self.SelectColorArray( arg_0); }))
    .function("SelectColorArray", emscripten::select_overload<void(vtkPlotPoints&, const vtkStdString&)>([](vtkPlotPoints& self, const vtkStdString& arg_0) -> void { return self.SelectColorArray( arg_0); }))
    .function("GetColorArrayName", &vtkPlotPoints::GetColorArrayName)
    .function("SelectPoints", &vtkPlotPoints::SelectPoints)
    .function("SelectPointsInPolygon", &vtkPlotPoints::SelectPointsInPolygon)
    .function("GetMarkerStyle", &vtkPlotPoints::GetMarkerStyle)
    .function("SetMarkerStyle", &vtkPlotPoints::SetMarkerStyle)
    .function("GetMarkerSize", &vtkPlotPoints::GetMarkerSize)
    .function("SetMarkerSize", &vtkPlotPoints::SetMarkerSize)
    .function("GetValidPointMaskName", &vtkPlotPoints::GetValidPointMaskName)
    .function("SetValidPointMaskName", &vtkPlotPoints::SetValidPointMaskName)
    .function("UpdateCache", &vtkPlotPoints::UpdateCache)
    .function("ReleaseGraphicsCache", &vtkPlotPoints::ReleaseGraphicsCache);
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkPlotPoints_0_2_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "vtkPlotPoints_NONE", vtkPlotPoints::NONE },
      { "vtkPlotPoints_CROSS", vtkPlotPoints::CROSS },
      { "vtkPlotPoints_PLUS", vtkPlotPoints::PLUS },
      { "vtkPlotPoints_SQUARE", vtkPlotPoints::SQUARE },
      { "vtkPlotPoints_CIRCLE", vtkPlotPoints::CIRCLE },
      { "vtkPlotPoints_DIAMOND", vtkPlotPoints::DIAMOND },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
