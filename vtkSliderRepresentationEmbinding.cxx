// JavaScript wrapper for vtkSliderRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkSliderRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkSliderRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSliderRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkSliderRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSliderRepresentation>(vtkSliderRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSliderRepresentation_class) {
  using InteractionStateType=vtkSliderRepresentation::InteractionStateType;
  emscripten::class_<vtkSliderRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkSliderRepresentation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSliderRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSliderRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSliderRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSliderRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSliderRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSliderRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkSliderRepresentation::SetValue)
    .function("GetValue", &vtkSliderRepresentation::GetValue)
    .function("SetMinimumValue", &vtkSliderRepresentation::SetMinimumValue)
    .function("GetMinimumValue", &vtkSliderRepresentation::GetMinimumValue)
    .function("SetMaximumValue", &vtkSliderRepresentation::SetMaximumValue)
    .function("GetMaximumValue", &vtkSliderRepresentation::GetMaximumValue)
    .function("SetSliderLength", &vtkSliderRepresentation::SetSliderLength)
    .function("GetSliderLengthMinValue", &vtkSliderRepresentation::GetSliderLengthMinValue)
    .function("GetSliderLengthMaxValue", &vtkSliderRepresentation::GetSliderLengthMaxValue)
    .function("GetSliderLength", &vtkSliderRepresentation::GetSliderLength)
    .function("SetSliderWidth", &vtkSliderRepresentation::SetSliderWidth)
    .function("GetSliderWidthMinValue", &vtkSliderRepresentation::GetSliderWidthMinValue)
    .function("GetSliderWidthMaxValue", &vtkSliderRepresentation::GetSliderWidthMaxValue)
    .function("GetSliderWidth", &vtkSliderRepresentation::GetSliderWidth)
    .function("SetTubeWidth", &vtkSliderRepresentation::SetTubeWidth)
    .function("GetTubeWidthMinValue", &vtkSliderRepresentation::GetTubeWidthMinValue)
    .function("GetTubeWidthMaxValue", &vtkSliderRepresentation::GetTubeWidthMaxValue)
    .function("GetTubeWidth", &vtkSliderRepresentation::GetTubeWidth)
    .function("SetEndCapLength", &vtkSliderRepresentation::SetEndCapLength)
    .function("GetEndCapLengthMinValue", &vtkSliderRepresentation::GetEndCapLengthMinValue)
    .function("GetEndCapLengthMaxValue", &vtkSliderRepresentation::GetEndCapLengthMaxValue)
    .function("GetEndCapLength", &vtkSliderRepresentation::GetEndCapLength)
    .function("SetEndCapWidth", &vtkSliderRepresentation::SetEndCapWidth)
    .function("GetEndCapWidthMinValue", &vtkSliderRepresentation::GetEndCapWidthMinValue)
    .function("GetEndCapWidthMaxValue", &vtkSliderRepresentation::GetEndCapWidthMaxValue)
    .function("GetEndCapWidth", &vtkSliderRepresentation::GetEndCapWidth)
    .function("SetTitleText", emscripten::optional_override([](vtkSliderRepresentation& self, const std::string & arg_0) -> void {  return self.SetTitleText( arg_0.c_str());}))
    .function("GetTitleText", emscripten::optional_override([](vtkSliderRepresentation& self) -> std::string {  return self.GetTitleText();}))
    .function("SetLabelFormat", emscripten::optional_override([](vtkSliderRepresentation& self, const std::string & arg_0) -> void {  return self.SetLabelFormat( arg_0.c_str());}))
    .function("GetLabelFormat", emscripten::optional_override([](vtkSliderRepresentation& self) -> std::string {  return self.GetLabelFormat();}))
    .function("SetLabelHeight", &vtkSliderRepresentation::SetLabelHeight)
    .function("GetLabelHeightMinValue", &vtkSliderRepresentation::GetLabelHeightMinValue)
    .function("GetLabelHeightMaxValue", &vtkSliderRepresentation::GetLabelHeightMaxValue)
    .function("GetLabelHeight", &vtkSliderRepresentation::GetLabelHeight)
    .function("SetTitleHeight", &vtkSliderRepresentation::SetTitleHeight)
    .function("GetTitleHeightMinValue", &vtkSliderRepresentation::GetTitleHeightMinValue)
    .function("GetTitleHeightMaxValue", &vtkSliderRepresentation::GetTitleHeightMaxValue)
    .function("GetTitleHeight", &vtkSliderRepresentation::GetTitleHeight)
    .function("SetShowSliderLabel", &vtkSliderRepresentation::SetShowSliderLabel)
    .function("GetShowSliderLabel", &vtkSliderRepresentation::GetShowSliderLabel)
    .function("ShowSliderLabelOn", &vtkSliderRepresentation::ShowSliderLabelOn)
    .function("ShowSliderLabelOff", &vtkSliderRepresentation::ShowSliderLabelOff)
    .function("GetCurrentT", &vtkSliderRepresentation::GetCurrentT)
    .function("GetPickedT", &vtkSliderRepresentation::GetPickedT);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkSliderRepresentation_0_2_constants) {
    typedef vtkSliderRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkSliderRepresentation_InteractionStateType_Outside", vtkSliderRepresentation::Outside },
      { "vtkSliderRepresentation_InteractionStateType_Tube", vtkSliderRepresentation::Tube },
      { "vtkSliderRepresentation_InteractionStateType_LeftCap", vtkSliderRepresentation::LeftCap },
      { "vtkSliderRepresentation_InteractionStateType_RightCap", vtkSliderRepresentation::RightCap },
      { "vtkSliderRepresentation_InteractionStateType_Slider", vtkSliderRepresentation::Slider },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
