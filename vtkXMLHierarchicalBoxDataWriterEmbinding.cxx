// JavaScript wrapper for vtkXMLHierarchicalBoxDataWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLHierarchicalBoxDataWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLHierarchicalBoxDataWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLHierarchicalBoxDataWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLHierarchicalBoxDataWriter>(vtkXMLHierarchicalBoxDataWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLHierarchicalBoxDataWriter_class) {
  emscripten::class_<vtkXMLHierarchicalBoxDataWriter, emscripten::base<vtkXMLUniformGridAMRWriter>>("vtkXMLHierarchicalBoxDataWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLHierarchicalBoxDataWriter>>("vtkSmartPointer<vtkXMLHierarchicalBoxDataWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLHierarchicalBoxDataWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLHierarchicalBoxDataWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLHierarchicalBoxDataWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLHierarchicalBoxDataWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLHierarchicalBoxDataWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLHierarchicalBoxDataWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLHierarchicalBoxDataWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDefaultFileExtension", emscripten::optional_override([](vtkXMLHierarchicalBoxDataWriter& self) -> std::string {  return self.GetDefaultFileExtension();}));
}
