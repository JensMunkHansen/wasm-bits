// JavaScript wrapper for vtkImageCroppingRegionsWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkImageCroppingRegionsWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkImageCroppingRegionsWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolumeMapper.h"
#include "vtkImageCroppingRegionsWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImageCroppingRegionsWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkImageCroppingRegionsWidget>(vtkImageCroppingRegionsWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageCroppingRegionsWidget_class) {
  using WidgetEventIds=vtkImageCroppingRegionsWidget::WidgetEventIds;
  emscripten::class_<vtkImageCroppingRegionsWidget, emscripten::base<vtk3DWidget>>("vtkImageCroppingRegionsWidget")
    .smart_ptr<vtkSmartPointer<vtkImageCroppingRegionsWidget>>("vtkSmartPointer<vtkImageCroppingRegionsWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageCroppingRegionsWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCroppingRegionsWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageCroppingRegionsWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageCroppingRegionsWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageCroppingRegionsWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCroppingRegionsWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageCroppingRegionsWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkImageCroppingRegionsWidget::SetEnabled)
    .function("SetPlanePositions", emscripten::select_overload<void(vtkImageCroppingRegionsWidget&, double, double, double, double, double, double)>([](vtkImageCroppingRegionsWidget& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetPlanePositions( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetCroppingRegionFlags", &vtkImageCroppingRegionsWidget::SetCroppingRegionFlags)
    .function("GetCroppingRegionFlags", &vtkImageCroppingRegionsWidget::GetCroppingRegionFlags)
    .function("GetSliceOrientation", &vtkImageCroppingRegionsWidget::GetSliceOrientation)
    .function("SetSliceOrientation", &vtkImageCroppingRegionsWidget::SetSliceOrientation)
    .function("SetSliceOrientationToXY", &vtkImageCroppingRegionsWidget::SetSliceOrientationToXY)
    .function("SetSliceOrientationToYZ", &vtkImageCroppingRegionsWidget::SetSliceOrientationToYZ)
    .function("SetSliceOrientationToXZ", &vtkImageCroppingRegionsWidget::SetSliceOrientationToXZ)
    .function("SetSlice", &vtkImageCroppingRegionsWidget::SetSlice)
    .function("GetSlice", &vtkImageCroppingRegionsWidget::GetSlice)
    .function("SetLine1Color", emscripten::select_overload<void(vtkImageCroppingRegionsWidget&, double, double, double)>([](vtkImageCroppingRegionsWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetLine1Color( arg_0, arg_1, arg_2); }))
    .function("GetLine1Color", emscripten::select_overload<std::uintptr_t(vtkImageCroppingRegionsWidget&)>([](vtkImageCroppingRegionsWidget& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetLine1Color()); }))
    .function("SetLine2Color", emscripten::select_overload<void(vtkImageCroppingRegionsWidget&, double, double, double)>([](vtkImageCroppingRegionsWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetLine2Color( arg_0, arg_1, arg_2); }))
    .function("GetLine2Color", emscripten::select_overload<std::uintptr_t(vtkImageCroppingRegionsWidget&)>([](vtkImageCroppingRegionsWidget& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetLine2Color()); }))
    .function("SetLine3Color", emscripten::select_overload<void(vtkImageCroppingRegionsWidget&, double, double, double)>([](vtkImageCroppingRegionsWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetLine3Color( arg_0, arg_1, arg_2); }))
    .function("GetLine3Color", emscripten::select_overload<std::uintptr_t(vtkImageCroppingRegionsWidget&)>([](vtkImageCroppingRegionsWidget& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetLine3Color()); }))
    .function("SetLine4Color", emscripten::select_overload<void(vtkImageCroppingRegionsWidget&, double, double, double)>([](vtkImageCroppingRegionsWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetLine4Color( arg_0, arg_1, arg_2); }))
    .function("GetLine4Color", emscripten::select_overload<std::uintptr_t(vtkImageCroppingRegionsWidget&)>([](vtkImageCroppingRegionsWidget& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetLine4Color()); }))
    .function("SetVolumeMapper", &vtkImageCroppingRegionsWidget::SetVolumeMapper, emscripten::allow_raw_pointers())
    .function("GetVolumeMapper", &vtkImageCroppingRegionsWidget::GetVolumeMapper, emscripten::allow_raw_pointers())
    .function("UpdateAccordingToInput", &vtkImageCroppingRegionsWidget::UpdateAccordingToInput)
    .function("MoveHorizontalLine", &vtkImageCroppingRegionsWidget::MoveHorizontalLine)
    .function("MoveVerticalLine", &vtkImageCroppingRegionsWidget::MoveVerticalLine)
    .function("MoveIntersectingLines", &vtkImageCroppingRegionsWidget::MoveIntersectingLines)
    .function("UpdateCursorIcon", &vtkImageCroppingRegionsWidget::UpdateCursorIcon)
    .function("OnButtonPress", &vtkImageCroppingRegionsWidget::OnButtonPress)
    .function("OnButtonRelease", &vtkImageCroppingRegionsWidget::OnButtonRelease)
    .function("OnMouseMove", &vtkImageCroppingRegionsWidget::OnMouseMove)
    .function("PlaceWidget", emscripten::select_overload<void(vtkImageCroppingRegionsWidget&)>([](vtkImageCroppingRegionsWidget& self) -> void { return self.PlaceWidget(); }))
    .function("PlaceWidget", emscripten::select_overload<void(vtkImageCroppingRegionsWidget&, double, double, double, double, double, double)>([](vtkImageCroppingRegionsWidget& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.PlaceWidget( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }));
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImageCroppingRegionsWidget_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkImageCroppingRegionsWidget_SLICE_ORIENTATION_YZ", vtkImageCroppingRegionsWidget::SLICE_ORIENTATION_YZ },
      { "vtkImageCroppingRegionsWidget_SLICE_ORIENTATION_XZ", vtkImageCroppingRegionsWidget::SLICE_ORIENTATION_XZ },
      { "vtkImageCroppingRegionsWidget_SLICE_ORIENTATION_XY", vtkImageCroppingRegionsWidget::SLICE_ORIENTATION_XY },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImageCroppingRegionsWidget_1_2_constants) {
    typedef vtkImageCroppingRegionsWidget::WidgetEventIds cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[1] = {
      { "vtkImageCroppingRegionsWidget_WidgetEventIds_CroppingPlanesPositionChangedEvent", vtkImageCroppingRegionsWidget::CroppingPlanesPositionChangedEvent },
  };
  for (int c = 0; c < 1; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
