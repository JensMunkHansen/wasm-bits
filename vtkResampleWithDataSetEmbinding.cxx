// JavaScript wrapper for vtkResampleWithDataSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkResampleWithDataSetEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkResampleWithDataSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkAlgorithmOutput.h"
#include "vtkAbstractCellLocator.h"
#include "vtkResampleWithDataSet.h"

template<> void emscripten::internal::raw_destructor<vtkResampleWithDataSet>(vtkResampleWithDataSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkResampleWithDataSet_class) {
  emscripten::class_<vtkResampleWithDataSet, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkResampleWithDataSet")
    .smart_ptr<vtkSmartPointer<vtkResampleWithDataSet>>("vtkSmartPointer<vtkResampleWithDataSet>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkResampleWithDataSet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResampleWithDataSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkResampleWithDataSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkResampleWithDataSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkResampleWithDataSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResampleWithDataSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkResampleWithDataSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceData", &vtkResampleWithDataSet::SetSourceData, emscripten::allow_raw_pointers())
    .function("SetSourceConnection", &vtkResampleWithDataSet::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("SetCategoricalData", &vtkResampleWithDataSet::SetCategoricalData)
    .function("GetCategoricalData", &vtkResampleWithDataSet::GetCategoricalData)
    .function("SetPassCellArrays", &vtkResampleWithDataSet::SetPassCellArrays)
    .function("GetPassCellArrays", &vtkResampleWithDataSet::GetPassCellArrays)
    .function("PassCellArraysOn", &vtkResampleWithDataSet::PassCellArraysOn)
    .function("PassCellArraysOff", &vtkResampleWithDataSet::PassCellArraysOff)
    .function("SetPassPointArrays", &vtkResampleWithDataSet::SetPassPointArrays)
    .function("GetPassPointArrays", &vtkResampleWithDataSet::GetPassPointArrays)
    .function("PassPointArraysOn", &vtkResampleWithDataSet::PassPointArraysOn)
    .function("PassPointArraysOff", &vtkResampleWithDataSet::PassPointArraysOff)
    .function("SetPassFieldArrays", &vtkResampleWithDataSet::SetPassFieldArrays)
    .function("GetPassFieldArrays", &vtkResampleWithDataSet::GetPassFieldArrays)
    .function("PassFieldArraysOn", &vtkResampleWithDataSet::PassFieldArraysOn)
    .function("PassFieldArraysOff", &vtkResampleWithDataSet::PassFieldArraysOff)
    .function("SetPassPartialArrays", &vtkResampleWithDataSet::SetPassPartialArrays)
    .function("GetPassPartialArrays", &vtkResampleWithDataSet::GetPassPartialArrays)
    .function("PassPartialArraysOn", &vtkResampleWithDataSet::PassPartialArraysOn)
    .function("PassPartialArraysOff", &vtkResampleWithDataSet::PassPartialArraysOff)
    .function("SetTolerance", &vtkResampleWithDataSet::SetTolerance)
    .function("GetTolerance", &vtkResampleWithDataSet::GetTolerance)
    .function("SetComputeTolerance", &vtkResampleWithDataSet::SetComputeTolerance)
    .function("GetComputeTolerance", &vtkResampleWithDataSet::GetComputeTolerance)
    .function("ComputeToleranceOn", &vtkResampleWithDataSet::ComputeToleranceOn)
    .function("ComputeToleranceOff", &vtkResampleWithDataSet::ComputeToleranceOff)
    .function("SetMarkBlankPointsAndCells", &vtkResampleWithDataSet::SetMarkBlankPointsAndCells)
    .function("GetMarkBlankPointsAndCells", &vtkResampleWithDataSet::GetMarkBlankPointsAndCells)
    .function("MarkBlankPointsAndCellsOn", &vtkResampleWithDataSet::MarkBlankPointsAndCellsOn)
    .function("MarkBlankPointsAndCellsOff", &vtkResampleWithDataSet::MarkBlankPointsAndCellsOff)
    .function("SetSnapToCellWithClosestPoint", &vtkResampleWithDataSet::SetSnapToCellWithClosestPoint)
    .function("GetSnapToCellWithClosestPoint", &vtkResampleWithDataSet::GetSnapToCellWithClosestPoint)
    .function("SnapToCellWithClosestPointOn", &vtkResampleWithDataSet::SnapToCellWithClosestPointOn)
    .function("SnapToCellWithClosestPointOff", &vtkResampleWithDataSet::SnapToCellWithClosestPointOff)
    .function("SetUseImplicitArrays", &vtkResampleWithDataSet::SetUseImplicitArrays)
    .function("GetUseImplicitArrays", &vtkResampleWithDataSet::GetUseImplicitArrays)
    .function("UseImplicitArraysOn", &vtkResampleWithDataSet::UseImplicitArraysOn)
    .function("UseImplicitArraysOff", &vtkResampleWithDataSet::UseImplicitArraysOff)
    .function("SetCellLocatorPrototype", &vtkResampleWithDataSet::SetCellLocatorPrototype, emscripten::allow_raw_pointers())
    .function("GetCellLocatorPrototype", &vtkResampleWithDataSet::GetCellLocatorPrototype, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkResampleWithDataSet::GetMTime);
}
