// JavaScript wrapper for vtkAxis with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkAxisEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkAxis.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkTextProperty.h"
#include "vtkStdString.h"
#include "vtkPen.h"
#include "vtkContext2D.h"
#include "vtkDoubleArray.h"
#include "vtkFloatArray.h"
#include "vtkStringArray.h"
#include "vtkRect.h"
#include "vtkContextMouseEvent.h"
#include "vtkAxis.h"

EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkAxis_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkAxis>(vtkAxis * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAxis_class) {
  using Location=vtkAxis::Location;
  emscripten::class_<vtkAxis, emscripten::base<vtkContextItem>>("vtkAxis")
    .smart_ptr<vtkSmartPointer<vtkAxis>>("vtkSmartPointer<vtkAxis>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAxis>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxis::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAxis& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAxis::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAxis::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxis::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAxis& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPosition", &vtkAxis::SetPosition)
    .function("GetPosition", &vtkAxis::GetPosition)
    .function("SetPoint1", emscripten::select_overload<void(vtkAxis&, const vtkVector2f&)>([](vtkAxis& self, const vtkVector2f& arg_0) -> void { return self.SetPoint1( arg_0); }))
    .function("SetPoint1", emscripten::select_overload<void(vtkAxis&, float, float)>([](vtkAxis& self, float arg_0, float arg_1) -> void { return self.SetPoint1( arg_0, arg_1); }))
    .function("GetPosition1", &vtkAxis::GetPosition1)
    .function("SetPoint2", emscripten::select_overload<void(vtkAxis&, const vtkVector2f&)>([](vtkAxis& self, const vtkVector2f& arg_0) -> void { return self.SetPoint2( arg_0); }))
    .function("SetPoint2", emscripten::select_overload<void(vtkAxis&, float, float)>([](vtkAxis& self, float arg_0, float arg_1) -> void { return self.SetPoint2( arg_0, arg_1); }))
    .function("GetPosition2", &vtkAxis::GetPosition2)
    .function("SetNumberOfTicks", &vtkAxis::SetNumberOfTicks)
    .function("GetNumberOfTicks", &vtkAxis::GetNumberOfTicks)
    .function("SetTickLength", &vtkAxis::SetTickLength)
    .function("GetTickLength", &vtkAxis::GetTickLength)
    .function("GetLabelProperties", &vtkAxis::GetLabelProperties, emscripten::allow_raw_pointers())
    .function("SetMinimum", &vtkAxis::SetMinimum)
    .function("GetMinimum", &vtkAxis::GetMinimum)
    .function("SetMaximum", &vtkAxis::SetMaximum)
    .function("GetMaximum", &vtkAxis::GetMaximum)
    .function("SetUnscaledMinimum", &vtkAxis::SetUnscaledMinimum)
    .function("GetUnscaledMinimum", &vtkAxis::GetUnscaledMinimum)
    .function("SetUnscaledMaximum", &vtkAxis::SetUnscaledMaximum)
    .function("GetUnscaledMaximum", &vtkAxis::GetUnscaledMaximum)
    .function("SetRange", emscripten::select_overload<void(vtkAxis&, double, double)>([](vtkAxis& self, double arg_0, double arg_1) -> void { return self.SetRange( arg_0, arg_1); }))
    .function("SetUnscaledRange", emscripten::select_overload<void(vtkAxis&, double, double)>([](vtkAxis& self, double arg_0, double arg_1) -> void { return self.SetUnscaledRange( arg_0, arg_1); }))
    .function("GetRange", emscripten::optional_override([](vtkAxis& self, std::uintptr_t arg_0) -> void {  return self.GetRange(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("GetUnscaledRange", emscripten::optional_override([](vtkAxis& self, std::uintptr_t arg_0) -> void {  return self.GetUnscaledRange(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetMinimumLimit", &vtkAxis::SetMinimumLimit)
    .function("GetMinimumLimit", &vtkAxis::GetMinimumLimit)
    .function("SetMaximumLimit", &vtkAxis::SetMaximumLimit)
    .function("GetMaximumLimit", &vtkAxis::GetMaximumLimit)
    .function("SetUnscaledMinimumLimit", &vtkAxis::SetUnscaledMinimumLimit)
    .function("GetUnscaledMinimumLimit", &vtkAxis::GetUnscaledMinimumLimit)
    .function("SetUnscaledMaximumLimit", &vtkAxis::SetUnscaledMaximumLimit)
    .function("GetUnscaledMaximumLimit", &vtkAxis::GetUnscaledMaximumLimit)
    .function("SetMargins", emscripten::select_overload<void(vtkAxis&, int, int)>([](vtkAxis& self, int arg_0, int arg_1) -> void { return self.SetMargins( arg_0, arg_1); }))
    .function("SetTitle", &vtkAxis::SetTitle)
    .function("GetTitle", &vtkAxis::GetTitle)
    .function("GetTitleProperties", &vtkAxis::GetTitleProperties, emscripten::allow_raw_pointers())
    .function("GetLogScaleActive", &vtkAxis::GetLogScaleActive)
    .function("GetLogScale", &vtkAxis::GetLogScale)
    .function("SetLogScale", &vtkAxis::SetLogScale)
    .function("LogScaleOn", &vtkAxis::LogScaleOn)
    .function("LogScaleOff", &vtkAxis::LogScaleOff)
    .function("SetGridVisible", &vtkAxis::SetGridVisible)
    .function("GetGridVisible", &vtkAxis::GetGridVisible)
    .function("SetLabelsVisible", &vtkAxis::SetLabelsVisible)
    .function("GetLabelsVisible", &vtkAxis::GetLabelsVisible)
    .function("SetRangeLabelsVisible", &vtkAxis::SetRangeLabelsVisible)
    .function("GetRangeLabelsVisible", &vtkAxis::GetRangeLabelsVisible)
    .function("SetLabelOffset", &vtkAxis::SetLabelOffset)
    .function("GetLabelOffset", &vtkAxis::GetLabelOffset)
    .function("SetTicksVisible", &vtkAxis::SetTicksVisible)
    .function("GetTicksVisible", &vtkAxis::GetTicksVisible)
    .function("SetAxisVisible", &vtkAxis::SetAxisVisible)
    .function("GetAxisVisible", &vtkAxis::GetAxisVisible)
    .function("SetTitleVisible", &vtkAxis::SetTitleVisible)
    .function("GetTitleVisible", &vtkAxis::GetTitleVisible)
    .function("SetPrecision", &vtkAxis::SetPrecision)
    .function("GetPrecision", &vtkAxis::GetPrecision)
    .function("SetLabelFormat", &vtkAxis::SetLabelFormat)
    .function("GetLabelFormat", &vtkAxis::GetLabelFormat)
    .function("SetRangeLabelFormat", &vtkAxis::SetRangeLabelFormat)
    .function("GetRangeLabelFormat", &vtkAxis::GetRangeLabelFormat)
    .function("SetNotation", &vtkAxis::SetNotation)
    .function("GetNotation", &vtkAxis::GetNotation)
    .function("SetBehavior", &vtkAxis::SetBehavior)
    .function("GetBehavior", &vtkAxis::GetBehavior)
    .function("SetPen", &vtkAxis::SetPen, emscripten::allow_raw_pointers())
    .function("GetPen", &vtkAxis::GetPen, emscripten::allow_raw_pointers())
    .function("SetGridPen", &vtkAxis::SetGridPen, emscripten::allow_raw_pointers())
    .function("GetGridPen", &vtkAxis::GetGridPen, emscripten::allow_raw_pointers())
    .function("SetTickLabelAlgorithm", &vtkAxis::SetTickLabelAlgorithm)
    .function("GetTickLabelAlgorithm", &vtkAxis::GetTickLabelAlgorithm)
    .function("SetScalingFactor", &vtkAxis::SetScalingFactor)
    .function("GetScalingFactor", &vtkAxis::GetScalingFactor)
    .function("SetShift", &vtkAxis::SetShift)
    .function("GetShift", &vtkAxis::GetShift)
    .function("Update", &vtkAxis::Update)
    .function("Paint", &vtkAxis::Paint, emscripten::allow_raw_pointers())
    .function("AutoScale", &vtkAxis::AutoScale)
    .function("RecalculateTickSpacing", &vtkAxis::RecalculateTickSpacing)
    .function("GetTickPositions", &vtkAxis::GetTickPositions, emscripten::allow_raw_pointers())
    .function("GetTickScenePositions", &vtkAxis::GetTickScenePositions, emscripten::allow_raw_pointers())
    .function("GetTickLabels", &vtkAxis::GetTickLabels, emscripten::allow_raw_pointers())
    .function("SetCustomTickPositions", &vtkAxis::SetCustomTickPositions, emscripten::allow_raw_pointers())
    .function("GetBoundingRect", &vtkAxis::GetBoundingRect, emscripten::allow_raw_pointers())
    .class_function("NiceNumber", &vtkAxis::NiceNumber)
    .function("GenerateSimpleLabel", &vtkAxis::GenerateSimpleLabel)
    .function("Hit", &vtkAxis::Hit);
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkAxis_0_2_constants) {
    typedef vtkAxis::Location cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkAxis_Location_LEFT", vtkAxis::LEFT },
      { "vtkAxis_Location_BOTTOM", vtkAxis::BOTTOM },
      { "vtkAxis_Location_RIGHT", vtkAxis::RIGHT },
      { "vtkAxis_Location_TOP", vtkAxis::TOP },
      { "vtkAxis_Location_PARALLEL", vtkAxis::PARALLEL },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkAxis_1_2_constants) {
  const struct { const char *name; int value; }
    constants[9] = {
      { "vtkAxis_TICK_SIMPLE", vtkAxis::TICK_SIMPLE },
      { "vtkAxis_TICK_WILKINSON_EXTENDED", vtkAxis::TICK_WILKINSON_EXTENDED },
      { "vtkAxis_STANDARD_NOTATION", vtkAxis::STANDARD_NOTATION },
      { "vtkAxis_SCIENTIFIC_NOTATION", vtkAxis::SCIENTIFIC_NOTATION },
      { "vtkAxis_FIXED_NOTATION", vtkAxis::FIXED_NOTATION },
      { "vtkAxis_PRINTF_NOTATION", vtkAxis::PRINTF_NOTATION },
      { "vtkAxis_AUTO", vtkAxis::AUTO },
      { "vtkAxis_FIXED", vtkAxis::FIXED },
      { "vtkAxis_CUSTOM", vtkAxis::CUSTOM },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
