// JavaScript wrapper for vtkTransmitPolyDataPiece with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkTransmitPolyDataPieceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkTransmitPolyDataPiece.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkTransmitPolyDataPiece.h"

template<> void emscripten::internal::raw_destructor<vtkTransmitPolyDataPiece>(vtkTransmitPolyDataPiece * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransmitPolyDataPiece_class) {
  emscripten::class_<vtkTransmitPolyDataPiece, emscripten::base<vtkPolyDataAlgorithm>>("vtkTransmitPolyDataPiece")
    .smart_ptr<vtkSmartPointer<vtkTransmitPolyDataPiece>>("vtkSmartPointer<vtkTransmitPolyDataPiece>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTransmitPolyDataPiece>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransmitPolyDataPiece::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransmitPolyDataPiece& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransmitPolyDataPiece::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransmitPolyDataPiece::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransmitPolyDataPiece::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransmitPolyDataPiece& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkTransmitPolyDataPiece::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkTransmitPolyDataPiece::GetController, emscripten::allow_raw_pointers())
    .function("SetCreateGhostCells", &vtkTransmitPolyDataPiece::SetCreateGhostCells)
    .function("GetCreateGhostCells", &vtkTransmitPolyDataPiece::GetCreateGhostCells)
    .function("CreateGhostCellsOn", &vtkTransmitPolyDataPiece::CreateGhostCellsOn)
    .function("CreateGhostCellsOff", &vtkTransmitPolyDataPiece::CreateGhostCellsOff);
}
