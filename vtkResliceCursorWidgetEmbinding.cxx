// JavaScript wrapper for vtkResliceCursorWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkResliceCursorWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkResliceCursorWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkResliceCursorRepresentation.h"
#include "vtkResliceCursorWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkResliceCursorWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkResliceCursorWidget>(vtkResliceCursorWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkResliceCursorWidget_class) {
  emscripten::class_<vtkResliceCursorWidget, emscripten::base<vtkAbstractWidget>>("vtkResliceCursorWidget")
    .smart_ptr<vtkSmartPointer<vtkResliceCursorWidget>>("vtkSmartPointer<vtkResliceCursorWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkResliceCursorWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursorWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkResliceCursorWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkResliceCursorWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkResliceCursorWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursorWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkResliceCursorWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkResliceCursorWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetResliceCursorRepresentation", &vtkResliceCursorWidget::GetResliceCursorRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkResliceCursorWidget::CreateDefaultRepresentation)
    .function("SetEnabled", &vtkResliceCursorWidget::SetEnabled)
    .function("SetManageWindowLevel", &vtkResliceCursorWidget::SetManageWindowLevel)
    .function("GetManageWindowLevel", &vtkResliceCursorWidget::GetManageWindowLevel)
    .function("ManageWindowLevelOn", &vtkResliceCursorWidget::ManageWindowLevelOn)
    .function("ManageWindowLevelOff", &vtkResliceCursorWidget::ManageWindowLevelOff)
    .function("ResetResliceCursor", &vtkResliceCursorWidget::ResetResliceCursor);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkResliceCursorWidget_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkResliceCursorWidget_WindowLevelEvent", vtkResliceCursorWidget::WindowLevelEvent },
      { "vtkResliceCursorWidget_ResliceAxesChangedEvent", vtkResliceCursorWidget::ResliceAxesChangedEvent },
      { "vtkResliceCursorWidget_ResliceThicknessChangedEvent", vtkResliceCursorWidget::ResliceThicknessChangedEvent },
      { "vtkResliceCursorWidget_ResetCursorEvent", vtkResliceCursorWidget::ResetCursorEvent },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
