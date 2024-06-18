// JavaScript wrapper for vtkPointCloudRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPointCloudRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPointCloudRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkActor.h"
#include "vtkPointSet.h"
#include "vtkPolyDataMapper.h"
#include "vtkPropCollection.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkPointCloudRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkPointCloudRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPointCloudRepresentation>(vtkPointCloudRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointCloudRepresentation_class) {
  using InteractionStateType=vtkPointCloudRepresentation::InteractionStateType;
  using PickingModeType=vtkPointCloudRepresentation::PickingModeType;
  emscripten::class_<vtkPointCloudRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkPointCloudRepresentation")
    .smart_ptr<vtkSmartPointer<vtkPointCloudRepresentation>>("vtkSmartPointer<vtkPointCloudRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPointCloudRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointCloudRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointCloudRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointCloudRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointCloudRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointCloudRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointCloudRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("PlacePointCloud", emscripten::select_overload<void(vtkPointCloudRepresentation&, vtkActor*)>([](vtkPointCloudRepresentation& self, vtkActor* arg_0) -> void { return self.PlacePointCloud( arg_0); }), emscripten::allow_raw_pointers())
    .function("PlacePointCloud", emscripten::select_overload<void(vtkPointCloudRepresentation&, vtkPointSet*)>([](vtkPointCloudRepresentation& self, vtkPointSet* arg_0) -> void { return self.PlacePointCloud( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetPointCloudActor", &vtkPointCloudRepresentation::GetPointCloudActor, emscripten::allow_raw_pointers())
    .function("GetPointCloudMapper", &vtkPointCloudRepresentation::GetPointCloudMapper, emscripten::allow_raw_pointers())
    .function("GetPointId", &vtkPointCloudRepresentation::GetPointId)
    .function("GetPointCoordinates", emscripten::select_overload<std::uintptr_t(vtkPointCloudRepresentation&)>([](vtkPointCloudRepresentation& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetPointCoordinates()); }))
    .function("SetHighlighting", &vtkPointCloudRepresentation::SetHighlighting)
    .function("GetHighlighting", &vtkPointCloudRepresentation::GetHighlighting)
    .function("HighlightingOn", &vtkPointCloudRepresentation::HighlightingOn)
    .function("HighlightingOff", &vtkPointCloudRepresentation::HighlightingOff)
    .function("SetInteractionState", &vtkPointCloudRepresentation::SetInteractionState)
    .function("GetInteractionStateMinValue", &vtkPointCloudRepresentation::GetInteractionStateMinValue)
    .function("GetInteractionStateMaxValue", &vtkPointCloudRepresentation::GetInteractionStateMaxValue)
    .function("BuildRepresentation", &vtkPointCloudRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkPointCloudRepresentation::ComputeInteractionState)
    .function("GetActors", &vtkPointCloudRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("GetActors2D", &vtkPointCloudRepresentation::GetActors2D, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkPointCloudRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkPointCloudRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkPointCloudRepresentation::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkPointCloudRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkPointCloudRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("SetPickingMode", &vtkPointCloudRepresentation::SetPickingMode)
    .function("GetPickingModeMinValue", &vtkPointCloudRepresentation::GetPickingModeMinValue)
    .function("GetPickingModeMaxValue", &vtkPointCloudRepresentation::GetPickingModeMaxValue)
    .function("GetPickingMode", &vtkPointCloudRepresentation::GetPickingMode)
    .function("SetPickingModeToHardware", &vtkPointCloudRepresentation::SetPickingModeToHardware)
    .function("SetPickingModeToSoftware", &vtkPointCloudRepresentation::SetPickingModeToSoftware)
    .function("SetHardwarePickingTolerance", &vtkPointCloudRepresentation::SetHardwarePickingTolerance)
    .function("GetHardwarePickingTolerance", &vtkPointCloudRepresentation::GetHardwarePickingTolerance)
    .function("SetSoftwarePickingTolerance", &vtkPointCloudRepresentation::SetSoftwarePickingTolerance)
    .function("GetSoftwarePickingToleranceMinValue", &vtkPointCloudRepresentation::GetSoftwarePickingToleranceMinValue)
    .function("GetSoftwarePickingToleranceMaxValue", &vtkPointCloudRepresentation::GetSoftwarePickingToleranceMaxValue)
    .function("GetSoftwarePickingTolerance", &vtkPointCloudRepresentation::GetSoftwarePickingTolerance)
    .function("RegisterPickers", &vtkPointCloudRepresentation::RegisterPickers);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkPointCloudRepresentation_0_2_constants) {
    typedef vtkPointCloudRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkPointCloudRepresentation_InteractionStateType_Outside", vtkPointCloudRepresentation::Outside },
      { "vtkPointCloudRepresentation_InteractionStateType_OverOutline", vtkPointCloudRepresentation::OverOutline },
      { "vtkPointCloudRepresentation_InteractionStateType_Over", vtkPointCloudRepresentation::Over },
      { "vtkPointCloudRepresentation_InteractionStateType_Selecting", vtkPointCloudRepresentation::Selecting },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkPointCloudRepresentation_1_2_constants) {
    typedef vtkPointCloudRepresentation::PickingModeType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkPointCloudRepresentation_PickingModeType_HARDWARE_PICKING", vtkPointCloudRepresentation::HARDWARE_PICKING },
      { "vtkPointCloudRepresentation_PickingModeType_SOFTWARE_PICKING", vtkPointCloudRepresentation::SOFTWARE_PICKING },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
