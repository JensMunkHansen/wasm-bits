// JavaScript wrapper for vtkContinuousValueWidgetRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkContinuousValueWidgetRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkContinuousValueWidgetRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContinuousValueWidgetRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkContinuousValueWidgetRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkContinuousValueWidgetRepresentation>(vtkContinuousValueWidgetRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContinuousValueWidgetRepresentation_class) {
  using InteractionStateType=vtkContinuousValueWidgetRepresentation::InteractionStateType;
  emscripten::class_<vtkContinuousValueWidgetRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkContinuousValueWidgetRepresentation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContinuousValueWidgetRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContinuousValueWidgetRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContinuousValueWidgetRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContinuousValueWidgetRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContinuousValueWidgetRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContinuousValueWidgetRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("BuildRepresentation", &vtkContinuousValueWidgetRepresentation::BuildRepresentation)
    .function("SetValue", &vtkContinuousValueWidgetRepresentation::SetValue)
    .function("GetValue", &vtkContinuousValueWidgetRepresentation::GetValue);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkContinuousValueWidgetRepresentation_0_2_constants) {
    typedef vtkContinuousValueWidgetRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkContinuousValueWidgetRepresentation_InteractionStateType_Outside", vtkContinuousValueWidgetRepresentation::Outside },
      { "vtkContinuousValueWidgetRepresentation_InteractionStateType_Inside", vtkContinuousValueWidgetRepresentation::Inside },
      { "vtkContinuousValueWidgetRepresentation_InteractionStateType_Adjusting", vtkContinuousValueWidgetRepresentation::Adjusting },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
