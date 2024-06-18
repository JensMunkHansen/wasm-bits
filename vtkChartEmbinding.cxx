// JavaScript wrapper for vtkChart with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkChart.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkPlot.h"
#include "vtkAxis.h"
#include "vtkAnnotationLink.h"
#include "vtkChartLegend.h"
#include "vtkStdString.h"
#include "vtkTextProperty.h"
#include "vtkRect.h"
#include "vtkBrush.h"
#include "vtkChart.h"

EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkChart_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkChart>(vtkChart * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkChart_class) {
  using EventIds=vtkChart::EventIds;
  emscripten::class_<vtkChart, emscripten::base<vtkContextItem>>("vtkChart")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChart::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkChart& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkChart::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkChart::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChart::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkChart& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddPlot", emscripten::select_overload<vtkPlot*(vtkChart&, int)>([](vtkChart& self, int arg_0) -> vtkPlot* { return self.AddPlot( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddPlot", emscripten::select_overload<int(vtkChart&, vtkPlot*)>([](vtkChart& self, vtkPlot* arg_0) -> int { return self.AddPlot( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemovePlot", emscripten::select_overload<bool(vtkChart&, int)>([](vtkChart& self, int arg_0) -> bool { return self.RemovePlot( arg_0); }))
    .function("RemovePlot", emscripten::select_overload<bool(vtkChart&, vtkPlot*)>([](vtkChart& self, vtkPlot* arg_0) -> bool { return self.RemovePlot( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemovePlotInstance", &vtkChart::RemovePlotInstance, emscripten::allow_raw_pointers())
    .function("ClearPlots", &vtkChart::ClearPlots)
    .function("RemoveAllPlots", &vtkChart::RemoveAllPlots)
    .function("GetPlot", &vtkChart::GetPlot, emscripten::allow_raw_pointers())
    .function("GetNumberOfPlots", &vtkChart::GetNumberOfPlots)
    .function("GetAxis", &vtkChart::GetAxis, emscripten::allow_raw_pointers())
    .function("SetAxis", &vtkChart::SetAxis, emscripten::allow_raw_pointers())
    .function("GetNumberOfAxes", &vtkChart::GetNumberOfAxes)
    .function("RecalculateBounds", &vtkChart::RecalculateBounds)
    .function("SetSelectionMethod", &vtkChart::SetSelectionMethod)
    .function("GetSelectionMethod", &vtkChart::GetSelectionMethod)
    .function("SetAnnotationLink", &vtkChart::SetAnnotationLink, emscripten::allow_raw_pointers())
    .function("GetAnnotationLink", &vtkChart::GetAnnotationLink, emscripten::allow_raw_pointers())
    .function("SetGeometry", emscripten::select_overload<void(vtkChart&, int, int)>([](vtkChart& self, int arg_0, int arg_1) -> void { return self.SetGeometry( arg_0, arg_1); }))
    .function("SetPoint1", emscripten::select_overload<void(vtkChart&, int, int)>([](vtkChart& self, int arg_0, int arg_1) -> void { return self.SetPoint1( arg_0, arg_1); }))
    .function("SetPoint2", emscripten::select_overload<void(vtkChart&, int, int)>([](vtkChart& self, int arg_0, int arg_1) -> void { return self.SetPoint2( arg_0, arg_1); }))
    .function("SetShowLegend", &vtkChart::SetShowLegend)
    .function("GetShowLegend", &vtkChart::GetShowLegend)
    .function("GetLegend", &vtkChart::GetLegend, emscripten::allow_raw_pointers())
    .function("SetTitle", &vtkChart::SetTitle)
    .function("GetTitle", &vtkChart::GetTitle)
    .function("GetTitleProperties", &vtkChart::GetTitleProperties, emscripten::allow_raw_pointers())
    .function("SetBottomBorder", &vtkChart::SetBottomBorder)
    .function("SetTopBorder", &vtkChart::SetTopBorder)
    .function("SetLeftBorder", &vtkChart::SetLeftBorder)
    .function("SetRightBorder", &vtkChart::SetRightBorder)
    .function("SetBorders", &vtkChart::SetBorders)
    .function("SetSize", &vtkChart::SetSize)
    .function("GetSize", &vtkChart::GetSize)
    .function("SetLayoutStrategy", &vtkChart::SetLayoutStrategy)
    .function("GetLayoutStrategy", &vtkChart::GetLayoutStrategy)
    .function("SetAutoSize", &vtkChart::SetAutoSize)
    .function("GetAutoSize", &vtkChart::GetAutoSize)
    .function("SetRenderEmpty", &vtkChart::SetRenderEmpty)
    .function("GetRenderEmpty", &vtkChart::GetRenderEmpty)
    .function("SetActionToButton", &vtkChart::SetActionToButton)
    .function("GetActionToButton", &vtkChart::GetActionToButton)
    .function("SetClickActionToButton", &vtkChart::SetClickActionToButton)
    .function("GetClickActionToButton", &vtkChart::GetClickActionToButton)
    .function("SetBackgroundBrush", &vtkChart::SetBackgroundBrush, emscripten::allow_raw_pointers())
    .function("GetBackgroundBrush", &vtkChart::GetBackgroundBrush, emscripten::allow_raw_pointers())
    .function("SetSelectionMode", &vtkChart::SetSelectionMode)
    .function("GetSelectionModeMinValue", &vtkChart::GetSelectionModeMinValue)
    .function("GetSelectionModeMaxValue", &vtkChart::GetSelectionModeMaxValue)
    .function("GetSelectionMode", &vtkChart::GetSelectionMode);
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkChart_0_2_constants) {
  const struct { const char *name; int value; }
    constants[16] = {
      { "vtkChart_LINE", vtkChart::LINE },
      { "vtkChart_POINTS", vtkChart::POINTS },
      { "vtkChart_BAR", vtkChart::BAR },
      { "vtkChart_STACKED", vtkChart::STACKED },
      { "vtkChart_BAG", vtkChart::BAG },
      { "vtkChart_FUNCTIONALBAG", vtkChart::FUNCTIONALBAG },
      { "vtkChart_AREA", vtkChart::AREA },
      { "vtkChart_PAN", vtkChart::PAN },
      { "vtkChart_ZOOM", vtkChart::ZOOM },
      { "vtkChart_ZOOM_AXIS", vtkChart::ZOOM_AXIS },
      { "vtkChart_SELECT", vtkChart::SELECT },
      { "vtkChart_SELECT_RECTANGLE", vtkChart::SELECT_RECTANGLE },
      { "vtkChart_SELECT_POLYGON", vtkChart::SELECT_POLYGON },
      { "vtkChart_CLICK_AND_DRAG", vtkChart::CLICK_AND_DRAG },
      { "vtkChart_NOTIFY", vtkChart::NOTIFY },
      { "vtkChart_ACTION_TYPES_COUNT", vtkChart::ACTION_TYPES_COUNT },
  };
  for (int c = 0; c < 16; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkChart_1_2_constants) {
    typedef vtkChart::EventIds cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[1] = {
      { "vtkChart_EventIds_UpdateRange", vtkChart::UpdateRange },
  };
  for (int c = 0; c < 1; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkChart_2_2_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "vtkChart_SELECTION_ROWS", vtkChart::SELECTION_ROWS },
      { "vtkChart_SELECTION_PLOTS", vtkChart::SELECTION_PLOTS },
      { "vtkChart_SELECTION_COLUMNS", vtkChart::SELECTION_COLUMNS },
      { "vtkChart_FILL_SCENE", vtkChart::FILL_SCENE },
      { "vtkChart_FILL_RECT", vtkChart::FILL_RECT },
      { "vtkChart_AXES_TO_RECT", vtkChart::AXES_TO_RECT },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
