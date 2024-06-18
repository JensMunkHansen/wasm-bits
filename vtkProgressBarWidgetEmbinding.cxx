// JavaScript wrapper for vtkProgressBarWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkProgressBarWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkProgressBarWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProgressBarRepresentation.h"
#include "vtkProgressBarWidget.h"

template<> void emscripten::internal::raw_destructor<vtkProgressBarWidget>(vtkProgressBarWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProgressBarWidget_class) {
  emscripten::class_<vtkProgressBarWidget, emscripten::base<vtkBorderWidget>>("vtkProgressBarWidget")
    .smart_ptr<vtkSmartPointer<vtkProgressBarWidget>>("vtkSmartPointer<vtkProgressBarWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkProgressBarWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgressBarWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProgressBarWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProgressBarWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProgressBarWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgressBarWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProgressBarWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkProgressBarWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkProgressBarWidget::CreateDefaultRepresentation);
}
