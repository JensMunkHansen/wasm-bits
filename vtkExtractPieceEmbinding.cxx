// JavaScript wrapper for vtkExtractPiece with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallelImaging.js/vtkFiltersParallelImaging.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallelImaging.js/vtkExtractPieceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/ParallelImaging/vtkExtractPiece.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractPiece.h"

template<> void emscripten::internal::raw_destructor<vtkExtractPiece>(vtkExtractPiece * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractPiece_class) {
  emscripten::class_<vtkExtractPiece, emscripten::base<vtkCompositeDataSetAlgorithm>>("vtkExtractPiece")
    .smart_ptr<vtkSmartPointer<vtkExtractPiece>>("vtkSmartPointer<vtkExtractPiece>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractPiece>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractPiece::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractPiece& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractPiece::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractPiece::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractPiece::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractPiece& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
