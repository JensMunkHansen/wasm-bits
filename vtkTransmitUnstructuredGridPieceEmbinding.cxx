// JavaScript wrapper for vtkTransmitUnstructuredGridPiece with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkTransmitUnstructuredGridPieceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkTransmitUnstructuredGridPiece.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkTransmitUnstructuredGridPiece.h"

template<> void emscripten::internal::raw_destructor<vtkTransmitUnstructuredGridPiece>(vtkTransmitUnstructuredGridPiece * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransmitUnstructuredGridPiece_class) {
  emscripten::class_<vtkTransmitUnstructuredGridPiece, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkTransmitUnstructuredGridPiece")
    .smart_ptr<vtkSmartPointer<vtkTransmitUnstructuredGridPiece>>("vtkSmartPointer<vtkTransmitUnstructuredGridPiece>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTransmitUnstructuredGridPiece>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransmitUnstructuredGridPiece::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransmitUnstructuredGridPiece& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransmitUnstructuredGridPiece::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransmitUnstructuredGridPiece::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransmitUnstructuredGridPiece::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransmitUnstructuredGridPiece& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkTransmitUnstructuredGridPiece::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkTransmitUnstructuredGridPiece::GetController, emscripten::allow_raw_pointers())
    .function("SetCreateGhostCells", &vtkTransmitUnstructuredGridPiece::SetCreateGhostCells)
    .function("GetCreateGhostCells", &vtkTransmitUnstructuredGridPiece::GetCreateGhostCells)
    .function("CreateGhostCellsOn", &vtkTransmitUnstructuredGridPiece::CreateGhostCellsOn)
    .function("CreateGhostCellsOff", &vtkTransmitUnstructuredGridPiece::CreateGhostCellsOff);
}
