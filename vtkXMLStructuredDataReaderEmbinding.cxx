// JavaScript wrapper for vtkXMLStructuredDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLStructuredDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLStructuredDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkXMLStructuredDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLStructuredDataReader>(vtkXMLStructuredDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLStructuredDataReader_class) {
  emscripten::class_<vtkXMLStructuredDataReader, emscripten::base<vtkXMLDataReader>>("vtkXMLStructuredDataReader")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLStructuredDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLStructuredDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLStructuredDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLStructuredDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLStructuredDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLStructuredDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfPoints", &vtkXMLStructuredDataReader::GetNumberOfPoints)
    .function("GetNumberOfCells", &vtkXMLStructuredDataReader::GetNumberOfCells)
    .function("SetWholeSlices", &vtkXMLStructuredDataReader::SetWholeSlices)
    .function("GetWholeSlices", &vtkXMLStructuredDataReader::GetWholeSlices)
    .function("WholeSlicesOn", &vtkXMLStructuredDataReader::WholeSlicesOn)
    .function("WholeSlicesOff", &vtkXMLStructuredDataReader::WholeSlicesOff)
    .function("CopyOutputInformation", &vtkXMLStructuredDataReader::CopyOutputInformation, emscripten::allow_raw_pointers());
}
