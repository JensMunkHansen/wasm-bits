// JavaScript wrapper for vtkXMLPartitionedDataSetReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLPartitionedDataSetReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLPartitionedDataSetReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLPartitionedDataSetReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPartitionedDataSetReader>(vtkXMLPartitionedDataSetReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPartitionedDataSetReader_class) {
  emscripten::class_<vtkXMLPartitionedDataSetReader, emscripten::base<vtkXMLCompositeDataReader>>("vtkXMLPartitionedDataSetReader")
    .smart_ptr<vtkSmartPointer<vtkXMLPartitionedDataSetReader>>("vtkSmartPointer<vtkXMLPartitionedDataSetReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLPartitionedDataSetReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPartitionedDataSetReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPartitionedDataSetReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPartitionedDataSetReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPartitionedDataSetReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPartitionedDataSetReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPartitionedDataSetReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
