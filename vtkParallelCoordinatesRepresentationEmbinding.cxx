// JavaScript wrapper for vtkParallelCoordinatesRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkParallelCoordinatesRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkParallelCoordinatesRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewTheme.h"
#include "vtkView.h"
#include "vtkStringArray.h"
#include "vtkAlgorithmOutput.h"
#include "vtkPoints.h"
#include "vtkParallelCoordinatesRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkViewsInfovis_vtkParallelCoordinatesRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkParallelCoordinatesRepresentation>(vtkParallelCoordinatesRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParallelCoordinatesRepresentation_class) {
  using InputPorts=vtkParallelCoordinatesRepresentation::InputPorts;
  emscripten::class_<vtkParallelCoordinatesRepresentation, emscripten::base<vtkRenderedRepresentation>>("vtkParallelCoordinatesRepresentation")
    .smart_ptr<vtkSmartPointer<vtkParallelCoordinatesRepresentation>>("vtkSmartPointer<vtkParallelCoordinatesRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParallelCoordinatesRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelCoordinatesRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParallelCoordinatesRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParallelCoordinatesRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParallelCoordinatesRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelCoordinatesRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParallelCoordinatesRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ApplyViewTheme", &vtkParallelCoordinatesRepresentation::ApplyViewTheme, emscripten::allow_raw_pointers())
    .function("GetHoverString", &vtkParallelCoordinatesRepresentation::GetHoverString, emscripten::allow_raw_pointers())
    .function("SetPositionAndSize", emscripten::optional_override([](vtkParallelCoordinatesRepresentation& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> int {  return self.SetPositionAndSize(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("GetPositionAndSize", emscripten::optional_override([](vtkParallelCoordinatesRepresentation& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> int {  return self.GetPositionAndSize(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("SetAxisTitles", emscripten::select_overload<void(vtkParallelCoordinatesRepresentation&, vtkStringArray*)>([](vtkParallelCoordinatesRepresentation& self, vtkStringArray* arg_0) -> void { return self.SetAxisTitles( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetAxisTitles", emscripten::select_overload<void(vtkParallelCoordinatesRepresentation&, vtkAlgorithmOutput*)>([](vtkParallelCoordinatesRepresentation& self, vtkAlgorithmOutput* arg_0) -> void { return self.SetAxisTitles( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetPlotTitle", emscripten::optional_override([](vtkParallelCoordinatesRepresentation& self, const std::string & arg_0) -> void {  return self.SetPlotTitle( arg_0.c_str());}))
    .function("GetNumberOfAxes", &vtkParallelCoordinatesRepresentation::GetNumberOfAxes)
    .function("GetNumberOfSamples", &vtkParallelCoordinatesRepresentation::GetNumberOfSamples)
    .function("SetNumberOfAxisLabels", &vtkParallelCoordinatesRepresentation::SetNumberOfAxisLabels)
    .function("GetNumberOfAxisLabels", &vtkParallelCoordinatesRepresentation::GetNumberOfAxisLabels)
    .function("SwapAxisPositions", &vtkParallelCoordinatesRepresentation::SwapAxisPositions)
    .function("SetXCoordinateOfPosition", &vtkParallelCoordinatesRepresentation::SetXCoordinateOfPosition)
    .function("GetXCoordinateOfPosition", &vtkParallelCoordinatesRepresentation::GetXCoordinateOfPosition)
    .function("GetXCoordinatesOfPositions", emscripten::optional_override([](vtkParallelCoordinatesRepresentation& self, std::uintptr_t arg_0) -> void {  return self.GetXCoordinatesOfPositions(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("GetPositionNearXCoordinate", &vtkParallelCoordinatesRepresentation::GetPositionNearXCoordinate)
    .function("SetUseCurves", &vtkParallelCoordinatesRepresentation::SetUseCurves)
    .function("GetUseCurves", &vtkParallelCoordinatesRepresentation::GetUseCurves)
    .function("UseCurvesOn", &vtkParallelCoordinatesRepresentation::UseCurvesOn)
    .function("UseCurvesOff", &vtkParallelCoordinatesRepresentation::UseCurvesOff)
    .function("SetCurveResolution", &vtkParallelCoordinatesRepresentation::SetCurveResolution)
    .function("GetCurveResolution", &vtkParallelCoordinatesRepresentation::GetCurveResolution)
    .function("GetLineOpacity", &vtkParallelCoordinatesRepresentation::GetLineOpacity)
    .function("GetFontSize", &vtkParallelCoordinatesRepresentation::GetFontSize)
    .function("SetLineOpacity", &vtkParallelCoordinatesRepresentation::SetLineOpacity)
    .function("SetFontSize", &vtkParallelCoordinatesRepresentation::SetFontSize)
    .function("SetLineColor", emscripten::select_overload<void(vtkParallelCoordinatesRepresentation&, double, double, double)>([](vtkParallelCoordinatesRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetLineColor( arg_0, arg_1, arg_2); }))
    .function("SetAxisColor", emscripten::select_overload<void(vtkParallelCoordinatesRepresentation&, double, double, double)>([](vtkParallelCoordinatesRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAxisColor( arg_0, arg_1, arg_2); }))
    .function("SetAxisLabelColor", emscripten::select_overload<void(vtkParallelCoordinatesRepresentation&, double, double, double)>([](vtkParallelCoordinatesRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAxisLabelColor( arg_0, arg_1, arg_2); }))
    .function("SetAngleBrushThreshold", &vtkParallelCoordinatesRepresentation::SetAngleBrushThreshold)
    .function("GetAngleBrushThreshold", &vtkParallelCoordinatesRepresentation::GetAngleBrushThreshold)
    .function("SetFunctionBrushThreshold", &vtkParallelCoordinatesRepresentation::SetFunctionBrushThreshold)
    .function("GetFunctionBrushThreshold", &vtkParallelCoordinatesRepresentation::GetFunctionBrushThreshold)
    .function("ResetAxes", &vtkParallelCoordinatesRepresentation::ResetAxes)
    .function("LassoSelect", &vtkParallelCoordinatesRepresentation::LassoSelect, emscripten::allow_raw_pointers())
    .function("AngleSelect", emscripten::optional_override([](vtkParallelCoordinatesRepresentation& self, int arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> void {  return self.AngleSelect( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)));}))
    .function("FunctionSelect", emscripten::optional_override([](vtkParallelCoordinatesRepresentation& self, int arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5) -> void {  return self.FunctionSelect( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)),reinterpret_cast<double*>(arg_4 * sizeof(double)),reinterpret_cast<double*>(arg_5 * sizeof(double)));}))
    .function("RangeSelect", emscripten::optional_override([](vtkParallelCoordinatesRepresentation& self, int arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> void {  return self.RangeSelect( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)));}));
}
EMSCRIPTEN_BINDINGS(vtkViewsInfovis_vtkParallelCoordinatesRepresentation_0_2_constants) {
    typedef vtkParallelCoordinatesRepresentation::InputPorts cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkParallelCoordinatesRepresentation_InputPorts_INPUT_DATA", vtkParallelCoordinatesRepresentation::INPUT_DATA },
      { "vtkParallelCoordinatesRepresentation_InputPorts_INPUT_TITLES", vtkParallelCoordinatesRepresentation::INPUT_TITLES },
      { "vtkParallelCoordinatesRepresentation_InputPorts_NUM_INPUT_PORTS", vtkParallelCoordinatesRepresentation::NUM_INPUT_PORTS },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
