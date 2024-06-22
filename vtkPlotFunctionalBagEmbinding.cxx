// JavaScript wrapper for vtkPlotFunctionalBag with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotFunctionalBagEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotFunctionalBag.h
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
#include "vtkVector.h"
#include "vtkContextPolygon.h"
#include "vtkPlotFunctionalBag.h"

template<> void emscripten::internal::raw_destructor<vtkPlotFunctionalBag>(vtkPlotFunctionalBag * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotFunctionalBag_class) {
  emscripten::class_<vtkPlotFunctionalBag, emscripten::base<vtkPlot>>("vtkPlotFunctionalBag")
    .smart_ptr<vtkSmartPointer<vtkPlotFunctionalBag>>("vtkSmartPointer<vtkPlotFunctionalBag>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlotFunctionalBag>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotFunctionalBag::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotFunctionalBag& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotFunctionalBag::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotFunctionalBag::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotFunctionalBag::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotFunctionalBag& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsBag", &vtkPlotFunctionalBag::IsBag)
    .function("GetVisible", &vtkPlotFunctionalBag::GetVisible)
    .function("Paint", &vtkPlotFunctionalBag::Paint, emscripten::allow_raw_pointers())
    .function("PaintLegend", &vtkPlotFunctionalBag::PaintLegend, emscripten::allow_raw_pointers())
    .function("SetLookupTable", &vtkPlotFunctionalBag::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkPlotFunctionalBag::GetLookupTable, emscripten::allow_raw_pointers())
    .function("CreateDefaultLookupTable", &vtkPlotFunctionalBag::CreateDefaultLookupTable)
    .function("SelectPoints", &vtkPlotFunctionalBag::SelectPoints)
    .function("SelectPointsInPolygon", &vtkPlotFunctionalBag::SelectPointsInPolygon)
    .function("UpdateCache", &vtkPlotFunctionalBag::UpdateCache);
}
