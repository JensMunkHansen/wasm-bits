// JavaScript wrapper for vtkXMLCompositeDataWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLCompositeDataWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLCompositeDataWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkXMLCompositeDataWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLCompositeDataWriter>(vtkXMLCompositeDataWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLCompositeDataWriter_class) {
  emscripten::class_<vtkXMLCompositeDataWriter, emscripten::base<vtkXMLWriter>>("vtkXMLCompositeDataWriter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLCompositeDataWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLCompositeDataWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLCompositeDataWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLCompositeDataWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLCompositeDataWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLCompositeDataWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDefaultFileExtension", emscripten::optional_override([](vtkXMLCompositeDataWriter& self) -> std::string {  return self.GetDefaultFileExtension();}))
    .function("GetGhostLevel", &vtkXMLCompositeDataWriter::GetGhostLevel)
    .function("SetGhostLevel", &vtkXMLCompositeDataWriter::SetGhostLevel)
    .function("GetWriteMetaFile", &vtkXMLCompositeDataWriter::GetWriteMetaFile)
    .function("SetWriteMetaFile", &vtkXMLCompositeDataWriter::SetWriteMetaFile);
}
