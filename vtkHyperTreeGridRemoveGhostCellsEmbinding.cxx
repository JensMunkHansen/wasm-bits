// JavaScript wrapper for vtkHyperTreeGridRemoveGhostCells with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkHyperTreeGridRemoveGhostCellsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkHyperTreeGridRemoveGhostCells.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridRemoveGhostCells.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridRemoveGhostCells>(vtkHyperTreeGridRemoveGhostCells * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridRemoveGhostCells_class) {
  emscripten::class_<vtkHyperTreeGridRemoveGhostCells, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridRemoveGhostCells")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridRemoveGhostCells>>("vtkSmartPointer<vtkHyperTreeGridRemoveGhostCells>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGridRemoveGhostCells>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridRemoveGhostCells::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridRemoveGhostCells& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridRemoveGhostCells::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridRemoveGhostCells::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridRemoveGhostCells::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridRemoveGhostCells& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
