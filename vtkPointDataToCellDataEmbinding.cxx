// JavaScript wrapper for vtkPointDataToCellData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkPointDataToCellDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkPointDataToCellData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointDataToCellData.h"

template<> void emscripten::internal::raw_destructor<vtkPointDataToCellData>(vtkPointDataToCellData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointDataToCellData_class) {
  emscripten::class_<vtkPointDataToCellData, emscripten::base<vtkDataSetAlgorithm>>("vtkPointDataToCellData")
    .smart_ptr<vtkSmartPointer<vtkPointDataToCellData>>("vtkSmartPointer<vtkPointDataToCellData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointDataToCellData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointDataToCellData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointDataToCellData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointDataToCellData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointDataToCellData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointDataToCellData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointDataToCellData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPassPointData", &vtkPointDataToCellData::SetPassPointData)
    .function("GetPassPointData", &vtkPointDataToCellData::GetPassPointData)
    .function("PassPointDataOn", &vtkPointDataToCellData::PassPointDataOn)
    .function("PassPointDataOff", &vtkPointDataToCellData::PassPointDataOff)
    .function("SetCategoricalData", &vtkPointDataToCellData::SetCategoricalData)
    .function("GetCategoricalData", &vtkPointDataToCellData::GetCategoricalData)
    .function("CategoricalDataOn", &vtkPointDataToCellData::CategoricalDataOn)
    .function("CategoricalDataOff", &vtkPointDataToCellData::CategoricalDataOff)
    .function("SetProcessAllArrays", &vtkPointDataToCellData::SetProcessAllArrays)
    .function("GetProcessAllArrays", &vtkPointDataToCellData::GetProcessAllArrays)
    .function("ProcessAllArraysOn", &vtkPointDataToCellData::ProcessAllArraysOn)
    .function("ProcessAllArraysOff", &vtkPointDataToCellData::ProcessAllArraysOff)
    .function("AddPointDataArray", emscripten::optional_override([](vtkPointDataToCellData& self, const std::string & arg_0) -> void {  return self.AddPointDataArray( arg_0.c_str());}))
    .function("RemovePointDataArray", emscripten::optional_override([](vtkPointDataToCellData& self, const std::string & arg_0) -> void {  return self.RemovePointDataArray( arg_0.c_str());}))
    .function("ClearPointDataArrays", &vtkPointDataToCellData::ClearPointDataArrays);
}
