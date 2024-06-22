// JavaScript wrapper for vtkLightWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkLightWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkLightWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLightRepresentation.h"
#include "vtkLightWidget.h"

template<> void emscripten::internal::raw_destructor<vtkLightWidget>(vtkLightWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLightWidget_class) {
  emscripten::class_<vtkLightWidget, emscripten::base<vtkAbstractWidget>>("vtkLightWidget")
    .smart_ptr<vtkSmartPointer<vtkLightWidget>>("vtkSmartPointer<vtkLightWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLightWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLightWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLightWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLightWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLightWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkLightWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetLightRepresentation", &vtkLightWidget::GetLightRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkLightWidget::CreateDefaultRepresentation);
}
