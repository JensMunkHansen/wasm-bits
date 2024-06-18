// JavaScript wrapper for vtkBiDimensionalRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkBiDimensionalRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkBiDimensionalRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHandleRepresentation.h"
#include "vtkBiDimensionalRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkBiDimensionalRepresentation>(vtkBiDimensionalRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBiDimensionalRepresentation_class) {
  emscripten::class_<vtkBiDimensionalRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkBiDimensionalRepresentation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiDimensionalRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBiDimensionalRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBiDimensionalRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBiDimensionalRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiDimensionalRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBiDimensionalRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPoint1Representation", &vtkBiDimensionalRepresentation::GetPoint1Representation, emscripten::allow_raw_pointers())
    .function("GetPoint2Representation", &vtkBiDimensionalRepresentation::GetPoint2Representation, emscripten::allow_raw_pointers())
    .function("GetPoint3Representation", &vtkBiDimensionalRepresentation::GetPoint3Representation, emscripten::allow_raw_pointers())
    .function("GetPoint4Representation", &vtkBiDimensionalRepresentation::GetPoint4Representation, emscripten::allow_raw_pointers())
    .function("SetLine1Visibility", &vtkBiDimensionalRepresentation::SetLine1Visibility)
    .function("GetLine1Visibility", &vtkBiDimensionalRepresentation::GetLine1Visibility)
    .function("Line1VisibilityOn", &vtkBiDimensionalRepresentation::Line1VisibilityOn)
    .function("Line1VisibilityOff", &vtkBiDimensionalRepresentation::Line1VisibilityOff)
    .function("SetLine2Visibility", &vtkBiDimensionalRepresentation::SetLine2Visibility)
    .function("GetLine2Visibility", &vtkBiDimensionalRepresentation::GetLine2Visibility)
    .function("Line2VisibilityOn", &vtkBiDimensionalRepresentation::Line2VisibilityOn)
    .function("Line2VisibilityOff", &vtkBiDimensionalRepresentation::Line2VisibilityOff)
    .function("SetHandleRepresentation", &vtkBiDimensionalRepresentation::SetHandleRepresentation, emscripten::allow_raw_pointers())
    .function("InstantiateHandleRepresentation", &vtkBiDimensionalRepresentation::InstantiateHandleRepresentation)
    .function("SetTolerance", &vtkBiDimensionalRepresentation::SetTolerance)
    .function("GetToleranceMinValue", &vtkBiDimensionalRepresentation::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkBiDimensionalRepresentation::GetToleranceMaxValue)
    .function("GetTolerance", &vtkBiDimensionalRepresentation::GetTolerance)
    .function("GetLength1", &vtkBiDimensionalRepresentation::GetLength1)
    .function("GetLength2", &vtkBiDimensionalRepresentation::GetLength2)
    .function("SetLabelFormat", emscripten::optional_override([](vtkBiDimensionalRepresentation& self, const std::string & arg_0) -> void {  return self.SetLabelFormat( arg_0.c_str());}))
    .function("GetLabelFormat", emscripten::optional_override([](vtkBiDimensionalRepresentation& self) -> std::string {  return self.GetLabelFormat();}))
    .function("SetShowLabelAboveWidget", &vtkBiDimensionalRepresentation::SetShowLabelAboveWidget)
    .function("GetShowLabelAboveWidget", &vtkBiDimensionalRepresentation::GetShowLabelAboveWidget)
    .function("ShowLabelAboveWidgetOn", &vtkBiDimensionalRepresentation::ShowLabelAboveWidgetOn)
    .function("ShowLabelAboveWidgetOff", &vtkBiDimensionalRepresentation::ShowLabelAboveWidgetOff)
    .function("SetID", &vtkBiDimensionalRepresentation::SetID)
    .function("GetID", &vtkBiDimensionalRepresentation::GetID);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBiDimensionalRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[10] = {
      { "vtkBiDimensionalRepresentation_Outside", vtkBiDimensionalRepresentation::Outside },
      { "vtkBiDimensionalRepresentation_NearP1", vtkBiDimensionalRepresentation::NearP1 },
      { "vtkBiDimensionalRepresentation_NearP2", vtkBiDimensionalRepresentation::NearP2 },
      { "vtkBiDimensionalRepresentation_NearP3", vtkBiDimensionalRepresentation::NearP3 },
      { "vtkBiDimensionalRepresentation_NearP4", vtkBiDimensionalRepresentation::NearP4 },
      { "vtkBiDimensionalRepresentation_OnL1Inner", vtkBiDimensionalRepresentation::OnL1Inner },
      { "vtkBiDimensionalRepresentation_OnL1Outer", vtkBiDimensionalRepresentation::OnL1Outer },
      { "vtkBiDimensionalRepresentation_OnL2Inner", vtkBiDimensionalRepresentation::OnL2Inner },
      { "vtkBiDimensionalRepresentation_OnL2Outer", vtkBiDimensionalRepresentation::OnL2Outer },
      { "vtkBiDimensionalRepresentation_OnCenter", vtkBiDimensionalRepresentation::OnCenter },
  };
  for (int c = 0; c < 10; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
