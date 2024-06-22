// JavaScript wrapper for vtkPlotLine3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotLine3DEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotLine3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkPlotLine3D.h"

template<> void emscripten::internal::raw_destructor<vtkPlotLine3D>(vtkPlotLine3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotLine3D_class) {
  emscripten::class_<vtkPlotLine3D, emscripten::base<vtkPlotPoints3D>>("vtkPlotLine3D")
    .smart_ptr<vtkSmartPointer<vtkPlotLine3D>>("vtkSmartPointer<vtkPlotLine3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPlotLine3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotLine3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotLine3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotLine3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotLine3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotLine3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotLine3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkPlotLine3D::Paint, emscripten::allow_raw_pointers());
}
