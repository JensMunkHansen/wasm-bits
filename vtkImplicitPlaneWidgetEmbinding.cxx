// JavaScript wrapper for vtkImplicitPlaneWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkImplicitPlaneWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkImplicitPlaneWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkPolyDataAlgorithm.h"
#include "vtkPlane.h"
#include "vtkProperty.h"
#include "vtkImplicitPlaneWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImplicitPlaneWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkImplicitPlaneWidget>(vtkImplicitPlaneWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitPlaneWidget_class) {
  emscripten::class_<vtkImplicitPlaneWidget, emscripten::base<vtkPolyDataSourceWidget>>("vtkImplicitPlaneWidget")
    .smart_ptr<vtkSmartPointer<vtkImplicitPlaneWidget>>("vtkSmartPointer<vtkImplicitPlaneWidget>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImplicitPlaneWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitPlaneWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitPlaneWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitPlaneWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitPlaneWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitPlaneWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitPlaneWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkImplicitPlaneWidget::SetEnabled)
    .function("PlaceWidget", emscripten::select_overload<void(vtkImplicitPlaneWidget&)>([](vtkImplicitPlaneWidget& self) -> void { return self.PlaceWidget(); }))
    .function("PlaceWidget", emscripten::select_overload<void(vtkImplicitPlaneWidget&, double, double, double, double, double, double)>([](vtkImplicitPlaneWidget& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.PlaceWidget( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetOrigin", emscripten::select_overload<void(vtkImplicitPlaneWidget&, double, double, double)>([](vtkImplicitPlaneWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetNormal", emscripten::select_overload<void(vtkImplicitPlaneWidget&, double, double, double)>([](vtkImplicitPlaneWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetNormalToXAxis", &vtkImplicitPlaneWidget::SetNormalToXAxis)
    .function("GetNormalToXAxis", &vtkImplicitPlaneWidget::GetNormalToXAxis)
    .function("NormalToXAxisOn", &vtkImplicitPlaneWidget::NormalToXAxisOn)
    .function("NormalToXAxisOff", &vtkImplicitPlaneWidget::NormalToXAxisOff)
    .function("SetNormalToYAxis", &vtkImplicitPlaneWidget::SetNormalToYAxis)
    .function("GetNormalToYAxis", &vtkImplicitPlaneWidget::GetNormalToYAxis)
    .function("NormalToYAxisOn", &vtkImplicitPlaneWidget::NormalToYAxisOn)
    .function("NormalToYAxisOff", &vtkImplicitPlaneWidget::NormalToYAxisOff)
    .function("SetNormalToZAxis", &vtkImplicitPlaneWidget::SetNormalToZAxis)
    .function("GetNormalToZAxis", &vtkImplicitPlaneWidget::GetNormalToZAxis)
    .function("NormalToZAxisOn", &vtkImplicitPlaneWidget::NormalToZAxisOn)
    .function("NormalToZAxisOff", &vtkImplicitPlaneWidget::NormalToZAxisOff)
    .function("SetTubing", &vtkImplicitPlaneWidget::SetTubing)
    .function("GetTubing", &vtkImplicitPlaneWidget::GetTubing)
    .function("TubingOn", &vtkImplicitPlaneWidget::TubingOn)
    .function("TubingOff", &vtkImplicitPlaneWidget::TubingOff)
    .function("SetDrawPlane", &vtkImplicitPlaneWidget::SetDrawPlane)
    .function("GetDrawPlane", &vtkImplicitPlaneWidget::GetDrawPlane)
    .function("DrawPlaneOn", &vtkImplicitPlaneWidget::DrawPlaneOn)
    .function("DrawPlaneOff", &vtkImplicitPlaneWidget::DrawPlaneOff)
    .function("SetOutlineTranslation", &vtkImplicitPlaneWidget::SetOutlineTranslation)
    .function("GetOutlineTranslation", &vtkImplicitPlaneWidget::GetOutlineTranslation)
    .function("OutlineTranslationOn", &vtkImplicitPlaneWidget::OutlineTranslationOn)
    .function("OutlineTranslationOff", &vtkImplicitPlaneWidget::OutlineTranslationOff)
    .function("SetOutsideBounds", &vtkImplicitPlaneWidget::SetOutsideBounds)
    .function("GetOutsideBounds", &vtkImplicitPlaneWidget::GetOutsideBounds)
    .function("OutsideBoundsOn", &vtkImplicitPlaneWidget::OutsideBoundsOn)
    .function("OutsideBoundsOff", &vtkImplicitPlaneWidget::OutsideBoundsOff)
    .function("SetScaleEnabled", &vtkImplicitPlaneWidget::SetScaleEnabled)
    .function("GetScaleEnabled", &vtkImplicitPlaneWidget::GetScaleEnabled)
    .function("ScaleEnabledOn", &vtkImplicitPlaneWidget::ScaleEnabledOn)
    .function("ScaleEnabledOff", &vtkImplicitPlaneWidget::ScaleEnabledOff)
    .function("SetOriginTranslation", &vtkImplicitPlaneWidget::SetOriginTranslation)
    .function("GetOriginTranslation", &vtkImplicitPlaneWidget::GetOriginTranslation)
    .function("OriginTranslationOn", &vtkImplicitPlaneWidget::OriginTranslationOn)
    .function("OriginTranslationOff", &vtkImplicitPlaneWidget::OriginTranslationOff)
    .function("SetDiagonalRatio", &vtkImplicitPlaneWidget::SetDiagonalRatio)
    .function("GetDiagonalRatioMinValue", &vtkImplicitPlaneWidget::GetDiagonalRatioMinValue)
    .function("GetDiagonalRatioMaxValue", &vtkImplicitPlaneWidget::GetDiagonalRatioMaxValue)
    .function("GetDiagonalRatio", &vtkImplicitPlaneWidget::GetDiagonalRatio)
    .function("GetPolyData", &vtkImplicitPlaneWidget::GetPolyData, emscripten::allow_raw_pointers())
    .function("GetPolyDataAlgorithm", &vtkImplicitPlaneWidget::GetPolyDataAlgorithm, emscripten::allow_raw_pointers())
    .function("GetPlane", &vtkImplicitPlaneWidget::GetPlane, emscripten::allow_raw_pointers())
    .function("UpdatePlacement", &vtkImplicitPlaneWidget::UpdatePlacement)
    .function("SizeHandles", &vtkImplicitPlaneWidget::SizeHandles)
    .function("GetNormalProperty", &vtkImplicitPlaneWidget::GetNormalProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedNormalProperty", &vtkImplicitPlaneWidget::GetSelectedNormalProperty, emscripten::allow_raw_pointers())
    .function("GetPlaneProperty", &vtkImplicitPlaneWidget::GetPlaneProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedPlaneProperty", &vtkImplicitPlaneWidget::GetSelectedPlaneProperty, emscripten::allow_raw_pointers())
    .function("GetOutlineProperty", &vtkImplicitPlaneWidget::GetOutlineProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedOutlineProperty", &vtkImplicitPlaneWidget::GetSelectedOutlineProperty, emscripten::allow_raw_pointers())
    .function("GetEdgesProperty", &vtkImplicitPlaneWidget::GetEdgesProperty, emscripten::allow_raw_pointers());
}
