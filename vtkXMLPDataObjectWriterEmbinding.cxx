// JavaScript wrapper for vtkXMLPDataObjectWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkIOParallelXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkXMLPDataObjectWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/ParallelXML/vtkXMLPDataObjectWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkXMLPDataObjectWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPDataObjectWriter>(vtkXMLPDataObjectWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPDataObjectWriter_class) {
  emscripten::class_<vtkXMLPDataObjectWriter, emscripten::base<vtkXMLWriter>>("vtkXMLPDataObjectWriter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPDataObjectWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPDataObjectWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPDataObjectWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPDataObjectWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPDataObjectWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPDataObjectWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfPieces", &vtkXMLPDataObjectWriter::SetNumberOfPieces)
    .function("GetNumberOfPieces", &vtkXMLPDataObjectWriter::GetNumberOfPieces)
    .function("SetStartPiece", &vtkXMLPDataObjectWriter::SetStartPiece)
    .function("GetStartPiece", &vtkXMLPDataObjectWriter::GetStartPiece)
    .function("SetEndPiece", &vtkXMLPDataObjectWriter::SetEndPiece)
    .function("GetEndPiece", &vtkXMLPDataObjectWriter::GetEndPiece)
    .function("SetGhostLevel", &vtkXMLPDataObjectWriter::SetGhostLevel)
    .function("GetGhostLevel", &vtkXMLPDataObjectWriter::GetGhostLevel)
    .function("SetUseSubdirectory", &vtkXMLPDataObjectWriter::SetUseSubdirectory)
    .function("GetUseSubdirectory", &vtkXMLPDataObjectWriter::GetUseSubdirectory)
    .function("SetWriteSummaryFile", &vtkXMLPDataObjectWriter::SetWriteSummaryFile)
    .function("GetWriteSummaryFile", &vtkXMLPDataObjectWriter::GetWriteSummaryFile)
    .function("WriteSummaryFileOn", &vtkXMLPDataObjectWriter::WriteSummaryFileOn)
    .function("WriteSummaryFileOff", &vtkXMLPDataObjectWriter::WriteSummaryFileOff)
    .function("SetController", &vtkXMLPDataObjectWriter::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkXMLPDataObjectWriter::GetController, emscripten::allow_raw_pointers());
}
