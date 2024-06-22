// JavaScript wrapper for vtkCellDataToPointData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkCellDataToPointDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkCellDataToPointData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellDataToPointData.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkCellDataToPointData_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCellDataToPointData>(vtkCellDataToPointData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellDataToPointData_class) {
  using ContributingCellEnum=vtkCellDataToPointData::ContributingCellEnum;
  emscripten::class_<vtkCellDataToPointData, emscripten::base<vtkDataSetAlgorithm>>("vtkCellDataToPointData")
    .smart_ptr<vtkSmartPointer<vtkCellDataToPointData>>("vtkSmartPointer<vtkCellDataToPointData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellDataToPointData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellDataToPointData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellDataToPointData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellDataToPointData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellDataToPointData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellDataToPointData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellDataToPointData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPassCellData", &vtkCellDataToPointData::SetPassCellData)
    .function("GetPassCellData", &vtkCellDataToPointData::GetPassCellData)
    .function("PassCellDataOn", &vtkCellDataToPointData::PassCellDataOn)
    .function("PassCellDataOff", &vtkCellDataToPointData::PassCellDataOff)
    .function("SetContributingCellOption", &vtkCellDataToPointData::SetContributingCellOption)
    .function("GetContributingCellOptionMinValue", &vtkCellDataToPointData::GetContributingCellOptionMinValue)
    .function("GetContributingCellOptionMaxValue", &vtkCellDataToPointData::GetContributingCellOptionMaxValue)
    .function("GetContributingCellOption", &vtkCellDataToPointData::GetContributingCellOption)
    .function("SetProcessAllArrays", &vtkCellDataToPointData::SetProcessAllArrays)
    .function("GetProcessAllArrays", &vtkCellDataToPointData::GetProcessAllArrays)
    .function("ProcessAllArraysOn", &vtkCellDataToPointData::ProcessAllArraysOn)
    .function("ProcessAllArraysOff", &vtkCellDataToPointData::ProcessAllArraysOff)
    .function("SetPieceInvariant", &vtkCellDataToPointData::SetPieceInvariant)
    .function("GetPieceInvariant", &vtkCellDataToPointData::GetPieceInvariant)
    .function("PieceInvariantOn", &vtkCellDataToPointData::PieceInvariantOn)
    .function("PieceInvariantOff", &vtkCellDataToPointData::PieceInvariantOff)
    .function("AddCellDataArray", emscripten::optional_override([](vtkCellDataToPointData& self, const std::string & arg_0) -> void {  return self.AddCellDataArray( arg_0.c_str());}))
    .function("RemoveCellDataArray", emscripten::optional_override([](vtkCellDataToPointData& self, const std::string & arg_0) -> void {  return self.RemoveCellDataArray( arg_0.c_str());}))
    .function("ClearCellDataArrays", &vtkCellDataToPointData::ClearCellDataArrays);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkCellDataToPointData_0_2_constants) {
    typedef vtkCellDataToPointData::ContributingCellEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkCellDataToPointData_ContributingCellEnum_All", vtkCellDataToPointData::All },
      { "vtkCellDataToPointData_ContributingCellEnum_Patch", vtkCellDataToPointData::Patch },
      { "vtkCellDataToPointData_ContributingCellEnum_DataSetMax", vtkCellDataToPointData::DataSetMax },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
