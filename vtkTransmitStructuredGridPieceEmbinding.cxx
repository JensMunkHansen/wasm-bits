// JavaScript wrapper for vtkTransmitStructuredGridPiece with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkTransmitStructuredGridPieceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkTransmitStructuredGridPiece.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTransmitStructuredGridPiece.h"

template<> void emscripten::internal::raw_destructor<vtkTransmitStructuredGridPiece>(vtkTransmitStructuredGridPiece * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransmitStructuredGridPiece_class) {
  emscripten::class_<vtkTransmitStructuredGridPiece, emscripten::base<vtkTransmitStructuredDataPiece>>("vtkTransmitStructuredGridPiece")
    .smart_ptr<vtkSmartPointer<vtkTransmitStructuredGridPiece>>("vtkSmartPointer<vtkTransmitStructuredGridPiece>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTransmitStructuredGridPiece>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransmitStructuredGridPiece::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransmitStructuredGridPiece& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransmitStructuredGridPiece::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransmitStructuredGridPiece::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransmitStructuredGridPiece::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransmitStructuredGridPiece& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
