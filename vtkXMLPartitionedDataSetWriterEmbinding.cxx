// JavaScript wrapper for vtkXMLPartitionedDataSetWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkIOParallelXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkXMLPartitionedDataSetWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/ParallelXML/vtkXMLPartitionedDataSetWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPartitionedDataSet.h"
#include "vtkXMLPartitionedDataSetWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPartitionedDataSetWriter>(vtkXMLPartitionedDataSetWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPartitionedDataSetWriter_class) {
  emscripten::class_<vtkXMLPartitionedDataSetWriter, emscripten::base<vtkXMLWriter2>>("vtkXMLPartitionedDataSetWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLPartitionedDataSetWriter>>("vtkSmartPointer<vtkXMLPartitionedDataSetWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLPartitionedDataSetWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPartitionedDataSetWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPartitionedDataSetWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPartitionedDataSetWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPartitionedDataSetWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPartitionedDataSetWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPartitionedDataSetWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkXMLPartitionedDataSetWriter::SetInputData, emscripten::allow_raw_pointers())
    .function("GetDefaultFileExtension", emscripten::optional_override([](vtkXMLPartitionedDataSetWriter& self) -> std::string {  return self.GetDefaultFileExtension();}));
}
