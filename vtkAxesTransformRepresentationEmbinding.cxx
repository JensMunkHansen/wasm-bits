// JavaScript wrapper for vtkAxesTransformRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkAxesTransformRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkAxesTransformRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHandleRepresentation.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkProperty.h"
#include "vtkAxesTransformRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkAxesTransformRepresentation>(vtkAxesTransformRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAxesTransformRepresentation_class) {
  emscripten::class_<vtkAxesTransformRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkAxesTransformRepresentation")
    .smart_ptr<vtkSmartPointer<vtkAxesTransformRepresentation>>("vtkSmartPointer<vtkAxesTransformRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAxesTransformRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxesTransformRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAxesTransformRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAxesTransformRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAxesTransformRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxesTransformRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAxesTransformRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOriginRepresentation", &vtkAxesTransformRepresentation::GetOriginRepresentation, emscripten::allow_raw_pointers())
    .function("GetSelectionRepresentation", &vtkAxesTransformRepresentation::GetSelectionRepresentation, emscripten::allow_raw_pointers())
    .function("GetOriginWorldPosition", emscripten::select_overload<std::uintptr_t(vtkAxesTransformRepresentation&)>([](vtkAxesTransformRepresentation& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetOriginWorldPosition()); }))
    .function("SetTolerance", &vtkAxesTransformRepresentation::SetTolerance)
    .function("GetToleranceMinValue", &vtkAxesTransformRepresentation::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkAxesTransformRepresentation::GetToleranceMaxValue)
    .function("GetTolerance", &vtkAxesTransformRepresentation::GetTolerance)
    .function("SetLabelFormat", emscripten::optional_override([](vtkAxesTransformRepresentation& self, const std::string & arg_0) -> void {  return self.SetLabelFormat( arg_0.c_str());}))
    .function("GetLabelFormat", emscripten::optional_override([](vtkAxesTransformRepresentation& self) -> std::string {  return self.GetLabelFormat();}))
    .function("SetInteractionState", &vtkAxesTransformRepresentation::SetInteractionState)
    .function("GetInteractionStateMinValue", &vtkAxesTransformRepresentation::GetInteractionStateMinValue)
    .function("GetInteractionStateMaxValue", &vtkAxesTransformRepresentation::GetInteractionStateMaxValue)
    .function("BuildRepresentation", &vtkAxesTransformRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkAxesTransformRepresentation::ComputeInteractionState)
    .function("ReleaseGraphicsResources", &vtkAxesTransformRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkAxesTransformRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkAxesTransformRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("SetLabelScale", emscripten::select_overload<void(vtkAxesTransformRepresentation&, double, double, double)>([](vtkAxesTransformRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetLabelScale( arg_0, arg_1, arg_2); }))
    .function("GetLabelScale", emscripten::optional_override([](vtkAxesTransformRepresentation& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetLabelScale()) / sizeof(double);}))
    .function("GetLabelProperty", &vtkAxesTransformRepresentation::GetLabelProperty, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkAxesTransformRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[8] = {
      { "vtkAxesTransformRepresentation_Outside", vtkAxesTransformRepresentation::Outside },
      { "vtkAxesTransformRepresentation_OnOrigin", vtkAxesTransformRepresentation::OnOrigin },
      { "vtkAxesTransformRepresentation_OnX", vtkAxesTransformRepresentation::OnX },
      { "vtkAxesTransformRepresentation_OnY", vtkAxesTransformRepresentation::OnY },
      { "vtkAxesTransformRepresentation_OnZ", vtkAxesTransformRepresentation::OnZ },
      { "vtkAxesTransformRepresentation_OnXEnd", vtkAxesTransformRepresentation::OnXEnd },
      { "vtkAxesTransformRepresentation_OnYEnd", vtkAxesTransformRepresentation::OnYEnd },
      { "vtkAxesTransformRepresentation_OnZEnd", vtkAxesTransformRepresentation::OnZEnd },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
