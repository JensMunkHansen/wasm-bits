// JavaScript wrapper for vtkXMLHyperTreeGridWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLHyperTreeGridWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLHyperTreeGridWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkXMLHyperTreeGridWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLHyperTreeGridWriter>(vtkXMLHyperTreeGridWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLHyperTreeGridWriter_class) {
  emscripten::class_<vtkXMLHyperTreeGridWriter, emscripten::base<vtkXMLWriter>>("vtkXMLHyperTreeGridWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLHyperTreeGridWriter>>("vtkSmartPointer<vtkXMLHyperTreeGridWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLHyperTreeGridWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLHyperTreeGridWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLHyperTreeGridWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLHyperTreeGridWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLHyperTreeGridWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLHyperTreeGridWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLHyperTreeGridWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", &vtkXMLHyperTreeGridWriter::GetInput, emscripten::allow_raw_pointers())
    .function("GetDefaultFileExtension", emscripten::optional_override([](vtkXMLHyperTreeGridWriter& self) -> std::string {  return self.GetDefaultFileExtension();}))
    .function("SetDataSetMajorVersion", &vtkXMLHyperTreeGridWriter::SetDataSetMajorVersion)
    .function("SetDataSetMinorVersion", &vtkXMLHyperTreeGridWriter::SetDataSetMinorVersion);
}
