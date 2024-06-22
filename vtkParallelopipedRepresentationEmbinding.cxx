// JavaScript wrapper for vtkParallelopipedRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkParallelopipedRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkParallelopipedRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPropCollection.h"
#include "vtkPlaneCollection.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkHandleRepresentation.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkParallelopipedRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkParallelopipedRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkParallelopipedRepresentation>(vtkParallelopipedRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParallelopipedRepresentation_class) {
  using InteractionStateType=vtkParallelopipedRepresentation::InteractionStateType;
  emscripten::class_<vtkParallelopipedRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkParallelopipedRepresentation")
    .smart_ptr<vtkSmartPointer<vtkParallelopipedRepresentation>>("vtkSmartPointer<vtkParallelopipedRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParallelopipedRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelopipedRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParallelopipedRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParallelopipedRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParallelopipedRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelopipedRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParallelopipedRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetActors", &vtkParallelopipedRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("SetInteractionState", &vtkParallelopipedRepresentation::SetInteractionState)
    .function("GetBoundingPlanes", &vtkParallelopipedRepresentation::GetBoundingPlanes, emscripten::allow_raw_pointers())
    .function("GetPolyData", &vtkParallelopipedRepresentation::GetPolyData, emscripten::allow_raw_pointers())
    .function("SetHandleProperty", &vtkParallelopipedRepresentation::SetHandleProperty, emscripten::allow_raw_pointers())
    .function("SetHoveredHandleProperty", &vtkParallelopipedRepresentation::SetHoveredHandleProperty, emscripten::allow_raw_pointers())
    .function("SetSelectedHandleProperty", &vtkParallelopipedRepresentation::SetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("GetHandleProperty", &vtkParallelopipedRepresentation::GetHandleProperty, emscripten::allow_raw_pointers())
    .function("GetHoveredHandleProperty", &vtkParallelopipedRepresentation::GetHoveredHandleProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedHandleProperty", &vtkParallelopipedRepresentation::GetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("SetHandleRepresentation", &vtkParallelopipedRepresentation::SetHandleRepresentation, emscripten::allow_raw_pointers())
    .function("GetHandleRepresentation", &vtkParallelopipedRepresentation::GetHandleRepresentation, emscripten::allow_raw_pointers())
    .function("HandlesOn", &vtkParallelopipedRepresentation::HandlesOn)
    .function("HandlesOff", &vtkParallelopipedRepresentation::HandlesOff)
    .function("GetFaceProperty", &vtkParallelopipedRepresentation::GetFaceProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedFaceProperty", &vtkParallelopipedRepresentation::GetSelectedFaceProperty, emscripten::allow_raw_pointers())
    .function("GetOutlineProperty", &vtkParallelopipedRepresentation::GetOutlineProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedOutlineProperty", &vtkParallelopipedRepresentation::GetSelectedOutlineProperty, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkParallelopipedRepresentation::BuildRepresentation)
    .function("ReleaseGraphicsResources", &vtkParallelopipedRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkParallelopipedRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkParallelopipedRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("ComputeInteractionState", &vtkParallelopipedRepresentation::ComputeInteractionState)
    .function("Translate", emscripten::select_overload<void(vtkParallelopipedRepresentation&, int, int)>([](vtkParallelopipedRepresentation& self, int arg_0, int arg_1) -> void { return self.Translate( arg_0, arg_1); }))
    .function("Scale", &vtkParallelopipedRepresentation::Scale)
    .function("PositionHandles", &vtkParallelopipedRepresentation::PositionHandles)
    .function("SetMinimumThickness", &vtkParallelopipedRepresentation::SetMinimumThickness)
    .function("GetMinimumThickness", &vtkParallelopipedRepresentation::GetMinimumThickness);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkParallelopipedRepresentation_0_2_constants) {
    typedef vtkParallelopipedRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[14] = {
      { "vtkParallelopipedRepresentation_InteractionStateType_Outside", vtkParallelopipedRepresentation::Outside },
      { "vtkParallelopipedRepresentation_InteractionStateType_Inside", vtkParallelopipedRepresentation::Inside },
      { "vtkParallelopipedRepresentation_InteractionStateType_RequestResizeParallelopiped", vtkParallelopipedRepresentation::RequestResizeParallelopiped },
      { "vtkParallelopipedRepresentation_InteractionStateType_RequestResizeParallelopipedAlongAnAxis", vtkParallelopipedRepresentation::RequestResizeParallelopipedAlongAnAxis },
      { "vtkParallelopipedRepresentation_InteractionStateType_RequestChairMode", vtkParallelopipedRepresentation::RequestChairMode },
      { "vtkParallelopipedRepresentation_InteractionStateType_RequestTranslateParallelopiped", vtkParallelopipedRepresentation::RequestTranslateParallelopiped },
      { "vtkParallelopipedRepresentation_InteractionStateType_RequestScaleParallelopiped", vtkParallelopipedRepresentation::RequestScaleParallelopiped },
      { "vtkParallelopipedRepresentation_InteractionStateType_RequestRotateParallelopiped", vtkParallelopipedRepresentation::RequestRotateParallelopiped },
      { "vtkParallelopipedRepresentation_InteractionStateType_ResizingParallelopiped", vtkParallelopipedRepresentation::ResizingParallelopiped },
      { "vtkParallelopipedRepresentation_InteractionStateType_ResizingParallelopipedAlongAnAxis", vtkParallelopipedRepresentation::ResizingParallelopipedAlongAnAxis },
      { "vtkParallelopipedRepresentation_InteractionStateType_ChairMode", vtkParallelopipedRepresentation::ChairMode },
      { "vtkParallelopipedRepresentation_InteractionStateType_TranslatingParallelopiped", vtkParallelopipedRepresentation::TranslatingParallelopiped },
      { "vtkParallelopipedRepresentation_InteractionStateType_ScalingParallelopiped", vtkParallelopipedRepresentation::ScalingParallelopiped },
      { "vtkParallelopipedRepresentation_InteractionStateType_RotatingParallelopiped", vtkParallelopipedRepresentation::RotatingParallelopiped },
  };
  for (int c = 0; c < 14; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
