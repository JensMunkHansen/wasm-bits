// JavaScript wrapper for vtkExtractPointCloudPiece with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkExtractPointCloudPieceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkExtractPointCloudPiece.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractPointCloudPiece.h"

template<> void emscripten::internal::raw_destructor<vtkExtractPointCloudPiece>(vtkExtractPointCloudPiece * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractPointCloudPiece_class) {
  emscripten::class_<vtkExtractPointCloudPiece, emscripten::base<vtkPolyDataAlgorithm>>("vtkExtractPointCloudPiece")
    .smart_ptr<vtkSmartPointer<vtkExtractPointCloudPiece>>("vtkSmartPointer<vtkExtractPointCloudPiece>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractPointCloudPiece>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractPointCloudPiece::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractPointCloudPiece& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractPointCloudPiece::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractPointCloudPiece::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractPointCloudPiece::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractPointCloudPiece& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetModuloOrdering", &vtkExtractPointCloudPiece::SetModuloOrdering)
    .function("GetModuloOrdering", &vtkExtractPointCloudPiece::GetModuloOrdering)
    .function("ModuloOrderingOn", &vtkExtractPointCloudPiece::ModuloOrderingOn)
    .function("ModuloOrderingOff", &vtkExtractPointCloudPiece::ModuloOrderingOff);
}
