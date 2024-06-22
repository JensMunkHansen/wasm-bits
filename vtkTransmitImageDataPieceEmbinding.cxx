// JavaScript wrapper for vtkTransmitImageDataPiece with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallelImaging.js/vtkFiltersParallelImaging.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallelImaging.js/vtkTransmitImageDataPieceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/ParallelImaging/vtkTransmitImageDataPiece.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTransmitImageDataPiece.h"

template<> void emscripten::internal::raw_destructor<vtkTransmitImageDataPiece>(vtkTransmitImageDataPiece * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransmitImageDataPiece_class) {
  emscripten::class_<vtkTransmitImageDataPiece, emscripten::base<vtkTransmitStructuredDataPiece>>("vtkTransmitImageDataPiece")
    .smart_ptr<vtkSmartPointer<vtkTransmitImageDataPiece>>("vtkSmartPointer<vtkTransmitImageDataPiece>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTransmitImageDataPiece>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransmitImageDataPiece::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransmitImageDataPiece& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransmitImageDataPiece::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransmitImageDataPiece::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransmitImageDataPiece::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransmitImageDataPiece& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
