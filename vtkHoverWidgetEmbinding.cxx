// JavaScript wrapper for vtkHoverWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkHoverWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkHoverWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHoverWidget.h"

template<> void emscripten::internal::raw_destructor<vtkHoverWidget>(vtkHoverWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHoverWidget_class) {
  emscripten::class_<vtkHoverWidget, emscripten::base<vtkAbstractWidget>>("vtkHoverWidget")
    .smart_ptr<vtkSmartPointer<vtkHoverWidget>>("vtkSmartPointer<vtkHoverWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHoverWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHoverWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHoverWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHoverWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHoverWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHoverWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHoverWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTimerDuration", &vtkHoverWidget::SetTimerDuration)
    .function("GetTimerDurationMinValue", &vtkHoverWidget::GetTimerDurationMinValue)
    .function("GetTimerDurationMaxValue", &vtkHoverWidget::GetTimerDurationMaxValue)
    .function("GetTimerDuration", &vtkHoverWidget::GetTimerDuration)
    .function("SetEnabled", &vtkHoverWidget::SetEnabled)
    .function("CreateDefaultRepresentation", &vtkHoverWidget::CreateDefaultRepresentation);
}
