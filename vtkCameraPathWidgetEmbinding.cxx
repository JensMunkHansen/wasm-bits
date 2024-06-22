// JavaScript wrapper for vtkCameraPathWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCameraPathWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCameraPathWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCameraPathRepresentation.h"
#include "vtkCameraPathWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCameraPathWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCameraPathWidget>(vtkCameraPathWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCameraPathWidget_class) {
  emscripten::class_<vtkCameraPathWidget, emscripten::base<vtkAbstractWidget>>("vtkCameraPathWidget")
    .smart_ptr<vtkSmartPointer<vtkCameraPathWidget>>("vtkSmartPointer<vtkCameraPathWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCameraPathWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraPathWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCameraPathWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCameraPathWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCameraPathWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraPathWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCameraPathWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkCameraPathWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("SetEnabled", &vtkCameraPathWidget::SetEnabled)
    .function("CreateDefaultRepresentation", &vtkCameraPathWidget::CreateDefaultRepresentation);
}
