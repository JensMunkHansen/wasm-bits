// JavaScript wrapper for vtkDisplaySizedImplicitPlaneWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkDisplaySizedImplicitPlaneWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkDisplaySizedImplicitPlaneWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDisplaySizedImplicitPlaneRepresentation.h"
#include "vtkDisplaySizedImplicitPlaneWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkDisplaySizedImplicitPlaneWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkDisplaySizedImplicitPlaneWidget>(vtkDisplaySizedImplicitPlaneWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDisplaySizedImplicitPlaneWidget_class) {
  emscripten::class_<vtkDisplaySizedImplicitPlaneWidget, emscripten::base<vtkAbstractWidget>>("vtkDisplaySizedImplicitPlaneWidget")
    .smart_ptr<vtkSmartPointer<vtkDisplaySizedImplicitPlaneWidget>>("vtkSmartPointer<vtkDisplaySizedImplicitPlaneWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDisplaySizedImplicitPlaneWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDisplaySizedImplicitPlaneWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDisplaySizedImplicitPlaneWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDisplaySizedImplicitPlaneWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDisplaySizedImplicitPlaneWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDisplaySizedImplicitPlaneWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDisplaySizedImplicitPlaneWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkDisplaySizedImplicitPlaneWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("SetEnabled", &vtkDisplaySizedImplicitPlaneWidget::SetEnabled)
    .function("SetLockNormalToCamera", &vtkDisplaySizedImplicitPlaneWidget::SetLockNormalToCamera)
    .function("GetDisplaySizedImplicitPlaneRepresentation", &vtkDisplaySizedImplicitPlaneWidget::GetDisplaySizedImplicitPlaneRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkDisplaySizedImplicitPlaneWidget::CreateDefaultRepresentation);
}
