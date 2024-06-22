// JavaScript wrapper for vtkLightRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkLightRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkLightRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProperty.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkLightRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkLightRepresentation>(vtkLightRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLightRepresentation_class) {
  emscripten::class_<vtkLightRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkLightRepresentation")
    .smart_ptr<vtkSmartPointer<vtkLightRepresentation>>("vtkSmartPointer<vtkLightRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLightRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLightRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLightRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLightRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLightRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPositional", &vtkLightRepresentation::SetPositional)
    .function("GetPositional", &vtkLightRepresentation::GetPositional)
    .function("PositionalOn", &vtkLightRepresentation::PositionalOn)
    .function("PositionalOff", &vtkLightRepresentation::PositionalOff)
    .function("SetConeAngle", &vtkLightRepresentation::SetConeAngle)
    .function("GetConeAngle", &vtkLightRepresentation::GetConeAngle)
    .function("SetLightColor", emscripten::optional_override([](vtkLightRepresentation& self, std::uintptr_t arg_0) -> void {  return self.SetLightColor(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetInteractionState", &vtkLightRepresentation::SetInteractionState)
    .function("GetInteractionStateMinValue", &vtkLightRepresentation::GetInteractionStateMinValue)
    .function("GetInteractionStateMaxValue", &vtkLightRepresentation::GetInteractionStateMaxValue)
    .function("GetProperty", &vtkLightRepresentation::GetProperty, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkLightRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkLightRepresentation::ComputeInteractionState)
    .function("ReleaseGraphicsResources", &vtkLightRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkLightRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkLightRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkLightRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "vtkLightRepresentation_Outside", vtkLightRepresentation::Outside },
      { "vtkLightRepresentation_MovingLight", vtkLightRepresentation::MovingLight },
      { "vtkLightRepresentation_MovingFocalPoint", vtkLightRepresentation::MovingFocalPoint },
      { "vtkLightRepresentation_MovingPositionalFocalPoint", vtkLightRepresentation::MovingPositionalFocalPoint },
      { "vtkLightRepresentation_ScalingConeAngle", vtkLightRepresentation::ScalingConeAngle },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
