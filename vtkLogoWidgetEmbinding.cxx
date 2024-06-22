// JavaScript wrapper for vtkLogoWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkLogoWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkLogoWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLogoRepresentation.h"
#include "vtkLogoWidget.h"

template<> void emscripten::internal::raw_destructor<vtkLogoWidget>(vtkLogoWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLogoWidget_class) {
  emscripten::class_<vtkLogoWidget, emscripten::base<vtkBorderWidget>>("vtkLogoWidget")
    .smart_ptr<vtkSmartPointer<vtkLogoWidget>>("vtkSmartPointer<vtkLogoWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLogoWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLogoWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLogoWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLogoWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLogoWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLogoWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLogoWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkLogoWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkLogoWidget::CreateDefaultRepresentation);
}
