// JavaScript wrapper for vtkChartLegend with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartLegendEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkChartLegend.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkChart.h"
#include "vtkContext2D.h"
#include "vtkRect.h"
#include "vtkPen.h"
#include "vtkBrush.h"
#include "vtkTextProperty.h"
#include "vtkContextMouseEvent.h"
#include "vtkChartLegend.h"

template<> void emscripten::internal::raw_destructor<vtkChartLegend>(vtkChartLegend * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkChartLegend_class) {
  emscripten::class_<vtkChartLegend, emscripten::base<vtkContextItem>>("vtkChartLegend")
    .smart_ptr<vtkSmartPointer<vtkChartLegend>>("vtkSmartPointer<vtkChartLegend>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkChartLegend>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartLegend::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkChartLegend& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkChartLegend::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkChartLegend::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartLegend::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkChartLegend& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPoint", emscripten::select_overload<void(vtkChartLegend&, float, float)>([](vtkChartLegend& self, float arg_0, float arg_1) -> void { return self.SetPoint( arg_0, arg_1); }))
    .function("SetPoint", emscripten::select_overload<void(vtkChartLegend&, const vtkVector2f&)>([](vtkChartLegend& self, const vtkVector2f& arg_0) -> void { return self.SetPoint( arg_0); }))
    .function("GetPointVector", &vtkChartLegend::GetPointVector)
    .function("SetHorizontalAlignment", &vtkChartLegend::SetHorizontalAlignment)
    .function("GetHorizontalAlignment", &vtkChartLegend::GetHorizontalAlignment)
    .function("SetVerticalAlignment", &vtkChartLegend::SetVerticalAlignment)
    .function("GetVerticalAlignment", &vtkChartLegend::GetVerticalAlignment)
    .function("SetPadding", &vtkChartLegend::SetPadding)
    .function("GetPadding", &vtkChartLegend::GetPadding)
    .function("SetSymbolWidth", &vtkChartLegend::SetSymbolWidth)
    .function("GetSymbolWidth", &vtkChartLegend::GetSymbolWidth)
    .function("SetLabelSize", &vtkChartLegend::SetLabelSize)
    .function("GetLabelSize", &vtkChartLegend::GetLabelSize)
    .function("SetInline", &vtkChartLegend::SetInline)
    .function("GetInline", &vtkChartLegend::GetInline)
    .function("SetDragEnabled", &vtkChartLegend::SetDragEnabled)
    .function("GetDragEnabled", &vtkChartLegend::GetDragEnabled)
    .function("SetChart", &vtkChartLegend::SetChart, emscripten::allow_raw_pointers())
    .function("GetChart", &vtkChartLegend::GetChart, emscripten::allow_raw_pointers())
    .function("Update", &vtkChartLegend::Update)
    .function("Paint", &vtkChartLegend::Paint, emscripten::allow_raw_pointers())
    .function("GetBoundingRect", &vtkChartLegend::GetBoundingRect, emscripten::allow_raw_pointers())
    .function("GetPen", &vtkChartLegend::GetPen, emscripten::allow_raw_pointers())
    .function("GetBrush", &vtkChartLegend::GetBrush, emscripten::allow_raw_pointers())
    .function("GetLabelProperties", &vtkChartLegend::GetLabelProperties, emscripten::allow_raw_pointers())
    .function("SetCacheBounds", &vtkChartLegend::SetCacheBounds)
    .function("GetCacheBounds", &vtkChartLegend::GetCacheBounds)
    .function("CacheBoundsOn", &vtkChartLegend::CacheBoundsOn)
    .function("CacheBoundsOff", &vtkChartLegend::CacheBoundsOff)
    .function("Hit", &vtkChartLegend::Hit)
    .function("MouseMoveEvent", &vtkChartLegend::MouseMoveEvent)
    .function("MouseButtonPressEvent", &vtkChartLegend::MouseButtonPressEvent)
    .function("MouseButtonReleaseEvent", &vtkChartLegend::MouseButtonReleaseEvent);
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkChartLegend_0_2_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "vtkChartLegend_LEFT", vtkChartLegend::LEFT },
      { "vtkChartLegend_CENTER", vtkChartLegend::CENTER },
      { "vtkChartLegend_RIGHT", vtkChartLegend::RIGHT },
      { "vtkChartLegend_TOP", vtkChartLegend::TOP },
      { "vtkChartLegend_BOTTOM", vtkChartLegend::BOTTOM },
      { "vtkChartLegend_CUSTOM", vtkChartLegend::CUSTOM },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
