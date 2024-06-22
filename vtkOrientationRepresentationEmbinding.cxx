// JavaScript wrapper for vtkOrientationRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkOrientationRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkOrientationRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTransform.h"
#include "vtkProperty.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkPropCollection.h"
#include "vtkOrientationRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkOrientationRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkOrientationRepresentation>(vtkOrientationRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOrientationRepresentation_class) {
  using Axis=vtkOrientationRepresentation::Axis;
  emscripten::class_<vtkOrientationRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkOrientationRepresentation")
    .smart_ptr<vtkSmartPointer<vtkOrientationRepresentation>>("vtkSmartPointer<vtkOrientationRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOrientationRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrientationRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOrientationRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOrientationRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOrientationRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrientationRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOrientationRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetTransform", &vtkOrientationRepresentation::GetTransform, emscripten::allow_raw_pointers())
    .function("SetOrientationX", &vtkOrientationRepresentation::SetOrientationX)
    .function("SetOrientationY", &vtkOrientationRepresentation::SetOrientationY)
    .function("SetOrientationZ", &vtkOrientationRepresentation::SetOrientationZ)
    .function("GetOrientation", emscripten::optional_override([](vtkOrientationRepresentation& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetOrientation()) / sizeof(double);}))
    .function("GetOrientationX", &vtkOrientationRepresentation::GetOrientationX)
    .function("GetOrientationY", &vtkOrientationRepresentation::GetOrientationY)
    .function("GetOrientationZ", &vtkOrientationRepresentation::GetOrientationZ)
    .function("SetProperty", &vtkOrientationRepresentation::SetProperty, emscripten::allow_raw_pointers())
    .function("SetPropertyX", &vtkOrientationRepresentation::SetPropertyX, emscripten::allow_raw_pointers())
    .function("SetPropertyY", &vtkOrientationRepresentation::SetPropertyY, emscripten::allow_raw_pointers())
    .function("SetPropertyZ", &vtkOrientationRepresentation::SetPropertyZ, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkOrientationRepresentation::GetProperty, emscripten::allow_raw_pointers())
    .function("GetPropertyX", &vtkOrientationRepresentation::GetPropertyX, emscripten::allow_raw_pointers())
    .function("GetPropertyY", &vtkOrientationRepresentation::GetPropertyY, emscripten::allow_raw_pointers())
    .function("GetPropertyZ", &vtkOrientationRepresentation::GetPropertyZ, emscripten::allow_raw_pointers())
    .function("SetTorusLength", &vtkOrientationRepresentation::SetTorusLength)
    .function("GetTorusLengthMinValue", &vtkOrientationRepresentation::GetTorusLengthMinValue)
    .function("GetTorusLengthMaxValue", &vtkOrientationRepresentation::GetTorusLengthMaxValue)
    .function("GetTorusLength", &vtkOrientationRepresentation::GetTorusLength)
    .function("SetTorusThickness", &vtkOrientationRepresentation::SetTorusThickness)
    .function("GetTorusThicknessMinValue", &vtkOrientationRepresentation::GetTorusThicknessMinValue)
    .function("GetTorusThicknessMaxValue", &vtkOrientationRepresentation::GetTorusThicknessMaxValue)
    .function("GetTorusThickness", &vtkOrientationRepresentation::GetTorusThickness)
    .function("SetShowArrows", &vtkOrientationRepresentation::SetShowArrows)
    .function("GetShowArrows", &vtkOrientationRepresentation::GetShowArrows)
    .function("ShowArrowsOn", &vtkOrientationRepresentation::ShowArrowsOn)
    .function("ShowArrowsOff", &vtkOrientationRepresentation::ShowArrowsOff)
    .function("SetArrowDistance", &vtkOrientationRepresentation::SetArrowDistance)
    .function("GetArrowDistanceMinValue", &vtkOrientationRepresentation::GetArrowDistanceMinValue)
    .function("GetArrowDistanceMaxValue", &vtkOrientationRepresentation::GetArrowDistanceMaxValue)
    .function("GetArrowDistance", &vtkOrientationRepresentation::GetArrowDistance)
    .function("SetArrowLength", &vtkOrientationRepresentation::SetArrowLength)
    .function("GetArrowLengthMinValue", &vtkOrientationRepresentation::GetArrowLengthMinValue)
    .function("GetArrowLengthMaxValue", &vtkOrientationRepresentation::GetArrowLengthMaxValue)
    .function("GetArrowLength", &vtkOrientationRepresentation::GetArrowLength)
    .function("SetArrowTipLength", &vtkOrientationRepresentation::SetArrowTipLength)
    .function("GetArrowTipLength", &vtkOrientationRepresentation::GetArrowTipLength)
    .function("SetArrowTipRadius", &vtkOrientationRepresentation::SetArrowTipRadius)
    .function("GetArrowTipRadiusMinValue", &vtkOrientationRepresentation::GetArrowTipRadiusMinValue)
    .function("GetArrowTipRadiusMaxValue", &vtkOrientationRepresentation::GetArrowTipRadiusMaxValue)
    .function("GetArrowTipRadius", &vtkOrientationRepresentation::GetArrowTipRadius)
    .function("SetArrowShaftRadius", &vtkOrientationRepresentation::SetArrowShaftRadius)
    .function("GetArrowShaftRadiusMinValue", &vtkOrientationRepresentation::GetArrowShaftRadiusMinValue)
    .function("GetArrowShaftRadiusMaxValue", &vtkOrientationRepresentation::GetArrowShaftRadiusMaxValue)
    .function("GetArrowShaftRadius", &vtkOrientationRepresentation::GetArrowShaftRadius)
    .function("BuildRepresentation", &vtkOrientationRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkOrientationRepresentation::ComputeInteractionState)
    .function("ReleaseGraphicsResources", &vtkOrientationRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkOrientationRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkOrientationRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkOrientationRepresentation::HasTranslucentPolygonalGeometry)
    .function("SetInteractionState", &vtkOrientationRepresentation::SetInteractionState)
    .function("RegisterPickers", &vtkOrientationRepresentation::RegisterPickers)
    .function("GetActors", &vtkOrientationRepresentation::GetActors, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkOrientationRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkOrientationRepresentation_Outside", vtkOrientationRepresentation::Outside },
      { "vtkOrientationRepresentation_RotatingX", vtkOrientationRepresentation::RotatingX },
      { "vtkOrientationRepresentation_RotatingY", vtkOrientationRepresentation::RotatingY },
      { "vtkOrientationRepresentation_RotatingZ", vtkOrientationRepresentation::RotatingZ },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkOrientationRepresentation_1_2_constants) {
    typedef vtkOrientationRepresentation::Axis cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkOrientationRepresentation_Axis_X_AXIS", vtkOrientationRepresentation::X_AXIS },
      { "vtkOrientationRepresentation_Axis_Y_AXIS", vtkOrientationRepresentation::Y_AXIS },
      { "vtkOrientationRepresentation_Axis_Z_AXIS", vtkOrientationRepresentation::Z_AXIS },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
