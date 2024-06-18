// JavaScript wrapper for vtkPDataSetWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkIOParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkPDataSetWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Parallel/vtkPDataSetWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkMultiProcessController.h"
#include "vtkPDataSetWriter.h"

template<> void emscripten::internal::raw_destructor<vtkPDataSetWriter>(vtkPDataSetWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPDataSetWriter_class) {
  emscripten::class_<vtkPDataSetWriter, emscripten::base<vtkDataSetWriter>>("vtkPDataSetWriter")
    .smart_ptr<vtkSmartPointer<vtkPDataSetWriter>>("vtkSmartPointer<vtkPDataSetWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPDataSetWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPDataSetWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPDataSetWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPDataSetWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPDataSetWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPDataSetWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPDataSetWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Write", &vtkPDataSetWriter::Write)
    .function("SetNumberOfPieces", &vtkPDataSetWriter::SetNumberOfPieces)
    .function("GetNumberOfPieces", &vtkPDataSetWriter::GetNumberOfPieces)
    .function("SetGhostLevel", &vtkPDataSetWriter::SetGhostLevel)
    .function("GetGhostLevel", &vtkPDataSetWriter::GetGhostLevel)
    .function("SetStartPiece", &vtkPDataSetWriter::SetStartPiece)
    .function("GetStartPiece", &vtkPDataSetWriter::GetStartPiece)
    .function("SetEndPiece", &vtkPDataSetWriter::SetEndPiece)
    .function("GetEndPiece", &vtkPDataSetWriter::GetEndPiece)
    .function("SetFilePattern", emscripten::optional_override([](vtkPDataSetWriter& self, const std::string & arg_0) -> void {  return self.SetFilePattern( arg_0.c_str());}))
    .function("GetFilePattern", emscripten::optional_override([](vtkPDataSetWriter& self) -> std::string {  return self.GetFilePattern();}))
    .function("SetUseRelativeFileNames", &vtkPDataSetWriter::SetUseRelativeFileNames)
    .function("GetUseRelativeFileNames", &vtkPDataSetWriter::GetUseRelativeFileNames)
    .function("UseRelativeFileNamesOn", &vtkPDataSetWriter::UseRelativeFileNamesOn)
    .function("UseRelativeFileNamesOff", &vtkPDataSetWriter::UseRelativeFileNamesOff)
    .function("SetController", &vtkPDataSetWriter::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPDataSetWriter::GetController, emscripten::allow_raw_pointers());
}
