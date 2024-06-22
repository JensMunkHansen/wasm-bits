// JavaScript wrapper for vtkSelectPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkSelectPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkSelectPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkPolyData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkSelectPolyData.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkSelectPolyData_0_1_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "VTK_INSIDE_SMALLEST_REGION", 0 },
      { "VTK_INSIDE_LARGEST_REGION", 1 },
      { "VTK_INSIDE_CLOSEST_POINT_REGION", 2 },
      { "VTK_GREEDY_EDGE_SEARCH", 0 },
      { "VTK_DIJKSTRA_EDGE_SEARCH", 1 },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkSelectPolyData>(vtkSelectPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSelectPolyData_class) {
  emscripten::class_<vtkSelectPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkSelectPolyData")
    .smart_ptr<vtkSmartPointer<vtkSelectPolyData>>("vtkSmartPointer<vtkSelectPolyData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSelectPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelectPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSelectPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSelectPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSelectPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelectPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSelectPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGenerateSelectionScalars", &vtkSelectPolyData::SetGenerateSelectionScalars)
    .function("GetGenerateSelectionScalars", &vtkSelectPolyData::GetGenerateSelectionScalars)
    .function("GenerateSelectionScalarsOn", &vtkSelectPolyData::GenerateSelectionScalarsOn)
    .function("GenerateSelectionScalarsOff", &vtkSelectPolyData::GenerateSelectionScalarsOff)
    .function("SetSelectionScalarsArrayName", emscripten::optional_override([](vtkSelectPolyData& self, const std::string & arg_0) -> void {  return self.SetSelectionScalarsArrayName( arg_0.c_str());}))
    .function("GetSelectionScalarsArrayName", emscripten::optional_override([](vtkSelectPolyData& self) -> std::string {  return self.GetSelectionScalarsArrayName();}))
    .function("SetInsideOut", &vtkSelectPolyData::SetInsideOut)
    .function("GetInsideOut", &vtkSelectPolyData::GetInsideOut)
    .function("InsideOutOn", &vtkSelectPolyData::InsideOutOn)
    .function("InsideOutOff", &vtkSelectPolyData::InsideOutOff)
    .function("SetEdgeSearchMode", &vtkSelectPolyData::SetEdgeSearchMode)
    .function("GetEdgeSearchModeMinValue", &vtkSelectPolyData::GetEdgeSearchModeMinValue)
    .function("GetEdgeSearchModeMaxValue", &vtkSelectPolyData::GetEdgeSearchModeMaxValue)
    .function("GetEdgeSearchMode", &vtkSelectPolyData::GetEdgeSearchMode)
    .function("SetEdgeSearchModeToGreedy", &vtkSelectPolyData::SetEdgeSearchModeToGreedy)
    .function("SetEdgeSearchModeToDijkstra", &vtkSelectPolyData::SetEdgeSearchModeToDijkstra)
    .function("GetEdgeSearchModeAsString", emscripten::optional_override([](vtkSelectPolyData& self) -> std::string {  return self.GetEdgeSearchModeAsString();}))
    .function("SetLoop", &vtkSelectPolyData::SetLoop, emscripten::allow_raw_pointers())
    .function("GetLoop", &vtkSelectPolyData::GetLoop, emscripten::allow_raw_pointers())
    .function("SetClosestPoint", emscripten::select_overload<void(vtkSelectPolyData&, double, double, double)>([](vtkSelectPolyData& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetClosestPoint( arg_0, arg_1, arg_2); }))
    .function("SetSelectionMode", &vtkSelectPolyData::SetSelectionMode)
    .function("GetSelectionModeMinValue", &vtkSelectPolyData::GetSelectionModeMinValue)
    .function("GetSelectionModeMaxValue", &vtkSelectPolyData::GetSelectionModeMaxValue)
    .function("GetSelectionMode", &vtkSelectPolyData::GetSelectionMode)
    .function("SetSelectionModeToSmallestRegion", &vtkSelectPolyData::SetSelectionModeToSmallestRegion)
    .function("SetSelectionModeToLargestRegion", &vtkSelectPolyData::SetSelectionModeToLargestRegion)
    .function("SetSelectionModeToClosestPointRegion", &vtkSelectPolyData::SetSelectionModeToClosestPointRegion)
    .function("GetSelectionModeAsString", emscripten::optional_override([](vtkSelectPolyData& self) -> std::string {  return self.GetSelectionModeAsString();}))
    .function("SetGenerateUnselectedOutput", &vtkSelectPolyData::SetGenerateUnselectedOutput)
    .function("GetGenerateUnselectedOutput", &vtkSelectPolyData::GetGenerateUnselectedOutput)
    .function("GenerateUnselectedOutputOn", &vtkSelectPolyData::GenerateUnselectedOutputOn)
    .function("GenerateUnselectedOutputOff", &vtkSelectPolyData::GenerateUnselectedOutputOff)
    .function("GetUnselectedOutput", &vtkSelectPolyData::GetUnselectedOutput, emscripten::allow_raw_pointers())
    .function("GetUnselectedOutputPort", &vtkSelectPolyData::GetUnselectedOutputPort, emscripten::allow_raw_pointers())
    .function("GetSelectionEdges", &vtkSelectPolyData::GetSelectionEdges, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkSelectPolyData::GetMTime);
}
