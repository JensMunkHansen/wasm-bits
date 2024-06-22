// JavaScript wrapper for vtkAttributeSmoothingFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkAttributeSmoothingFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkAttributeSmoothingFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnsignedCharArray.h"
#include "vtkAttributeSmoothingFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeometry_vtkAttributeSmoothingFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkAttributeSmoothingFilter>(vtkAttributeSmoothingFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAttributeSmoothingFilter_class) {
  using SmoothingStrategyType=vtkAttributeSmoothingFilter::SmoothingStrategyType;
  using InterpolationWeightsType=vtkAttributeSmoothingFilter::InterpolationWeightsType;
  emscripten::class_<vtkAttributeSmoothingFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkAttributeSmoothingFilter")
    .smart_ptr<vtkSmartPointer<vtkAttributeSmoothingFilter>>("vtkSmartPointer<vtkAttributeSmoothingFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAttributeSmoothingFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAttributeSmoothingFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAttributeSmoothingFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAttributeSmoothingFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAttributeSmoothingFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAttributeSmoothingFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAttributeSmoothingFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfIterations", &vtkAttributeSmoothingFilter::SetNumberOfIterations)
    .function("GetNumberOfIterationsMinValue", &vtkAttributeSmoothingFilter::GetNumberOfIterationsMinValue)
    .function("GetNumberOfIterationsMaxValue", &vtkAttributeSmoothingFilter::GetNumberOfIterationsMaxValue)
    .function("GetNumberOfIterations", &vtkAttributeSmoothingFilter::GetNumberOfIterations)
    .function("SetRelaxationFactor", &vtkAttributeSmoothingFilter::SetRelaxationFactor)
    .function("GetRelaxationFactorMinValue", &vtkAttributeSmoothingFilter::GetRelaxationFactorMinValue)
    .function("GetRelaxationFactorMaxValue", &vtkAttributeSmoothingFilter::GetRelaxationFactorMaxValue)
    .function("GetRelaxationFactor", &vtkAttributeSmoothingFilter::GetRelaxationFactor)
    .function("SetSmoothingStrategy", &vtkAttributeSmoothingFilter::SetSmoothingStrategy)
    .function("GetSmoothingStrategyMinValue", &vtkAttributeSmoothingFilter::GetSmoothingStrategyMinValue)
    .function("GetSmoothingStrategyMaxValue", &vtkAttributeSmoothingFilter::GetSmoothingStrategyMaxValue)
    .function("GetSmoothingStrategy", &vtkAttributeSmoothingFilter::GetSmoothingStrategy)
    .function("SetSmoothingStrategyToAllPoints", &vtkAttributeSmoothingFilter::SetSmoothingStrategyToAllPoints)
    .function("SetSmoothingStrategyToAllButBoundary", &vtkAttributeSmoothingFilter::SetSmoothingStrategyToAllButBoundary)
    .function("SetSmoothingStrategyToAdjacentToBoundary", &vtkAttributeSmoothingFilter::SetSmoothingStrategyToAdjacentToBoundary)
    .function("SetSmoothingStrategyToSmoothingMask", &vtkAttributeSmoothingFilter::SetSmoothingStrategyToSmoothingMask)
    .function("SetSmoothingMask", &vtkAttributeSmoothingFilter::SetSmoothingMask, emscripten::allow_raw_pointers())
    .function("GetSmoothingMask", &vtkAttributeSmoothingFilter::GetSmoothingMask, emscripten::allow_raw_pointers())
    .function("SetWeightsType", &vtkAttributeSmoothingFilter::SetWeightsType)
    .function("GetWeightsTypeMinValue", &vtkAttributeSmoothingFilter::GetWeightsTypeMinValue)
    .function("GetWeightsTypeMaxValue", &vtkAttributeSmoothingFilter::GetWeightsTypeMaxValue)
    .function("GetWeightsType", &vtkAttributeSmoothingFilter::GetWeightsType)
    .function("SetWeightsTypeToAverage", &vtkAttributeSmoothingFilter::SetWeightsTypeToAverage)
    .function("SetWeightsTypeToDistance", &vtkAttributeSmoothingFilter::SetWeightsTypeToDistance)
    .function("SetWeightsTypeToDistance2", &vtkAttributeSmoothingFilter::SetWeightsTypeToDistance2)
    .function("AddExcludedArray", &vtkAttributeSmoothingFilter::AddExcludedArray)
    .function("ClearExcludedArrays", &vtkAttributeSmoothingFilter::ClearExcludedArrays)
    .function("GetNumberOfExcludedArrays", &vtkAttributeSmoothingFilter::GetNumberOfExcludedArrays)
    .function("GetExcludedArray", emscripten::optional_override([](vtkAttributeSmoothingFilter& self, int arg_0) -> std::string {  return self.GetExcludedArray( arg_0);}));
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeometry_vtkAttributeSmoothingFilter_0_2_constants) {
    typedef vtkAttributeSmoothingFilter::SmoothingStrategyType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkAttributeSmoothingFilter_SmoothingStrategyType_ALL_POINTS", vtkAttributeSmoothingFilter::ALL_POINTS },
      { "vtkAttributeSmoothingFilter_SmoothingStrategyType_ALL_BUT_BOUNDARY", vtkAttributeSmoothingFilter::ALL_BUT_BOUNDARY },
      { "vtkAttributeSmoothingFilter_SmoothingStrategyType_ADJACENT_TO_BOUNDARY", vtkAttributeSmoothingFilter::ADJACENT_TO_BOUNDARY },
      { "vtkAttributeSmoothingFilter_SmoothingStrategyType_SMOOTHING_MASK", vtkAttributeSmoothingFilter::SMOOTHING_MASK },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeometry_vtkAttributeSmoothingFilter_1_2_constants) {
    typedef vtkAttributeSmoothingFilter::InterpolationWeightsType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkAttributeSmoothingFilter_InterpolationWeightsType_AVERAGE", vtkAttributeSmoothingFilter::AVERAGE },
      { "vtkAttributeSmoothingFilter_InterpolationWeightsType_DISTANCE", vtkAttributeSmoothingFilter::DISTANCE },
      { "vtkAttributeSmoothingFilter_InterpolationWeightsType_DISTANCE2", vtkAttributeSmoothingFilter::DISTANCE2 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
