// JavaScript wrapper for vtkXMLPHierarchicalBoxDataWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkIOParallelXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkXMLPHierarchicalBoxDataWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/ParallelXML/vtkXMLPHierarchicalBoxDataWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLPHierarchicalBoxDataWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPHierarchicalBoxDataWriter>(vtkXMLPHierarchicalBoxDataWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPHierarchicalBoxDataWriter_class) {
  emscripten::class_<vtkXMLPHierarchicalBoxDataWriter, emscripten::base<vtkXMLPUniformGridAMRWriter>>("vtkXMLPHierarchicalBoxDataWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLPHierarchicalBoxDataWriter>>("vtkSmartPointer<vtkXMLPHierarchicalBoxDataWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLPHierarchicalBoxDataWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPHierarchicalBoxDataWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPHierarchicalBoxDataWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPHierarchicalBoxDataWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPHierarchicalBoxDataWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPHierarchicalBoxDataWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPHierarchicalBoxDataWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
