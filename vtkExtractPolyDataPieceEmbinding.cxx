// JavaScript wrapper for vtkExtractPolyDataPiece with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkExtractPolyDataPieceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkExtractPolyDataPiece.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractPolyDataPiece.h"

template<> void emscripten::internal::raw_destructor<vtkExtractPolyDataPiece>(vtkExtractPolyDataPiece * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractPolyDataPiece_class) {
  emscripten::class_<vtkExtractPolyDataPiece, emscripten::base<vtkPolyDataAlgorithm>>("vtkExtractPolyDataPiece")
    .smart_ptr<vtkSmartPointer<vtkExtractPolyDataPiece>>("vtkSmartPointer<vtkExtractPolyDataPiece>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractPolyDataPiece>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractPolyDataPiece::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractPolyDataPiece& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractPolyDataPiece::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractPolyDataPiece::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractPolyDataPiece::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractPolyDataPiece& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCreateGhostCells", &vtkExtractPolyDataPiece::SetCreateGhostCells)
    .function("GetCreateGhostCells", &vtkExtractPolyDataPiece::GetCreateGhostCells)
    .function("CreateGhostCellsOn", &vtkExtractPolyDataPiece::CreateGhostCellsOn)
    .function("CreateGhostCellsOff", &vtkExtractPolyDataPiece::CreateGhostCellsOff);
}
