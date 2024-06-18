// JavaScript wrapper for vtkPointCloudWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPointCloudWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPointCloudWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointCloudRepresentation.h"
#include "vtkPointCloudWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkPointCloudWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPointCloudWidget>(vtkPointCloudWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointCloudWidget_class) {
  emscripten::class_<vtkPointCloudWidget, emscripten::base<vtkAbstractWidget>>("vtkPointCloudWidget")
    .smart_ptr<vtkSmartPointer<vtkPointCloudWidget>>("vtkSmartPointer<vtkPointCloudWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPointCloudWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointCloudWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointCloudWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointCloudWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointCloudWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointCloudWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointCloudWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkPointCloudWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkPointCloudWidget::CreateDefaultRepresentation)
    .function("SetEnabled", &vtkPointCloudWidget::SetEnabled);
}
