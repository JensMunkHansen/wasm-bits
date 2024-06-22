// JavaScript wrapper for vtkXMLMultiBlockDataWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLMultiBlockDataWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLMultiBlockDataWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLMultiBlockDataWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLMultiBlockDataWriter>(vtkXMLMultiBlockDataWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLMultiBlockDataWriter_class) {
  emscripten::class_<vtkXMLMultiBlockDataWriter, emscripten::base<vtkXMLCompositeDataWriter>>("vtkXMLMultiBlockDataWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLMultiBlockDataWriter>>("vtkSmartPointer<vtkXMLMultiBlockDataWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLMultiBlockDataWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLMultiBlockDataWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLMultiBlockDataWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLMultiBlockDataWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLMultiBlockDataWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLMultiBlockDataWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLMultiBlockDataWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDefaultFileExtension", emscripten::optional_override([](vtkXMLMultiBlockDataWriter& self) -> std::string {  return self.GetDefaultFileExtension();}));
}
