// JavaScript wrapper for vtkHyperTreeGridGhostCellsGenerator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkHyperTreeGridGhostCellsGeneratorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkHyperTreeGridGhostCellsGenerator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridGhostCellsGenerator.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridGhostCellsGenerator>(vtkHyperTreeGridGhostCellsGenerator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridGhostCellsGenerator_class) {
  emscripten::class_<vtkHyperTreeGridGhostCellsGenerator, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridGhostCellsGenerator")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridGhostCellsGenerator>>("vtkSmartPointer<vtkHyperTreeGridGhostCellsGenerator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGridGhostCellsGenerator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridGhostCellsGenerator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridGhostCellsGenerator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridGhostCellsGenerator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridGhostCellsGenerator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridGhostCellsGenerator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridGhostCellsGenerator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
