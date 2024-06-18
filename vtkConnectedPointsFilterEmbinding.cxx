// JavaScript wrapper for vtkConnectedPointsFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkConnectedPointsFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkConnectedPointsFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractPointLocator.h"
#include "vtkConnectedPointsFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkConnectedPointsFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "VTK_EXTRACT_POINT_SEEDED_REGIONS", 1 },
      { "VTK_EXTRACT_SPECIFIED_REGIONS", 3 },
      { "VTK_EXTRACT_LARGEST_REGION", 4 },
      { "VTK_EXTRACT_ALL_REGIONS", 5 },
      { "VTK_EXTRACT_CLOSEST_POINT_REGION", 6 },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkConnectedPointsFilter>(vtkConnectedPointsFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConnectedPointsFilter_class) {
  emscripten::class_<vtkConnectedPointsFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkConnectedPointsFilter")
    .smart_ptr<vtkSmartPointer<vtkConnectedPointsFilter>>("vtkSmartPointer<vtkConnectedPointsFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkConnectedPointsFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConnectedPointsFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConnectedPointsFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConnectedPointsFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConnectedPointsFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConnectedPointsFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConnectedPointsFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkConnectedPointsFilter::SetRadius)
    .function("GetRadiusMinValue", &vtkConnectedPointsFilter::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkConnectedPointsFilter::GetRadiusMaxValue)
    .function("GetRadius", &vtkConnectedPointsFilter::GetRadius)
    .function("SetExtractionMode", &vtkConnectedPointsFilter::SetExtractionMode)
    .function("GetExtractionModeMinValue", &vtkConnectedPointsFilter::GetExtractionModeMinValue)
    .function("GetExtractionModeMaxValue", &vtkConnectedPointsFilter::GetExtractionModeMaxValue)
    .function("GetExtractionMode", &vtkConnectedPointsFilter::GetExtractionMode)
    .function("SetExtractionModeToPointSeededRegions", &vtkConnectedPointsFilter::SetExtractionModeToPointSeededRegions)
    .function("SetExtractionModeToLargestRegion", &vtkConnectedPointsFilter::SetExtractionModeToLargestRegion)
    .function("SetExtractionModeToSpecifiedRegions", &vtkConnectedPointsFilter::SetExtractionModeToSpecifiedRegions)
    .function("SetExtractionModeToClosestPointRegion", &vtkConnectedPointsFilter::SetExtractionModeToClosestPointRegion)
    .function("SetExtractionModeToAllRegions", &vtkConnectedPointsFilter::SetExtractionModeToAllRegions)
    .function("GetExtractionModeAsString", emscripten::optional_override([](vtkConnectedPointsFilter& self) -> std::string {  return self.GetExtractionModeAsString();}))
    .function("SetClosestPoint", emscripten::select_overload<void(vtkConnectedPointsFilter&, double, double, double)>([](vtkConnectedPointsFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetClosestPoint( arg_0, arg_1, arg_2); }))
    .function("InitializeSeedList", &vtkConnectedPointsFilter::InitializeSeedList)
    .function("AddSeed", &vtkConnectedPointsFilter::AddSeed)
    .function("DeleteSeed", &vtkConnectedPointsFilter::DeleteSeed)
    .function("InitializeSpecifiedRegionList", &vtkConnectedPointsFilter::InitializeSpecifiedRegionList)
    .function("AddSpecifiedRegion", &vtkConnectedPointsFilter::AddSpecifiedRegion)
    .function("DeleteSpecifiedRegion", &vtkConnectedPointsFilter::DeleteSpecifiedRegion)
    .function("SetAlignedNormals", &vtkConnectedPointsFilter::SetAlignedNormals)
    .function("GetAlignedNormals", &vtkConnectedPointsFilter::GetAlignedNormals)
    .function("AlignedNormalsOn", &vtkConnectedPointsFilter::AlignedNormalsOn)
    .function("AlignedNormalsOff", &vtkConnectedPointsFilter::AlignedNormalsOff)
    .function("SetNormalAngle", &vtkConnectedPointsFilter::SetNormalAngle)
    .function("GetNormalAngleMinValue", &vtkConnectedPointsFilter::GetNormalAngleMinValue)
    .function("GetNormalAngleMaxValue", &vtkConnectedPointsFilter::GetNormalAngleMaxValue)
    .function("GetNormalAngle", &vtkConnectedPointsFilter::GetNormalAngle)
    .function("SetScalarConnectivity", &vtkConnectedPointsFilter::SetScalarConnectivity)
    .function("GetScalarConnectivity", &vtkConnectedPointsFilter::GetScalarConnectivity)
    .function("ScalarConnectivityOn", &vtkConnectedPointsFilter::ScalarConnectivityOn)
    .function("ScalarConnectivityOff", &vtkConnectedPointsFilter::ScalarConnectivityOff)
    .function("SetScalarRange", emscripten::select_overload<void(vtkConnectedPointsFilter&, double, double)>([](vtkConnectedPointsFilter& self, double arg_0, double arg_1) -> void { return self.SetScalarRange( arg_0, arg_1); }))
    .function("GetNumberOfExtractedRegions", &vtkConnectedPointsFilter::GetNumberOfExtractedRegions)
    .function("SetLocator", &vtkConnectedPointsFilter::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkConnectedPointsFilter::GetLocator, emscripten::allow_raw_pointers());
}
