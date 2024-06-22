// JavaScript wrapper for vtkXMLPUnstructuredGridWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkIOParallelXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkXMLPUnstructuredGridWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/ParallelXML/vtkXMLPUnstructuredGridWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGridBase.h"
#include "vtkXMLPUnstructuredGridWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPUnstructuredGridWriter>(vtkXMLPUnstructuredGridWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPUnstructuredGridWriter_class) {
  emscripten::class_<vtkXMLPUnstructuredGridWriter, emscripten::base<vtkXMLPUnstructuredDataWriter>>("vtkXMLPUnstructuredGridWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLPUnstructuredGridWriter>>("vtkSmartPointer<vtkXMLPUnstructuredGridWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLPUnstructuredGridWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPUnstructuredGridWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPUnstructuredGridWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPUnstructuredGridWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPUnstructuredGridWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPUnstructuredGridWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPUnstructuredGridWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", &vtkXMLPUnstructuredGridWriter::GetInput, emscripten::allow_raw_pointers())
    .function("GetDefaultFileExtension", emscripten::optional_override([](vtkXMLPUnstructuredGridWriter& self) -> std::string {  return self.GetDefaultFileExtension();}));
}
