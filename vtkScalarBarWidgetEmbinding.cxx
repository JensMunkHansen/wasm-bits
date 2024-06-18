// JavaScript wrapper for vtkScalarBarWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkScalarBarWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkScalarBarWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScalarBarRepresentation.h"
#include "vtkScalarBarActor.h"
#include "vtkScalarBarWidget.h"

template<> void emscripten::internal::raw_destructor<vtkScalarBarWidget>(vtkScalarBarWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkScalarBarWidget_class) {
  emscripten::class_<vtkScalarBarWidget, emscripten::base<vtkBorderWidget>>("vtkScalarBarWidget")
    .smart_ptr<vtkSmartPointer<vtkScalarBarWidget>>("vtkSmartPointer<vtkScalarBarWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkScalarBarWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScalarBarWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkScalarBarWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkScalarBarWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkScalarBarWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScalarBarWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkScalarBarWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkScalarBarWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetScalarBarRepresentation", &vtkScalarBarWidget::GetScalarBarRepresentation, emscripten::allow_raw_pointers())
    .function("SetScalarBarActor", &vtkScalarBarWidget::SetScalarBarActor, emscripten::allow_raw_pointers())
    .function("GetScalarBarActor", &vtkScalarBarWidget::GetScalarBarActor, emscripten::allow_raw_pointers())
    .function("SetRepositionable", &vtkScalarBarWidget::SetRepositionable)
    .function("GetRepositionable", &vtkScalarBarWidget::GetRepositionable)
    .function("RepositionableOn", &vtkScalarBarWidget::RepositionableOn)
    .function("RepositionableOff", &vtkScalarBarWidget::RepositionableOff)
    .function("CreateDefaultRepresentation", &vtkScalarBarWidget::CreateDefaultRepresentation)
    .function("GetProcessEvents", &vtkScalarBarWidget::GetProcessEvents);
}
