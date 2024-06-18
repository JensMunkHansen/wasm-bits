// JavaScript wrapper for vtkAbstractWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkAbstractWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkAbstractWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWidgetEventTranslator.h"
#include "vtkWidgetRepresentation.h"
#include "vtkAbstractWidget.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractWidget>(vtkAbstractWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractWidget_class) {
  emscripten::class_<vtkAbstractWidget, emscripten::base<vtkInteractorObserver>>("vtkAbstractWidget")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkAbstractWidget::SetEnabled)
    .function("SetProcessEvents", &vtkAbstractWidget::SetProcessEvents)
    .function("GetProcessEventsMinValue", &vtkAbstractWidget::GetProcessEventsMinValue)
    .function("GetProcessEventsMaxValue", &vtkAbstractWidget::GetProcessEventsMaxValue)
    .function("GetProcessEvents", &vtkAbstractWidget::GetProcessEvents)
    .function("ProcessEventsOn", &vtkAbstractWidget::ProcessEventsOn)
    .function("ProcessEventsOff", &vtkAbstractWidget::ProcessEventsOff)
    .function("GetEventTranslator", &vtkAbstractWidget::GetEventTranslator, emscripten::allow_raw_pointers())
    .function("Render", &vtkAbstractWidget::Render)
    .function("SetParent", &vtkAbstractWidget::SetParent, emscripten::allow_raw_pointers())
    .function("GetParent", &vtkAbstractWidget::GetParent, emscripten::allow_raw_pointers())
    .function("GetRepresentation", &vtkAbstractWidget::GetRepresentation, emscripten::allow_raw_pointers())
    .function("SetManagesCursor", &vtkAbstractWidget::SetManagesCursor)
    .function("GetManagesCursor", &vtkAbstractWidget::GetManagesCursor)
    .function("ManagesCursorOn", &vtkAbstractWidget::ManagesCursorOn)
    .function("ManagesCursorOff", &vtkAbstractWidget::ManagesCursorOff)
    .function("SetPriority", &vtkAbstractWidget::SetPriority);
}
