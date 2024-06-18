// JavaScript wrapper for vtkPointWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPointWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPointWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkPointWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkPointWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPointWidget>(vtkPointWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointWidget_class) {
  emscripten::class_<vtkPointWidget, emscripten::base<vtk3DWidget>>("vtkPointWidget")
    .smart_ptr<vtkSmartPointer<vtkPointWidget>>("vtkSmartPointer<vtkPointWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPointWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkPointWidget::SetEnabled)
    .function("PlaceWidget", emscripten::select_overload<void(vtkPointWidget&)>([](vtkPointWidget& self) -> void { return self.PlaceWidget(); }))
    .function("PlaceWidget", emscripten::select_overload<void(vtkPointWidget&, double, double, double, double, double, double)>([](vtkPointWidget& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.PlaceWidget( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetPolyData", &vtkPointWidget::GetPolyData, emscripten::allow_raw_pointers())
    .function("SetPosition", emscripten::select_overload<void(vtkPointWidget&, double, double, double)>([](vtkPointWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPosition( arg_0, arg_1, arg_2); }))
    .function("SetOutline", &vtkPointWidget::SetOutline)
    .function("GetOutline", &vtkPointWidget::GetOutline)
    .function("OutlineOn", &vtkPointWidget::OutlineOn)
    .function("OutlineOff", &vtkPointWidget::OutlineOff)
    .function("SetXShadows", &vtkPointWidget::SetXShadows)
    .function("GetXShadows", &vtkPointWidget::GetXShadows)
    .function("XShadowsOn", &vtkPointWidget::XShadowsOn)
    .function("XShadowsOff", &vtkPointWidget::XShadowsOff)
    .function("SetYShadows", &vtkPointWidget::SetYShadows)
    .function("GetYShadows", &vtkPointWidget::GetYShadows)
    .function("YShadowsOn", &vtkPointWidget::YShadowsOn)
    .function("YShadowsOff", &vtkPointWidget::YShadowsOff)
    .function("SetZShadows", &vtkPointWidget::SetZShadows)
    .function("GetZShadows", &vtkPointWidget::GetZShadows)
    .function("ZShadowsOn", &vtkPointWidget::ZShadowsOn)
    .function("ZShadowsOff", &vtkPointWidget::ZShadowsOff)
    .function("SetTranslationMode", &vtkPointWidget::SetTranslationMode)
    .function("GetTranslationMode", &vtkPointWidget::GetTranslationMode)
    .function("TranslationModeOn", &vtkPointWidget::TranslationModeOn)
    .function("TranslationModeOff", &vtkPointWidget::TranslationModeOff)
    .function("AllOn", &vtkPointWidget::AllOn)
    .function("AllOff", &vtkPointWidget::AllOff)
    .function("GetProperty", &vtkPointWidget::GetProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedProperty", &vtkPointWidget::GetSelectedProperty, emscripten::allow_raw_pointers())
    .function("SetHotSpotSize", &vtkPointWidget::SetHotSpotSize)
    .function("GetHotSpotSizeMinValue", &vtkPointWidget::GetHotSpotSizeMinValue)
    .function("GetHotSpotSizeMaxValue", &vtkPointWidget::GetHotSpotSizeMaxValue)
    .function("GetHotSpotSize", &vtkPointWidget::GetHotSpotSize);
}
