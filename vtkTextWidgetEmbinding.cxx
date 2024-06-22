// JavaScript wrapper for vtkTextWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkTextWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkTextWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextRepresentation.h"
#include "vtkTextActor.h"
#include "vtkTextWidget.h"

template<> void emscripten::internal::raw_destructor<vtkTextWidget>(vtkTextWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextWidget_class) {
  emscripten::class_<vtkTextWidget, emscripten::base<vtkBorderWidget>>("vtkTextWidget")
    .smart_ptr<vtkSmartPointer<vtkTextWidget>>("vtkSmartPointer<vtkTextWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTextWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkTextWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("SetTextActor", &vtkTextWidget::SetTextActor, emscripten::allow_raw_pointers())
    .function("GetTextActor", &vtkTextWidget::GetTextActor, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkTextWidget::CreateDefaultRepresentation);
}
