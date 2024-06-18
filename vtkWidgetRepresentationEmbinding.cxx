// JavaScript wrapper for vtkWidgetRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkWidgetRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkWidgetRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkAbstractWidget.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkWidgetRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkWidgetRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkWidgetRepresentation>(vtkWidgetRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWidgetRepresentation_class) {
  using Axis=vtkWidgetRepresentation::Axis;
  emscripten::class_<vtkWidgetRepresentation, emscripten::base<vtkProp>>("vtkWidgetRepresentation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWidgetRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWidgetRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWidgetRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWidgetRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWidgetRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWidgetRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("PickingManagedOn", &vtkWidgetRepresentation::PickingManagedOn)
    .function("PickingManagedOff", &vtkWidgetRepresentation::PickingManagedOff)
    .function("SetPickingManaged", &vtkWidgetRepresentation::SetPickingManaged)
    .function("GetPickingManaged", &vtkWidgetRepresentation::GetPickingManaged)
    .function("SetRenderer", &vtkWidgetRepresentation::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetRenderer", &vtkWidgetRepresentation::GetRenderer, emscripten::allow_raw_pointers())
    .function("ComputeInteractionState", &vtkWidgetRepresentation::ComputeInteractionState)
    .function("GetInteractionState", &vtkWidgetRepresentation::GetInteractionState)
    .function("Highlight", &vtkWidgetRepresentation::Highlight)
    .function("StartComplexInteraction", emscripten::optional_override([](vtkWidgetRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.StartComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ComplexInteraction", emscripten::optional_override([](vtkWidgetRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.ComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("EndComplexInteraction", emscripten::optional_override([](vtkWidgetRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.EndComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ComputeComplexInteractionState", emscripten::optional_override([](vtkWidgetRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3, int arg_4) -> int {  return self.ComputeComplexInteractionState( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3), arg_4);}), emscripten::allow_raw_pointers())
    .function("SetPlaceFactor", &vtkWidgetRepresentation::SetPlaceFactor)
    .function("GetPlaceFactorMinValue", &vtkWidgetRepresentation::GetPlaceFactorMinValue)
    .function("GetPlaceFactorMaxValue", &vtkWidgetRepresentation::GetPlaceFactorMaxValue)
    .function("GetPlaceFactor", &vtkWidgetRepresentation::GetPlaceFactor)
    .function("SetHandleSize", &vtkWidgetRepresentation::SetHandleSize)
    .function("GetHandleSizeMinValue", &vtkWidgetRepresentation::GetHandleSizeMinValue)
    .function("GetHandleSizeMaxValue", &vtkWidgetRepresentation::GetHandleSizeMaxValue)
    .function("GetHandleSize", &vtkWidgetRepresentation::GetHandleSize)
    .function("GetNeedToRender", &vtkWidgetRepresentation::GetNeedToRender)
    .function("SetNeedToRender", &vtkWidgetRepresentation::SetNeedToRender)
    .function("GetNeedToRenderMinValue", &vtkWidgetRepresentation::GetNeedToRenderMinValue)
    .function("GetNeedToRenderMaxValue", &vtkWidgetRepresentation::GetNeedToRenderMaxValue)
    .function("NeedToRenderOn", &vtkWidgetRepresentation::NeedToRenderOn)
    .function("NeedToRenderOff", &vtkWidgetRepresentation::NeedToRenderOff)
    .function("ShallowCopy", &vtkWidgetRepresentation::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetActors", &vtkWidgetRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("GetActors2D", &vtkWidgetRepresentation::GetActors2D, emscripten::allow_raw_pointers())
    .function("GetVolumes", &vtkWidgetRepresentation::GetVolumes, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkWidgetRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkWidgetRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkWidgetRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkWidgetRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderVolumetricGeometry", &vtkWidgetRepresentation::RenderVolumetricGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkWidgetRepresentation::HasTranslucentPolygonalGeometry)
    .function("RegisterPickers", &vtkWidgetRepresentation::RegisterPickers)
    .function("UnRegisterPickers", &vtkWidgetRepresentation::UnRegisterPickers);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkWidgetRepresentation_0_2_constants) {
    typedef vtkWidgetRepresentation::Axis cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkWidgetRepresentation_Axis_NONE", vtkWidgetRepresentation::NONE },
      { "vtkWidgetRepresentation_Axis_XAxis", vtkWidgetRepresentation::XAxis },
      { "vtkWidgetRepresentation_Axis_YAxis", vtkWidgetRepresentation::YAxis },
      { "vtkWidgetRepresentation_Axis_ZAxis", vtkWidgetRepresentation::ZAxis },
      { "vtkWidgetRepresentation_Axis_Custom", vtkWidgetRepresentation::Custom },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
