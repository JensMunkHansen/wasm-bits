// JavaScript wrapper for vtkXMLPMultiBlockDataWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkIOParallelXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkXMLPMultiBlockDataWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/ParallelXML/vtkXMLPMultiBlockDataWriter.h
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
#include "vtkXMLPMultiBlockDataWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPMultiBlockDataWriter>(vtkXMLPMultiBlockDataWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPMultiBlockDataWriter_class) {
  emscripten::class_<vtkXMLPMultiBlockDataWriter, emscripten::base<vtkXMLMultiBlockDataWriter>>("vtkXMLPMultiBlockDataWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLPMultiBlockDataWriter>>("vtkSmartPointer<vtkXMLPMultiBlockDataWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLPMultiBlockDataWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPMultiBlockDataWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPMultiBlockDataWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPMultiBlockDataWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPMultiBlockDataWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPMultiBlockDataWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPMultiBlockDataWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfPieces", &vtkXMLPMultiBlockDataWriter::SetNumberOfPieces)
    .function("GetNumberOfPieces", &vtkXMLPMultiBlockDataWriter::GetNumberOfPieces)
    .function("SetStartPiece", &vtkXMLPMultiBlockDataWriter::SetStartPiece)
    .function("GetStartPiece", &vtkXMLPMultiBlockDataWriter::GetStartPiece)
    .function("SetController", &vtkXMLPMultiBlockDataWriter::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkXMLPMultiBlockDataWriter::GetController, emscripten::allow_raw_pointers())
    .function("SetWriteMetaFile", &vtkXMLPMultiBlockDataWriter::SetWriteMetaFile);
}
