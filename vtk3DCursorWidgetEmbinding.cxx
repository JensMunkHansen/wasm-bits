// JavaScript wrapper for vtk3DCursorWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtk3DCursorWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtk3DCursorWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtk3DCursorRepresentation.h"
#include "vtk3DCursorWidget.h"

template<> void emscripten::internal::raw_destructor<vtk3DCursorWidget>(vtk3DCursorWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtk3DCursorWidget_class) {
  emscripten::class_<vtk3DCursorWidget, emscripten::base<vtkAbstractWidget>>("vtk3DCursorWidget")
    .smart_ptr<vtkSmartPointer<vtk3DCursorWidget>>("vtkSmartPointer<vtk3DCursorWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtk3DCursorWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtk3DCursorWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtk3DCursorWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtk3DCursorWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtk3DCursorWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtk3DCursorWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtk3DCursorWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtk3DCursorWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("Get3DCursorRepresentation", &vtk3DCursorWidget::Get3DCursorRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtk3DCursorWidget::CreateDefaultRepresentation);
}
