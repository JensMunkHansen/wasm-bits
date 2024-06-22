// JavaScript wrapper for vtkExtractUserDefinedPiece with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkExtractUserDefinedPieceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkExtractUserDefinedPiece.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractUserDefinedPiece.h"

template<> void emscripten::internal::raw_destructor<vtkExtractUserDefinedPiece>(vtkExtractUserDefinedPiece * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractUserDefinedPiece_class) {
  emscripten::class_<vtkExtractUserDefinedPiece, emscripten::base<vtkExtractUnstructuredGridPiece>>("vtkExtractUserDefinedPiece")
    .smart_ptr<vtkSmartPointer<vtkExtractUserDefinedPiece>>("vtkSmartPointer<vtkExtractUserDefinedPiece>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractUserDefinedPiece>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractUserDefinedPiece::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractUserDefinedPiece& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractUserDefinedPiece::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractUserDefinedPiece::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractUserDefinedPiece::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractUserDefinedPiece& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetConstantData", emscripten::optional_override([](vtkExtractUserDefinedPiece& self, std::uintptr_t arg_0, int arg_1) -> void {  return self.SetConstantData(reinterpret_cast<void*>(arg_0), arg_1);}));
}
