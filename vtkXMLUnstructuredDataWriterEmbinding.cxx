// JavaScript wrapper for vtkXMLUnstructuredDataWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLUnstructuredDataWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLUnstructuredDataWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkXMLUnstructuredDataWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLUnstructuredDataWriter>(vtkXMLUnstructuredDataWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLUnstructuredDataWriter_class) {
  emscripten::class_<vtkXMLUnstructuredDataWriter, emscripten::base<vtkXMLWriter>>("vtkXMLUnstructuredDataWriter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLUnstructuredDataWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLUnstructuredDataWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLUnstructuredDataWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLUnstructuredDataWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLUnstructuredDataWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLUnstructuredDataWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfPieces", &vtkXMLUnstructuredDataWriter::SetNumberOfPieces)
    .function("GetNumberOfPieces", &vtkXMLUnstructuredDataWriter::GetNumberOfPieces)
    .function("SetWritePiece", &vtkXMLUnstructuredDataWriter::SetWritePiece)
    .function("GetWritePiece", &vtkXMLUnstructuredDataWriter::GetWritePiece)
    .function("SetGhostLevel", &vtkXMLUnstructuredDataWriter::SetGhostLevel)
    .function("GetGhostLevel", &vtkXMLUnstructuredDataWriter::GetGhostLevel);
}
