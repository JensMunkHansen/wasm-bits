// JavaScript wrapper for vtkCellCenters with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkCellCentersEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkCellCenters.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkDoubleArray.h"
#include "vtkCellCenters.h"

template<> void emscripten::internal::raw_destructor<vtkCellCenters>(vtkCellCenters * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellCenters_class) {
  emscripten::class_<vtkCellCenters, emscripten::base<vtkPolyDataAlgorithm>>("vtkCellCenters")
    .smart_ptr<vtkSmartPointer<vtkCellCenters>>("vtkSmartPointer<vtkCellCenters>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellCenters>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellCenters::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellCenters& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellCenters::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellCenters::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellCenters::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellCenters& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetVertexCells", &vtkCellCenters::SetVertexCells)
    .function("GetVertexCells", &vtkCellCenters::GetVertexCells)
    .function("VertexCellsOn", &vtkCellCenters::VertexCellsOn)
    .function("VertexCellsOff", &vtkCellCenters::VertexCellsOff)
    .function("SetCopyArrays", &vtkCellCenters::SetCopyArrays)
    .function("GetCopyArrays", &vtkCellCenters::GetCopyArrays)
    .function("CopyArraysOn", &vtkCellCenters::CopyArraysOn)
    .function("CopyArraysOff", &vtkCellCenters::CopyArraysOff)
    .function("SetConvertGhostCellsToGhostPoints", &vtkCellCenters::SetConvertGhostCellsToGhostPoints)
    .function("GetConvertGhostCellsToGhostPoints", &vtkCellCenters::GetConvertGhostCellsToGhostPoints)
    .function("ConvertGhostCellsToGhostPointsOn", &vtkCellCenters::ConvertGhostCellsToGhostPointsOn)
    .function("ConvertGhostCellsToGhostPointsOff", &vtkCellCenters::ConvertGhostCellsToGhostPointsOff)
    .class_function("ComputeCellCenters", &vtkCellCenters::ComputeCellCenters, emscripten::allow_raw_pointers());
}
