// JavaScript wrapper for vtkPointSmoothingFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkPointSmoothingFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkPointSmoothingFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkPlane.h"
#include "vtkAbstractPointLocator.h"
#include "vtkPointSmoothingFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPointSmoothingFilter>(vtkPointSmoothingFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointSmoothingFilter_class) {
  emscripten::class_<vtkPointSmoothingFilter, emscripten::base<vtkPointSetAlgorithm>>("vtkPointSmoothingFilter")
    .smart_ptr<vtkSmartPointer<vtkPointSmoothingFilter>>("vtkSmartPointer<vtkPointSmoothingFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointSmoothingFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSmoothingFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointSmoothingFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointSmoothingFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointSmoothingFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSmoothingFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointSmoothingFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNeighborhoodSize", &vtkPointSmoothingFilter::SetNeighborhoodSize)
    .function("GetNeighborhoodSizeMinValue", &vtkPointSmoothingFilter::GetNeighborhoodSizeMinValue)
    .function("GetNeighborhoodSizeMaxValue", &vtkPointSmoothingFilter::GetNeighborhoodSizeMaxValue)
    .function("GetNeighborhoodSize", &vtkPointSmoothingFilter::GetNeighborhoodSize)
    .function("SetSmoothingMode", &vtkPointSmoothingFilter::SetSmoothingMode)
    .function("GetSmoothingModeMinValue", &vtkPointSmoothingFilter::GetSmoothingModeMinValue)
    .function("GetSmoothingModeMaxValue", &vtkPointSmoothingFilter::GetSmoothingModeMaxValue)
    .function("GetSmoothingMode", &vtkPointSmoothingFilter::GetSmoothingMode)
    .function("SetSmoothingModeToDefault", &vtkPointSmoothingFilter::SetSmoothingModeToDefault)
    .function("SetSmoothingModeToGeometric", &vtkPointSmoothingFilter::SetSmoothingModeToGeometric)
    .function("SetSmoothingModeToUniform", &vtkPointSmoothingFilter::SetSmoothingModeToUniform)
    .function("SetSmoothingModeToScalars", &vtkPointSmoothingFilter::SetSmoothingModeToScalars)
    .function("SetSmoothingModeToTensors", &vtkPointSmoothingFilter::SetSmoothingModeToTensors)
    .function("SetSmoothingModeToFrameField", &vtkPointSmoothingFilter::SetSmoothingModeToFrameField)
    .function("SetFrameFieldArray", &vtkPointSmoothingFilter::SetFrameFieldArray, emscripten::allow_raw_pointers())
    .function("GetFrameFieldArray", &vtkPointSmoothingFilter::GetFrameFieldArray, emscripten::allow_raw_pointers())
    .function("SetNumberOfIterations", &vtkPointSmoothingFilter::SetNumberOfIterations)
    .function("GetNumberOfIterationsMinValue", &vtkPointSmoothingFilter::GetNumberOfIterationsMinValue)
    .function("GetNumberOfIterationsMaxValue", &vtkPointSmoothingFilter::GetNumberOfIterationsMaxValue)
    .function("GetNumberOfIterations", &vtkPointSmoothingFilter::GetNumberOfIterations)
    .function("SetNumberOfSubIterations", &vtkPointSmoothingFilter::SetNumberOfSubIterations)
    .function("GetNumberOfSubIterationsMinValue", &vtkPointSmoothingFilter::GetNumberOfSubIterationsMinValue)
    .function("GetNumberOfSubIterationsMaxValue", &vtkPointSmoothingFilter::GetNumberOfSubIterationsMaxValue)
    .function("GetNumberOfSubIterations", &vtkPointSmoothingFilter::GetNumberOfSubIterations)
    .function("SetMaximumStepSize", &vtkPointSmoothingFilter::SetMaximumStepSize)
    .function("GetMaximumStepSizeMinValue", &vtkPointSmoothingFilter::GetMaximumStepSizeMinValue)
    .function("GetMaximumStepSizeMaxValue", &vtkPointSmoothingFilter::GetMaximumStepSizeMaxValue)
    .function("GetMaximumStepSize", &vtkPointSmoothingFilter::GetMaximumStepSize)
    .function("SetConvergence", &vtkPointSmoothingFilter::SetConvergence)
    .function("GetConvergenceMinValue", &vtkPointSmoothingFilter::GetConvergenceMinValue)
    .function("GetConvergenceMaxValue", &vtkPointSmoothingFilter::GetConvergenceMaxValue)
    .function("GetConvergence", &vtkPointSmoothingFilter::GetConvergence)
    .function("SetEnableConstraints", &vtkPointSmoothingFilter::SetEnableConstraints)
    .function("GetEnableConstraints", &vtkPointSmoothingFilter::GetEnableConstraints)
    .function("EnableConstraintsOn", &vtkPointSmoothingFilter::EnableConstraintsOn)
    .function("EnableConstraintsOff", &vtkPointSmoothingFilter::EnableConstraintsOff)
    .function("SetFixedAngle", &vtkPointSmoothingFilter::SetFixedAngle)
    .function("GetFixedAngleMinValue", &vtkPointSmoothingFilter::GetFixedAngleMinValue)
    .function("GetFixedAngleMaxValue", &vtkPointSmoothingFilter::GetFixedAngleMaxValue)
    .function("GetFixedAngle", &vtkPointSmoothingFilter::GetFixedAngle)
    .function("SetBoundaryAngle", &vtkPointSmoothingFilter::SetBoundaryAngle)
    .function("GetBoundaryAngleMinValue", &vtkPointSmoothingFilter::GetBoundaryAngleMinValue)
    .function("GetBoundaryAngleMaxValue", &vtkPointSmoothingFilter::GetBoundaryAngleMaxValue)
    .function("GetBoundaryAngle", &vtkPointSmoothingFilter::GetBoundaryAngle)
    .function("SetGenerateConstraintScalars", &vtkPointSmoothingFilter::SetGenerateConstraintScalars)
    .function("GetGenerateConstraintScalars", &vtkPointSmoothingFilter::GetGenerateConstraintScalars)
    .function("GenerateConstraintScalarsOn", &vtkPointSmoothingFilter::GenerateConstraintScalarsOn)
    .function("GenerateConstraintScalarsOff", &vtkPointSmoothingFilter::GenerateConstraintScalarsOff)
    .function("SetGenerateConstraintNormals", &vtkPointSmoothingFilter::SetGenerateConstraintNormals)
    .function("GetGenerateConstraintNormals", &vtkPointSmoothingFilter::GetGenerateConstraintNormals)
    .function("GenerateConstraintNormalsOn", &vtkPointSmoothingFilter::GenerateConstraintNormalsOn)
    .function("GenerateConstraintNormalsOff", &vtkPointSmoothingFilter::GenerateConstraintNormalsOff)
    .function("SetComputePackingRadius", &vtkPointSmoothingFilter::SetComputePackingRadius)
    .function("GetComputePackingRadius", &vtkPointSmoothingFilter::GetComputePackingRadius)
    .function("ComputePackingRadiusOn", &vtkPointSmoothingFilter::ComputePackingRadiusOn)
    .function("ComputePackingRadiusOff", &vtkPointSmoothingFilter::ComputePackingRadiusOff)
    .function("SetPackingRadius", &vtkPointSmoothingFilter::SetPackingRadius)
    .function("GetPackingRadiusMinValue", &vtkPointSmoothingFilter::GetPackingRadiusMinValue)
    .function("GetPackingRadiusMaxValue", &vtkPointSmoothingFilter::GetPackingRadiusMaxValue)
    .function("GetPackingRadius", &vtkPointSmoothingFilter::GetPackingRadius)
    .function("SetPackingFactor", &vtkPointSmoothingFilter::SetPackingFactor)
    .function("GetPackingFactorMinValue", &vtkPointSmoothingFilter::GetPackingFactorMinValue)
    .function("GetPackingFactorMaxValue", &vtkPointSmoothingFilter::GetPackingFactorMaxValue)
    .function("GetPackingFactor", &vtkPointSmoothingFilter::GetPackingFactor)
    .function("SetAttractionFactor", &vtkPointSmoothingFilter::SetAttractionFactor)
    .function("GetAttractionFactorMinValue", &vtkPointSmoothingFilter::GetAttractionFactorMinValue)
    .function("GetAttractionFactorMaxValue", &vtkPointSmoothingFilter::GetAttractionFactorMaxValue)
    .function("GetAttractionFactor", &vtkPointSmoothingFilter::GetAttractionFactor)
    .function("SetMotionConstraint", &vtkPointSmoothingFilter::SetMotionConstraint)
    .function("GetMotionConstraint", &vtkPointSmoothingFilter::GetMotionConstraint)
    .function("SetMotionConstraintToUnconstrained", &vtkPointSmoothingFilter::SetMotionConstraintToUnconstrained)
    .function("SetMotionConstraintToPlane", &vtkPointSmoothingFilter::SetMotionConstraintToPlane)
    .function("SetPlane", &vtkPointSmoothingFilter::SetPlane, emscripten::allow_raw_pointers())
    .function("GetPlane", &vtkPointSmoothingFilter::GetPlane, emscripten::allow_raw_pointers())
    .function("SetLocator", &vtkPointSmoothingFilter::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkPointSmoothingFilter::GetLocator, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkPointSmoothingFilter_0_2_constants) {
  const struct { const char *name; int value; }
    constants[8] = {
      { "vtkPointSmoothingFilter_DEFAULT_SMOOTHING", vtkPointSmoothingFilter::DEFAULT_SMOOTHING },
      { "vtkPointSmoothingFilter_GEOMETRIC_SMOOTHING", vtkPointSmoothingFilter::GEOMETRIC_SMOOTHING },
      { "vtkPointSmoothingFilter_UNIFORM_SMOOTHING", vtkPointSmoothingFilter::UNIFORM_SMOOTHING },
      { "vtkPointSmoothingFilter_SCALAR_SMOOTHING", vtkPointSmoothingFilter::SCALAR_SMOOTHING },
      { "vtkPointSmoothingFilter_TENSOR_SMOOTHING", vtkPointSmoothingFilter::TENSOR_SMOOTHING },
      { "vtkPointSmoothingFilter_FRAME_FIELD_SMOOTHING", vtkPointSmoothingFilter::FRAME_FIELD_SMOOTHING },
      { "vtkPointSmoothingFilter_UNCONSTRAINED_MOTION", vtkPointSmoothingFilter::UNCONSTRAINED_MOTION },
      { "vtkPointSmoothingFilter_PLANE_MOTION", vtkPointSmoothingFilter::PLANE_MOTION },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
