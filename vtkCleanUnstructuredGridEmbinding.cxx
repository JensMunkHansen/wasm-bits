// JavaScript wrapper for vtkCleanUnstructuredGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkCleanUnstructuredGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkCleanUnstructuredGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkDataSet.h"
#include "vtkCleanUnstructuredGrid.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkCleanUnstructuredGrid_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCleanUnstructuredGrid>(vtkCleanUnstructuredGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCleanUnstructuredGrid_class) {
  using DataWeighingType=vtkCleanUnstructuredGrid::DataWeighingType;
  emscripten::class_<vtkCleanUnstructuredGrid, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkCleanUnstructuredGrid")
    .smart_ptr<vtkSmartPointer<vtkCleanUnstructuredGrid>>("vtkSmartPointer<vtkCleanUnstructuredGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCleanUnstructuredGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCleanUnstructuredGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCleanUnstructuredGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCleanUnstructuredGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCleanUnstructuredGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCleanUnstructuredGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCleanUnstructuredGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetToleranceIsAbsolute", &vtkCleanUnstructuredGrid::SetToleranceIsAbsolute)
    .function("ToleranceIsAbsoluteOn", &vtkCleanUnstructuredGrid::ToleranceIsAbsoluteOn)
    .function("ToleranceIsAbsoluteOff", &vtkCleanUnstructuredGrid::ToleranceIsAbsoluteOff)
    .function("GetToleranceIsAbsolute", &vtkCleanUnstructuredGrid::GetToleranceIsAbsolute)
    .function("SetTolerance", &vtkCleanUnstructuredGrid::SetTolerance)
    .function("GetToleranceMinValue", &vtkCleanUnstructuredGrid::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkCleanUnstructuredGrid::GetToleranceMaxValue)
    .function("GetTolerance", &vtkCleanUnstructuredGrid::GetTolerance)
    .function("SetAbsoluteTolerance", &vtkCleanUnstructuredGrid::SetAbsoluteTolerance)
    .function("GetAbsoluteToleranceMinValue", &vtkCleanUnstructuredGrid::GetAbsoluteToleranceMinValue)
    .function("GetAbsoluteToleranceMaxValue", &vtkCleanUnstructuredGrid::GetAbsoluteToleranceMaxValue)
    .function("GetAbsoluteTolerance", &vtkCleanUnstructuredGrid::GetAbsoluteTolerance)
    .function("SetLocator", &vtkCleanUnstructuredGrid::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkCleanUnstructuredGrid::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkCleanUnstructuredGrid::CreateDefaultLocator, emscripten::allow_raw_pointers())
    .function("ReleaseLocator", &vtkCleanUnstructuredGrid::ReleaseLocator)
    .function("SetOutputPointsPrecision", &vtkCleanUnstructuredGrid::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkCleanUnstructuredGrid::GetOutputPointsPrecision)
    .function("SetRemovePointsWithoutCells", &vtkCleanUnstructuredGrid::SetRemovePointsWithoutCells)
    .function("GetRemovePointsWithoutCells", &vtkCleanUnstructuredGrid::GetRemovePointsWithoutCells)
    .function("RemovePointsWithoutCellsOn", &vtkCleanUnstructuredGrid::RemovePointsWithoutCellsOn)
    .function("RemovePointsWithoutCellsOff", &vtkCleanUnstructuredGrid::RemovePointsWithoutCellsOff)
    .function("GetPointDataWeighingStrategy", &vtkCleanUnstructuredGrid::GetPointDataWeighingStrategy)
    .function("SetPointDataWeighingStrategy", &vtkCleanUnstructuredGrid::SetPointDataWeighingStrategy)
    .function("GetPointDataWeighingStrategyMinValue", &vtkCleanUnstructuredGrid::GetPointDataWeighingStrategyMinValue)
    .function("GetPointDataWeighingStrategyMaxValue", &vtkCleanUnstructuredGrid::GetPointDataWeighingStrategyMaxValue);
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkCleanUnstructuredGrid_0_2_constants) {
    typedef vtkCleanUnstructuredGrid::DataWeighingType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkCleanUnstructuredGrid_DataWeighingType_FIRST_POINT", vtkCleanUnstructuredGrid::FIRST_POINT },
      { "vtkCleanUnstructuredGrid_DataWeighingType_AVERAGING", vtkCleanUnstructuredGrid::AVERAGING },
      { "vtkCleanUnstructuredGrid_DataWeighingType_SPATIAL_DENSITY", vtkCleanUnstructuredGrid::SPATIAL_DENSITY },
      { "vtkCleanUnstructuredGrid_DataWeighingType_NUMBER_OF_WEIGHING_TYPES", vtkCleanUnstructuredGrid::NUMBER_OF_WEIGHING_TYPES },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
