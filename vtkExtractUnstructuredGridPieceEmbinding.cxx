// JavaScript wrapper for vtkExtractUnstructuredGridPiece with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkExtractUnstructuredGridPieceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkExtractUnstructuredGridPiece.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractUnstructuredGridPiece.h"

template<> void emscripten::internal::raw_destructor<vtkExtractUnstructuredGridPiece>(vtkExtractUnstructuredGridPiece * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractUnstructuredGridPiece_class) {
  emscripten::class_<vtkExtractUnstructuredGridPiece, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkExtractUnstructuredGridPiece")
    .smart_ptr<vtkSmartPointer<vtkExtractUnstructuredGridPiece>>("vtkSmartPointer<vtkExtractUnstructuredGridPiece>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractUnstructuredGridPiece>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractUnstructuredGridPiece::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractUnstructuredGridPiece& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractUnstructuredGridPiece::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractUnstructuredGridPiece::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractUnstructuredGridPiece::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractUnstructuredGridPiece& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCreateGhostCells", &vtkExtractUnstructuredGridPiece::SetCreateGhostCells)
    .function("GetCreateGhostCells", &vtkExtractUnstructuredGridPiece::GetCreateGhostCells)
    .function("CreateGhostCellsOn", &vtkExtractUnstructuredGridPiece::CreateGhostCellsOn)
    .function("CreateGhostCellsOff", &vtkExtractUnstructuredGridPiece::CreateGhostCellsOff);
}
