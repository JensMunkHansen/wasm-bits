// JavaScript wrapper for vtkButtonRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkButtonRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkButtonRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp.h"
#include "vtkButtonRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkButtonRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkButtonRepresentation>(vtkButtonRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkButtonRepresentation_class) {
  using InteractionStateType=vtkButtonRepresentation::InteractionStateType;
  using HighlightStateType=vtkButtonRepresentation::HighlightStateType;
  emscripten::class_<vtkButtonRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkButtonRepresentation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkButtonRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkButtonRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkButtonRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkButtonRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkButtonRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkButtonRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfStates", &vtkButtonRepresentation::SetNumberOfStates)
    .function("GetNumberOfStatesMinValue", &vtkButtonRepresentation::GetNumberOfStatesMinValue)
    .function("GetNumberOfStatesMaxValue", &vtkButtonRepresentation::GetNumberOfStatesMaxValue)
    .function("GetState", &vtkButtonRepresentation::GetState)
    .function("SetState", &vtkButtonRepresentation::SetState)
    .function("NextState", &vtkButtonRepresentation::NextState)
    .function("PreviousState", &vtkButtonRepresentation::PreviousState)
    .function("Highlight", &vtkButtonRepresentation::Highlight)
    .function("GetHighlightState", &vtkButtonRepresentation::GetHighlightState)
    .function("ShallowCopy", &vtkButtonRepresentation::ShallowCopy, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkButtonRepresentation_0_2_constants) {
    typedef vtkButtonRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkButtonRepresentation_InteractionStateType_Outside", vtkButtonRepresentation::Outside },
      { "vtkButtonRepresentation_InteractionStateType_Inside", vtkButtonRepresentation::Inside },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkButtonRepresentation_1_2_constants) {
    typedef vtkButtonRepresentation::HighlightStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkButtonRepresentation_HighlightStateType_HighlightNormal", vtkButtonRepresentation::HighlightNormal },
      { "vtkButtonRepresentation_HighlightStateType_HighlightHovering", vtkButtonRepresentation::HighlightHovering },
      { "vtkButtonRepresentation_HighlightStateType_HighlightSelecting", vtkButtonRepresentation::HighlightSelecting },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
