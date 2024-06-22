// JavaScript wrapper for vtkBoxWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkBoxWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkBoxWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlanes.h"
#include "vtkTransform.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkBoxWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBoxWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkBoxWidget>(vtkBoxWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBoxWidget_class) {
  emscripten::class_<vtkBoxWidget, emscripten::base<vtk3DWidget>>("vtkBoxWidget")
    .smart_ptr<vtkSmartPointer<vtkBoxWidget>>("vtkSmartPointer<vtkBoxWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBoxWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoxWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBoxWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBoxWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBoxWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoxWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBoxWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkBoxWidget::SetEnabled)
    .function("PlaceWidget", emscripten::select_overload<void(vtkBoxWidget&)>([](vtkBoxWidget& self) -> void { return self.PlaceWidget(); }))
    .function("PlaceWidget", emscripten::select_overload<void(vtkBoxWidget&, double, double, double, double, double, double)>([](vtkBoxWidget& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.PlaceWidget( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetPlanes", &vtkBoxWidget::GetPlanes, emscripten::allow_raw_pointers())
    .function("SetInsideOut", &vtkBoxWidget::SetInsideOut)
    .function("GetInsideOut", &vtkBoxWidget::GetInsideOut)
    .function("InsideOutOn", &vtkBoxWidget::InsideOutOn)
    .function("InsideOutOff", &vtkBoxWidget::InsideOutOff)
    .function("GetTransform", &vtkBoxWidget::GetTransform, emscripten::allow_raw_pointers())
    .function("SetTransform", &vtkBoxWidget::SetTransform, emscripten::allow_raw_pointers())
    .function("GetPolyData", &vtkBoxWidget::GetPolyData, emscripten::allow_raw_pointers())
    .function("GetHandleProperty", &vtkBoxWidget::GetHandleProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedHandleProperty", &vtkBoxWidget::GetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("HandlesOn", &vtkBoxWidget::HandlesOn)
    .function("HandlesOff", &vtkBoxWidget::HandlesOff)
    .function("GetFaceProperty", &vtkBoxWidget::GetFaceProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedFaceProperty", &vtkBoxWidget::GetSelectedFaceProperty, emscripten::allow_raw_pointers())
    .function("GetOutlineProperty", &vtkBoxWidget::GetOutlineProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedOutlineProperty", &vtkBoxWidget::GetSelectedOutlineProperty, emscripten::allow_raw_pointers())
    .function("SetOutlineFaceWires", &vtkBoxWidget::SetOutlineFaceWires)
    .function("GetOutlineFaceWires", &vtkBoxWidget::GetOutlineFaceWires)
    .function("OutlineFaceWiresOn", &vtkBoxWidget::OutlineFaceWiresOn)
    .function("OutlineFaceWiresOff", &vtkBoxWidget::OutlineFaceWiresOff)
    .function("SetOutlineCursorWires", &vtkBoxWidget::SetOutlineCursorWires)
    .function("GetOutlineCursorWires", &vtkBoxWidget::GetOutlineCursorWires)
    .function("OutlineCursorWiresOn", &vtkBoxWidget::OutlineCursorWiresOn)
    .function("OutlineCursorWiresOff", &vtkBoxWidget::OutlineCursorWiresOff)
    .function("SetTranslationEnabled", &vtkBoxWidget::SetTranslationEnabled)
    .function("GetTranslationEnabled", &vtkBoxWidget::GetTranslationEnabled)
    .function("TranslationEnabledOn", &vtkBoxWidget::TranslationEnabledOn)
    .function("TranslationEnabledOff", &vtkBoxWidget::TranslationEnabledOff)
    .function("SetScalingEnabled", &vtkBoxWidget::SetScalingEnabled)
    .function("GetScalingEnabled", &vtkBoxWidget::GetScalingEnabled)
    .function("ScalingEnabledOn", &vtkBoxWidget::ScalingEnabledOn)
    .function("ScalingEnabledOff", &vtkBoxWidget::ScalingEnabledOff)
    .function("SetRotationEnabled", &vtkBoxWidget::SetRotationEnabled)
    .function("GetRotationEnabled", &vtkBoxWidget::GetRotationEnabled)
    .function("RotationEnabledOn", &vtkBoxWidget::RotationEnabledOn)
    .function("RotationEnabledOff", &vtkBoxWidget::RotationEnabledOff);
}
