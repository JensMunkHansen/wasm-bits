// JavaScript wrapper for vtkParallelopipedWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkParallelopipedWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkParallelopipedWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParallelopipedRepresentation.h"
#include "vtkParallelopipedWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkParallelopipedWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkParallelopipedWidget>(vtkParallelopipedWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParallelopipedWidget_class) {
  emscripten::class_<vtkParallelopipedWidget, emscripten::base<vtkAbstractWidget>>("vtkParallelopipedWidget")
    .smart_ptr<vtkSmartPointer<vtkParallelopipedWidget>>("vtkSmartPointer<vtkParallelopipedWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParallelopipedWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelopipedWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParallelopipedWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParallelopipedWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParallelopipedWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelopipedWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParallelopipedWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkParallelopipedWidget::SetEnabled)
    .function("SetRepresentation", &vtkParallelopipedWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetParallelopipedRepresentation", &vtkParallelopipedWidget::GetParallelopipedRepresentation, emscripten::allow_raw_pointers())
    .function("SetEnableChairCreation", &vtkParallelopipedWidget::SetEnableChairCreation)
    .function("GetEnableChairCreation", &vtkParallelopipedWidget::GetEnableChairCreation)
    .function("EnableChairCreationOn", &vtkParallelopipedWidget::EnableChairCreationOn)
    .function("EnableChairCreationOff", &vtkParallelopipedWidget::EnableChairCreationOff)
    .function("CreateDefaultRepresentation", &vtkParallelopipedWidget::CreateDefaultRepresentation)
    .function("SetProcessEvents", &vtkParallelopipedWidget::SetProcessEvents);
}
