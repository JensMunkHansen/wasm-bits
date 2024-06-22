// JavaScript wrapper for vtkTransmitStructuredDataPiece with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkTransmitStructuredDataPieceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkTransmitStructuredDataPiece.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkTransmitStructuredDataPiece.h"

template<> void emscripten::internal::raw_destructor<vtkTransmitStructuredDataPiece>(vtkTransmitStructuredDataPiece * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransmitStructuredDataPiece_class) {
  emscripten::class_<vtkTransmitStructuredDataPiece, emscripten::base<vtkDataSetAlgorithm>>("vtkTransmitStructuredDataPiece")
    .smart_ptr<vtkSmartPointer<vtkTransmitStructuredDataPiece>>("vtkSmartPointer<vtkTransmitStructuredDataPiece>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTransmitStructuredDataPiece>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransmitStructuredDataPiece::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransmitStructuredDataPiece& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransmitStructuredDataPiece::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransmitStructuredDataPiece::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransmitStructuredDataPiece::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransmitStructuredDataPiece& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkTransmitStructuredDataPiece::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkTransmitStructuredDataPiece::GetController, emscripten::allow_raw_pointers())
    .function("SetCreateGhostCells", &vtkTransmitStructuredDataPiece::SetCreateGhostCells)
    .function("GetCreateGhostCells", &vtkTransmitStructuredDataPiece::GetCreateGhostCells)
    .function("CreateGhostCellsOn", &vtkTransmitStructuredDataPiece::CreateGhostCellsOn)
    .function("CreateGhostCellsOff", &vtkTransmitStructuredDataPiece::CreateGhostCellsOff);
}
