// JavaScript wrapper for vtkXMLPartitionedDataSetCollectionWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkIOParallelXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkXMLPartitionedDataSetCollectionWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/ParallelXML/vtkXMLPartitionedDataSetCollectionWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPartitionedDataSetCollection.h"
#include "vtkXMLPartitionedDataSetCollectionWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPartitionedDataSetCollectionWriter>(vtkXMLPartitionedDataSetCollectionWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPartitionedDataSetCollectionWriter_class) {
  emscripten::class_<vtkXMLPartitionedDataSetCollectionWriter, emscripten::base<vtkXMLWriter2>>("vtkXMLPartitionedDataSetCollectionWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLPartitionedDataSetCollectionWriter>>("vtkSmartPointer<vtkXMLPartitionedDataSetCollectionWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLPartitionedDataSetCollectionWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPartitionedDataSetCollectionWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPartitionedDataSetCollectionWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPartitionedDataSetCollectionWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPartitionedDataSetCollectionWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPartitionedDataSetCollectionWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPartitionedDataSetCollectionWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkXMLPartitionedDataSetCollectionWriter::SetInputData, emscripten::allow_raw_pointers())
    .function("GetDefaultFileExtension", emscripten::optional_override([](vtkXMLPartitionedDataSetCollectionWriter& self) -> std::string {  return self.GetDefaultFileExtension();}));
}
