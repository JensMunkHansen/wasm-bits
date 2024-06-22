// JavaScript wrapper for vtkSplineWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkSplineWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkSplineWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlaneSource.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkParametricSpline.h"
#include "vtkPoints.h"
#include "vtkSplineWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkSplineWidget_0_1_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "VTK_PROJECTION_YZ", 0 },
      { "VTK_PROJECTION_XZ", 1 },
      { "VTK_PROJECTION_XY", 2 },
      { "VTK_PROJECTION_OBLIQUE", 3 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkSplineWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSplineWidget>(vtkSplineWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSplineWidget_class) {
  emscripten::class_<vtkSplineWidget, emscripten::base<vtk3DWidget>>("vtkSplineWidget")
    .smart_ptr<vtkSmartPointer<vtkSplineWidget>>("vtkSmartPointer<vtkSplineWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSplineWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplineWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSplineWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSplineWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSplineWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplineWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSplineWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkSplineWidget::SetEnabled)
    .function("PlaceWidget", emscripten::select_overload<void(vtkSplineWidget&)>([](vtkSplineWidget& self) -> void { return self.PlaceWidget(); }))
    .function("PlaceWidget", emscripten::select_overload<void(vtkSplineWidget&, double, double, double, double, double, double)>([](vtkSplineWidget& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.PlaceWidget( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetProjectToPlane", &vtkSplineWidget::SetProjectToPlane)
    .function("GetProjectToPlane", &vtkSplineWidget::GetProjectToPlane)
    .function("ProjectToPlaneOn", &vtkSplineWidget::ProjectToPlaneOn)
    .function("ProjectToPlaneOff", &vtkSplineWidget::ProjectToPlaneOff)
    .function("SetPlaneSource", &vtkSplineWidget::SetPlaneSource, emscripten::allow_raw_pointers())
    .function("SetProjectionNormal", &vtkSplineWidget::SetProjectionNormal)
    .function("GetProjectionNormalMinValue", &vtkSplineWidget::GetProjectionNormalMinValue)
    .function("GetProjectionNormalMaxValue", &vtkSplineWidget::GetProjectionNormalMaxValue)
    .function("GetProjectionNormal", &vtkSplineWidget::GetProjectionNormal)
    .function("SetProjectionNormalToXAxes", &vtkSplineWidget::SetProjectionNormalToXAxes)
    .function("SetProjectionNormalToYAxes", &vtkSplineWidget::SetProjectionNormalToYAxes)
    .function("SetProjectionNormalToZAxes", &vtkSplineWidget::SetProjectionNormalToZAxes)
    .function("SetProjectionNormalToOblique", &vtkSplineWidget::SetProjectionNormalToOblique)
    .function("SetProjectionPosition", &vtkSplineWidget::SetProjectionPosition)
    .function("GetProjectionPosition", &vtkSplineWidget::GetProjectionPosition)
    .function("GetPolyData", &vtkSplineWidget::GetPolyData, emscripten::allow_raw_pointers())
    .function("SetHandleProperty", &vtkSplineWidget::SetHandleProperty, emscripten::allow_raw_pointers())
    .function("GetHandleProperty", &vtkSplineWidget::GetHandleProperty, emscripten::allow_raw_pointers())
    .function("SetSelectedHandleProperty", &vtkSplineWidget::SetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedHandleProperty", &vtkSplineWidget::GetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("SetLineProperty", &vtkSplineWidget::SetLineProperty, emscripten::allow_raw_pointers())
    .function("GetLineProperty", &vtkSplineWidget::GetLineProperty, emscripten::allow_raw_pointers())
    .function("SetSelectedLineProperty", &vtkSplineWidget::SetSelectedLineProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedLineProperty", &vtkSplineWidget::GetSelectedLineProperty, emscripten::allow_raw_pointers())
    .function("SetNumberOfHandles", &vtkSplineWidget::SetNumberOfHandles)
    .function("GetNumberOfHandles", &vtkSplineWidget::GetNumberOfHandles)
    .function("SetResolution", &vtkSplineWidget::SetResolution)
    .function("GetResolution", &vtkSplineWidget::GetResolution)
    .function("SetParametricSpline", &vtkSplineWidget::SetParametricSpline, emscripten::allow_raw_pointers())
    .function("GetParametricSpline", &vtkSplineWidget::GetParametricSpline, emscripten::allow_raw_pointers())
    .function("SetHandlePosition", emscripten::select_overload<void(vtkSplineWidget&, int, double, double, double)>([](vtkSplineWidget& self, int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetHandlePosition( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetClosed", &vtkSplineWidget::SetClosed)
    .function("GetClosed", &vtkSplineWidget::GetClosed)
    .function("ClosedOn", &vtkSplineWidget::ClosedOn)
    .function("ClosedOff", &vtkSplineWidget::ClosedOff)
    .function("IsClosed", &vtkSplineWidget::IsClosed)
    .function("GetSummedLength", &vtkSplineWidget::GetSummedLength)
    .function("InitializeHandles", &vtkSplineWidget::InitializeHandles, emscripten::allow_raw_pointers())
    .function("SetProcessEvents", &vtkSplineWidget::SetProcessEvents)
    .function("GetProcessEventsMinValue", &vtkSplineWidget::GetProcessEventsMinValue)
    .function("GetProcessEventsMaxValue", &vtkSplineWidget::GetProcessEventsMaxValue)
    .function("GetProcessEvents", &vtkSplineWidget::GetProcessEvents)
    .function("ProcessEventsOn", &vtkSplineWidget::ProcessEventsOn)
    .function("ProcessEventsOff", &vtkSplineWidget::ProcessEventsOff);
}
