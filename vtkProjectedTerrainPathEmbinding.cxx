// JavaScript wrapper for vtkProjectedTerrainPath with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkProjectedTerrainPathEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkProjectedTerrainPath.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkProjectedTerrainPath.h"

template<> void emscripten::internal::raw_destructor<vtkProjectedTerrainPath>(vtkProjectedTerrainPath * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProjectedTerrainPath_class) {
  emscripten::class_<vtkProjectedTerrainPath, emscripten::base<vtkPolyDataAlgorithm>>("vtkProjectedTerrainPath")
    .smart_ptr<vtkSmartPointer<vtkProjectedTerrainPath>>("vtkSmartPointer<vtkProjectedTerrainPath>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkProjectedTerrainPath>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProjectedTerrainPath::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProjectedTerrainPath& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProjectedTerrainPath::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProjectedTerrainPath::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProjectedTerrainPath::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProjectedTerrainPath& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceData", &vtkProjectedTerrainPath::SetSourceData, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkProjectedTerrainPath::GetSource, emscripten::allow_raw_pointers())
    .function("SetSourceConnection", &vtkProjectedTerrainPath::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("SetProjectionMode", &vtkProjectedTerrainPath::SetProjectionMode)
    .function("GetProjectionModeMinValue", &vtkProjectedTerrainPath::GetProjectionModeMinValue)
    .function("GetProjectionModeMaxValue", &vtkProjectedTerrainPath::GetProjectionModeMaxValue)
    .function("GetProjectionMode", &vtkProjectedTerrainPath::GetProjectionMode)
    .function("SetProjectionModeToSimple", &vtkProjectedTerrainPath::SetProjectionModeToSimple)
    .function("SetProjectionModeToNonOccluded", &vtkProjectedTerrainPath::SetProjectionModeToNonOccluded)
    .function("SetProjectionModeToHug", &vtkProjectedTerrainPath::SetProjectionModeToHug)
    .function("SetHeightOffset", &vtkProjectedTerrainPath::SetHeightOffset)
    .function("GetHeightOffset", &vtkProjectedTerrainPath::GetHeightOffset)
    .function("SetHeightTolerance", &vtkProjectedTerrainPath::SetHeightTolerance)
    .function("GetHeightToleranceMinValue", &vtkProjectedTerrainPath::GetHeightToleranceMinValue)
    .function("GetHeightToleranceMaxValue", &vtkProjectedTerrainPath::GetHeightToleranceMaxValue)
    .function("GetHeightTolerance", &vtkProjectedTerrainPath::GetHeightTolerance)
    .function("SetMaximumNumberOfLines", &vtkProjectedTerrainPath::SetMaximumNumberOfLines)
    .function("GetMaximumNumberOfLinesMinValue", &vtkProjectedTerrainPath::GetMaximumNumberOfLinesMinValue)
    .function("GetMaximumNumberOfLinesMaxValue", &vtkProjectedTerrainPath::GetMaximumNumberOfLinesMaxValue)
    .function("GetMaximumNumberOfLines", &vtkProjectedTerrainPath::GetMaximumNumberOfLines);
}
EMSCRIPTEN_BINDINGS(vtkFiltersHybrid_vtkProjectedTerrainPath_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkProjectedTerrainPath_SIMPLE_PROJECTION", vtkProjectedTerrainPath::SIMPLE_PROJECTION },
      { "vtkProjectedTerrainPath_NONOCCLUDED_PROJECTION", vtkProjectedTerrainPath::NONOCCLUDED_PROJECTION },
      { "vtkProjectedTerrainPath_HUG_PROJECTION", vtkProjectedTerrainPath::HUG_PROJECTION },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
