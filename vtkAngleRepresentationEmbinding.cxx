// JavaScript wrapper for vtkAngleRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkAngleRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkAngleRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHandleRepresentation.h"
#include "vtkRenderer.h"
#include "vtkAngleRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkAngleRepresentation>(vtkAngleRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAngleRepresentation_class) {
  emscripten::class_<vtkAngleRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkAngleRepresentation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAngleRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAngleRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAngleRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAngleRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAngleRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAngleRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetHandleRepresentation", &vtkAngleRepresentation::SetHandleRepresentation, emscripten::allow_raw_pointers())
    .function("InstantiateHandleRepresentation", &vtkAngleRepresentation::InstantiateHandleRepresentation)
    .function("GetPoint1Representation", &vtkAngleRepresentation::GetPoint1Representation, emscripten::allow_raw_pointers())
    .function("GetCenterRepresentation", &vtkAngleRepresentation::GetCenterRepresentation, emscripten::allow_raw_pointers())
    .function("GetPoint2Representation", &vtkAngleRepresentation::GetPoint2Representation, emscripten::allow_raw_pointers())
    .function("SetTolerance", &vtkAngleRepresentation::SetTolerance)
    .function("GetToleranceMinValue", &vtkAngleRepresentation::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkAngleRepresentation::GetToleranceMaxValue)
    .function("GetTolerance", &vtkAngleRepresentation::GetTolerance)
    .function("SetLabelFormat", emscripten::optional_override([](vtkAngleRepresentation& self, const std::string & arg_0) -> void {  return self.SetLabelFormat( arg_0.c_str());}))
    .function("GetLabelFormat", emscripten::optional_override([](vtkAngleRepresentation& self) -> std::string {  return self.GetLabelFormat();}))
    .function("SetScale", &vtkAngleRepresentation::SetScale)
    .function("GetScale", &vtkAngleRepresentation::GetScale)
    .function("SetRay1Visibility", &vtkAngleRepresentation::SetRay1Visibility)
    .function("GetRay1Visibility", &vtkAngleRepresentation::GetRay1Visibility)
    .function("Ray1VisibilityOn", &vtkAngleRepresentation::Ray1VisibilityOn)
    .function("Ray1VisibilityOff", &vtkAngleRepresentation::Ray1VisibilityOff)
    .function("SetRay2Visibility", &vtkAngleRepresentation::SetRay2Visibility)
    .function("GetRay2Visibility", &vtkAngleRepresentation::GetRay2Visibility)
    .function("Ray2VisibilityOn", &vtkAngleRepresentation::Ray2VisibilityOn)
    .function("Ray2VisibilityOff", &vtkAngleRepresentation::Ray2VisibilityOff)
    .function("SetArcVisibility", &vtkAngleRepresentation::SetArcVisibility)
    .function("GetArcVisibility", &vtkAngleRepresentation::GetArcVisibility)
    .function("ArcVisibilityOn", &vtkAngleRepresentation::ArcVisibilityOn)
    .function("ArcVisibilityOff", &vtkAngleRepresentation::ArcVisibilityOff)
    .function("BuildRepresentation", &vtkAngleRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkAngleRepresentation::ComputeInteractionState)
    .function("SetRenderer", &vtkAngleRepresentation::SetRenderer, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkAngleRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkAngleRepresentation_Outside", vtkAngleRepresentation::Outside },
      { "vtkAngleRepresentation_NearP1", vtkAngleRepresentation::NearP1 },
      { "vtkAngleRepresentation_NearCenter", vtkAngleRepresentation::NearCenter },
      { "vtkAngleRepresentation_NearP2", vtkAngleRepresentation::NearP2 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
