// JavaScript wrapper for vtkXMLUnstructuredGridWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLUnstructuredGridWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLUnstructuredGridWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGridBase.h"
#include "vtkXMLUnstructuredGridWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLUnstructuredGridWriter>(vtkXMLUnstructuredGridWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLUnstructuredGridWriter_class) {
  emscripten::class_<vtkXMLUnstructuredGridWriter, emscripten::base<vtkXMLUnstructuredDataWriter>>("vtkXMLUnstructuredGridWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLUnstructuredGridWriter>>("vtkSmartPointer<vtkXMLUnstructuredGridWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLUnstructuredGridWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLUnstructuredGridWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLUnstructuredGridWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLUnstructuredGridWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLUnstructuredGridWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLUnstructuredGridWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLUnstructuredGridWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", &vtkXMLUnstructuredGridWriter::GetInput, emscripten::allow_raw_pointers())
    .function("GetDefaultFileExtension", emscripten::optional_override([](vtkXMLUnstructuredGridWriter& self) -> std::string {  return self.GetDefaultFileExtension();}));
}
