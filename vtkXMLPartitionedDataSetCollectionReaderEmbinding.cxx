// JavaScript wrapper for vtkXMLPartitionedDataSetCollectionReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLPartitionedDataSetCollectionReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLPartitionedDataSetCollectionReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLPartitionedDataSetCollectionReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPartitionedDataSetCollectionReader>(vtkXMLPartitionedDataSetCollectionReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPartitionedDataSetCollectionReader_class) {
  emscripten::class_<vtkXMLPartitionedDataSetCollectionReader, emscripten::base<vtkXMLCompositeDataReader>>("vtkXMLPartitionedDataSetCollectionReader")
    .smart_ptr<vtkSmartPointer<vtkXMLPartitionedDataSetCollectionReader>>("vtkSmartPointer<vtkXMLPartitionedDataSetCollectionReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLPartitionedDataSetCollectionReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPartitionedDataSetCollectionReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPartitionedDataSetCollectionReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPartitionedDataSetCollectionReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPartitionedDataSetCollectionReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPartitionedDataSetCollectionReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPartitionedDataSetCollectionReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
