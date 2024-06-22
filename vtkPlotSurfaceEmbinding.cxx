// JavaScript wrapper for vtkPlotSurface with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotSurfaceEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotSurface.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkTable.h"
#include "vtkStdString.h"
#include "vtkPlotSurface.h"

template<> void emscripten::internal::raw_destructor<vtkPlotSurface>(vtkPlotSurface * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotSurface_class) {
  emscripten::class_<vtkPlotSurface, emscripten::base<vtkPlot3D>>("vtkPlotSurface")
    .smart_ptr<vtkSmartPointer<vtkPlotSurface>>("vtkSmartPointer<vtkPlotSurface>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlotSurface>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotSurface::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotSurface& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotSurface::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotSurface::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotSurface::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotSurface& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkPlotSurface::Paint, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlotSurface&, vtkTable*)>([](vtkPlotSurface& self, vtkTable* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlotSurface&, vtkTable*, const vtkStdString&, const vtkStdString&, const vtkStdString&)>([](vtkPlotSurface& self, vtkTable* arg_0, const vtkStdString& arg_1, const vtkStdString& arg_2, const vtkStdString& arg_3) -> void { return self.SetInputData( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlotSurface&, vtkTable*, int, int, int)>([](vtkPlotSurface& self, vtkTable* arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetInputData( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPlotSurface&, vtkTable*, const vtkStdString&, const vtkStdString&, const vtkStdString&, const vtkStdString&)>([](vtkPlotSurface& self, vtkTable* arg_0, const vtkStdString& arg_1, const vtkStdString& arg_2, const vtkStdString& arg_3, const vtkStdString& arg_4) -> void { return self.SetInputData( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("SetXRange", &vtkPlotSurface::SetXRange)
    .function("SetYRange", &vtkPlotSurface::SetYRange);
}
