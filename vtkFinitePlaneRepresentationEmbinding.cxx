// JavaScript wrapper for vtkFinitePlaneRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkFinitePlaneRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkFinitePlaneRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkFinitePlaneRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkFinitePlaneRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkFinitePlaneRepresentation>(vtkFinitePlaneRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFinitePlaneRepresentation_class) {
  using InteractionStateType=vtkFinitePlaneRepresentation::InteractionStateType;
  emscripten::class_<vtkFinitePlaneRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkFinitePlaneRepresentation")
    .smart_ptr<vtkSmartPointer<vtkFinitePlaneRepresentation>>("vtkSmartPointer<vtkFinitePlaneRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFinitePlaneRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFinitePlaneRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFinitePlaneRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFinitePlaneRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFinitePlaneRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFinitePlaneRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFinitePlaneRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPolyData", &vtkFinitePlaneRepresentation::GetPolyData, emscripten::allow_raw_pointers())
    .function("GetV1HandleProperty", &vtkFinitePlaneRepresentation::GetV1HandleProperty, emscripten::allow_raw_pointers())
    .function("GetV2HandleProperty", &vtkFinitePlaneRepresentation::GetV2HandleProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedHandleProperty", &vtkFinitePlaneRepresentation::GetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("GetPlaneProperty", &vtkFinitePlaneRepresentation::GetPlaneProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedPlaneProperty", &vtkFinitePlaneRepresentation::GetSelectedPlaneProperty, emscripten::allow_raw_pointers())
    .function("SetTubing", &vtkFinitePlaneRepresentation::SetTubing)
    .function("GetTubing", &vtkFinitePlaneRepresentation::GetTubing)
    .function("TubingOn", &vtkFinitePlaneRepresentation::TubingOn)
    .function("TubingOff", &vtkFinitePlaneRepresentation::TubingOff)
    .function("SetDrawPlane", &vtkFinitePlaneRepresentation::SetDrawPlane)
    .function("GetDrawPlane", &vtkFinitePlaneRepresentation::GetDrawPlane)
    .function("DrawPlaneOn", &vtkFinitePlaneRepresentation::DrawPlaneOn)
    .function("DrawPlaneOff", &vtkFinitePlaneRepresentation::DrawPlaneOff)
    .function("SetHandles", &vtkFinitePlaneRepresentation::SetHandles)
    .function("HandlesOn", &vtkFinitePlaneRepresentation::HandlesOn)
    .function("HandlesOff", &vtkFinitePlaneRepresentation::HandlesOff)
    .function("BuildRepresentation", &vtkFinitePlaneRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkFinitePlaneRepresentation::ComputeInteractionState)
    .function("ReleaseGraphicsResources", &vtkFinitePlaneRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkFinitePlaneRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkFinitePlaneRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkFinitePlaneRepresentation::HasTranslucentPolygonalGeometry)
    .function("SetInteractionState", &vtkFinitePlaneRepresentation::SetInteractionState)
    .function("GetInteractionStateMinValue", &vtkFinitePlaneRepresentation::GetInteractionStateMinValue)
    .function("GetInteractionStateMaxValue", &vtkFinitePlaneRepresentation::GetInteractionStateMaxValue)
    .function("SetOrigin", emscripten::select_overload<void(vtkFinitePlaneRepresentation&, double, double, double)>([](vtkFinitePlaneRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkFinitePlaneRepresentation&, double, double, double)>([](vtkFinitePlaneRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetV1", emscripten::select_overload<void(vtkFinitePlaneRepresentation&, double, double)>([](vtkFinitePlaneRepresentation& self, double arg_0, double arg_1) -> void { return self.SetV1( arg_0, arg_1); }))
    .function("SetV2", emscripten::select_overload<void(vtkFinitePlaneRepresentation&, double, double)>([](vtkFinitePlaneRepresentation& self, double arg_0, double arg_1) -> void { return self.SetV2( arg_0, arg_1); }))
    .function("SetRepresentationState", &vtkFinitePlaneRepresentation::SetRepresentationState)
    .function("GetRepresentationState", &vtkFinitePlaneRepresentation::GetRepresentationState)
    .function("GetNormalProperty", &vtkFinitePlaneRepresentation::GetNormalProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedNormalProperty", &vtkFinitePlaneRepresentation::GetSelectedNormalProperty, emscripten::allow_raw_pointers())
    .function("TranslateOrigin", emscripten::optional_override([](vtkFinitePlaneRepresentation& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> void {  return self.TranslateOrigin(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("MovePoint1", emscripten::optional_override([](vtkFinitePlaneRepresentation& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> void {  return self.MovePoint1(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("MovePoint2", emscripten::optional_override([](vtkFinitePlaneRepresentation& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> void {  return self.MovePoint2(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("Push", emscripten::optional_override([](vtkFinitePlaneRepresentation& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> void {  return self.Push(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("Rotate", emscripten::optional_override([](vtkFinitePlaneRepresentation& self, int arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4) -> void {  return self.Rotate( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)),reinterpret_cast<double*>(arg_4 * sizeof(double)));}))
    .function("RegisterPickers", &vtkFinitePlaneRepresentation::RegisterPickers);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkFinitePlaneRepresentation_0_2_constants) {
    typedef vtkFinitePlaneRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkFinitePlaneRepresentation_InteractionStateType_Outside", vtkFinitePlaneRepresentation::Outside },
      { "vtkFinitePlaneRepresentation_InteractionStateType_MoveOrigin", vtkFinitePlaneRepresentation::MoveOrigin },
      { "vtkFinitePlaneRepresentation_InteractionStateType_ModifyV1", vtkFinitePlaneRepresentation::ModifyV1 },
      { "vtkFinitePlaneRepresentation_InteractionStateType_ModifyV2", vtkFinitePlaneRepresentation::ModifyV2 },
      { "vtkFinitePlaneRepresentation_InteractionStateType_Moving", vtkFinitePlaneRepresentation::Moving },
      { "vtkFinitePlaneRepresentation_InteractionStateType_Rotating", vtkFinitePlaneRepresentation::Rotating },
      { "vtkFinitePlaneRepresentation_InteractionStateType_Pushing", vtkFinitePlaneRepresentation::Pushing },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
