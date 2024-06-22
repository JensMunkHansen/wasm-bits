// JavaScript wrapper for vtkFinitePlaneWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkFinitePlaneWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkFinitePlaneWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFinitePlaneRepresentation.h"
#include "vtkFinitePlaneWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkFinitePlaneWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkFinitePlaneWidget>(vtkFinitePlaneWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFinitePlaneWidget_class) {
  emscripten::class_<vtkFinitePlaneWidget, emscripten::base<vtkAbstractWidget>>("vtkFinitePlaneWidget")
    .smart_ptr<vtkSmartPointer<vtkFinitePlaneWidget>>("vtkSmartPointer<vtkFinitePlaneWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFinitePlaneWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFinitePlaneWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFinitePlaneWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFinitePlaneWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFinitePlaneWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFinitePlaneWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFinitePlaneWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkFinitePlaneWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkFinitePlaneWidget::CreateDefaultRepresentation);
}
