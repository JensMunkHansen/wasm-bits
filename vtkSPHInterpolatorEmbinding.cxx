// JavaScript wrapper for vtkSPHInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkSPHInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkSPHInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkAlgorithmOutput.h"
#include "vtkAbstractPointLocator.h"
#include "vtkSPHKernel.h"
#include "vtkStdString.h"
#include "vtkSPHInterpolator.h"

EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkSPHInterpolator_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSPHInterpolator>(vtkSPHInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSPHInterpolator_class) {
  using NullStrategy=vtkSPHInterpolator::NullStrategy;
  emscripten::class_<vtkSPHInterpolator, emscripten::base<vtkDataSetAlgorithm>>("vtkSPHInterpolator")
    .smart_ptr<vtkSmartPointer<vtkSPHInterpolator>>("vtkSmartPointer<vtkSPHInterpolator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSPHInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSPHInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSPHInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSPHInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSPHInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSPHInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSPHInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceData", &vtkSPHInterpolator::SetSourceData, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkSPHInterpolator::GetSource, emscripten::allow_raw_pointers())
    .function("SetSourceConnection", &vtkSPHInterpolator::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("SetLocator", &vtkSPHInterpolator::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkSPHInterpolator::GetLocator, emscripten::allow_raw_pointers())
    .function("SetKernel", &vtkSPHInterpolator::SetKernel, emscripten::allow_raw_pointers())
    .function("GetKernel", &vtkSPHInterpolator::GetKernel, emscripten::allow_raw_pointers())
    .function("SetCutoffArrayName", &vtkSPHInterpolator::SetCutoffArrayName)
    .function("GetCutoffArrayName", &vtkSPHInterpolator::GetCutoffArrayName)
    .function("SetDensityArrayName", &vtkSPHInterpolator::SetDensityArrayName)
    .function("GetDensityArrayName", &vtkSPHInterpolator::GetDensityArrayName)
    .function("SetMassArrayName", &vtkSPHInterpolator::SetMassArrayName)
    .function("GetMassArrayName", &vtkSPHInterpolator::GetMassArrayName)
    .function("AddExcludedArray", &vtkSPHInterpolator::AddExcludedArray)
    .function("ClearExcludedArrays", &vtkSPHInterpolator::ClearExcludedArrays)
    .function("GetNumberOfExcludedArrays", &vtkSPHInterpolator::GetNumberOfExcludedArrays)
    .function("GetExcludedArray", emscripten::optional_override([](vtkSPHInterpolator& self, int arg_0) -> std::string {  return self.GetExcludedArray( arg_0);}))
    .function("AddDerivativeArray", &vtkSPHInterpolator::AddDerivativeArray)
    .function("ClearDerivativeArrays", &vtkSPHInterpolator::ClearDerivativeArrays)
    .function("GetNumberOfDerivativeArrays", &vtkSPHInterpolator::GetNumberOfDerivativeArrays)
    .function("GetDerivativeArray", emscripten::optional_override([](vtkSPHInterpolator& self, int arg_0) -> std::string {  return self.GetDerivativeArray( arg_0);}))
    .function("SetNullPointsStrategy", &vtkSPHInterpolator::SetNullPointsStrategy)
    .function("GetNullPointsStrategy", &vtkSPHInterpolator::GetNullPointsStrategy)
    .function("SetNullPointsStrategyToMaskPoints", &vtkSPHInterpolator::SetNullPointsStrategyToMaskPoints)
    .function("SetNullPointsStrategyToNullValue", &vtkSPHInterpolator::SetNullPointsStrategyToNullValue)
    .function("SetValidPointsMaskArrayName", &vtkSPHInterpolator::SetValidPointsMaskArrayName)
    .function("GetValidPointsMaskArrayName", &vtkSPHInterpolator::GetValidPointsMaskArrayName)
    .function("SetNullValue", &vtkSPHInterpolator::SetNullValue)
    .function("GetNullValue", &vtkSPHInterpolator::GetNullValue)
    .function("SetComputeShepardSum", &vtkSPHInterpolator::SetComputeShepardSum)
    .function("ComputeShepardSumOn", &vtkSPHInterpolator::ComputeShepardSumOn)
    .function("ComputeShepardSumOff", &vtkSPHInterpolator::ComputeShepardSumOff)
    .function("GetComputeShepardSum", &vtkSPHInterpolator::GetComputeShepardSum)
    .function("SetShepardSumArrayName", &vtkSPHInterpolator::SetShepardSumArrayName)
    .function("GetShepardSumArrayName", &vtkSPHInterpolator::GetShepardSumArrayName)
    .function("SetPromoteOutputArrays", &vtkSPHInterpolator::SetPromoteOutputArrays)
    .function("PromoteOutputArraysOn", &vtkSPHInterpolator::PromoteOutputArraysOn)
    .function("PromoteOutputArraysOff", &vtkSPHInterpolator::PromoteOutputArraysOff)
    .function("GetPromoteOutputArrays", &vtkSPHInterpolator::GetPromoteOutputArrays)
    .function("SetPassPointArrays", &vtkSPHInterpolator::SetPassPointArrays)
    .function("PassPointArraysOn", &vtkSPHInterpolator::PassPointArraysOn)
    .function("PassPointArraysOff", &vtkSPHInterpolator::PassPointArraysOff)
    .function("GetPassPointArrays", &vtkSPHInterpolator::GetPassPointArrays)
    .function("SetPassCellArrays", &vtkSPHInterpolator::SetPassCellArrays)
    .function("PassCellArraysOn", &vtkSPHInterpolator::PassCellArraysOn)
    .function("PassCellArraysOff", &vtkSPHInterpolator::PassCellArraysOff)
    .function("GetPassCellArrays", &vtkSPHInterpolator::GetPassCellArrays)
    .function("SetPassFieldArrays", &vtkSPHInterpolator::SetPassFieldArrays)
    .function("PassFieldArraysOn", &vtkSPHInterpolator::PassFieldArraysOn)
    .function("PassFieldArraysOff", &vtkSPHInterpolator::PassFieldArraysOff)
    .function("GetPassFieldArrays", &vtkSPHInterpolator::GetPassFieldArrays)
    .function("SetShepardNormalization", &vtkSPHInterpolator::SetShepardNormalization)
    .function("ShepardNormalizationOn", &vtkSPHInterpolator::ShepardNormalizationOn)
    .function("ShepardNormalizationOff", &vtkSPHInterpolator::ShepardNormalizationOff)
    .function("GetShepardNormalization", &vtkSPHInterpolator::GetShepardNormalization)
    .function("GetMTime", &vtkSPHInterpolator::GetMTime);
}
EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkSPHInterpolator_0_2_constants) {
    typedef vtkSPHInterpolator::NullStrategy cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkSPHInterpolator_NullStrategy_MASK_POINTS", vtkSPHInterpolator::MASK_POINTS },
      { "vtkSPHInterpolator_NullStrategy_NULL_VALUE", vtkSPHInterpolator::NULL_VALUE },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
