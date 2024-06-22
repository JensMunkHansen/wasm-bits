// JavaScript wrapper for vtkTensorProbeWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkTensorProbeWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkTensorProbeWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTensorProbeRepresentation.h"
#include "vtkTensorProbeWidget.h"

template<> void emscripten::internal::raw_destructor<vtkTensorProbeWidget>(vtkTensorProbeWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTensorProbeWidget_class) {
  emscripten::class_<vtkTensorProbeWidget, emscripten::base<vtkAbstractWidget>>("vtkTensorProbeWidget")
    .smart_ptr<vtkSmartPointer<vtkTensorProbeWidget>>("vtkSmartPointer<vtkTensorProbeWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTensorProbeWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTensorProbeWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTensorProbeWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTensorProbeWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTensorProbeWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTensorProbeWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTensorProbeWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkTensorProbeWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetTensorProbeRepresentation", &vtkTensorProbeWidget::GetTensorProbeRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkTensorProbeWidget::CreateDefaultRepresentation);
}
