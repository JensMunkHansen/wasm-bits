// JavaScript wrapper for vtkChartXYZ with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartXYZEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkChartXYZ.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRect.h"
#include "vtkVector.h"
#include "vtkAnnotationLink.h"
#include "vtkAxis.h"
#include "vtkColor.h"
#include "vtkTextProperty.h"
#include "vtkStdString.h"
#include "vtkContext2D.h"
#include "vtkPlot3D.h"
#include "vtkContextMouseEvent.h"
#include "vtkContextKeyEvent.h"
#include "vtkChartXYZ.h"

EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkChartXYZ_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkChartXYZ>(vtkChartXYZ * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkChartXYZ_class) {
  emscripten::class_<vtkChartXYZ, emscripten::base<vtkContextItem>>("vtkChartXYZ")
    .smart_ptr<vtkSmartPointer<vtkChartXYZ>>("vtkSmartPointer<vtkChartXYZ>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkChartXYZ>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartXYZ::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkChartXYZ& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkChartXYZ::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkChartXYZ::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartXYZ::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkChartXYZ& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGeometry", &vtkChartXYZ::SetGeometry)
    .function("SetMargins", &vtkChartXYZ::SetMargins)
    .function("SetAngle", &vtkChartXYZ::SetAngle)
    .function("SetAroundX", &vtkChartXYZ::SetAroundX)
    .function("SetAnnotationLink", &vtkChartXYZ::SetAnnotationLink, emscripten::allow_raw_pointers())
    .function("GetAxis", &vtkChartXYZ::GetAxis, emscripten::allow_raw_pointers())
    .function("SetAxis", &vtkChartXYZ::SetAxis, emscripten::allow_raw_pointers())
    .function("SetAxisColor", &vtkChartXYZ::SetAxisColor)
    .function("GetAxisColor", &vtkChartXYZ::GetAxisColor)
    .function("GetAxesTextProperty", &vtkChartXYZ::GetAxesTextProperty, emscripten::allow_raw_pointers())
    .function("SetXAxisLabel", &vtkChartXYZ::SetXAxisLabel)
    .function("SetYAxisLabel", &vtkChartXYZ::SetYAxisLabel)
    .function("SetZAxisLabel", &vtkChartXYZ::SetZAxisLabel)
    .function("SetEnsureOuterEdgeAxisLabelling", &vtkChartXYZ::SetEnsureOuterEdgeAxisLabelling)
    .function("SetAutoRotate", &vtkChartXYZ::SetAutoRotate)
    .function("SetDecorateAxes", &vtkChartXYZ::SetDecorateAxes)
    .function("SetFitToScene", &vtkChartXYZ::SetFitToScene)
    .function("Update", &vtkChartXYZ::Update)
    .function("Paint", &vtkChartXYZ::Paint, emscripten::allow_raw_pointers())
    .function("AddPlot", &vtkChartXYZ::AddPlot, emscripten::allow_raw_pointers())
    .function("RemovePlot", &vtkChartXYZ::RemovePlot, emscripten::allow_raw_pointers())
    .function("ClearPlots", &vtkChartXYZ::ClearPlots)
    .function("RecalculateBounds", &vtkChartXYZ::RecalculateBounds)
    .function("RecalculateTransform", &vtkChartXYZ::RecalculateTransform)
    .function("Hit", &vtkChartXYZ::Hit)
    .function("MouseButtonPressEvent", &vtkChartXYZ::MouseButtonPressEvent)
    .function("MouseMoveEvent", &vtkChartXYZ::MouseMoveEvent)
    .function("MouseWheelEvent", &vtkChartXYZ::MouseWheelEvent)
    .function("KeyPressEvent", &vtkChartXYZ::KeyPressEvent)
    .function("SetClippingPlanesEnabled", &vtkChartXYZ::SetClippingPlanesEnabled)
    .function("GetClippingPlanesEnabled", &vtkChartXYZ::GetClippingPlanesEnabled)
    .function("SetScaleBoxWithPlot", &vtkChartXYZ::SetScaleBoxWithPlot)
    .function("GetScaleBoxWithPlot", &vtkChartXYZ::GetScaleBoxWithPlot);
}
