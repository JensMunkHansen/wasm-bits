// JavaScript wrapper for vtkTensorWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkTensorWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkTensorWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTensorRepresentation.h"
#include "vtkTensorWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkTensorWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkTensorWidget>(vtkTensorWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTensorWidget_class) {
  emscripten::class_<vtkTensorWidget, emscripten::base<vtkAbstractWidget>>("vtkTensorWidget")
    .smart_ptr<vtkSmartPointer<vtkTensorWidget>>("vtkSmartPointer<vtkTensorWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTensorWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTensorWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTensorWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTensorWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTensorWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTensorWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTensorWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkTensorWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("SetTranslationEnabled", &vtkTensorWidget::SetTranslationEnabled)
    .function("GetTranslationEnabled", &vtkTensorWidget::GetTranslationEnabled)
    .function("TranslationEnabledOn", &vtkTensorWidget::TranslationEnabledOn)
    .function("TranslationEnabledOff", &vtkTensorWidget::TranslationEnabledOff)
    .function("SetScalingEnabled", &vtkTensorWidget::SetScalingEnabled)
    .function("GetScalingEnabled", &vtkTensorWidget::GetScalingEnabled)
    .function("ScalingEnabledOn", &vtkTensorWidget::ScalingEnabledOn)
    .function("ScalingEnabledOff", &vtkTensorWidget::ScalingEnabledOff)
    .function("SetRotationEnabled", &vtkTensorWidget::SetRotationEnabled)
    .function("GetRotationEnabled", &vtkTensorWidget::GetRotationEnabled)
    .function("RotationEnabledOn", &vtkTensorWidget::RotationEnabledOn)
    .function("RotationEnabledOff", &vtkTensorWidget::RotationEnabledOff)
    .function("SetMoveFacesEnabled", &vtkTensorWidget::SetMoveFacesEnabled)
    .function("GetMoveFacesEnabled", &vtkTensorWidget::GetMoveFacesEnabled)
    .function("MoveFacesEnabledOn", &vtkTensorWidget::MoveFacesEnabledOn)
    .function("MoveFacesEnabledOff", &vtkTensorWidget::MoveFacesEnabledOff)
    .function("CreateDefaultRepresentation", &vtkTensorWidget::CreateDefaultRepresentation)
    .function("SetEnabled", &vtkTensorWidget::SetEnabled);
}
