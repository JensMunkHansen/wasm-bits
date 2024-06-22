// JavaScript wrapper for vtkCenteredSliderWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCenteredSliderWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCenteredSliderWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSliderRepresentation.h"
#include "vtkCenteredSliderWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCenteredSliderWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCenteredSliderWidget>(vtkCenteredSliderWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCenteredSliderWidget_class) {
  emscripten::class_<vtkCenteredSliderWidget, emscripten::base<vtkAbstractWidget>>("vtkCenteredSliderWidget")
    .smart_ptr<vtkSmartPointer<vtkCenteredSliderWidget>>("vtkSmartPointer<vtkCenteredSliderWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCenteredSliderWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCenteredSliderWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCenteredSliderWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCenteredSliderWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCenteredSliderWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCenteredSliderWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCenteredSliderWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkCenteredSliderWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetSliderRepresentation", &vtkCenteredSliderWidget::GetSliderRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkCenteredSliderWidget::CreateDefaultRepresentation)
    .function("GetValue", &vtkCenteredSliderWidget::GetValue);
}
