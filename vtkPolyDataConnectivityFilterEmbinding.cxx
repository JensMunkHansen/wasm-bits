// JavaScript wrapper for vtkPolyDataConnectivityFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkPolyDataConnectivityFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkPolyDataConnectivityFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdTypeArray.h"
#include "vtkIdList.h"
#include "vtkPolyDataConnectivityFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkPolyDataConnectivityFilter_0_1_constants) {
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
template<> void emscripten::internal::raw_destructor<vtkPolyDataConnectivityFilter>(vtkPolyDataConnectivityFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataConnectivityFilter_class) {
  emscripten::class_<vtkPolyDataConnectivityFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkPolyDataConnectivityFilter")
    .smart_ptr<vtkSmartPointer<vtkPolyDataConnectivityFilter>>("vtkSmartPointer<vtkPolyDataConnectivityFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolyDataConnectivityFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataConnectivityFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataConnectivityFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataConnectivityFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataConnectivityFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataConnectivityFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataConnectivityFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetRegionSizes", &vtkPolyDataConnectivityFilter::GetRegionSizes, emscripten::allow_raw_pointers())
    .function("SetScalarConnectivity", &vtkPolyDataConnectivityFilter::SetScalarConnectivity)
    .function("GetScalarConnectivity", &vtkPolyDataConnectivityFilter::GetScalarConnectivity)
    .function("ScalarConnectivityOn", &vtkPolyDataConnectivityFilter::ScalarConnectivityOn)
    .function("ScalarConnectivityOff", &vtkPolyDataConnectivityFilter::ScalarConnectivityOff)
    .function("SetFullScalarConnectivity", &vtkPolyDataConnectivityFilter::SetFullScalarConnectivity)
    .function("GetFullScalarConnectivity", &vtkPolyDataConnectivityFilter::GetFullScalarConnectivity)
    .function("FullScalarConnectivityOn", &vtkPolyDataConnectivityFilter::FullScalarConnectivityOn)
    .function("FullScalarConnectivityOff", &vtkPolyDataConnectivityFilter::FullScalarConnectivityOff)
    .function("SetScalarRange", emscripten::select_overload<void(vtkPolyDataConnectivityFilter&, double, double)>([](vtkPolyDataConnectivityFilter& self, double arg_0, double arg_1) -> void { return self.SetScalarRange( arg_0, arg_1); }))
    .function("SetExtractionMode", &vtkPolyDataConnectivityFilter::SetExtractionMode)
    .function("GetExtractionModeMinValue", &vtkPolyDataConnectivityFilter::GetExtractionModeMinValue)
    .function("GetExtractionModeMaxValue", &vtkPolyDataConnectivityFilter::GetExtractionModeMaxValue)
    .function("GetExtractionMode", &vtkPolyDataConnectivityFilter::GetExtractionMode)
    .function("SetExtractionModeToPointSeededRegions", &vtkPolyDataConnectivityFilter::SetExtractionModeToPointSeededRegions)
    .function("SetExtractionModeToCellSeededRegions", &vtkPolyDataConnectivityFilter::SetExtractionModeToCellSeededRegions)
    .function("SetExtractionModeToLargestRegion", &vtkPolyDataConnectivityFilter::SetExtractionModeToLargestRegion)
    .function("SetExtractionModeToSpecifiedRegions", &vtkPolyDataConnectivityFilter::SetExtractionModeToSpecifiedRegions)
    .function("SetExtractionModeToClosestPointRegion", &vtkPolyDataConnectivityFilter::SetExtractionModeToClosestPointRegion)
    .function("SetExtractionModeToAllRegions", &vtkPolyDataConnectivityFilter::SetExtractionModeToAllRegions)
    .function("GetExtractionModeAsString", emscripten::optional_override([](vtkPolyDataConnectivityFilter& self) -> std::string {  return self.GetExtractionModeAsString();}))
    .function("InitializeSeedList", &vtkPolyDataConnectivityFilter::InitializeSeedList)
    .function("AddSeed", &vtkPolyDataConnectivityFilter::AddSeed)
    .function("DeleteSeed", &vtkPolyDataConnectivityFilter::DeleteSeed)
    .function("InitializeSpecifiedRegionList", &vtkPolyDataConnectivityFilter::InitializeSpecifiedRegionList)
    .function("AddSpecifiedRegion", &vtkPolyDataConnectivityFilter::AddSpecifiedRegion)
    .function("DeleteSpecifiedRegion", &vtkPolyDataConnectivityFilter::DeleteSpecifiedRegion)
    .function("SetClosestPoint", emscripten::select_overload<void(vtkPolyDataConnectivityFilter&, double, double, double)>([](vtkPolyDataConnectivityFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetClosestPoint( arg_0, arg_1, arg_2); }))
    .function("GetNumberOfExtractedRegions", &vtkPolyDataConnectivityFilter::GetNumberOfExtractedRegions)
    .function("SetColorRegions", &vtkPolyDataConnectivityFilter::SetColorRegions)
    .function("GetColorRegions", &vtkPolyDataConnectivityFilter::GetColorRegions)
    .function("ColorRegionsOn", &vtkPolyDataConnectivityFilter::ColorRegionsOn)
    .function("ColorRegionsOff", &vtkPolyDataConnectivityFilter::ColorRegionsOff)
    .function("SetMarkVisitedPointIds", &vtkPolyDataConnectivityFilter::SetMarkVisitedPointIds)
    .function("GetMarkVisitedPointIds", &vtkPolyDataConnectivityFilter::GetMarkVisitedPointIds)
    .function("MarkVisitedPointIdsOn", &vtkPolyDataConnectivityFilter::MarkVisitedPointIdsOn)
    .function("MarkVisitedPointIdsOff", &vtkPolyDataConnectivityFilter::MarkVisitedPointIdsOff)
    .function("GetVisitedPointIds", &vtkPolyDataConnectivityFilter::GetVisitedPointIds, emscripten::allow_raw_pointers())
    .function("SetOutputPointsPrecision", &vtkPolyDataConnectivityFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkPolyDataConnectivityFilter::GetOutputPointsPrecision);
}
