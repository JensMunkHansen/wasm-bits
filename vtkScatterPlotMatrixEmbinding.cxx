// JavaScript wrapper for vtkScatterPlotMatrix with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkScatterPlotMatrixEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkScatterPlotMatrix.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkContextScene.h"
#include "vtkVector.h"
#include "vtkAnnotationLink.h"
#include "vtkTable.h"
#include "vtkStdString.h"
#include "vtkStringArray.h"
#include "vtkColor.h"
#include "vtkContextMouseEvent.h"
#include "vtkTextProperty.h"
#include "vtkTooltipItem.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkChart.h"
#include "vtkScatterPlotMatrix.h"

template<> void emscripten::internal::raw_destructor<vtkScatterPlotMatrix>(vtkScatterPlotMatrix * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkScatterPlotMatrix_class) {
  emscripten::class_<vtkScatterPlotMatrix, emscripten::base<vtkChartMatrix>>("vtkScatterPlotMatrix")
    .smart_ptr<vtkSmartPointer<vtkScatterPlotMatrix>>("vtkSmartPointer<vtkScatterPlotMatrix>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkScatterPlotMatrix>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScatterPlotMatrix::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkScatterPlotMatrix& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkScatterPlotMatrix::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkScatterPlotMatrix::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScatterPlotMatrix::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkScatterPlotMatrix& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", &vtkScatterPlotMatrix::Update)
    .function("Paint", &vtkScatterPlotMatrix::Paint, emscripten::allow_raw_pointers())
    .function("SetScene", &vtkScatterPlotMatrix::SetScene, emscripten::allow_raw_pointers())
    .function("SetActivePlot", &vtkScatterPlotMatrix::SetActivePlot)
    .function("SetSize", &vtkScatterPlotMatrix::SetSize)
    .function("GetActivePlot", &vtkScatterPlotMatrix::GetActivePlot)
    .function("GetAnnotationLink", &vtkScatterPlotMatrix::GetAnnotationLink, emscripten::allow_raw_pointers())
    .function("SetInput", &vtkScatterPlotMatrix::SetInput, emscripten::allow_raw_pointers())
    .function("SetColumnVisibility", &vtkScatterPlotMatrix::SetColumnVisibility)
    .function("InsertVisibleColumn", &vtkScatterPlotMatrix::InsertVisibleColumn)
    .function("GetColumnVisibility", &vtkScatterPlotMatrix::GetColumnVisibility)
    .function("SetColumnVisibilityAll", &vtkScatterPlotMatrix::SetColumnVisibilityAll)
    .function("GetVisibleColumns", &vtkScatterPlotMatrix::GetVisibleColumns, emscripten::allow_raw_pointers())
    .function("SetVisibleColumns", &vtkScatterPlotMatrix::SetVisibleColumns, emscripten::allow_raw_pointers())
    .function("SetNumberOfBins", &vtkScatterPlotMatrix::SetNumberOfBins)
    .function("GetNumberOfBins", &vtkScatterPlotMatrix::GetNumberOfBins)
    .function("SetPlotColor", &vtkScatterPlotMatrix::SetPlotColor)
    .function("SetPlotMarkerStyle", &vtkScatterPlotMatrix::SetPlotMarkerStyle)
    .function("SetPlotMarkerSize", &vtkScatterPlotMatrix::SetPlotMarkerSize)
    .function("Hit", &vtkScatterPlotMatrix::Hit)
    .function("MouseMoveEvent", &vtkScatterPlotMatrix::MouseMoveEvent)
    .function("MouseButtonPressEvent", &vtkScatterPlotMatrix::MouseButtonPressEvent)
    .function("MouseButtonReleaseEvent", &vtkScatterPlotMatrix::MouseButtonReleaseEvent)
    .function("GetPlotType", emscripten::select_overload<int(vtkScatterPlotMatrix&, const vtkVector2i&)>([](vtkScatterPlotMatrix& self, const vtkVector2i& arg_0) -> int { return self.GetPlotType( arg_0); }))
    .function("GetPlotType", emscripten::select_overload<int(vtkScatterPlotMatrix&, int, int)>([](vtkScatterPlotMatrix& self, int arg_0, int arg_1) -> int { return self.GetPlotType( arg_0, arg_1); }))
    .function("SetTitle", &vtkScatterPlotMatrix::SetTitle)
    .function("GetTitle", &vtkScatterPlotMatrix::GetTitle)
    .function("SetTitleProperties", &vtkScatterPlotMatrix::SetTitleProperties, emscripten::allow_raw_pointers())
    .function("GetTitleProperties", &vtkScatterPlotMatrix::GetTitleProperties, emscripten::allow_raw_pointers())
    .function("SetGridVisibility", &vtkScatterPlotMatrix::SetGridVisibility)
    .function("GetGridVisibility", &vtkScatterPlotMatrix::GetGridVisibility)
    .function("SetBackgroundColor", &vtkScatterPlotMatrix::SetBackgroundColor)
    .function("GetBackgroundColor", &vtkScatterPlotMatrix::GetBackgroundColor)
    .function("SetAxisColor", &vtkScatterPlotMatrix::SetAxisColor)
    .function("GetAxisColor", &vtkScatterPlotMatrix::GetAxisColor)
    .function("SetGridColor", &vtkScatterPlotMatrix::SetGridColor)
    .function("GetGridColor", &vtkScatterPlotMatrix::GetGridColor)
    .function("SetAxisLabelVisibility", &vtkScatterPlotMatrix::SetAxisLabelVisibility)
    .function("GetAxisLabelVisibility", &vtkScatterPlotMatrix::GetAxisLabelVisibility)
    .function("SetAxisLabelProperties", &vtkScatterPlotMatrix::SetAxisLabelProperties, emscripten::allow_raw_pointers())
    .function("GetAxisLabelProperties", &vtkScatterPlotMatrix::GetAxisLabelProperties, emscripten::allow_raw_pointers())
    .function("SetAxisLabelNotation", &vtkScatterPlotMatrix::SetAxisLabelNotation)
    .function("GetAxisLabelNotation", &vtkScatterPlotMatrix::GetAxisLabelNotation)
    .function("SetAxisLabelPrecision", &vtkScatterPlotMatrix::SetAxisLabelPrecision)
    .function("GetAxisLabelPrecision", &vtkScatterPlotMatrix::GetAxisLabelPrecision)
    .function("SetTooltipNotation", &vtkScatterPlotMatrix::SetTooltipNotation)
    .function("SetTooltipPrecision", &vtkScatterPlotMatrix::SetTooltipPrecision)
    .function("GetTooltipNotation", &vtkScatterPlotMatrix::GetTooltipNotation)
    .function("GetTooltipPrecision", &vtkScatterPlotMatrix::GetTooltipPrecision)
    .function("SetTooltip", &vtkScatterPlotMatrix::SetTooltip, emscripten::allow_raw_pointers())
    .function("GetTooltip", &vtkScatterPlotMatrix::GetTooltip, emscripten::allow_raw_pointers())
    .function("SetIndexedLabels", &vtkScatterPlotMatrix::SetIndexedLabels, emscripten::allow_raw_pointers())
    .function("GetIndexedLabels", &vtkScatterPlotMatrix::GetIndexedLabels, emscripten::allow_raw_pointers())
    .function("SetScatterPlotSelectedRowColumnColor", &vtkScatterPlotMatrix::SetScatterPlotSelectedRowColumnColor)
    .function("GetScatterPlotSelectedRowColumnColor", &vtkScatterPlotMatrix::GetScatterPlotSelectedRowColumnColor)
    .function("SetScatterPlotSelectedActiveColor", &vtkScatterPlotMatrix::SetScatterPlotSelectedActiveColor)
    .function("GetScatterPlotSelectedActiveColor", &vtkScatterPlotMatrix::GetScatterPlotSelectedActiveColor)
    .function("UpdateSettings", &vtkScatterPlotMatrix::UpdateSettings)
    .function("UpdateChartSettings", &vtkScatterPlotMatrix::UpdateChartSettings)
    .function("SetSelectionMode", &vtkScatterPlotMatrix::SetSelectionMode)
    .function("GetSelectionMode", &vtkScatterPlotMatrix::GetSelectionMode)
    .function("GetColumnName", &vtkScatterPlotMatrix::GetColumnName)
    .function("GetRowName", &vtkScatterPlotMatrix::GetRowName)
    .function("SetNumberOfFrames", &vtkScatterPlotMatrix::SetNumberOfFrames)
    .function("GetNumberOfFrames", &vtkScatterPlotMatrix::GetNumberOfFrames)
    .function("ClearAnimationPath", &vtkScatterPlotMatrix::ClearAnimationPath)
    .function("AddAnimationPath", &vtkScatterPlotMatrix::AddAnimationPath)
    .function("GetNumberOfAnimationPathElements", &vtkScatterPlotMatrix::GetNumberOfAnimationPathElements)
    .function("GetAnimationPathElement", &vtkScatterPlotMatrix::GetAnimationPathElement)
    .function("BeginAnimationPath", &vtkScatterPlotMatrix::BeginAnimationPath, emscripten::allow_raw_pointers())
    .function("AdvanceAnimation", &vtkScatterPlotMatrix::AdvanceAnimation)
    .function("GetMainChart", &vtkScatterPlotMatrix::GetMainChart, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkScatterPlotMatrix_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkScatterPlotMatrix_SCATTERPLOT", vtkScatterPlotMatrix::SCATTERPLOT },
      { "vtkScatterPlotMatrix_HISTOGRAM", vtkScatterPlotMatrix::HISTOGRAM },
      { "vtkScatterPlotMatrix_ACTIVEPLOT", vtkScatterPlotMatrix::ACTIVEPLOT },
      { "vtkScatterPlotMatrix_NOPLOT", vtkScatterPlotMatrix::NOPLOT },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
