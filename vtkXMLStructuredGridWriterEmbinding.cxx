// JavaScript wrapper for vtkXMLStructuredGridWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLStructuredGridWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLStructuredGridWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStructuredGrid.h"
#include "vtkXMLStructuredGridWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLStructuredGridWriter>(vtkXMLStructuredGridWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLStructuredGridWriter_class) {
  emscripten::class_<vtkXMLStructuredGridWriter, emscripten::base<vtkXMLStructuredDataWriter>>("vtkXMLStructuredGridWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLStructuredGridWriter>>("vtkSmartPointer<vtkXMLStructuredGridWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLStructuredGridWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLStructuredGridWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLStructuredGridWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLStructuredGridWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLStructuredGridWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLStructuredGridWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLStructuredGridWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", &vtkXMLStructuredGridWriter::GetInput, emscripten::allow_raw_pointers())
    .function("GetDefaultFileExtension", emscripten::optional_override([](vtkXMLStructuredGridWriter& self) -> std::string {  return self.GetDefaultFileExtension();}));
}
