// JavaScript wrapper for vtkPolyLineWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPolyLineWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPolyLineWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyLineRepresentation.h"
#include "vtkPolyLineWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkPolyLineWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPolyLineWidget>(vtkPolyLineWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyLineWidget_class) {
  emscripten::class_<vtkPolyLineWidget, emscripten::base<vtkAbstractWidget>>("vtkPolyLineWidget")
    .smart_ptr<vtkSmartPointer<vtkPolyLineWidget>>("vtkSmartPointer<vtkPolyLineWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolyLineWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyLineWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyLineWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyLineWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyLineWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyLineWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyLineWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkPolyLineWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkPolyLineWidget::CreateDefaultRepresentation)
    .function("SetEnabled", &vtkPolyLineWidget::SetEnabled);
}
