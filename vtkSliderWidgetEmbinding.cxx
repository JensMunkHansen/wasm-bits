// JavaScript wrapper for vtkSliderWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkSliderWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkSliderWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSliderRepresentation.h"
#include "vtkSliderWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkSliderWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSliderWidget>(vtkSliderWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSliderWidget_class) {
  emscripten::class_<vtkSliderWidget, emscripten::base<vtkAbstractWidget>>("vtkSliderWidget")
    .smart_ptr<vtkSmartPointer<vtkSliderWidget>>("vtkSmartPointer<vtkSliderWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSliderWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSliderWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSliderWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSliderWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSliderWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSliderWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSliderWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkSliderWidget::SetRepresentation, emscripten::allow_raw_pointers())
    .function("GetSliderRepresentation", &vtkSliderWidget::GetSliderRepresentation, emscripten::allow_raw_pointers())
    .function("SetAnimationMode", &vtkSliderWidget::SetAnimationMode)
    .function("GetAnimationModeMinValue", &vtkSliderWidget::GetAnimationModeMinValue)
    .function("GetAnimationModeMaxValue", &vtkSliderWidget::GetAnimationModeMaxValue)
    .function("GetAnimationMode", &vtkSliderWidget::GetAnimationMode)
    .function("SetAnimationModeToOff", &vtkSliderWidget::SetAnimationModeToOff)
    .function("SetAnimationModeToJump", &vtkSliderWidget::SetAnimationModeToJump)
    .function("SetAnimationModeToAnimate", &vtkSliderWidget::SetAnimationModeToAnimate)
    .function("SetNumberOfAnimationSteps", &vtkSliderWidget::SetNumberOfAnimationSteps)
    .function("GetNumberOfAnimationStepsMinValue", &vtkSliderWidget::GetNumberOfAnimationStepsMinValue)
    .function("GetNumberOfAnimationStepsMaxValue", &vtkSliderWidget::GetNumberOfAnimationStepsMaxValue)
    .function("GetNumberOfAnimationSteps", &vtkSliderWidget::GetNumberOfAnimationSteps)
    .function("CreateDefaultRepresentation", &vtkSliderWidget::CreateDefaultRepresentation);
}
