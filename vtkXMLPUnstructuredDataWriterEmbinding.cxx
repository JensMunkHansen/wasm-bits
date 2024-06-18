// JavaScript wrapper for vtkXMLPUnstructuredDataWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkIOParallelXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkXMLPUnstructuredDataWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/ParallelXML/vtkXMLPUnstructuredDataWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLPUnstructuredDataWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPUnstructuredDataWriter>(vtkXMLPUnstructuredDataWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPUnstructuredDataWriter_class) {
  emscripten::class_<vtkXMLPUnstructuredDataWriter, emscripten::base<vtkXMLPDataWriter>>("vtkXMLPUnstructuredDataWriter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPUnstructuredDataWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPUnstructuredDataWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPUnstructuredDataWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPUnstructuredDataWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPUnstructuredDataWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPUnstructuredDataWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
