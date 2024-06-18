// JavaScript wrapper for vtkButtonWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkButtonWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkButtonWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkButtonRepresentation.h"
#include "vtkButtonWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkButtonWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkButtonWidget>(vtkButtonWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkButtonWidget_class) {
  emscripten::class_<vtkButtonWidget, emscripten::base<vtkAbstractWidget>>("vtkButtonWidget")
    .smart_ptr<vtkSmartPointer<vtkButtonWidget>>("vtkSmartPointer<vtkButtonWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkButtonWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkButtonWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkButtonWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkButtonWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkButtonWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkButtonWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkButtonWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkButtonWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetButtonRepresentation", &vtkButtonWidget::GetButtonRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkButtonWidget::CreateDefaultRepresentation)
    .function("SetEnabled", &vtkButtonWidget::SetEnabled);
}
