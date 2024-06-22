// JavaScript wrapper for vtkBrokenLineWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkBrokenLineWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkBrokenLineWidget.h
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
#include "vtkPoints.h"
#include "vtkBrokenLineWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBrokenLineWidget_0_1_constants) {
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
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBrokenLineWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkBrokenLineWidget>(vtkBrokenLineWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBrokenLineWidget_class) {
  emscripten::class_<vtkBrokenLineWidget, emscripten::base<vtk3DWidget>>("vtkBrokenLineWidget")
    .smart_ptr<vtkSmartPointer<vtkBrokenLineWidget>>("vtkSmartPointer<vtkBrokenLineWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBrokenLineWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBrokenLineWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBrokenLineWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBrokenLineWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBrokenLineWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBrokenLineWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBrokenLineWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkBrokenLineWidget::SetEnabled)
    .function("PlaceWidget", emscripten::select_overload<void(vtkBrokenLineWidget&)>([](vtkBrokenLineWidget& self) -> void { return self.PlaceWidget(); }))
    .function("PlaceWidget", emscripten::select_overload<void(vtkBrokenLineWidget&, double, double, double, double, double, double)>([](vtkBrokenLineWidget& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.PlaceWidget( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetProjectToPlane", &vtkBrokenLineWidget::SetProjectToPlane)
    .function("GetProjectToPlane", &vtkBrokenLineWidget::GetProjectToPlane)
    .function("ProjectToPlaneOn", &vtkBrokenLineWidget::ProjectToPlaneOn)
    .function("ProjectToPlaneOff", &vtkBrokenLineWidget::ProjectToPlaneOff)
    .function("SetPlaneSource", &vtkBrokenLineWidget::SetPlaneSource, emscripten::allow_raw_pointers())
    .function("SetProjectionNormal", &vtkBrokenLineWidget::SetProjectionNormal)
    .function("GetProjectionNormalMinValue", &vtkBrokenLineWidget::GetProjectionNormalMinValue)
    .function("GetProjectionNormalMaxValue", &vtkBrokenLineWidget::GetProjectionNormalMaxValue)
    .function("GetProjectionNormal", &vtkBrokenLineWidget::GetProjectionNormal)
    .function("SetProjectionNormalToXAxes", &vtkBrokenLineWidget::SetProjectionNormalToXAxes)
    .function("SetProjectionNormalToYAxes", &vtkBrokenLineWidget::SetProjectionNormalToYAxes)
    .function("SetProjectionNormalToZAxes", &vtkBrokenLineWidget::SetProjectionNormalToZAxes)
    .function("SetProjectionNormalToOblique", &vtkBrokenLineWidget::SetProjectionNormalToOblique)
    .function("SetProjectionPosition", &vtkBrokenLineWidget::SetProjectionPosition)
    .function("GetProjectionPosition", &vtkBrokenLineWidget::GetProjectionPosition)
    .function("GetPolyData", &vtkBrokenLineWidget::GetPolyData, emscripten::allow_raw_pointers())
    .function("SetHandleProperty", &vtkBrokenLineWidget::SetHandleProperty, emscripten::allow_raw_pointers())
    .function("GetHandleProperty", &vtkBrokenLineWidget::GetHandleProperty, emscripten::allow_raw_pointers())
    .function("SetSelectedHandleProperty", &vtkBrokenLineWidget::SetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedHandleProperty", &vtkBrokenLineWidget::GetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("SetLineProperty", &vtkBrokenLineWidget::SetLineProperty, emscripten::allow_raw_pointers())
    .function("GetLineProperty", &vtkBrokenLineWidget::GetLineProperty, emscripten::allow_raw_pointers())
    .function("SetSelectedLineProperty", &vtkBrokenLineWidget::SetSelectedLineProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedLineProperty", &vtkBrokenLineWidget::GetSelectedLineProperty, emscripten::allow_raw_pointers())
    .function("SetNumberOfHandles", &vtkBrokenLineWidget::SetNumberOfHandles)
    .function("GetNumberOfHandles", &vtkBrokenLineWidget::GetNumberOfHandles)
    .function("SetHandlePosition", emscripten::select_overload<void(vtkBrokenLineWidget&, int, double, double, double)>([](vtkBrokenLineWidget& self, int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetHandlePosition( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetHandlePosition", emscripten::select_overload<std::uintptr_t(vtkBrokenLineWidget&, int)>([](vtkBrokenLineWidget& self, int arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetHandlePosition( arg_0)); }))
    .function("GetSummedLength", &vtkBrokenLineWidget::GetSummedLength)
    .function("InitializeHandles", &vtkBrokenLineWidget::InitializeHandles, emscripten::allow_raw_pointers())
    .function("SetProcessEvents", &vtkBrokenLineWidget::SetProcessEvents)
    .function("GetProcessEventsMinValue", &vtkBrokenLineWidget::GetProcessEventsMinValue)
    .function("GetProcessEventsMaxValue", &vtkBrokenLineWidget::GetProcessEventsMaxValue)
    .function("GetProcessEvents", &vtkBrokenLineWidget::GetProcessEvents)
    .function("ProcessEventsOn", &vtkBrokenLineWidget::ProcessEventsOn)
    .function("ProcessEventsOff", &vtkBrokenLineWidget::ProcessEventsOff)
    .function("SetHandleSizeFactor", &vtkBrokenLineWidget::SetHandleSizeFactor)
    .function("GetHandleSizeFactorMinValue", &vtkBrokenLineWidget::GetHandleSizeFactorMinValue)
    .function("GetHandleSizeFactorMaxValue", &vtkBrokenLineWidget::GetHandleSizeFactorMaxValue)
    .function("GetHandleSizeFactor", &vtkBrokenLineWidget::GetHandleSizeFactor);
}
