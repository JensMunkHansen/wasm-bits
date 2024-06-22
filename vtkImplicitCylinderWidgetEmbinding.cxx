// JavaScript wrapper for vtkImplicitCylinderWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkImplicitCylinderWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkImplicitCylinderWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitCylinderRepresentation.h"
#include "vtkImplicitCylinderWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImplicitCylinderWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkImplicitCylinderWidget>(vtkImplicitCylinderWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitCylinderWidget_class) {
  emscripten::class_<vtkImplicitCylinderWidget, emscripten::base<vtkAbstractWidget>>("vtkImplicitCylinderWidget")
    .smart_ptr<vtkSmartPointer<vtkImplicitCylinderWidget>>("vtkSmartPointer<vtkImplicitCylinderWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImplicitCylinderWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitCylinderWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitCylinderWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitCylinderWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitCylinderWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitCylinderWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitCylinderWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkImplicitCylinderWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetCylinderRepresentation", &vtkImplicitCylinderWidget::GetCylinderRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkImplicitCylinderWidget::CreateDefaultRepresentation);
}
