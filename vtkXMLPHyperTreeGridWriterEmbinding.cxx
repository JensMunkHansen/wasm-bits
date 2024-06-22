// JavaScript wrapper for vtkXMLPHyperTreeGridWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkIOParallelXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkXMLPHyperTreeGridWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/ParallelXML/vtkXMLPHyperTreeGridWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkXMLPHyperTreeGridWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPHyperTreeGridWriter>(vtkXMLPHyperTreeGridWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPHyperTreeGridWriter_class) {
  emscripten::class_<vtkXMLPHyperTreeGridWriter, emscripten::base<vtkXMLPDataObjectWriter>>("vtkXMLPHyperTreeGridWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLPHyperTreeGridWriter>>("vtkSmartPointer<vtkXMLPHyperTreeGridWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLPHyperTreeGridWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPHyperTreeGridWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPHyperTreeGridWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPHyperTreeGridWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPHyperTreeGridWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPHyperTreeGridWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPHyperTreeGridWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", &vtkXMLPHyperTreeGridWriter::GetInput, emscripten::allow_raw_pointers())
    .function("GetDefaultFileExtension", emscripten::optional_override([](vtkXMLPHyperTreeGridWriter& self) -> std::string {  return self.GetDefaultFileExtension();}));
}