// JavaScript wrapper for vtkPlotPoints3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotPoints3DEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotPoints3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkPlotPoints3D.h"

template<> void emscripten::internal::raw_destructor<vtkPlotPoints3D>(vtkPlotPoints3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotPoints3D_class) {
  emscripten::class_<vtkPlotPoints3D, emscripten::base<vtkPlot3D>>("vtkPlotPoints3D")
    .smart_ptr<vtkSmartPointer<vtkPlotPoints3D>>("vtkSmartPointer<vtkPlotPoints3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPlotPoints3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotPoints3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotPoints3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotPoints3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotPoints3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotPoints3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotPoints3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkPlotPoints3D::Paint, emscripten::allow_raw_pointers());
}
