// JavaScript wrapper for vtkMaskPoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkMaskPointsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkMaskPoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMaskPoints.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkMaskPoints_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkMaskPoints>(vtkMaskPoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMaskPoints_class) {
  using DistributionType=vtkMaskPoints::DistributionType;
  emscripten::class_<vtkMaskPoints, emscripten::base<vtkPolyDataAlgorithm>>("vtkMaskPoints")
    .smart_ptr<vtkSmartPointer<vtkMaskPoints>>("vtkSmartPointer<vtkMaskPoints>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMaskPoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMaskPoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMaskPoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMaskPoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMaskPoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMaskPoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMaskPoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOnRatio", &vtkMaskPoints::SetOnRatio)
    .function("GetOnRatioMinValue", &vtkMaskPoints::GetOnRatioMinValue)
    .function("GetOnRatioMaxValue", &vtkMaskPoints::GetOnRatioMaxValue)
    .function("GetOnRatio", &vtkMaskPoints::GetOnRatio)
    .function("SetMaximumNumberOfPoints", &vtkMaskPoints::SetMaximumNumberOfPoints)
    .function("GetMaximumNumberOfPointsMinValue", &vtkMaskPoints::GetMaximumNumberOfPointsMinValue)
    .function("GetMaximumNumberOfPointsMaxValue", &vtkMaskPoints::GetMaximumNumberOfPointsMaxValue)
    .function("GetMaximumNumberOfPoints", &vtkMaskPoints::GetMaximumNumberOfPoints)
    .function("SetOffset", &vtkMaskPoints::SetOffset)
    .function("GetOffsetMinValue", &vtkMaskPoints::GetOffsetMinValue)
    .function("GetOffsetMaxValue", &vtkMaskPoints::GetOffsetMaxValue)
    .function("GetOffset", &vtkMaskPoints::GetOffset)
    .function("SetRandomMode", &vtkMaskPoints::SetRandomMode)
    .function("GetRandomMode", &vtkMaskPoints::GetRandomMode)
    .function("RandomModeOn", &vtkMaskPoints::RandomModeOn)
    .function("RandomModeOff", &vtkMaskPoints::RandomModeOff)
    .function("SetRandomSeed", &vtkMaskPoints::SetRandomSeed)
    .function("GetRandomSeed", &vtkMaskPoints::GetRandomSeed)
    .function("SetRandomModeType", &vtkMaskPoints::SetRandomModeType)
    .function("GetRandomModeTypeMinValue", &vtkMaskPoints::GetRandomModeTypeMinValue)
    .function("GetRandomModeTypeMaxValue", &vtkMaskPoints::GetRandomModeTypeMaxValue)
    .function("GetRandomModeType", &vtkMaskPoints::GetRandomModeType)
    .function("SetProportionalMaximumNumberOfPoints", &vtkMaskPoints::SetProportionalMaximumNumberOfPoints)
    .function("GetProportionalMaximumNumberOfPoints", &vtkMaskPoints::GetProportionalMaximumNumberOfPoints)
    .function("ProportionalMaximumNumberOfPointsOn", &vtkMaskPoints::ProportionalMaximumNumberOfPointsOn)
    .function("ProportionalMaximumNumberOfPointsOff", &vtkMaskPoints::ProportionalMaximumNumberOfPointsOff)
    .function("SetGenerateVertices", &vtkMaskPoints::SetGenerateVertices)
    .function("GetGenerateVertices", &vtkMaskPoints::GetGenerateVertices)
    .function("GenerateVerticesOn", &vtkMaskPoints::GenerateVerticesOn)
    .function("GenerateVerticesOff", &vtkMaskPoints::GenerateVerticesOff)
    .function("SetSingleVertexPerCell", &vtkMaskPoints::SetSingleVertexPerCell)
    .function("GetSingleVertexPerCell", &vtkMaskPoints::GetSingleVertexPerCell)
    .function("SingleVertexPerCellOn", &vtkMaskPoints::SingleVertexPerCellOn)
    .function("SingleVertexPerCellOff", &vtkMaskPoints::SingleVertexPerCellOff)
    .function("SetOutputPointsPrecision", &vtkMaskPoints::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkMaskPoints::GetOutputPointsPrecision);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkMaskPoints_0_2_constants) {
    typedef vtkMaskPoints::DistributionType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[6] = {
      { "vtkMaskPoints_DistributionType_RANDOMIZED_ID_STRIDES", vtkMaskPoints::RANDOMIZED_ID_STRIDES },
      { "vtkMaskPoints_DistributionType_RANDOM_SAMPLING", vtkMaskPoints::RANDOM_SAMPLING },
      { "vtkMaskPoints_DistributionType_SPATIALLY_STRATIFIED", vtkMaskPoints::SPATIALLY_STRATIFIED },
      { "vtkMaskPoints_DistributionType_UNIFORM_SPATIAL_BOUNDS", vtkMaskPoints::UNIFORM_SPATIAL_BOUNDS },
      { "vtkMaskPoints_DistributionType_UNIFORM_SPATIAL_SURFACE", vtkMaskPoints::UNIFORM_SPATIAL_SURFACE },
      { "vtkMaskPoints_DistributionType_UNIFORM_SPATIAL_VOLUME", vtkMaskPoints::UNIFORM_SPATIAL_VOLUME },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
