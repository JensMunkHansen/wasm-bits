// JavaScript wrapper for vtkImageTracerWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkImageTracerWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkImageTracerWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProperty.h"
#include "vtkProp.h"
#include "vtkPolyData.h"
#include "vtkGlyphSource2D.h"
#include "vtkPoints.h"
#include "vtkImageTracerWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImageTracerWidget_0_1_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "VTK_ITW_PROJECTION_YZ", 0 },
      { "VTK_ITW_PROJECTION_XZ", 1 },
      { "VTK_ITW_PROJECTION_XY", 2 },
      { "VTK_ITW_SNAP_CELLS", 0 },
      { "VTK_ITW_SNAP_POINTS", 1 },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImageTracerWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkImageTracerWidget>(vtkImageTracerWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageTracerWidget_class) {
  emscripten::class_<vtkImageTracerWidget, emscripten::base<vtk3DWidget>>("vtkImageTracerWidget")
    .smart_ptr<vtkSmartPointer<vtkImageTracerWidget>>("vtkSmartPointer<vtkImageTracerWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageTracerWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageTracerWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageTracerWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageTracerWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageTracerWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageTracerWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageTracerWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkImageTracerWidget::SetEnabled)
    .function("PlaceWidget", emscripten::select_overload<void(vtkImageTracerWidget&)>([](vtkImageTracerWidget& self) -> void { return self.PlaceWidget(); }))
    .function("PlaceWidget", emscripten::select_overload<void(vtkImageTracerWidget&, double, double, double, double, double, double)>([](vtkImageTracerWidget& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.PlaceWidget( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetHandleProperty", &vtkImageTracerWidget::SetHandleProperty, emscripten::allow_raw_pointers())
    .function("GetHandleProperty", &vtkImageTracerWidget::GetHandleProperty, emscripten::allow_raw_pointers())
    .function("SetSelectedHandleProperty", &vtkImageTracerWidget::SetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedHandleProperty", &vtkImageTracerWidget::GetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("SetLineProperty", &vtkImageTracerWidget::SetLineProperty, emscripten::allow_raw_pointers())
    .function("GetLineProperty", &vtkImageTracerWidget::GetLineProperty, emscripten::allow_raw_pointers())
    .function("SetSelectedLineProperty", &vtkImageTracerWidget::SetSelectedLineProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedLineProperty", &vtkImageTracerWidget::GetSelectedLineProperty, emscripten::allow_raw_pointers())
    .function("SetViewProp", &vtkImageTracerWidget::SetViewProp, emscripten::allow_raw_pointers())
    .function("SetProjectToPlane", &vtkImageTracerWidget::SetProjectToPlane)
    .function("GetProjectToPlane", &vtkImageTracerWidget::GetProjectToPlane)
    .function("ProjectToPlaneOn", &vtkImageTracerWidget::ProjectToPlaneOn)
    .function("ProjectToPlaneOff", &vtkImageTracerWidget::ProjectToPlaneOff)
    .function("SetProjectionNormal", &vtkImageTracerWidget::SetProjectionNormal)
    .function("GetProjectionNormalMinValue", &vtkImageTracerWidget::GetProjectionNormalMinValue)
    .function("GetProjectionNormalMaxValue", &vtkImageTracerWidget::GetProjectionNormalMaxValue)
    .function("GetProjectionNormal", &vtkImageTracerWidget::GetProjectionNormal)
    .function("SetProjectionNormalToXAxes", &vtkImageTracerWidget::SetProjectionNormalToXAxes)
    .function("SetProjectionNormalToYAxes", &vtkImageTracerWidget::SetProjectionNormalToYAxes)
    .function("SetProjectionNormalToZAxes", &vtkImageTracerWidget::SetProjectionNormalToZAxes)
    .function("SetProjectionPosition", &vtkImageTracerWidget::SetProjectionPosition)
    .function("GetProjectionPosition", &vtkImageTracerWidget::GetProjectionPosition)
    .function("SetSnapToImage", &vtkImageTracerWidget::SetSnapToImage)
    .function("GetSnapToImage", &vtkImageTracerWidget::GetSnapToImage)
    .function("SnapToImageOn", &vtkImageTracerWidget::SnapToImageOn)
    .function("SnapToImageOff", &vtkImageTracerWidget::SnapToImageOff)
    .function("SetAutoClose", &vtkImageTracerWidget::SetAutoClose)
    .function("GetAutoClose", &vtkImageTracerWidget::GetAutoClose)
    .function("AutoCloseOn", &vtkImageTracerWidget::AutoCloseOn)
    .function("AutoCloseOff", &vtkImageTracerWidget::AutoCloseOff)
    .function("SetCaptureRadius", &vtkImageTracerWidget::SetCaptureRadius)
    .function("GetCaptureRadius", &vtkImageTracerWidget::GetCaptureRadius)
    .function("GetPath", &vtkImageTracerWidget::GetPath, emscripten::allow_raw_pointers())
    .function("GetGlyphSource", &vtkImageTracerWidget::GetGlyphSource, emscripten::allow_raw_pointers())
    .function("SetImageSnapType", &vtkImageTracerWidget::SetImageSnapType)
    .function("GetImageSnapTypeMinValue", &vtkImageTracerWidget::GetImageSnapTypeMinValue)
    .function("GetImageSnapTypeMaxValue", &vtkImageTracerWidget::GetImageSnapTypeMaxValue)
    .function("GetImageSnapType", &vtkImageTracerWidget::GetImageSnapType)
    .function("SetHandlePosition", emscripten::select_overload<void(vtkImageTracerWidget&, int, double, double, double)>([](vtkImageTracerWidget& self, int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetHandlePosition( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetNumberOfHandles", &vtkImageTracerWidget::GetNumberOfHandles)
    .function("SetInteraction", &vtkImageTracerWidget::SetInteraction)
    .function("GetInteraction", &vtkImageTracerWidget::GetInteraction)
    .function("InteractionOn", &vtkImageTracerWidget::InteractionOn)
    .function("InteractionOff", &vtkImageTracerWidget::InteractionOff)
    .function("InitializeHandles", &vtkImageTracerWidget::InitializeHandles, emscripten::allow_raw_pointers())
    .function("IsClosed", &vtkImageTracerWidget::IsClosed)
    .function("SetHandleLeftMouseButton", &vtkImageTracerWidget::SetHandleLeftMouseButton)
    .function("GetHandleLeftMouseButton", &vtkImageTracerWidget::GetHandleLeftMouseButton)
    .function("HandleLeftMouseButtonOn", &vtkImageTracerWidget::HandleLeftMouseButtonOn)
    .function("HandleLeftMouseButtonOff", &vtkImageTracerWidget::HandleLeftMouseButtonOff)
    .function("SetHandleMiddleMouseButton", &vtkImageTracerWidget::SetHandleMiddleMouseButton)
    .function("GetHandleMiddleMouseButton", &vtkImageTracerWidget::GetHandleMiddleMouseButton)
    .function("HandleMiddleMouseButtonOn", &vtkImageTracerWidget::HandleMiddleMouseButtonOn)
    .function("HandleMiddleMouseButtonOff", &vtkImageTracerWidget::HandleMiddleMouseButtonOff)
    .function("SetHandleRightMouseButton", &vtkImageTracerWidget::SetHandleRightMouseButton)
    .function("GetHandleRightMouseButton", &vtkImageTracerWidget::GetHandleRightMouseButton)
    .function("HandleRightMouseButtonOn", &vtkImageTracerWidget::HandleRightMouseButtonOn)
    .function("HandleRightMouseButtonOff", &vtkImageTracerWidget::HandleRightMouseButtonOff);
}
