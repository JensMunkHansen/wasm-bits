// JavaScript wrapper for vtkOrientationMarkerWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkOrientationMarkerWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkOrientationMarkerWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp.h"
#include "vtkObject.h"
#include "vtkOrientationMarkerWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkOrientationMarkerWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkOrientationMarkerWidget>(vtkOrientationMarkerWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOrientationMarkerWidget_class) {
  emscripten::class_<vtkOrientationMarkerWidget, emscripten::base<vtkInteractorObserver>>("vtkOrientationMarkerWidget")
    .smart_ptr<vtkSmartPointer<vtkOrientationMarkerWidget>>("vtkSmartPointer<vtkOrientationMarkerWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOrientationMarkerWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrientationMarkerWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOrientationMarkerWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOrientationMarkerWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOrientationMarkerWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrientationMarkerWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOrientationMarkerWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOrientationMarker", &vtkOrientationMarkerWidget::SetOrientationMarker, emscripten::allow_raw_pointers())
    .function("GetOrientationMarker", &vtkOrientationMarkerWidget::GetOrientationMarker, emscripten::allow_raw_pointers())
    .function("SetEnabled", &vtkOrientationMarkerWidget::SetEnabled)
    .function("ExecuteCameraUpdateEvent", emscripten::optional_override([](vtkOrientationMarkerWidget& self, vtkObject* arg_0, unsigned long arg_1, std::uintptr_t arg_2) -> void {  return self.ExecuteCameraUpdateEvent( arg_0, arg_1,reinterpret_cast<void*>(arg_2));}), emscripten::allow_raw_pointers())
    .function("SetInteractive", &vtkOrientationMarkerWidget::SetInteractive)
    .function("GetInteractive", &vtkOrientationMarkerWidget::GetInteractive)
    .function("InteractiveOn", &vtkOrientationMarkerWidget::InteractiveOn)
    .function("InteractiveOff", &vtkOrientationMarkerWidget::InteractiveOff)
    .function("SetOutlineColor", &vtkOrientationMarkerWidget::SetOutlineColor)
    .function("SetViewport", emscripten::select_overload<void(vtkOrientationMarkerWidget&, double, double, double, double)>([](vtkOrientationMarkerWidget& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetViewport( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetTolerance", &vtkOrientationMarkerWidget::SetTolerance)
    .function("GetToleranceMinValue", &vtkOrientationMarkerWidget::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkOrientationMarkerWidget::GetToleranceMaxValue)
    .function("GetTolerance", &vtkOrientationMarkerWidget::GetTolerance)
    .function("SetZoom", &vtkOrientationMarkerWidget::SetZoom)
    .function("GetZoomMinValue", &vtkOrientationMarkerWidget::GetZoomMinValue)
    .function("GetZoomMaxValue", &vtkOrientationMarkerWidget::GetZoomMaxValue)
    .function("GetZoom", &vtkOrientationMarkerWidget::GetZoom)
    .function("Modified", &vtkOrientationMarkerWidget::Modified)
    .function("EndInteraction", &vtkOrientationMarkerWidget::EndInteraction)
    .function("SetShouldConstrainSize", &vtkOrientationMarkerWidget::SetShouldConstrainSize)
    .function("GetShouldConstrainSize", &vtkOrientationMarkerWidget::GetShouldConstrainSize)
    .function("SetSizeConstraintDimensionSizes", &vtkOrientationMarkerWidget::SetSizeConstraintDimensionSizes)
    .function("GetMinDimensionSize", &vtkOrientationMarkerWidget::GetMinDimensionSize)
    .function("GetMaxDimensionSize", &vtkOrientationMarkerWidget::GetMaxDimensionSize);
}
