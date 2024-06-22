// JavaScript wrapper for vtkProbeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkProbeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkProbeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkAlgorithmOutput.h"
#include "vtkIdTypeArray.h"
#include "vtkFindCellStrategy.h"
#include "vtkAbstractCellLocator.h"
#include "vtkProbeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkProbeFilter>(vtkProbeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProbeFilter_class) {
  emscripten::class_<vtkProbeFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkProbeFilter")
    .smart_ptr<vtkSmartPointer<vtkProbeFilter>>("vtkSmartPointer<vtkProbeFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkProbeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProbeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProbeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProbeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProbeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProbeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProbeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceData", &vtkProbeFilter::SetSourceData, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkProbeFilter::GetSource, emscripten::allow_raw_pointers())
    .function("SetSourceConnection", &vtkProbeFilter::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("SetCategoricalData", &vtkProbeFilter::SetCategoricalData)
    .function("GetCategoricalData", &vtkProbeFilter::GetCategoricalData)
    .function("CategoricalDataOn", &vtkProbeFilter::CategoricalDataOn)
    .function("CategoricalDataOff", &vtkProbeFilter::CategoricalDataOff)
    .function("SetSpatialMatch", &vtkProbeFilter::SetSpatialMatch)
    .function("GetSpatialMatch", &vtkProbeFilter::GetSpatialMatch)
    .function("SpatialMatchOn", &vtkProbeFilter::SpatialMatchOn)
    .function("SpatialMatchOff", &vtkProbeFilter::SpatialMatchOff)
    .function("GetValidPoints", &vtkProbeFilter::GetValidPoints, emscripten::allow_raw_pointers())
    .function("SetValidPointMaskArrayName", emscripten::optional_override([](vtkProbeFilter& self, const std::string & arg_0) -> void {  return self.SetValidPointMaskArrayName( arg_0.c_str());}))
    .function("GetValidPointMaskArrayName", emscripten::optional_override([](vtkProbeFilter& self) -> std::string {  return self.GetValidPointMaskArrayName();}))
    .function("SetPassCellArrays", &vtkProbeFilter::SetPassCellArrays)
    .function("PassCellArraysOn", &vtkProbeFilter::PassCellArraysOn)
    .function("PassCellArraysOff", &vtkProbeFilter::PassCellArraysOff)
    .function("GetPassCellArrays", &vtkProbeFilter::GetPassCellArrays)
    .function("SetPassPointArrays", &vtkProbeFilter::SetPassPointArrays)
    .function("PassPointArraysOn", &vtkProbeFilter::PassPointArraysOn)
    .function("PassPointArraysOff", &vtkProbeFilter::PassPointArraysOff)
    .function("GetPassPointArrays", &vtkProbeFilter::GetPassPointArrays)
    .function("SetPassFieldArrays", &vtkProbeFilter::SetPassFieldArrays)
    .function("PassFieldArraysOn", &vtkProbeFilter::PassFieldArraysOn)
    .function("PassFieldArraysOff", &vtkProbeFilter::PassFieldArraysOff)
    .function("GetPassFieldArrays", &vtkProbeFilter::GetPassFieldArrays)
    .function("SetTolerance", &vtkProbeFilter::SetTolerance)
    .function("GetTolerance", &vtkProbeFilter::GetTolerance)
    .function("SetSnapToCellWithClosestPoint", &vtkProbeFilter::SetSnapToCellWithClosestPoint)
    .function("SnapToCellWithClosestPointOn", &vtkProbeFilter::SnapToCellWithClosestPointOn)
    .function("SnapToCellWithClosestPointOff", &vtkProbeFilter::SnapToCellWithClosestPointOff)
    .function("GetSnapToCellWithClosestPoint", &vtkProbeFilter::GetSnapToCellWithClosestPoint)
    .function("SetComputeTolerance", &vtkProbeFilter::SetComputeTolerance)
    .function("ComputeToleranceOn", &vtkProbeFilter::ComputeToleranceOn)
    .function("ComputeToleranceOff", &vtkProbeFilter::ComputeToleranceOff)
    .function("GetComputeTolerance", &vtkProbeFilter::GetComputeTolerance)
    .function("SetFindCellStrategy", &vtkProbeFilter::SetFindCellStrategy, emscripten::allow_raw_pointers())
    .function("GetFindCellStrategy", &vtkProbeFilter::GetFindCellStrategy, emscripten::allow_raw_pointers())
    .function("SetCellLocatorPrototype", &vtkProbeFilter::SetCellLocatorPrototype, emscripten::allow_raw_pointers())
    .function("GetCellLocatorPrototype", &vtkProbeFilter::GetCellLocatorPrototype, emscripten::allow_raw_pointers());
}
