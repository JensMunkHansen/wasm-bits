// JavaScript wrapper for vtkXMLPStructuredDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLPStructuredDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLPStructuredDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkXMLPStructuredDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPStructuredDataReader>(vtkXMLPStructuredDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPStructuredDataReader_class) {
  emscripten::class_<vtkXMLPStructuredDataReader, emscripten::base<vtkXMLPDataReader>>("vtkXMLPStructuredDataReader")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPStructuredDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPStructuredDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPStructuredDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPStructuredDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPStructuredDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPStructuredDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CopyOutputInformation", &vtkXMLPStructuredDataReader::CopyOutputInformation, emscripten::allow_raw_pointers());
}
