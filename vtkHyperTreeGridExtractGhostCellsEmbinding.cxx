// JavaScript wrapper for vtkHyperTreeGridExtractGhostCells with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkHyperTreeGridExtractGhostCellsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkHyperTreeGridExtractGhostCells.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridExtractGhostCells.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridExtractGhostCells>(vtkHyperTreeGridExtractGhostCells * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridExtractGhostCells_class) {
  emscripten::class_<vtkHyperTreeGridExtractGhostCells, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridExtractGhostCells")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridExtractGhostCells>>("vtkSmartPointer<vtkHyperTreeGridExtractGhostCells>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGridExtractGhostCells>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridExtractGhostCells::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridExtractGhostCells& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridExtractGhostCells::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridExtractGhostCells::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridExtractGhostCells::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridExtractGhostCells& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputGhostArrayName", emscripten::optional_override([](vtkHyperTreeGridExtractGhostCells& self, const std::string & arg_0) -> void {  return self.SetOutputGhostArrayName( arg_0.c_str());}))
    .function("GetOutputGhostArrayName", emscripten::optional_override([](vtkHyperTreeGridExtractGhostCells& self) -> std::string {  return self.GetOutputGhostArrayName();}));
}
