// JavaScript wrapper for vtkPointInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkPointInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkPointInterpolator.h
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
#include "vtkInterpolationKernel.h"
#include "vtkStdString.h"
#include "vtkPointInterpolator.h"

EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkPointInterpolator_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPointInterpolator>(vtkPointInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointInterpolator_class) {
  using Strategy=vtkPointInterpolator::Strategy;
  emscripten::class_<vtkPointInterpolator, emscripten::base<vtkDataSetAlgorithm>>("vtkPointInterpolator")
    .smart_ptr<vtkSmartPointer<vtkPointInterpolator>>("vtkSmartPointer<vtkPointInterpolator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceData", &vtkPointInterpolator::SetSourceData, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkPointInterpolator::GetSource, emscripten::allow_raw_pointers())
    .function("SetSourceConnection", &vtkPointInterpolator::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("SetLocator", &vtkPointInterpolator::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkPointInterpolator::GetLocator, emscripten::allow_raw_pointers())
    .function("SetKernel", &vtkPointInterpolator::SetKernel, emscripten::allow_raw_pointers())
    .function("GetKernel", &vtkPointInterpolator::GetKernel, emscripten::allow_raw_pointers())
    .function("SetNullPointsStrategy", &vtkPointInterpolator::SetNullPointsStrategy)
    .function("GetNullPointsStrategy", &vtkPointInterpolator::GetNullPointsStrategy)
    .function("SetNullPointsStrategyToMaskPoints", &vtkPointInterpolator::SetNullPointsStrategyToMaskPoints)
    .function("SetNullPointsStrategyToNullValue", &vtkPointInterpolator::SetNullPointsStrategyToNullValue)
    .function("SetNullPointsStrategyToClosestPoint", &vtkPointInterpolator::SetNullPointsStrategyToClosestPoint)
    .function("SetValidPointsMaskArrayName", &vtkPointInterpolator::SetValidPointsMaskArrayName)
    .function("GetValidPointsMaskArrayName", &vtkPointInterpolator::GetValidPointsMaskArrayName)
    .function("SetNullValue", &vtkPointInterpolator::SetNullValue)
    .function("GetNullValue", &vtkPointInterpolator::GetNullValue)
    .function("AddExcludedArray", &vtkPointInterpolator::AddExcludedArray)
    .function("ClearExcludedArrays", &vtkPointInterpolator::ClearExcludedArrays)
    .function("GetNumberOfExcludedArrays", &vtkPointInterpolator::GetNumberOfExcludedArrays)
    .function("GetExcludedArray", emscripten::optional_override([](vtkPointInterpolator& self, int arg_0) -> std::string {  return self.GetExcludedArray( arg_0);}))
    .function("SetPromoteOutputArrays", &vtkPointInterpolator::SetPromoteOutputArrays)
    .function("PromoteOutputArraysOn", &vtkPointInterpolator::PromoteOutputArraysOn)
    .function("PromoteOutputArraysOff", &vtkPointInterpolator::PromoteOutputArraysOff)
    .function("GetPromoteOutputArrays", &vtkPointInterpolator::GetPromoteOutputArrays)
    .function("SetPassPointArrays", &vtkPointInterpolator::SetPassPointArrays)
    .function("PassPointArraysOn", &vtkPointInterpolator::PassPointArraysOn)
    .function("PassPointArraysOff", &vtkPointInterpolator::PassPointArraysOff)
    .function("GetPassPointArrays", &vtkPointInterpolator::GetPassPointArrays)
    .function("SetPassCellArrays", &vtkPointInterpolator::SetPassCellArrays)
    .function("PassCellArraysOn", &vtkPointInterpolator::PassCellArraysOn)
    .function("PassCellArraysOff", &vtkPointInterpolator::PassCellArraysOff)
    .function("GetPassCellArrays", &vtkPointInterpolator::GetPassCellArrays)
    .function("SetPassFieldArrays", &vtkPointInterpolator::SetPassFieldArrays)
    .function("PassFieldArraysOn", &vtkPointInterpolator::PassFieldArraysOn)
    .function("PassFieldArraysOff", &vtkPointInterpolator::PassFieldArraysOff)
    .function("GetPassFieldArrays", &vtkPointInterpolator::GetPassFieldArrays)
    .function("GetMTime", &vtkPointInterpolator::GetMTime);
}
EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkPointInterpolator_0_2_constants) {
    typedef vtkPointInterpolator::Strategy cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkPointInterpolator_Strategy_MASK_POINTS", vtkPointInterpolator::MASK_POINTS },
      { "vtkPointInterpolator_Strategy_NULL_VALUE", vtkPointInterpolator::NULL_VALUE },
      { "vtkPointInterpolator_Strategy_CLOSEST_POINT", vtkPointInterpolator::CLOSEST_POINT },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
