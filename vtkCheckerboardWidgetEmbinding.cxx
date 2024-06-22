// JavaScript wrapper for vtkCheckerboardWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCheckerboardWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCheckerboardWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCheckerboardRepresentation.h"
#include "vtkCheckerboardWidget.h"

template<> void emscripten::internal::raw_destructor<vtkCheckerboardWidget>(vtkCheckerboardWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCheckerboardWidget_class) {
  emscripten::class_<vtkCheckerboardWidget, emscripten::base<vtkAbstractWidget>>("vtkCheckerboardWidget")
    .smart_ptr<vtkSmartPointer<vtkCheckerboardWidget>>("vtkSmartPointer<vtkCheckerboardWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCheckerboardWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCheckerboardWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCheckerboardWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCheckerboardWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCheckerboardWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCheckerboardWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCheckerboardWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkCheckerboardWidget::SetEnabled)
    .function("SetRepresentation", &vtkCheckerboardWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetCheckerboardRepresentation", &vtkCheckerboardWidget::GetCheckerboardRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkCheckerboardWidget::CreateDefaultRepresentation);
}
