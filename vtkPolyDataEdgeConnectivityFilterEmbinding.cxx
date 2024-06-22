// JavaScript wrapper for vtkPolyDataEdgeConnectivityFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkPolyDataEdgeConnectivityFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkPolyDataEdgeConnectivityFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkIdTypeArray.h"
#include "vtkPolyDataEdgeConnectivityFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkPolyDataEdgeConnectivityFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[7] = {
      { "VTK_EXTRACT_POINT_SEEDED_REGIONS", 1 },
      { "VTK_EXTRACT_CELL_SEEDED_REGIONS", 2 },
      { "VTK_EXTRACT_SPECIFIED_REGIONS", 3 },
      { "VTK_EXTRACT_LARGEST_REGION", 4 },
      { "VTK_EXTRACT_ALL_REGIONS", 5 },
      { "VTK_EXTRACT_CLOSEST_POINT_REGION", 6 },
      { "VTK_EXTRACT_LARGE_REGIONS", 7 },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkPolyDataEdgeConnectivityFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPolyDataEdgeConnectivityFilter>(vtkPolyDataEdgeConnectivityFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataEdgeConnectivityFilter_class) {
  using RegionGrowingType=vtkPolyDataEdgeConnectivityFilter::RegionGrowingType;
  emscripten::class_<vtkPolyDataEdgeConnectivityFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkPolyDataEdgeConnectivityFilter")
    .smart_ptr<vtkSmartPointer<vtkPolyDataEdgeConnectivityFilter>>("vtkSmartPointer<vtkPolyDataEdgeConnectivityFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolyDataEdgeConnectivityFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataEdgeConnectivityFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataEdgeConnectivityFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataEdgeConnectivityFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataEdgeConnectivityFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataEdgeConnectivityFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataEdgeConnectivityFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetExtractionMode", &vtkPolyDataEdgeConnectivityFilter::SetExtractionMode)
    .function("GetExtractionModeMinValue", &vtkPolyDataEdgeConnectivityFilter::GetExtractionModeMinValue)
    .function("GetExtractionModeMaxValue", &vtkPolyDataEdgeConnectivityFilter::GetExtractionModeMaxValue)
    .function("GetExtractionMode", &vtkPolyDataEdgeConnectivityFilter::GetExtractionMode)
    .function("SetExtractionModeToPointSeededRegions", &vtkPolyDataEdgeConnectivityFilter::SetExtractionModeToPointSeededRegions)
    .function("SetExtractionModeToCellSeededRegions", &vtkPolyDataEdgeConnectivityFilter::SetExtractionModeToCellSeededRegions)
    .function("SetExtractionModeToLargestRegion", &vtkPolyDataEdgeConnectivityFilter::SetExtractionModeToLargestRegion)
    .function("SetExtractionModeToSpecifiedRegions", &vtkPolyDataEdgeConnectivityFilter::SetExtractionModeToSpecifiedRegions)
    .function("SetExtractionModeToClosestPointRegion", &vtkPolyDataEdgeConnectivityFilter::SetExtractionModeToClosestPointRegion)
    .function("SetExtractionModeToLargeRegions", &vtkPolyDataEdgeConnectivityFilter::SetExtractionModeToLargeRegions)
    .function("SetExtractionModeToAllRegions", &vtkPolyDataEdgeConnectivityFilter::SetExtractionModeToAllRegions)
    .function("GetExtractionModeAsString", emscripten::optional_override([](vtkPolyDataEdgeConnectivityFilter& self) -> std::string {  return self.GetExtractionModeAsString();}))
    .function("SetBarrierEdges", &vtkPolyDataEdgeConnectivityFilter::SetBarrierEdges)
    .function("GetBarrierEdges", &vtkPolyDataEdgeConnectivityFilter::GetBarrierEdges)
    .function("BarrierEdgesOn", &vtkPolyDataEdgeConnectivityFilter::BarrierEdgesOn)
    .function("BarrierEdgesOff", &vtkPolyDataEdgeConnectivityFilter::BarrierEdgesOff)
    .function("SetSourceData", &vtkPolyDataEdgeConnectivityFilter::SetSourceData, emscripten::allow_raw_pointers())
    .function("SetSourceConnection", &vtkPolyDataEdgeConnectivityFilter::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkPolyDataEdgeConnectivityFilter::GetSource, emscripten::allow_raw_pointers())
    .function("SetBarrierEdgeLength", emscripten::select_overload<void(vtkPolyDataEdgeConnectivityFilter&, double, double)>([](vtkPolyDataEdgeConnectivityFilter& self, double arg_0, double arg_1) -> void { return self.SetBarrierEdgeLength( arg_0, arg_1); }))
    .function("SetScalarConnectivity", &vtkPolyDataEdgeConnectivityFilter::SetScalarConnectivity)
    .function("GetScalarConnectivity", &vtkPolyDataEdgeConnectivityFilter::GetScalarConnectivity)
    .function("ScalarConnectivityOn", &vtkPolyDataEdgeConnectivityFilter::ScalarConnectivityOn)
    .function("ScalarConnectivityOff", &vtkPolyDataEdgeConnectivityFilter::ScalarConnectivityOff)
    .function("SetScalarRange", emscripten::select_overload<void(vtkPolyDataEdgeConnectivityFilter&, double, double)>([](vtkPolyDataEdgeConnectivityFilter& self, double arg_0, double arg_1) -> void { return self.SetScalarRange( arg_0, arg_1); }))
    .function("GetRegionSizes", &vtkPolyDataEdgeConnectivityFilter::GetRegionSizes, emscripten::allow_raw_pointers())
    .function("InitializeSeedList", &vtkPolyDataEdgeConnectivityFilter::InitializeSeedList)
    .function("AddSeed", &vtkPolyDataEdgeConnectivityFilter::AddSeed)
    .function("DeleteSeed", &vtkPolyDataEdgeConnectivityFilter::DeleteSeed)
    .function("InitializeSpecifiedRegionList", &vtkPolyDataEdgeConnectivityFilter::InitializeSpecifiedRegionList)
    .function("AddSpecifiedRegion", &vtkPolyDataEdgeConnectivityFilter::AddSpecifiedRegion)
    .function("DeleteSpecifiedRegion", &vtkPolyDataEdgeConnectivityFilter::DeleteSpecifiedRegion)
    .function("GetNumberOfSpecifiedRegions", &vtkPolyDataEdgeConnectivityFilter::GetNumberOfSpecifiedRegions)
    .function("SetClosestPoint", emscripten::select_overload<void(vtkPolyDataEdgeConnectivityFilter&, double, double, double)>([](vtkPolyDataEdgeConnectivityFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetClosestPoint( arg_0, arg_1, arg_2); }))
    .function("SetRegionGrowing", &vtkPolyDataEdgeConnectivityFilter::SetRegionGrowing)
    .function("GetRegionGrowingMinValue", &vtkPolyDataEdgeConnectivityFilter::GetRegionGrowingMinValue)
    .function("GetRegionGrowingMaxValue", &vtkPolyDataEdgeConnectivityFilter::GetRegionGrowingMaxValue)
    .function("GetRegionGrowing", &vtkPolyDataEdgeConnectivityFilter::GetRegionGrowing)
    .function("SetRegionGrowingOff", &vtkPolyDataEdgeConnectivityFilter::SetRegionGrowingOff)
    .function("GrowLargeRegionsOff", &vtkPolyDataEdgeConnectivityFilter::GrowLargeRegionsOff)
    .function("GrowSmallRegionsOff", &vtkPolyDataEdgeConnectivityFilter::GrowSmallRegionsOff)
    .function("SetRegionGrowingToLargeRegions", &vtkPolyDataEdgeConnectivityFilter::SetRegionGrowingToLargeRegions)
    .function("GrowLargeRegionsOn", &vtkPolyDataEdgeConnectivityFilter::GrowLargeRegionsOn)
    .function("SetRegionGrowingToSmallRegions", &vtkPolyDataEdgeConnectivityFilter::SetRegionGrowingToSmallRegions)
    .function("GrowSmallRegionsOn", &vtkPolyDataEdgeConnectivityFilter::GrowSmallRegionsOn)
    .function("SetLargeRegionThreshold", &vtkPolyDataEdgeConnectivityFilter::SetLargeRegionThreshold)
    .function("GetLargeRegionThresholdMinValue", &vtkPolyDataEdgeConnectivityFilter::GetLargeRegionThresholdMinValue)
    .function("GetLargeRegionThresholdMaxValue", &vtkPolyDataEdgeConnectivityFilter::GetLargeRegionThresholdMaxValue)
    .function("GetLargeRegionThreshold", &vtkPolyDataEdgeConnectivityFilter::GetLargeRegionThreshold)
    .function("GetNumberOfExtractedRegions", &vtkPolyDataEdgeConnectivityFilter::GetNumberOfExtractedRegions)
    .function("GetTotalArea", &vtkPolyDataEdgeConnectivityFilter::GetTotalArea)
    .function("SetColorRegions", &vtkPolyDataEdgeConnectivityFilter::SetColorRegions)
    .function("GetColorRegions", &vtkPolyDataEdgeConnectivityFilter::GetColorRegions)
    .function("ColorRegionsOn", &vtkPolyDataEdgeConnectivityFilter::ColorRegionsOn)
    .function("ColorRegionsOff", &vtkPolyDataEdgeConnectivityFilter::ColorRegionsOff)
    .function("SetCellRegionAreas", &vtkPolyDataEdgeConnectivityFilter::SetCellRegionAreas)
    .function("GetCellRegionAreas", &vtkPolyDataEdgeConnectivityFilter::GetCellRegionAreas)
    .function("CellRegionAreasOn", &vtkPolyDataEdgeConnectivityFilter::CellRegionAreasOn)
    .function("CellRegionAreasOff", &vtkPolyDataEdgeConnectivityFilter::CellRegionAreasOff)
    .function("SetOutputPointsPrecision", &vtkPolyDataEdgeConnectivityFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkPolyDataEdgeConnectivityFilter::GetOutputPointsPrecision);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkPolyDataEdgeConnectivityFilter_0_2_constants) {
    typedef vtkPolyDataEdgeConnectivityFilter::RegionGrowingType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkPolyDataEdgeConnectivityFilter_RegionGrowingType_RegionGrowingOff", vtkPolyDataEdgeConnectivityFilter::RegionGrowingOff },
      { "vtkPolyDataEdgeConnectivityFilter_RegionGrowingType_LargeRegions", vtkPolyDataEdgeConnectivityFilter::LargeRegions },
      { "vtkPolyDataEdgeConnectivityFilter_RegionGrowingType_SmallRegions", vtkPolyDataEdgeConnectivityFilter::SmallRegions },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
