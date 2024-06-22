// JavaScript wrapper for vtkXMLMultiBlockDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLMultiBlockDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLMultiBlockDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLMultiBlockDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLMultiBlockDataReader>(vtkXMLMultiBlockDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLMultiBlockDataReader_class) {
  emscripten::class_<vtkXMLMultiBlockDataReader, emscripten::base<vtkXMLCompositeDataReader>>("vtkXMLMultiBlockDataReader")
    .smart_ptr<vtkSmartPointer<vtkXMLMultiBlockDataReader>>("vtkSmartPointer<vtkXMLMultiBlockDataReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLMultiBlockDataReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLMultiBlockDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLMultiBlockDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLMultiBlockDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLMultiBlockDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLMultiBlockDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLMultiBlockDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
