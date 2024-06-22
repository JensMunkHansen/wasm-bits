// JavaScript wrapper for vtkLineWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkLineWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkLineWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkLineWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkLineWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkLineWidget>(vtkLineWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLineWidget_class) {
  emscripten::class_<vtkLineWidget, emscripten::base<vtk3DWidget>>("vtkLineWidget")
    .smart_ptr<vtkSmartPointer<vtkLineWidget>>("vtkSmartPointer<vtkLineWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLineWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLineWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLineWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLineWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLineWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLineWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLineWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkLineWidget::SetEnabled)
    .function("PlaceWidget", emscripten::select_overload<void(vtkLineWidget&)>([](vtkLineWidget& self) -> void { return self.PlaceWidget(); }))
    .function("PlaceWidget", emscripten::select_overload<void(vtkLineWidget&, double, double, double, double, double, double)>([](vtkLineWidget& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.PlaceWidget( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetResolution", &vtkLineWidget::SetResolution)
    .function("GetResolution", &vtkLineWidget::GetResolution)
    .function("SetPoint1", emscripten::select_overload<void(vtkLineWidget&, double, double, double)>([](vtkLineWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint1( arg_0, arg_1, arg_2); }))
    .function("SetPoint2", emscripten::select_overload<void(vtkLineWidget&, double, double, double)>([](vtkLineWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint2( arg_0, arg_1, arg_2); }))
    .function("SetAlign", &vtkLineWidget::SetAlign)
    .function("GetAlignMinValue", &vtkLineWidget::GetAlignMinValue)
    .function("GetAlignMaxValue", &vtkLineWidget::GetAlignMaxValue)
    .function("GetAlign", &vtkLineWidget::GetAlign)
    .function("SetAlignToXAxis", &vtkLineWidget::SetAlignToXAxis)
    .function("SetAlignToYAxis", &vtkLineWidget::SetAlignToYAxis)
    .function("SetAlignToZAxis", &vtkLineWidget::SetAlignToZAxis)
    .function("SetAlignToNone", &vtkLineWidget::SetAlignToNone)
    .function("SetClampToBounds", &vtkLineWidget::SetClampToBounds)
    .function("GetClampToBounds", &vtkLineWidget::GetClampToBounds)
    .function("ClampToBoundsOn", &vtkLineWidget::ClampToBoundsOn)
    .function("ClampToBoundsOff", &vtkLineWidget::ClampToBoundsOff)
    .function("GetPolyData", &vtkLineWidget::GetPolyData, emscripten::allow_raw_pointers())
    .function("GetHandleProperty", &vtkLineWidget::GetHandleProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedHandleProperty", &vtkLineWidget::GetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("GetLineProperty", &vtkLineWidget::GetLineProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedLineProperty", &vtkLineWidget::GetSelectedLineProperty, emscripten::allow_raw_pointers());
}
