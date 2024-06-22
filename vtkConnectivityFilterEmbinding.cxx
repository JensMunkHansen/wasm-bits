// JavaScript wrapper for vtkConnectivityFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkConnectivityFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkConnectivityFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkConnectivityFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkConnectivityFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "VTK_EXTRACT_POINT_SEEDED_REGIONS", 1 },
      { "VTK_EXTRACT_CELL_SEEDED_REGIONS", 2 },
      { "VTK_EXTRACT_SPECIFIED_REGIONS", 3 },
      { "VTK_EXTRACT_LARGEST_REGION", 4 },
      { "VTK_EXTRACT_ALL_REGIONS", 5 },
      { "VTK_EXTRACT_CLOSEST_POINT_REGION", 6 },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkConnectivityFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkConnectivityFilter>(vtkConnectivityFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConnectivityFilter_class) {
  using RegionIdAssignment=vtkConnectivityFilter::RegionIdAssignment;
  emscripten::class_<vtkConnectivityFilter, emscripten::base<vtkPointSetAlgorithm>>("vtkConnectivityFilter")
    .smart_ptr<vtkSmartPointer<vtkConnectivityFilter>>("vtkSmartPointer<vtkConnectivityFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkConnectivityFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConnectivityFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConnectivityFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConnectivityFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConnectivityFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConnectivityFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConnectivityFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetScalarConnectivity", &vtkConnectivityFilter::SetScalarConnectivity)
    .function("GetScalarConnectivity", &vtkConnectivityFilter::GetScalarConnectivity)
    .function("ScalarConnectivityOn", &vtkConnectivityFilter::ScalarConnectivityOn)
    .function("ScalarConnectivityOff", &vtkConnectivityFilter::ScalarConnectivityOff)
    .function("SetScalarRange", emscripten::select_overload<void(vtkConnectivityFilter&, double, double)>([](vtkConnectivityFilter& self, double arg_0, double arg_1) -> void { return self.SetScalarRange( arg_0, arg_1); }))
    .function("SetExtractionMode", &vtkConnectivityFilter::SetExtractionMode)
    .function("GetExtractionModeMinValue", &vtkConnectivityFilter::GetExtractionModeMinValue)
    .function("GetExtractionModeMaxValue", &vtkConnectivityFilter::GetExtractionModeMaxValue)
    .function("GetExtractionMode", &vtkConnectivityFilter::GetExtractionMode)
    .function("SetExtractionModeToPointSeededRegions", &vtkConnectivityFilter::SetExtractionModeToPointSeededRegions)
    .function("SetExtractionModeToCellSeededRegions", &vtkConnectivityFilter::SetExtractionModeToCellSeededRegions)
    .function("SetExtractionModeToLargestRegion", &vtkConnectivityFilter::SetExtractionModeToLargestRegion)
    .function("SetExtractionModeToSpecifiedRegions", &vtkConnectivityFilter::SetExtractionModeToSpecifiedRegions)
    .function("SetExtractionModeToClosestPointRegion", &vtkConnectivityFilter::SetExtractionModeToClosestPointRegion)
    .function("SetExtractionModeToAllRegions", &vtkConnectivityFilter::SetExtractionModeToAllRegions)
    .function("GetExtractionModeAsString", emscripten::optional_override([](vtkConnectivityFilter& self) -> std::string {  return self.GetExtractionModeAsString();}))
    .function("InitializeSeedList", &vtkConnectivityFilter::InitializeSeedList)
    .function("AddSeed", &vtkConnectivityFilter::AddSeed)
    .function("DeleteSeed", &vtkConnectivityFilter::DeleteSeed)
    .function("InitializeSpecifiedRegionList", &vtkConnectivityFilter::InitializeSpecifiedRegionList)
    .function("AddSpecifiedRegion", &vtkConnectivityFilter::AddSpecifiedRegion)
    .function("DeleteSpecifiedRegion", &vtkConnectivityFilter::DeleteSpecifiedRegion)
    .function("SetClosestPoint", emscripten::select_overload<void(vtkConnectivityFilter&, double, double, double)>([](vtkConnectivityFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetClosestPoint( arg_0, arg_1, arg_2); }))
    .function("GetNumberOfExtractedRegions", &vtkConnectivityFilter::GetNumberOfExtractedRegions)
    .function("SetColorRegions", &vtkConnectivityFilter::SetColorRegions)
    .function("GetColorRegions", &vtkConnectivityFilter::GetColorRegions)
    .function("ColorRegionsOn", &vtkConnectivityFilter::ColorRegionsOn)
    .function("ColorRegionsOff", &vtkConnectivityFilter::ColorRegionsOff)
    .function("SetRegionIdAssignmentMode", &vtkConnectivityFilter::SetRegionIdAssignmentMode)
    .function("GetRegionIdAssignmentMode", &vtkConnectivityFilter::GetRegionIdAssignmentMode)
    .function("SetOutputPointsPrecision", &vtkConnectivityFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkConnectivityFilter::GetOutputPointsPrecision)
    .function("SetCompressArrays", &vtkConnectivityFilter::SetCompressArrays)
    .function("GetCompressArrays", &vtkConnectivityFilter::GetCompressArrays)
    .function("CompressArraysOn", &vtkConnectivityFilter::CompressArraysOn)
    .function("CompressArraysOff", &vtkConnectivityFilter::CompressArraysOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkConnectivityFilter_0_2_constants) {
    typedef vtkConnectivityFilter::RegionIdAssignment cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkConnectivityFilter_RegionIdAssignment_UNSPECIFIED", vtkConnectivityFilter::UNSPECIFIED },
      { "vtkConnectivityFilter_RegionIdAssignment_CELL_COUNT_DESCENDING", vtkConnectivityFilter::CELL_COUNT_DESCENDING },
      { "vtkConnectivityFilter_RegionIdAssignment_CELL_COUNT_ASCENDING", vtkConnectivityFilter::CELL_COUNT_ASCENDING },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
