// JavaScript wrapper for vtkXMLMultiGroupDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLMultiGroupDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLMultiGroupDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLMultiGroupDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLMultiGroupDataReader>(vtkXMLMultiGroupDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLMultiGroupDataReader_class) {
  emscripten::class_<vtkXMLMultiGroupDataReader, emscripten::base<vtkXMLMultiBlockDataReader>>("vtkXMLMultiGroupDataReader")
    .smart_ptr<vtkSmartPointer<vtkXMLMultiGroupDataReader>>("vtkSmartPointer<vtkXMLMultiGroupDataReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLMultiGroupDataReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLMultiGroupDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLMultiGroupDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLMultiGroupDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLMultiGroupDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLMultiGroupDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLMultiGroupDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
