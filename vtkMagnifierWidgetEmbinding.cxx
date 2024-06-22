// JavaScript wrapper for vtkMagnifierWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkMagnifierWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkMagnifierWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMagnifierRepresentation.h"
#include "vtkMagnifierWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkMagnifierWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkMagnifierWidget>(vtkMagnifierWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMagnifierWidget_class) {
  emscripten::class_<vtkMagnifierWidget, emscripten::base<vtkAbstractWidget>>("vtkMagnifierWidget")
    .smart_ptr<vtkSmartPointer<vtkMagnifierWidget>>("vtkSmartPointer<vtkMagnifierWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMagnifierWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMagnifierWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMagnifierWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMagnifierWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMagnifierWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMagnifierWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMagnifierWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkMagnifierWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetMagnifierRepresentation", &vtkMagnifierWidget::GetMagnifierRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkMagnifierWidget::CreateDefaultRepresentation)
    .function("SetEnabled", &vtkMagnifierWidget::SetEnabled)
    .function("SetKeyPressIncreaseValue", &vtkMagnifierWidget::SetKeyPressIncreaseValue)
    .function("GetKeyPressIncreaseValue", &vtkMagnifierWidget::GetKeyPressIncreaseValue)
    .function("SetKeyPressDecreaseValue", &vtkMagnifierWidget::SetKeyPressDecreaseValue)
    .function("GetKeyPressDecreaseValue", &vtkMagnifierWidget::GetKeyPressDecreaseValue);
}
