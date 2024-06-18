// JavaScript wrapper for vtkPolyDataSourceWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPolyDataSourceWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPolyDataSourceWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyDataAlgorithm.h"
#include "vtkPolyDataSourceWidget.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataSourceWidget>(vtkPolyDataSourceWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataSourceWidget_class) {
  emscripten::class_<vtkPolyDataSourceWidget, emscripten::base<vtk3DWidget>>("vtkPolyDataSourceWidget")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataSourceWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataSourceWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataSourceWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataSourceWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataSourceWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataSourceWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("PlaceWidget", emscripten::select_overload<void(vtkPolyDataSourceWidget&)>([](vtkPolyDataSourceWidget& self) -> void { return self.PlaceWidget(); }))
    .function("PlaceWidget", emscripten::select_overload<void(vtkPolyDataSourceWidget&, double, double, double, double, double, double)>([](vtkPolyDataSourceWidget& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.PlaceWidget( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }));
}
