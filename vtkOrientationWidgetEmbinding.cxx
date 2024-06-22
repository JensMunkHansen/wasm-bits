// JavaScript wrapper for vtkOrientationWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkOrientationWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkOrientationWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkOrientationRepresentation.h"
#include "vtkOrientationWidget.h"

template<> void emscripten::internal::raw_destructor<vtkOrientationWidget>(vtkOrientationWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOrientationWidget_class) {
  emscripten::class_<vtkOrientationWidget, emscripten::base<vtkAbstractWidget>>("vtkOrientationWidget")
    .smart_ptr<vtkSmartPointer<vtkOrientationWidget>>("vtkSmartPointer<vtkOrientationWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOrientationWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrientationWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOrientationWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOrientationWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOrientationWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrientationWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOrientationWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CreateDefaultRepresentation", &vtkOrientationWidget::CreateDefaultRepresentation)
    .function("SetRepresentation", &vtkOrientationWidget::SetRepresentation, emscripten::allow_raw_pointers());
}
