// JavaScript wrapper for vtkStaticCleanUnstructuredGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkStaticCleanUnstructuredGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkStaticCleanUnstructuredGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkStaticPointLocator.h"
#include "vtkStaticCleanUnstructuredGrid.h"

template<> void emscripten::internal::raw_destructor<vtkStaticCleanUnstructuredGrid>(vtkStaticCleanUnstructuredGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStaticCleanUnstructuredGrid_class) {
  emscripten::class_<vtkStaticCleanUnstructuredGrid, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkStaticCleanUnstructuredGrid")
    .smart_ptr<vtkSmartPointer<vtkStaticCleanUnstructuredGrid>>("vtkSmartPointer<vtkStaticCleanUnstructuredGrid>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStaticCleanUnstructuredGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStaticCleanUnstructuredGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStaticCleanUnstructuredGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStaticCleanUnstructuredGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStaticCleanUnstructuredGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStaticCleanUnstructuredGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStaticCleanUnstructuredGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetToleranceIsAbsolute", &vtkStaticCleanUnstructuredGrid::SetToleranceIsAbsolute)
    .function("ToleranceIsAbsoluteOn", &vtkStaticCleanUnstructuredGrid::ToleranceIsAbsoluteOn)
    .function("ToleranceIsAbsoluteOff", &vtkStaticCleanUnstructuredGrid::ToleranceIsAbsoluteOff)
    .function("GetToleranceIsAbsolute", &vtkStaticCleanUnstructuredGrid::GetToleranceIsAbsolute)
    .function("SetAbsoluteTolerance", &vtkStaticCleanUnstructuredGrid::SetAbsoluteTolerance)
    .function("GetAbsoluteToleranceMinValue", &vtkStaticCleanUnstructuredGrid::GetAbsoluteToleranceMinValue)
    .function("GetAbsoluteToleranceMaxValue", &vtkStaticCleanUnstructuredGrid::GetAbsoluteToleranceMaxValue)
    .function("GetAbsoluteTolerance", &vtkStaticCleanUnstructuredGrid::GetAbsoluteTolerance)
    .function("SetTolerance", &vtkStaticCleanUnstructuredGrid::SetTolerance)
    .function("GetToleranceMinValue", &vtkStaticCleanUnstructuredGrid::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkStaticCleanUnstructuredGrid::GetToleranceMaxValue)
    .function("GetTolerance", &vtkStaticCleanUnstructuredGrid::GetTolerance)
    .function("SetMergingArray", emscripten::optional_override([](vtkStaticCleanUnstructuredGrid& self, const std::string & arg_0) -> void {  return self.SetMergingArray( arg_0.c_str());}))
    .function("GetMergingArray", emscripten::optional_override([](vtkStaticCleanUnstructuredGrid& self) -> std::string {  return self.GetMergingArray();}))
    .function("SetRemoveUnusedPoints", &vtkStaticCleanUnstructuredGrid::SetRemoveUnusedPoints)
    .function("RemoveUnusedPointsOn", &vtkStaticCleanUnstructuredGrid::RemoveUnusedPointsOn)
    .function("RemoveUnusedPointsOff", &vtkStaticCleanUnstructuredGrid::RemoveUnusedPointsOff)
    .function("GetRemoveUnusedPoints", &vtkStaticCleanUnstructuredGrid::GetRemoveUnusedPoints)
    .function("SetProduceMergeMap", &vtkStaticCleanUnstructuredGrid::SetProduceMergeMap)
    .function("ProduceMergeMapOn", &vtkStaticCleanUnstructuredGrid::ProduceMergeMapOn)
    .function("ProduceMergeMapOff", &vtkStaticCleanUnstructuredGrid::ProduceMergeMapOff)
    .function("GetProduceMergeMap", &vtkStaticCleanUnstructuredGrid::GetProduceMergeMap)
    .function("SetAveragePointData", &vtkStaticCleanUnstructuredGrid::SetAveragePointData)
    .function("AveragePointDataOn", &vtkStaticCleanUnstructuredGrid::AveragePointDataOn)
    .function("AveragePointDataOff", &vtkStaticCleanUnstructuredGrid::AveragePointDataOff)
    .function("GetAveragePointData", &vtkStaticCleanUnstructuredGrid::GetAveragePointData)
    .function("SetOutputPointsPrecision", &vtkStaticCleanUnstructuredGrid::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkStaticCleanUnstructuredGrid::GetOutputPointsPrecision)
    .function("GetLocator", &vtkStaticCleanUnstructuredGrid::GetLocator, emscripten::allow_raw_pointers())
    .function("SetPieceInvariant", &vtkStaticCleanUnstructuredGrid::SetPieceInvariant)
    .function("GetPieceInvariant", &vtkStaticCleanUnstructuredGrid::GetPieceInvariant)
    .function("PieceInvariantOn", &vtkStaticCleanUnstructuredGrid::PieceInvariantOn)
    .function("PieceInvariantOff", &vtkStaticCleanUnstructuredGrid::PieceInvariantOff)
    .function("GetMTime", &vtkStaticCleanUnstructuredGrid::GetMTime);
}
