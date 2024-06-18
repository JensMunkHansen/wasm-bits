// JavaScript wrapper for vtkPolyDataPointSampler with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkPolyDataPointSamplerEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkPolyDataPointSampler.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyDataPointSampler.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataPointSampler>(vtkPolyDataPointSampler * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataPointSampler_class) {
  emscripten::class_<vtkPolyDataPointSampler, emscripten::base<vtkPolyDataAlgorithm>>("vtkPolyDataPointSampler")
    .smart_ptr<vtkSmartPointer<vtkPolyDataPointSampler>>("vtkSmartPointer<vtkPolyDataPointSampler>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolyDataPointSampler>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataPointSampler::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataPointSampler& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataPointSampler::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataPointSampler::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataPointSampler::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataPointSampler& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDistance", &vtkPolyDataPointSampler::SetDistance)
    .function("GetDistanceMinValue", &vtkPolyDataPointSampler::GetDistanceMinValue)
    .function("GetDistanceMaxValue", &vtkPolyDataPointSampler::GetDistanceMaxValue)
    .function("GetDistance", &vtkPolyDataPointSampler::GetDistance)
    .function("SetPointGenerationMode", &vtkPolyDataPointSampler::SetPointGenerationMode)
    .function("GetPointGenerationModeMinValue", &vtkPolyDataPointSampler::GetPointGenerationModeMinValue)
    .function("GetPointGenerationModeMaxValue", &vtkPolyDataPointSampler::GetPointGenerationModeMaxValue)
    .function("GetPointGenerationMode", &vtkPolyDataPointSampler::GetPointGenerationMode)
    .function("SetPointGenerationModeToRegular", &vtkPolyDataPointSampler::SetPointGenerationModeToRegular)
    .function("SetPointGenerationModeToRandom", &vtkPolyDataPointSampler::SetPointGenerationModeToRandom)
    .function("GetGenerateVertexPoints", &vtkPolyDataPointSampler::GetGenerateVertexPoints)
    .function("SetGenerateVertexPoints", &vtkPolyDataPointSampler::SetGenerateVertexPoints)
    .function("GenerateVertexPointsOn", &vtkPolyDataPointSampler::GenerateVertexPointsOn)
    .function("GenerateVertexPointsOff", &vtkPolyDataPointSampler::GenerateVertexPointsOff)
    .function("GetGenerateEdgePoints", &vtkPolyDataPointSampler::GetGenerateEdgePoints)
    .function("SetGenerateEdgePoints", &vtkPolyDataPointSampler::SetGenerateEdgePoints)
    .function("GenerateEdgePointsOn", &vtkPolyDataPointSampler::GenerateEdgePointsOn)
    .function("GenerateEdgePointsOff", &vtkPolyDataPointSampler::GenerateEdgePointsOff)
    .function("GetGenerateInteriorPoints", &vtkPolyDataPointSampler::GetGenerateInteriorPoints)
    .function("SetGenerateInteriorPoints", &vtkPolyDataPointSampler::SetGenerateInteriorPoints)
    .function("GenerateInteriorPointsOn", &vtkPolyDataPointSampler::GenerateInteriorPointsOn)
    .function("GenerateInteriorPointsOff", &vtkPolyDataPointSampler::GenerateInteriorPointsOff)
    .function("GetGenerateVertices", &vtkPolyDataPointSampler::GetGenerateVertices)
    .function("SetGenerateVertices", &vtkPolyDataPointSampler::SetGenerateVertices)
    .function("GenerateVerticesOn", &vtkPolyDataPointSampler::GenerateVerticesOn)
    .function("GenerateVerticesOff", &vtkPolyDataPointSampler::GenerateVerticesOff)
    .function("GetInterpolatePointData", &vtkPolyDataPointSampler::GetInterpolatePointData)
    .function("SetInterpolatePointData", &vtkPolyDataPointSampler::SetInterpolatePointData)
    .function("InterpolatePointDataOn", &vtkPolyDataPointSampler::InterpolatePointDataOn)
    .function("InterpolatePointDataOff", &vtkPolyDataPointSampler::InterpolatePointDataOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkPolyDataPointSampler_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkPolyDataPointSampler_REGULAR_GENERATION", vtkPolyDataPointSampler::REGULAR_GENERATION },
      { "vtkPolyDataPointSampler_RANDOM_GENERATION", vtkPolyDataPointSampler::RANDOM_GENERATION },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
