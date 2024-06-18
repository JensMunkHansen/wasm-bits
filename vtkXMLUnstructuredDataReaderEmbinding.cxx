// JavaScript wrapper for vtkXMLUnstructuredDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLUnstructuredDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLUnstructuredDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkXMLUnstructuredDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLUnstructuredDataReader>(vtkXMLUnstructuredDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLUnstructuredDataReader_class) {
  emscripten::class_<vtkXMLUnstructuredDataReader, emscripten::base<vtkXMLDataReader>>("vtkXMLUnstructuredDataReader")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLUnstructuredDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLUnstructuredDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLUnstructuredDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLUnstructuredDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLUnstructuredDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLUnstructuredDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfPoints", &vtkXMLUnstructuredDataReader::GetNumberOfPoints)
    .function("GetNumberOfCells", &vtkXMLUnstructuredDataReader::GetNumberOfCells)
    .function("GetNumberOfPieces", &vtkXMLUnstructuredDataReader::GetNumberOfPieces)
    .function("SetupUpdateExtent", &vtkXMLUnstructuredDataReader::SetupUpdateExtent)
    .function("CopyOutputInformation", &vtkXMLUnstructuredDataReader::CopyOutputInformation, emscripten::allow_raw_pointers());
}
