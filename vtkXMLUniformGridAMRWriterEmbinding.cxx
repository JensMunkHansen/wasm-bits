// JavaScript wrapper for vtkXMLUniformGridAMRWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLUniformGridAMRWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLUniformGridAMRWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLUniformGridAMRWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLUniformGridAMRWriter>(vtkXMLUniformGridAMRWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLUniformGridAMRWriter_class) {
  emscripten::class_<vtkXMLUniformGridAMRWriter, emscripten::base<vtkXMLCompositeDataWriter>>("vtkXMLUniformGridAMRWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLUniformGridAMRWriter>>("vtkSmartPointer<vtkXMLUniformGridAMRWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLUniformGridAMRWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLUniformGridAMRWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLUniformGridAMRWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLUniformGridAMRWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLUniformGridAMRWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLUniformGridAMRWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLUniformGridAMRWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDefaultFileExtension", emscripten::optional_override([](vtkXMLUniformGridAMRWriter& self) -> std::string {  return self.GetDefaultFileExtension();}));
}
