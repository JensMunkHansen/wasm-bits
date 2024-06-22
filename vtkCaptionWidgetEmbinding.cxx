// JavaScript wrapper for vtkCaptionWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCaptionWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCaptionWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCaptionRepresentation.h"
#include "vtkCaptionActor2D.h"
#include "vtkCaptionWidget.h"

template<> void emscripten::internal::raw_destructor<vtkCaptionWidget>(vtkCaptionWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCaptionWidget_class) {
  emscripten::class_<vtkCaptionWidget, emscripten::base<vtkBorderWidget>>("vtkCaptionWidget")
    .smart_ptr<vtkSmartPointer<vtkCaptionWidget>>("vtkSmartPointer<vtkCaptionWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCaptionWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCaptionWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCaptionWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCaptionWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCaptionWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCaptionWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCaptionWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkCaptionWidget::SetEnabled)
    .function("SetRepresentation", &vtkCaptionWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("SetCaptionActor2D", &vtkCaptionWidget::SetCaptionActor2D, emscripten::allow_raw_pointers())
    .function("GetCaptionActor2D", &vtkCaptionWidget::GetCaptionActor2D, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkCaptionWidget::CreateDefaultRepresentation);
}
