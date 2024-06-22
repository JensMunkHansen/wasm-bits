// JavaScript wrapper for vtkEuclideanClusterExtraction with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkEuclideanClusterExtractionEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkEuclideanClusterExtraction.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractPointLocator.h"
#include "vtkEuclideanClusterExtraction.h"

EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkEuclideanClusterExtraction_0_1_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "VTK_EXTRACT_POINT_SEEDED_CLUSTERS", 1 },
      { "VTK_EXTRACT_SPECIFIED_CLUSTERS", 2 },
      { "VTK_EXTRACT_LARGEST_CLUSTER", 3 },
      { "VTK_EXTRACT_ALL_CLUSTERS", 4 },
      { "VTK_EXTRACT_CLOSEST_POINT_CLUSTER", 5 },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkEuclideanClusterExtraction>(vtkEuclideanClusterExtraction * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEuclideanClusterExtraction_class) {
  emscripten::class_<vtkEuclideanClusterExtraction, emscripten::base<vtkPolyDataAlgorithm>>("vtkEuclideanClusterExtraction")
    .smart_ptr<vtkSmartPointer<vtkEuclideanClusterExtraction>>("vtkSmartPointer<vtkEuclideanClusterExtraction>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEuclideanClusterExtraction>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEuclideanClusterExtraction::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEuclideanClusterExtraction& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEuclideanClusterExtraction::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEuclideanClusterExtraction::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEuclideanClusterExtraction::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEuclideanClusterExtraction& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkEuclideanClusterExtraction::SetRadius)
    .function("GetRadiusMinValue", &vtkEuclideanClusterExtraction::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkEuclideanClusterExtraction::GetRadiusMaxValue)
    .function("GetRadius", &vtkEuclideanClusterExtraction::GetRadius)
    .function("SetScalarConnectivity", &vtkEuclideanClusterExtraction::SetScalarConnectivity)
    .function("GetScalarConnectivity", &vtkEuclideanClusterExtraction::GetScalarConnectivity)
    .function("ScalarConnectivityOn", &vtkEuclideanClusterExtraction::ScalarConnectivityOn)
    .function("ScalarConnectivityOff", &vtkEuclideanClusterExtraction::ScalarConnectivityOff)
    .function("SetScalarRange", emscripten::select_overload<void(vtkEuclideanClusterExtraction&, double, double)>([](vtkEuclideanClusterExtraction& self, double arg_0, double arg_1) -> void { return self.SetScalarRange( arg_0, arg_1); }))
    .function("SetExtractionMode", &vtkEuclideanClusterExtraction::SetExtractionMode)
    .function("GetExtractionModeMinValue", &vtkEuclideanClusterExtraction::GetExtractionModeMinValue)
    .function("GetExtractionModeMaxValue", &vtkEuclideanClusterExtraction::GetExtractionModeMaxValue)
    .function("GetExtractionMode", &vtkEuclideanClusterExtraction::GetExtractionMode)
    .function("SetExtractionModeToPointSeededClusters", &vtkEuclideanClusterExtraction::SetExtractionModeToPointSeededClusters)
    .function("SetExtractionModeToLargestCluster", &vtkEuclideanClusterExtraction::SetExtractionModeToLargestCluster)
    .function("SetExtractionModeToSpecifiedClusters", &vtkEuclideanClusterExtraction::SetExtractionModeToSpecifiedClusters)
    .function("SetExtractionModeToClosestPointCluster", &vtkEuclideanClusterExtraction::SetExtractionModeToClosestPointCluster)
    .function("SetExtractionModeToAllClusters", &vtkEuclideanClusterExtraction::SetExtractionModeToAllClusters)
    .function("GetExtractionModeAsString", emscripten::optional_override([](vtkEuclideanClusterExtraction& self) -> std::string {  return self.GetExtractionModeAsString();}))
    .function("InitializeSeedList", &vtkEuclideanClusterExtraction::InitializeSeedList)
    .function("AddSeed", &vtkEuclideanClusterExtraction::AddSeed)
    .function("DeleteSeed", &vtkEuclideanClusterExtraction::DeleteSeed)
    .function("InitializeSpecifiedClusterList", &vtkEuclideanClusterExtraction::InitializeSpecifiedClusterList)
    .function("AddSpecifiedCluster", &vtkEuclideanClusterExtraction::AddSpecifiedCluster)
    .function("DeleteSpecifiedCluster", &vtkEuclideanClusterExtraction::DeleteSpecifiedCluster)
    .function("SetClosestPoint", emscripten::select_overload<void(vtkEuclideanClusterExtraction&, double, double, double)>([](vtkEuclideanClusterExtraction& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetClosestPoint( arg_0, arg_1, arg_2); }))
    .function("GetNumberOfExtractedClusters", &vtkEuclideanClusterExtraction::GetNumberOfExtractedClusters)
    .function("SetColorClusters", &vtkEuclideanClusterExtraction::SetColorClusters)
    .function("GetColorClusters", &vtkEuclideanClusterExtraction::GetColorClusters)
    .function("ColorClustersOn", &vtkEuclideanClusterExtraction::ColorClustersOn)
    .function("ColorClustersOff", &vtkEuclideanClusterExtraction::ColorClustersOff)
    .function("SetLocator", &vtkEuclideanClusterExtraction::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkEuclideanClusterExtraction::GetLocator, emscripten::allow_raw_pointers());
}
