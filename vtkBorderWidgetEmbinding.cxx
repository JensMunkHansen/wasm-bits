// JavaScript wrapper for vtkBorderWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkBorderWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkBorderWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBorderRepresentation.h"
#include "vtkBorderWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBorderWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkBorderWidget>(vtkBorderWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBorderWidget_class) {
  emscripten::class_<vtkBorderWidget, emscripten::base<vtkAbstractWidget>>("vtkBorderWidget")
    .smart_ptr<vtkSmartPointer<vtkBorderWidget>>("vtkSmartPointer<vtkBorderWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBorderWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBorderWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBorderWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBorderWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBorderWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBorderWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBorderWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSelectable", &vtkBorderWidget::SetSelectable)
    .function("GetSelectable", &vtkBorderWidget::GetSelectable)
    .function("SelectableOn", &vtkBorderWidget::SelectableOn)
    .function("SelectableOff", &vtkBorderWidget::SelectableOff)
    .function("SetResizable", &vtkBorderWidget::SetResizable)
    .function("GetResizable", &vtkBorderWidget::GetResizable)
    .function("ResizableOn", &vtkBorderWidget::ResizableOn)
    .function("ResizableOff", &vtkBorderWidget::ResizableOff)
    .function("SetRepresentation", &vtkBorderWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetBorderRepresentation", &vtkBorderWidget::GetBorderRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkBorderWidget::CreateDefaultRepresentation)
    .function("GetProcessEvents", &vtkBorderWidget::GetProcessEvents);
}
