// JavaScript wrapper for vtkMergeCells with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkMergeCellsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkMergeCells.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGrid.h"
#include "vtkDataSet.h"
#include "vtkMergeCells.h"

template<> void emscripten::internal::raw_destructor<vtkMergeCells>(vtkMergeCells * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMergeCells_class) {
  emscripten::class_<vtkMergeCells, emscripten::base<vtkObject>>("vtkMergeCells")
    .smart_ptr<vtkSmartPointer<vtkMergeCells>>("vtkSmartPointer<vtkMergeCells>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMergeCells>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeCells::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMergeCells& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMergeCells::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMergeCells::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeCells::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMergeCells& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetUnstructuredGrid", &vtkMergeCells::SetUnstructuredGrid, emscripten::allow_raw_pointers())
    .function("GetUnstructuredGrid", &vtkMergeCells::GetUnstructuredGrid, emscripten::allow_raw_pointers())
    .function("SetTotalNumberOfCells", &vtkMergeCells::SetTotalNumberOfCells)
    .function("GetTotalNumberOfCells", &vtkMergeCells::GetTotalNumberOfCells)
    .function("SetTotalNumberOfPoints", &vtkMergeCells::SetTotalNumberOfPoints)
    .function("GetTotalNumberOfPoints", &vtkMergeCells::GetTotalNumberOfPoints)
    .function("SetUseGlobalIds", &vtkMergeCells::SetUseGlobalIds)
    .function("GetUseGlobalIds", &vtkMergeCells::GetUseGlobalIds)
    .function("UseGlobalIdsOn", &vtkMergeCells::UseGlobalIdsOn)
    .function("UseGlobalIdsOff", &vtkMergeCells::UseGlobalIdsOff)
    .function("SetPointMergeTolerance", &vtkMergeCells::SetPointMergeTolerance)
    .function("GetPointMergeToleranceMinValue", &vtkMergeCells::GetPointMergeToleranceMinValue)
    .function("GetPointMergeToleranceMaxValue", &vtkMergeCells::GetPointMergeToleranceMaxValue)
    .function("GetPointMergeTolerance", &vtkMergeCells::GetPointMergeTolerance)
    .function("SetUseGlobalCellIds", &vtkMergeCells::SetUseGlobalCellIds)
    .function("GetUseGlobalCellIds", &vtkMergeCells::GetUseGlobalCellIds)
    .function("UseGlobalCellIdsOn", &vtkMergeCells::UseGlobalCellIdsOn)
    .function("UseGlobalCellIdsOff", &vtkMergeCells::UseGlobalCellIdsOff)
    .function("SetMergeDuplicatePoints", &vtkMergeCells::SetMergeDuplicatePoints)
    .function("GetMergeDuplicatePoints", &vtkMergeCells::GetMergeDuplicatePoints)
    .function("MergeDuplicatePointsOn", &vtkMergeCells::MergeDuplicatePointsOn)
    .function("MergeDuplicatePointsOff", &vtkMergeCells::MergeDuplicatePointsOff)
    .function("InvalidateCachedLocator", &vtkMergeCells::InvalidateCachedLocator)
    .function("SetTotalNumberOfDataSets", &vtkMergeCells::SetTotalNumberOfDataSets)
    .function("GetTotalNumberOfDataSets", &vtkMergeCells::GetTotalNumberOfDataSets)
    .function("MergeDataSet", &vtkMergeCells::MergeDataSet, emscripten::allow_raw_pointers())
    .function("SetOutputPointsPrecision", &vtkMergeCells::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkMergeCells::GetOutputPointsPrecision)
    .function("Finish", &vtkMergeCells::Finish);
}
