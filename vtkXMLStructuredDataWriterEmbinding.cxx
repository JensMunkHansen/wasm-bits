// JavaScript wrapper for vtkXMLStructuredDataWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLStructuredDataWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLStructuredDataWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLStructuredDataWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLStructuredDataWriter>(vtkXMLStructuredDataWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLStructuredDataWriter_class) {
  emscripten::class_<vtkXMLStructuredDataWriter, emscripten::base<vtkXMLWriter>>("vtkXMLStructuredDataWriter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLStructuredDataWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLStructuredDataWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLStructuredDataWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLStructuredDataWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLStructuredDataWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLStructuredDataWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfPieces", &vtkXMLStructuredDataWriter::SetNumberOfPieces)
    .function("GetNumberOfPieces", &vtkXMLStructuredDataWriter::GetNumberOfPieces)
    .function("SetWritePiece", &vtkXMLStructuredDataWriter::SetWritePiece)
    .function("GetWritePiece", &vtkXMLStructuredDataWriter::GetWritePiece)
    .function("SetGhostLevel", &vtkXMLStructuredDataWriter::SetGhostLevel)
    .function("GetGhostLevel", &vtkXMLStructuredDataWriter::GetGhostLevel)
    .function("SetWriteExtent", emscripten::select_overload<void(vtkXMLStructuredDataWriter&, int, int, int, int, int, int)>([](vtkXMLStructuredDataWriter& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetWriteExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }));
}
