// JavaScript wrapper for vtkContourLoopExtraction with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkContourLoopExtractionEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkContourLoopExtraction.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContourLoopExtraction.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkContourLoopExtraction_0_1_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "VTK_LOOP_CLOSURE_OFF", 0 },
      { "VTK_LOOP_CLOSURE_BOUNDARY", 1 },
      { "VTK_LOOP_CLOSURE_ALL", 2 },
      { "VTK_OUTPUT_POLYGONS", 0 },
      { "VTK_OUTPUT_POLYLINES", 1 },
      { "VTK_OUTPUT_BOTH", 2 },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkContourLoopExtraction>(vtkContourLoopExtraction * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContourLoopExtraction_class) {
  emscripten::class_<vtkContourLoopExtraction, emscripten::base<vtkPolyDataAlgorithm>>("vtkContourLoopExtraction")
    .smart_ptr<vtkSmartPointer<vtkContourLoopExtraction>>("vtkSmartPointer<vtkContourLoopExtraction>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkContourLoopExtraction>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourLoopExtraction::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContourLoopExtraction& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContourLoopExtraction::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContourLoopExtraction::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourLoopExtraction::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContourLoopExtraction& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLoopClosure", &vtkContourLoopExtraction::SetLoopClosure)
    .function("GetLoopClosureMinValue", &vtkContourLoopExtraction::GetLoopClosureMinValue)
    .function("GetLoopClosureMaxValue", &vtkContourLoopExtraction::GetLoopClosureMaxValue)
    .function("GetLoopClosure", &vtkContourLoopExtraction::GetLoopClosure)
    .function("SetLoopClosureToOff", &vtkContourLoopExtraction::SetLoopClosureToOff)
    .function("SetLoopClosureToBoundary", &vtkContourLoopExtraction::SetLoopClosureToBoundary)
    .function("SetLoopClosureToAll", &vtkContourLoopExtraction::SetLoopClosureToAll)
    .function("GetLoopClosureAsString", emscripten::optional_override([](vtkContourLoopExtraction& self) -> std::string {  return self.GetLoopClosureAsString();}))
    .function("SetScalarThresholding", &vtkContourLoopExtraction::SetScalarThresholding)
    .function("GetScalarThresholding", &vtkContourLoopExtraction::GetScalarThresholding)
    .function("ScalarThresholdingOn", &vtkContourLoopExtraction::ScalarThresholdingOn)
    .function("ScalarThresholdingOff", &vtkContourLoopExtraction::ScalarThresholdingOff)
    .function("SetScalarRange", emscripten::select_overload<void(vtkContourLoopExtraction&, double, double)>([](vtkContourLoopExtraction& self, double arg_0, double arg_1) -> void { return self.SetScalarRange( arg_0, arg_1); }))
    .function("SetNormal", emscripten::select_overload<void(vtkContourLoopExtraction&, double, double, double)>([](vtkContourLoopExtraction& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("SetOutputMode", &vtkContourLoopExtraction::SetOutputMode)
    .function("GetOutputModeMinValue", &vtkContourLoopExtraction::GetOutputModeMinValue)
    .function("GetOutputModeMaxValue", &vtkContourLoopExtraction::GetOutputModeMaxValue)
    .function("GetOutputMode", &vtkContourLoopExtraction::GetOutputMode)
    .function("SetOutputModeToPolygons", &vtkContourLoopExtraction::SetOutputModeToPolygons)
    .function("SetOutputModeToPolylines", &vtkContourLoopExtraction::SetOutputModeToPolylines)
    .function("SetOutputModeToBoth", &vtkContourLoopExtraction::SetOutputModeToBoth)
    .function("GetOutputModeAsString", emscripten::optional_override([](vtkContourLoopExtraction& self) -> std::string {  return self.GetOutputModeAsString();}))
    .function("SetCleanPoints", &vtkContourLoopExtraction::SetCleanPoints)
    .function("GetCleanPoints", &vtkContourLoopExtraction::GetCleanPoints)
    .function("CleanPointsOn", &vtkContourLoopExtraction::CleanPointsOn)
    .function("CleanPointsOff", &vtkContourLoopExtraction::CleanPointsOff);
}
