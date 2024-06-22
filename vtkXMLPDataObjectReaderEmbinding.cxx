// JavaScript wrapper for vtkXMLPDataObjectReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLPDataObjectReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLPDataObjectReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLPDataObjectReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPDataObjectReader>(vtkXMLPDataObjectReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPDataObjectReader_class) {
  emscripten::class_<vtkXMLPDataObjectReader, emscripten::base<vtkXMLReader>>("vtkXMLPDataObjectReader")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPDataObjectReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPDataObjectReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPDataObjectReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPDataObjectReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPDataObjectReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPDataObjectReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfPieces", &vtkXMLPDataObjectReader::GetNumberOfPieces);
}