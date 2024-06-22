// JavaScript wrapper for vtkSphereWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkSphereWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkSphereWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkSphere.h"
#include "vtkProperty.h"
#include "vtkSphereWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkSphereWidget_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_SPHERE_OFF", 0 },
      { "VTK_SPHERE_WIREFRAME", 1 },
      { "VTK_SPHERE_SURFACE", 2 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkSphereWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSphereWidget>(vtkSphereWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSphereWidget_class) {
  emscripten::class_<vtkSphereWidget, emscripten::base<vtk3DWidget>>("vtkSphereWidget")
    .smart_ptr<vtkSmartPointer<vtkSphereWidget>>("vtkSmartPointer<vtkSphereWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSphereWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphereWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSphereWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSphereWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSphereWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphereWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSphereWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkSphereWidget::SetEnabled)
    .function("PlaceWidget", emscripten::select_overload<void(vtkSphereWidget&)>([](vtkSphereWidget& self) -> void { return self.PlaceWidget(); }))
    .function("PlaceWidget", emscripten::select_overload<void(vtkSphereWidget&, double, double, double, double, double, double)>([](vtkSphereWidget& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.PlaceWidget( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetRepresentation", &vtkSphereWidget::SetRepresentation)
    .function("GetRepresentationMinValue", &vtkSphereWidget::GetRepresentationMinValue)
    .function("GetRepresentationMaxValue", &vtkSphereWidget::GetRepresentationMaxValue)
    .function("GetRepresentation", &vtkSphereWidget::GetRepresentation)
    .function("SetRepresentationToOff", &vtkSphereWidget::SetRepresentationToOff)
    .function("SetRepresentationToWireframe", &vtkSphereWidget::SetRepresentationToWireframe)
    .function("SetRepresentationToSurface", &vtkSphereWidget::SetRepresentationToSurface)
    .function("SetThetaResolution", &vtkSphereWidget::SetThetaResolution)
    .function("GetThetaResolution", &vtkSphereWidget::GetThetaResolution)
    .function("SetPhiResolution", &vtkSphereWidget::SetPhiResolution)
    .function("GetPhiResolution", &vtkSphereWidget::GetPhiResolution)
    .function("SetRadius", &vtkSphereWidget::SetRadius)
    .function("GetRadius", &vtkSphereWidget::GetRadius)
    .function("SetCenter", emscripten::select_overload<void(vtkSphereWidget&, double, double, double)>([](vtkSphereWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetTranslation", &vtkSphereWidget::SetTranslation)
    .function("GetTranslation", &vtkSphereWidget::GetTranslation)
    .function("TranslationOn", &vtkSphereWidget::TranslationOn)
    .function("TranslationOff", &vtkSphereWidget::TranslationOff)
    .function("SetScale", &vtkSphereWidget::SetScale)
    .function("GetScale", &vtkSphereWidget::GetScale)
    .function("ScaleOn", &vtkSphereWidget::ScaleOn)
    .function("ScaleOff", &vtkSphereWidget::ScaleOff)
    .function("SetHandleVisibility", &vtkSphereWidget::SetHandleVisibility)
    .function("GetHandleVisibility", &vtkSphereWidget::GetHandleVisibility)
    .function("HandleVisibilityOn", &vtkSphereWidget::HandleVisibilityOn)
    .function("HandleVisibilityOff", &vtkSphereWidget::HandleVisibilityOff)
    .function("SetHandleDirection", emscripten::select_overload<void(vtkSphereWidget&, double, double, double)>([](vtkSphereWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetHandleDirection( arg_0, arg_1, arg_2); }))
    .function("GetPolyData", &vtkSphereWidget::GetPolyData, emscripten::allow_raw_pointers())
    .function("GetSphere", &vtkSphereWidget::GetSphere, emscripten::allow_raw_pointers())
    .function("GetSphereProperty", &vtkSphereWidget::GetSphereProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedSphereProperty", &vtkSphereWidget::GetSelectedSphereProperty, emscripten::allow_raw_pointers())
    .function("GetHandleProperty", &vtkSphereWidget::GetHandleProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedHandleProperty", &vtkSphereWidget::GetSelectedHandleProperty, emscripten::allow_raw_pointers());
}
