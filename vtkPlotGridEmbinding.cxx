// JavaScript wrapper for vtkPlotGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotGridEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAxis.h"
#include "vtkContext2D.h"
#include "vtkPlotGrid.h"

template<> void emscripten::internal::raw_destructor<vtkPlotGrid>(vtkPlotGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotGrid_class) {
  emscripten::class_<vtkPlotGrid, emscripten::base<vtkContextItem>>("vtkPlotGrid")
    .smart_ptr<vtkSmartPointer<vtkPlotGrid>>("vtkSmartPointer<vtkPlotGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPlotGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetXAxis", &vtkPlotGrid::SetXAxis, emscripten::allow_raw_pointers())
    .function("SetYAxis", &vtkPlotGrid::SetYAxis, emscripten::allow_raw_pointers())
    .function("Paint", &vtkPlotGrid::Paint, emscripten::allow_raw_pointers());
}
