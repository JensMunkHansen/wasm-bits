// JavaScript wrapper for vtkTransmitRectilinearGridPiece with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkTransmitRectilinearGridPieceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkTransmitRectilinearGridPiece.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTransmitRectilinearGridPiece.h"

template<> void emscripten::internal::raw_destructor<vtkTransmitRectilinearGridPiece>(vtkTransmitRectilinearGridPiece * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransmitRectilinearGridPiece_class) {
  emscripten::class_<vtkTransmitRectilinearGridPiece, emscripten::base<vtkTransmitStructuredDataPiece>>("vtkTransmitRectilinearGridPiece")
    .smart_ptr<vtkSmartPointer<vtkTransmitRectilinearGridPiece>>("vtkSmartPointer<vtkTransmitRectilinearGridPiece>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTransmitRectilinearGridPiece>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransmitRectilinearGridPiece::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransmitRectilinearGridPiece& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransmitRectilinearGridPiece::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransmitRectilinearGridPiece::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransmitRectilinearGridPiece::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransmitRectilinearGridPiece& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
