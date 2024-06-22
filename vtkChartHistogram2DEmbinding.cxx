// JavaScript wrapper for vtkChartHistogram2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartHistogram2DEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkChartHistogram2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkScalarsToColors.h"
#include "vtkContextMouseEvent.h"
#include "vtkPlot.h"
#include "vtkChartHistogram2D.h"

template<> void emscripten::internal::raw_destructor<vtkChartHistogram2D>(vtkChartHistogram2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkChartHistogram2D_class) {
  emscripten::class_<vtkChartHistogram2D, emscripten::base<vtkChartXY>>("vtkChartHistogram2D")
    .smart_ptr<vtkSmartPointer<vtkChartHistogram2D>>("vtkSmartPointer<vtkChartHistogram2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkChartHistogram2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartHistogram2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkChartHistogram2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkChartHistogram2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkChartHistogram2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartHistogram2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkChartHistogram2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", &vtkChartHistogram2D::Update)
    .function("SetInputData", &vtkChartHistogram2D::SetInputData, emscripten::allow_raw_pointers())
    .function("SetTransferFunction", &vtkChartHistogram2D::SetTransferFunction, emscripten::allow_raw_pointers())
    .function("Hit", &vtkChartHistogram2D::Hit)
    .function("GetPlot", &vtkChartHistogram2D::GetPlot, emscripten::allow_raw_pointers());
}
