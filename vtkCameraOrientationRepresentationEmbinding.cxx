// JavaScript wrapper for vtkCameraOrientationRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCameraOrientationRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCameraOrientationRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextProperty.h"
#include "vtkProperty.h"
#include "vtkPropCollection.h"
#include "vtkTransform.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkProp.h"
#include "vtkCameraOrientationRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCameraOrientationRepresentation_class_enums) {
  emscripten::enum_<vtkCameraOrientationRepresentation::InteractionStateType>("vtkCameraOrientationRepresentation_InteractionStateType")
    .value("Outside", vtkCameraOrientationRepresentation::InteractionStateType::Outside)
    .value("Hovering", vtkCameraOrientationRepresentation::InteractionStateType::Hovering)
    .value("Rotating", vtkCameraOrientationRepresentation::InteractionStateType::Rotating);
  emscripten::enum_<vtkCameraOrientationRepresentation::AnchorType>("vtkCameraOrientationRepresentation_AnchorType")
    .value("LowerLeft", vtkCameraOrientationRepresentation::AnchorType::LowerLeft)
    .value("UpperLeft", vtkCameraOrientationRepresentation::AnchorType::UpperLeft)
    .value("LowerRight", vtkCameraOrientationRepresentation::AnchorType::LowerRight)
    .value("UpperRight", vtkCameraOrientationRepresentation::AnchorType::UpperRight);
}
template<> void emscripten::internal::raw_destructor<vtkCameraOrientationRepresentation>(vtkCameraOrientationRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCameraOrientationRepresentation_class) {
  using InteractionStateType=vtkCameraOrientationRepresentation::InteractionStateType;
  using AnchorType=vtkCameraOrientationRepresentation::AnchorType;
  emscripten::class_<vtkCameraOrientationRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkCameraOrientationRepresentation")
    .smart_ptr<vtkSmartPointer<vtkCameraOrientationRepresentation>>("vtkSmartPointer<vtkCameraOrientationRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCameraOrientationRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraOrientationRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCameraOrientationRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCameraOrientationRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCameraOrientationRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraOrientationRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCameraOrientationRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ApplyInteractionState", emscripten::select_overload<void(vtkCameraOrientationRepresentation&, const InteractionStateType&)>([](vtkCameraOrientationRepresentation& self, const InteractionStateType& arg_0) -> void { return self.ApplyInteractionState( arg_0); }))
    .function("ApplyInteractionState", emscripten::select_overload<void(vtkCameraOrientationRepresentation&, const int&)>([](vtkCameraOrientationRepresentation& self, const int& arg_0) -> void { return self.ApplyInteractionState( arg_0); }))
    .function("GetInteractionStateAsEnum", &vtkCameraOrientationRepresentation::GetInteractionStateAsEnum)
    .function("SetSize", emscripten::select_overload<void(vtkCameraOrientationRepresentation&, int, int)>([](vtkCameraOrientationRepresentation& self, int arg_0, int arg_1) -> void { return self.SetSize( arg_0, arg_1); }))
    .function("SetPadding", emscripten::select_overload<void(vtkCameraOrientationRepresentation&, int, int)>([](vtkCameraOrientationRepresentation& self, int arg_0, int arg_1) -> void { return self.SetPadding( arg_0, arg_1); }))
    .function("GetAnchorPosition", &vtkCameraOrientationRepresentation::GetAnchorPosition)
    .function("AnchorToLowerLeft", &vtkCameraOrientationRepresentation::AnchorToLowerLeft)
    .function("AnchorToUpperLeft", &vtkCameraOrientationRepresentation::AnchorToUpperLeft)
    .function("AnchorToLowerRight", &vtkCameraOrientationRepresentation::AnchorToLowerRight)
    .function("AnchorToUpperRight", &vtkCameraOrientationRepresentation::AnchorToUpperRight)
    .function("SetTotalLength", &vtkCameraOrientationRepresentation::SetTotalLength)
    .function("GetTotalLength", &vtkCameraOrientationRepresentation::GetTotalLength)
    .function("SetNormalizedHandleDia", &vtkCameraOrientationRepresentation::SetNormalizedHandleDia)
    .function("GetNormalizedHandleDia", &vtkCameraOrientationRepresentation::GetNormalizedHandleDia)
    .function("GetAzimuth", &vtkCameraOrientationRepresentation::GetAzimuth)
    .function("GetElevation", &vtkCameraOrientationRepresentation::GetElevation)
    .function("SetShaftResolution", &vtkCameraOrientationRepresentation::SetShaftResolution)
    .function("GetShaftResolutionMinValue", &vtkCameraOrientationRepresentation::GetShaftResolutionMinValue)
    .function("GetShaftResolutionMaxValue", &vtkCameraOrientationRepresentation::GetShaftResolutionMaxValue)
    .function("GetShaftResolution", &vtkCameraOrientationRepresentation::GetShaftResolution)
    .function("SetHandleCircumferentialResolution", &vtkCameraOrientationRepresentation::SetHandleCircumferentialResolution)
    .function("GetHandleCircumferentialResolutionMinValue", &vtkCameraOrientationRepresentation::GetHandleCircumferentialResolutionMinValue)
    .function("GetHandleCircumferentialResolutionMaxValue", &vtkCameraOrientationRepresentation::GetHandleCircumferentialResolutionMaxValue)
    .function("GetHandleCircumferentialResolution", &vtkCameraOrientationRepresentation::GetHandleCircumferentialResolution)
    .function("SetContainerCircumferentialResolution", &vtkCameraOrientationRepresentation::SetContainerCircumferentialResolution)
    .function("GetContainerCircumferentialResolutionMinValue", &vtkCameraOrientationRepresentation::GetContainerCircumferentialResolutionMinValue)
    .function("GetContainerCircumferentialResolutionMaxValue", &vtkCameraOrientationRepresentation::GetContainerCircumferentialResolutionMaxValue)
    .function("GetContainerCircumferentialResolution", &vtkCameraOrientationRepresentation::GetContainerCircumferentialResolution)
    .function("SetContainerRadialResolution", &vtkCameraOrientationRepresentation::SetContainerRadialResolution)
    .function("GetContainerRadialResolutionMinValue", &vtkCameraOrientationRepresentation::GetContainerRadialResolutionMinValue)
    .function("GetContainerRadialResolutionMaxValue", &vtkCameraOrientationRepresentation::GetContainerRadialResolutionMaxValue)
    .function("GetContainerRadialResolution", &vtkCameraOrientationRepresentation::GetContainerRadialResolution)
    .function("GetPickedAxis", &vtkCameraOrientationRepresentation::GetPickedAxis)
    .function("GetPickedDir", &vtkCameraOrientationRepresentation::GetPickedDir)
    .function("GetXPlusLabelProperty", &vtkCameraOrientationRepresentation::GetXPlusLabelProperty, emscripten::allow_raw_pointers())
    .function("GetYPlusLabelProperty", &vtkCameraOrientationRepresentation::GetYPlusLabelProperty, emscripten::allow_raw_pointers())
    .function("GetZPlusLabelProperty", &vtkCameraOrientationRepresentation::GetZPlusLabelProperty, emscripten::allow_raw_pointers())
    .function("GetXMinusLabelProperty", &vtkCameraOrientationRepresentation::GetXMinusLabelProperty, emscripten::allow_raw_pointers())
    .function("GetYMinusLabelProperty", &vtkCameraOrientationRepresentation::GetYMinusLabelProperty, emscripten::allow_raw_pointers())
    .function("GetZMinusLabelProperty", &vtkCameraOrientationRepresentation::GetZMinusLabelProperty, emscripten::allow_raw_pointers())
    .function("GetContainerProperty", &vtkCameraOrientationRepresentation::GetContainerProperty, emscripten::allow_raw_pointers())
    .function("SetContainerVisibility", &vtkCameraOrientationRepresentation::SetContainerVisibility)
    .function("ContainerVisibilityOn", &vtkCameraOrientationRepresentation::ContainerVisibilityOn)
    .function("ContainerVisibilityOff", &vtkCameraOrientationRepresentation::ContainerVisibilityOff)
    .function("GetContainerVisibility", &vtkCameraOrientationRepresentation::GetContainerVisibility)
    .function("GetActors", &vtkCameraOrientationRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkCameraOrientationRepresentation::GetTransform, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkCameraOrientationRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkCameraOrientationRepresentation::ComputeInteractionState)
    .function("ReleaseGraphicsResources", &vtkCameraOrientationRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkCameraOrientationRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkCameraOrientationRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkCameraOrientationRepresentation::HasTranslucentPolygonalGeometry)
    .function("ShallowCopy", &vtkCameraOrientationRepresentation::ShallowCopy, emscripten::allow_raw_pointers())
    .function("IsAnyHandleSelected", &vtkCameraOrientationRepresentation::IsAnyHandleSelected);
}
