// JavaScript wrapper for vtkCompassRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCompassRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCompassRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCoordinate.h"
#include "vtkProperty2D.h"
#include "vtkTextProperty.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkRenderer.h"
#include "vtkCompassRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCompassRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCompassRepresentation>(vtkCompassRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompassRepresentation_class) {
  using InteractionStateType=vtkCompassRepresentation::InteractionStateType;
  emscripten::class_<vtkCompassRepresentation, emscripten::base<vtkContinuousValueWidgetRepresentation>>("vtkCompassRepresentation")
    .smart_ptr<vtkSmartPointer<vtkCompassRepresentation>>("vtkSmartPointer<vtkCompassRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCompassRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompassRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompassRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompassRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompassRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompassRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompassRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPoint1Coordinate", &vtkCompassRepresentation::GetPoint1Coordinate, emscripten::allow_raw_pointers())
    .function("GetPoint2Coordinate", &vtkCompassRepresentation::GetPoint2Coordinate, emscripten::allow_raw_pointers())
    .function("GetRingProperty", &vtkCompassRepresentation::GetRingProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedProperty", &vtkCompassRepresentation::GetSelectedProperty, emscripten::allow_raw_pointers())
    .function("GetLabelProperty", &vtkCompassRepresentation::GetLabelProperty, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkCompassRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkCompassRepresentation::ComputeInteractionState)
    .function("Highlight", &vtkCompassRepresentation::Highlight)
    .function("GetActors", &vtkCompassRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkCompassRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkCompassRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkCompassRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("SetHeading", &vtkCompassRepresentation::SetHeading)
    .function("GetHeading", &vtkCompassRepresentation::GetHeading)
    .function("SetTilt", &vtkCompassRepresentation::SetTilt)
    .function("GetTilt", &vtkCompassRepresentation::GetTilt)
    .function("SetMaximumTiltAngle", &vtkCompassRepresentation::SetMaximumTiltAngle)
    .function("GetMaximumTiltAngle", &vtkCompassRepresentation::GetMaximumTiltAngle)
    .function("SetMinimumTiltAngle", &vtkCompassRepresentation::SetMinimumTiltAngle)
    .function("GetMinimumTiltAngle", &vtkCompassRepresentation::GetMinimumTiltAngle)
    .function("UpdateTilt", &vtkCompassRepresentation::UpdateTilt)
    .function("EndTilt", &vtkCompassRepresentation::EndTilt)
    .function("SetDistance", &vtkCompassRepresentation::SetDistance)
    .function("GetDistance", &vtkCompassRepresentation::GetDistance)
    .function("SetMaximumDistance", &vtkCompassRepresentation::SetMaximumDistance)
    .function("GetMaximumDistance", &vtkCompassRepresentation::GetMaximumDistance)
    .function("SetMinimumDistance", &vtkCompassRepresentation::SetMinimumDistance)
    .function("GetMinimumDistance", &vtkCompassRepresentation::GetMinimumDistance)
    .function("UpdateDistance", &vtkCompassRepresentation::UpdateDistance)
    .function("EndDistance", &vtkCompassRepresentation::EndDistance)
    .function("SetRenderer", &vtkCompassRepresentation::SetRenderer, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCompassRepresentation_0_2_constants) {
    typedef vtkCompassRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[9] = {
      { "vtkCompassRepresentation_InteractionStateType_Outside", vtkCompassRepresentation::Outside },
      { "vtkCompassRepresentation_InteractionStateType_Inside", vtkCompassRepresentation::Inside },
      { "vtkCompassRepresentation_InteractionStateType_Adjusting", vtkCompassRepresentation::Adjusting },
      { "vtkCompassRepresentation_InteractionStateType_TiltDown", vtkCompassRepresentation::TiltDown },
      { "vtkCompassRepresentation_InteractionStateType_TiltUp", vtkCompassRepresentation::TiltUp },
      { "vtkCompassRepresentation_InteractionStateType_TiltAdjusting", vtkCompassRepresentation::TiltAdjusting },
      { "vtkCompassRepresentation_InteractionStateType_DistanceOut", vtkCompassRepresentation::DistanceOut },
      { "vtkCompassRepresentation_InteractionStateType_DistanceIn", vtkCompassRepresentation::DistanceIn },
      { "vtkCompassRepresentation_InteractionStateType_DistanceAdjusting", vtkCompassRepresentation::DistanceAdjusting },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
