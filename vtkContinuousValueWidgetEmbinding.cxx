// JavaScript wrapper for vtkContinuousValueWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkContinuousValueWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkContinuousValueWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContinuousValueWidgetRepresentation.h"
#include "vtkContinuousValueWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkContinuousValueWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkContinuousValueWidget>(vtkContinuousValueWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContinuousValueWidget_class) {
  emscripten::class_<vtkContinuousValueWidget, emscripten::base<vtkAbstractWidget>>("vtkContinuousValueWidget")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContinuousValueWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContinuousValueWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContinuousValueWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContinuousValueWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContinuousValueWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContinuousValueWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkContinuousValueWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetContinuousValueWidgetRepresentation", &vtkContinuousValueWidget::GetContinuousValueWidgetRepresentation, emscripten::allow_raw_pointers())
    .function("GetValue", &vtkContinuousValueWidget::GetValue)
    .function("SetValue", &vtkContinuousValueWidget::SetValue);
}
