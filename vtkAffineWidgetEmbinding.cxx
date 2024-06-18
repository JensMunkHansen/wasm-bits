// JavaScript wrapper for vtkAffineWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkAffineWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkAffineWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAffineRepresentation.h"
#include "vtkAffineWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkAffineWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkAffineWidget>(vtkAffineWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineWidget_class) {
  emscripten::class_<vtkAffineWidget, emscripten::base<vtkAbstractWidget>>("vtkAffineWidget")
    .smart_ptr<vtkSmartPointer<vtkAffineWidget>>("vtkSmartPointer<vtkAffineWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAffineWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkAffineWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetAffineRepresentation", &vtkAffineWidget::GetAffineRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkAffineWidget::CreateDefaultRepresentation)
    .function("SetEnabled", &vtkAffineWidget::SetEnabled);
}
