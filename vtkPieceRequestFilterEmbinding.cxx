// JavaScript wrapper for vtkPieceRequestFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPieceRequestFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPieceRequestFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkPieceRequestFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPieceRequestFilter>(vtkPieceRequestFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPieceRequestFilter_class) {
  emscripten::class_<vtkPieceRequestFilter, emscripten::base<vtkAlgorithm>>("vtkPieceRequestFilter")
    .smart_ptr<vtkSmartPointer<vtkPieceRequestFilter>>("vtkSmartPointer<vtkPieceRequestFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPieceRequestFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPieceRequestFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPieceRequestFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPieceRequestFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPieceRequestFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPieceRequestFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPieceRequestFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfPieces", &vtkPieceRequestFilter::SetNumberOfPieces)
    .function("GetNumberOfPiecesMinValue", &vtkPieceRequestFilter::GetNumberOfPiecesMinValue)
    .function("GetNumberOfPiecesMaxValue", &vtkPieceRequestFilter::GetNumberOfPiecesMaxValue)
    .function("GetNumberOfPieces", &vtkPieceRequestFilter::GetNumberOfPieces)
    .function("SetPiece", &vtkPieceRequestFilter::SetPiece)
    .function("GetPieceMinValue", &vtkPieceRequestFilter::GetPieceMinValue)
    .function("GetPieceMaxValue", &vtkPieceRequestFilter::GetPieceMaxValue)
    .function("GetPiece", &vtkPieceRequestFilter::GetPiece)
    .function("GetOutput", emscripten::select_overload<vtkDataObject*(vtkPieceRequestFilter&)>([](vtkPieceRequestFilter& self) -> vtkDataObject* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkDataObject*(vtkPieceRequestFilter&, int)>([](vtkPieceRequestFilter& self, int arg_0) -> vtkDataObject* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPieceRequestFilter&, vtkDataObject*)>([](vtkPieceRequestFilter& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkPieceRequestFilter&, int, vtkDataObject*)>([](vtkPieceRequestFilter& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
