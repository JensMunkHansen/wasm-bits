// JavaScript wrapper for vtkPlaneWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPlaneWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPlaneWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkPlane.h"
#include "vtkPolyDataAlgorithm.h"
#include "vtkProperty.h"
#include "vtkPlaneWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkPlaneWidget_0_1_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "VTK_PLANE_OFF", 0 },
      { "VTK_PLANE_OUTLINE", 1 },
      { "VTK_PLANE_WIREFRAME", 2 },
      { "VTK_PLANE_SURFACE", 3 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkPlaneWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPlaneWidget>(vtkPlaneWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlaneWidget_class) {
  emscripten::class_<vtkPlaneWidget, emscripten::base<vtkPolyDataSourceWidget>>("vtkPlaneWidget")
    .smart_ptr<vtkSmartPointer<vtkPlaneWidget>>("vtkSmartPointer<vtkPlaneWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlaneWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlaneWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlaneWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlaneWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlaneWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlaneWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlaneWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkPlaneWidget::SetEnabled)
    .function("PlaceWidget", emscripten::select_overload<void(vtkPlaneWidget&)>([](vtkPlaneWidget& self) -> void { return self.PlaceWidget(); }))
    .function("PlaceWidget", emscripten::select_overload<void(vtkPlaneWidget&, double, double, double, double, double, double)>([](vtkPlaneWidget& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.PlaceWidget( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetResolution", &vtkPlaneWidget::SetResolution)
    .function("GetResolution", &vtkPlaneWidget::GetResolution)
    .function("SetOrigin", emscripten::select_overload<void(vtkPlaneWidget&, double, double, double)>([](vtkPlaneWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetPoint1", emscripten::select_overload<void(vtkPlaneWidget&, double, double, double)>([](vtkPlaneWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint1( arg_0, arg_1, arg_2); }))
    .function("SetPoint2", emscripten::select_overload<void(vtkPlaneWidget&, double, double, double)>([](vtkPlaneWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint2( arg_0, arg_1, arg_2); }))
    .function("SetCenter", emscripten::select_overload<void(vtkPlaneWidget&, double, double, double)>([](vtkPlaneWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkPlaneWidget&, double, double, double)>([](vtkPlaneWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetRepresentation", &vtkPlaneWidget::SetRepresentation)
    .function("GetRepresentationMinValue", &vtkPlaneWidget::GetRepresentationMinValue)
    .function("GetRepresentationMaxValue", &vtkPlaneWidget::GetRepresentationMaxValue)
    .function("GetRepresentation", &vtkPlaneWidget::GetRepresentation)
    .function("SetRepresentationToOff", &vtkPlaneWidget::SetRepresentationToOff)
    .function("SetRepresentationToOutline", &vtkPlaneWidget::SetRepresentationToOutline)
    .function("SetRepresentationToWireframe", &vtkPlaneWidget::SetRepresentationToWireframe)
    .function("SetRepresentationToSurface", &vtkPlaneWidget::SetRepresentationToSurface)
    .function("SetNormalToXAxis", &vtkPlaneWidget::SetNormalToXAxis)
    .function("GetNormalToXAxis", &vtkPlaneWidget::GetNormalToXAxis)
    .function("NormalToXAxisOn", &vtkPlaneWidget::NormalToXAxisOn)
    .function("NormalToXAxisOff", &vtkPlaneWidget::NormalToXAxisOff)
    .function("SetNormalToYAxis", &vtkPlaneWidget::SetNormalToYAxis)
    .function("GetNormalToYAxis", &vtkPlaneWidget::GetNormalToYAxis)
    .function("NormalToYAxisOn", &vtkPlaneWidget::NormalToYAxisOn)
    .function("NormalToYAxisOff", &vtkPlaneWidget::NormalToYAxisOff)
    .function("SetNormalToZAxis", &vtkPlaneWidget::SetNormalToZAxis)
    .function("GetNormalToZAxis", &vtkPlaneWidget::GetNormalToZAxis)
    .function("NormalToZAxisOn", &vtkPlaneWidget::NormalToZAxisOn)
    .function("NormalToZAxisOff", &vtkPlaneWidget::NormalToZAxisOff)
    .function("GetPolyData", &vtkPlaneWidget::GetPolyData, emscripten::allow_raw_pointers())
    .function("GetPlane", &vtkPlaneWidget::GetPlane, emscripten::allow_raw_pointers())
    .function("GetPolyDataAlgorithm", &vtkPlaneWidget::GetPolyDataAlgorithm, emscripten::allow_raw_pointers())
    .function("UpdatePlacement", &vtkPlaneWidget::UpdatePlacement)
    .function("GetHandleProperty", &vtkPlaneWidget::GetHandleProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedHandleProperty", &vtkPlaneWidget::GetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("SetPlaneProperty", &vtkPlaneWidget::SetPlaneProperty, emscripten::allow_raw_pointers())
    .function("GetPlaneProperty", &vtkPlaneWidget::GetPlaneProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedPlaneProperty", &vtkPlaneWidget::GetSelectedPlaneProperty, emscripten::allow_raw_pointers());
}
