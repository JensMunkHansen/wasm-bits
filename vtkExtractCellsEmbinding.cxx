// JavaScript wrapper for vtkExtractCells with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkExtractCellsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkExtractCells.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkExtractCells.h"

template<> void emscripten::internal::raw_destructor<vtkExtractCells>(vtkExtractCells * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractCells_class) {
  emscripten::class_<vtkExtractCells, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkExtractCells")
    .smart_ptr<vtkSmartPointer<vtkExtractCells>>("vtkSmartPointer<vtkExtractCells>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractCells>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractCells::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractCells& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractCells::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractCells::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractCells::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractCells& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCellList", &vtkExtractCells::SetCellList, emscripten::allow_raw_pointers())
    .function("AddCellList", &vtkExtractCells::AddCellList, emscripten::allow_raw_pointers())
    .function("AddCellRange", &vtkExtractCells::AddCellRange)
    .function("SetCellIds", emscripten::optional_override([](vtkExtractCells& self, std::uintptr_t arg_0, int arg_1) -> void {  return self.SetCellIds(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1);}))
    .function("AddCellIds", emscripten::optional_override([](vtkExtractCells& self, std::uintptr_t arg_0, int arg_1) -> void {  return self.AddCellIds(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1);}))
    .function("SetExtractAllCells", &vtkExtractCells::SetExtractAllCells)
    .function("GetExtractAllCells", &vtkExtractCells::GetExtractAllCells)
    .function("ExtractAllCellsOn", &vtkExtractCells::ExtractAllCellsOn)
    .function("ExtractAllCellsOff", &vtkExtractCells::ExtractAllCellsOff)
    .function("SetAssumeSortedAndUniqueIds", &vtkExtractCells::SetAssumeSortedAndUniqueIds)
    .function("GetAssumeSortedAndUniqueIds", &vtkExtractCells::GetAssumeSortedAndUniqueIds)
    .function("AssumeSortedAndUniqueIdsOn", &vtkExtractCells::AssumeSortedAndUniqueIdsOn)
    .function("AssumeSortedAndUniqueIdsOff", &vtkExtractCells::AssumeSortedAndUniqueIdsOff)
    .function("SetPassThroughCellIds", &vtkExtractCells::SetPassThroughCellIds)
    .function("GetPassThroughCellIds", &vtkExtractCells::GetPassThroughCellIds)
    .function("PassThroughCellIdsOn", &vtkExtractCells::PassThroughCellIdsOn)
    .function("PassThroughCellIdsOff", &vtkExtractCells::PassThroughCellIdsOff)
    .function("SetOutputPointsPrecision", &vtkExtractCells::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkExtractCells::GetOutputPointsPrecision)
    .function("SetBatchSize", &vtkExtractCells::SetBatchSize)
    .function("GetBatchSizeMinValue", &vtkExtractCells::GetBatchSizeMinValue)
    .function("GetBatchSizeMaxValue", &vtkExtractCells::GetBatchSizeMaxValue)
    .function("GetBatchSize", &vtkExtractCells::GetBatchSize);
}
