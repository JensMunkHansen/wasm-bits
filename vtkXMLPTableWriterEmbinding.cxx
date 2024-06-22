// JavaScript wrapper for vtkXMLPTableWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkIOParallelXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkXMLPTableWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/ParallelXML/vtkXMLPTableWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTable.h"
#include "vtkXMLPTableWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPTableWriter>(vtkXMLPTableWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPTableWriter_class) {
  emscripten::class_<vtkXMLPTableWriter, emscripten::base<vtkXMLPDataObjectWriter>>("vtkXMLPTableWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLPTableWriter>>("vtkSmartPointer<vtkXMLPTableWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLPTableWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPTableWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPTableWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPTableWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPTableWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPTableWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPTableWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", &vtkXMLPTableWriter::GetInput, emscripten::allow_raw_pointers())
    .function("GetDefaultFileExtension", emscripten::optional_override([](vtkXMLPTableWriter& self) -> std::string {  return self.GetDefaultFileExtension();}));
}