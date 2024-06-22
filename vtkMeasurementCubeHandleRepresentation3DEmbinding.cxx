// JavaScript wrapper for vtkMeasurementCubeHandleRepresentation3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkMeasurementCubeHandleRepresentation3DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkMeasurementCubeHandleRepresentation3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkAbstractTransform.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkBillboardTextActor3D.h"
#include "vtkMeasurementCubeHandleRepresentation3D.h"

template<> void emscripten::internal::raw_destructor<vtkMeasurementCubeHandleRepresentation3D>(vtkMeasurementCubeHandleRepresentation3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMeasurementCubeHandleRepresentation3D_class) {
  emscripten::class_<vtkMeasurementCubeHandleRepresentation3D, emscripten::base<vtkHandleRepresentation>>("vtkMeasurementCubeHandleRepresentation3D")
    .smart_ptr<vtkSmartPointer<vtkMeasurementCubeHandleRepresentation3D>>("vtkSmartPointer<vtkMeasurementCubeHandleRepresentation3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMeasurementCubeHandleRepresentation3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMeasurementCubeHandleRepresentation3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMeasurementCubeHandleRepresentation3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMeasurementCubeHandleRepresentation3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMeasurementCubeHandleRepresentation3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMeasurementCubeHandleRepresentation3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMeasurementCubeHandleRepresentation3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetHandle", &vtkMeasurementCubeHandleRepresentation3D::GetHandle, emscripten::allow_raw_pointers())
    .function("SetProperty", &vtkMeasurementCubeHandleRepresentation3D::SetProperty, emscripten::allow_raw_pointers())
    .function("SetSelectedProperty", &vtkMeasurementCubeHandleRepresentation3D::SetSelectedProperty, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkMeasurementCubeHandleRepresentation3D::GetProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedProperty", &vtkMeasurementCubeHandleRepresentation3D::GetSelectedProperty, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkMeasurementCubeHandleRepresentation3D::GetTransform, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkMeasurementCubeHandleRepresentation3D::BuildRepresentation)
    .function("ComputeInteractionState", &vtkMeasurementCubeHandleRepresentation3D::ComputeInteractionState)
    .function("ShallowCopy", &vtkMeasurementCubeHandleRepresentation3D::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkMeasurementCubeHandleRepresentation3D::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetActors", &vtkMeasurementCubeHandleRepresentation3D::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkMeasurementCubeHandleRepresentation3D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkMeasurementCubeHandleRepresentation3D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkMeasurementCubeHandleRepresentation3D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkMeasurementCubeHandleRepresentation3D::HasTranslucentPolygonalGeometry)
    .function("SetLabelVisibility", &vtkMeasurementCubeHandleRepresentation3D::SetLabelVisibility)
    .function("GetLabelVisibility", &vtkMeasurementCubeHandleRepresentation3D::GetLabelVisibility)
    .function("LabelVisibilityOn", &vtkMeasurementCubeHandleRepresentation3D::LabelVisibilityOn)
    .function("LabelVisibilityOff", &vtkMeasurementCubeHandleRepresentation3D::LabelVisibilityOff)
    .function("SetSelectedLabelVisibility", &vtkMeasurementCubeHandleRepresentation3D::SetSelectedLabelVisibility)
    .function("GetSelectedLabelVisibility", &vtkMeasurementCubeHandleRepresentation3D::GetSelectedLabelVisibility)
    .function("SelectedLabelVisibilityOn", &vtkMeasurementCubeHandleRepresentation3D::SelectedLabelVisibilityOn)
    .function("SelectedLabelVisibilityOff", &vtkMeasurementCubeHandleRepresentation3D::SelectedLabelVisibilityOff)
    .function("SetLabelTextInput", emscripten::optional_override([](vtkMeasurementCubeHandleRepresentation3D& self, const std::string & arg_0) -> void {  return self.SetLabelTextInput( arg_0.c_str());}))
    .function("GetLabelTextInput", emscripten::optional_override([](vtkMeasurementCubeHandleRepresentation3D& self) -> std::string {  return self.GetLabelTextInput();}))
    .function("GetLabelText", &vtkMeasurementCubeHandleRepresentation3D::GetLabelText, emscripten::allow_raw_pointers())
    .function("SetHandleVisibility", &vtkMeasurementCubeHandleRepresentation3D::SetHandleVisibility)
    .function("GetHandleVisibility", &vtkMeasurementCubeHandleRepresentation3D::GetHandleVisibility)
    .function("HandleVisibilityOn", &vtkMeasurementCubeHandleRepresentation3D::HandleVisibilityOn)
    .function("HandleVisibilityOff", &vtkMeasurementCubeHandleRepresentation3D::HandleVisibilityOff)
    .function("Highlight", &vtkMeasurementCubeHandleRepresentation3D::Highlight)
    .function("SetSmoothMotion", &vtkMeasurementCubeHandleRepresentation3D::SetSmoothMotion)
    .function("GetSmoothMotion", &vtkMeasurementCubeHandleRepresentation3D::GetSmoothMotion)
    .function("SmoothMotionOn", &vtkMeasurementCubeHandleRepresentation3D::SmoothMotionOn)
    .function("SmoothMotionOff", &vtkMeasurementCubeHandleRepresentation3D::SmoothMotionOff)
    .function("SetSideLength", &vtkMeasurementCubeHandleRepresentation3D::SetSideLength)
    .function("GetSideLength", &vtkMeasurementCubeHandleRepresentation3D::GetSideLength)
    .function("SetAdaptiveScaling", &vtkMeasurementCubeHandleRepresentation3D::SetAdaptiveScaling)
    .function("GetAdaptiveScaling", &vtkMeasurementCubeHandleRepresentation3D::GetAdaptiveScaling)
    .function("AdaptiveScalingOn", &vtkMeasurementCubeHandleRepresentation3D::AdaptiveScalingOn)
    .function("AdaptiveScalingOff", &vtkMeasurementCubeHandleRepresentation3D::AdaptiveScalingOff)
    .function("SetRescaleFactor", &vtkMeasurementCubeHandleRepresentation3D::SetRescaleFactor)
    .function("GetRescaleFactorMinValue", &vtkMeasurementCubeHandleRepresentation3D::GetRescaleFactorMinValue)
    .function("GetRescaleFactorMaxValue", &vtkMeasurementCubeHandleRepresentation3D::GetRescaleFactorMaxValue)
    .function("GetRescaleFactor", &vtkMeasurementCubeHandleRepresentation3D::GetRescaleFactor)
    .function("SetMinRelativeCubeScreenArea", &vtkMeasurementCubeHandleRepresentation3D::SetMinRelativeCubeScreenArea)
    .function("GetMinRelativeCubeScreenArea", &vtkMeasurementCubeHandleRepresentation3D::GetMinRelativeCubeScreenArea)
    .function("SetMaxRelativeCubeScreenArea", &vtkMeasurementCubeHandleRepresentation3D::SetMaxRelativeCubeScreenArea)
    .function("GetMaxRelativeCubeScreenArea", &vtkMeasurementCubeHandleRepresentation3D::GetMaxRelativeCubeScreenArea)
    .function("SetLengthUnit", emscripten::optional_override([](vtkMeasurementCubeHandleRepresentation3D& self, const std::string & arg_0) -> void {  return self.SetLengthUnit( arg_0.c_str());}))
    .function("GetLengthUnit", emscripten::optional_override([](vtkMeasurementCubeHandleRepresentation3D& self) -> std::string {  return self.GetLengthUnit();}))
    .function("RegisterPickers", &vtkMeasurementCubeHandleRepresentation3D::RegisterPickers);
}
