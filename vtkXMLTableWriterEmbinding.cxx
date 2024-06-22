// JavaScript wrapper for vtkXMLTableWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLTableWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLTableWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkXMLTableWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLTableWriter>(vtkXMLTableWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLTableWriter_class) {
  emscripten::class_<vtkXMLTableWriter, emscripten::base<vtkXMLWriter>>("vtkXMLTableWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLTableWriter>>("vtkSmartPointer<vtkXMLTableWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLTableWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLTableWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLTableWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLTableWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLTableWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLTableWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLTableWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfPieces", &vtkXMLTableWriter::SetNumberOfPieces)
    .function("GetNumberOfPieces", &vtkXMLTableWriter::GetNumberOfPieces)
    .function("SetWritePiece", &vtkXMLTableWriter::SetWritePiece)
    .function("GetWritePiece", &vtkXMLTableWriter::GetWritePiece);
}
