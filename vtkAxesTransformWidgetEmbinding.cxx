// JavaScript wrapper for vtkAxesTransformWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkAxesTransformWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkAxesTransformWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAxesTransformRepresentation.h"
#include "vtkAxesTransformWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkAxesTransformWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkAxesTransformWidget>(vtkAxesTransformWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAxesTransformWidget_class) {
  emscripten::class_<vtkAxesTransformWidget, emscripten::base<vtkAbstractWidget>>("vtkAxesTransformWidget")
    .smart_ptr<vtkSmartPointer<vtkAxesTransformWidget>>("vtkSmartPointer<vtkAxesTransformWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAxesTransformWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxesTransformWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAxesTransformWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAxesTransformWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAxesTransformWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxesTransformWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAxesTransformWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkAxesTransformWidget::SetEnabled)
    .function("SetRepresentation", &vtkAxesTransformWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetLineRepresentation", &vtkAxesTransformWidget::GetLineRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkAxesTransformWidget::CreateDefaultRepresentation)
    .function("SetProcessEvents", &vtkAxesTransformWidget::SetProcessEvents);
}
