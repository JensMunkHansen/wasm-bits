// JavaScript wrapper for vtkXMLHierarchicalDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLHierarchicalDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLHierarchicalDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLHierarchicalDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLHierarchicalDataReader>(vtkXMLHierarchicalDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLHierarchicalDataReader_class) {
  emscripten::class_<vtkXMLHierarchicalDataReader, emscripten::base<vtkXMLMultiGroupDataReader>>("vtkXMLHierarchicalDataReader")
    .smart_ptr<vtkSmartPointer<vtkXMLHierarchicalDataReader>>("vtkSmartPointer<vtkXMLHierarchicalDataReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLHierarchicalDataReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLHierarchicalDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLHierarchicalDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLHierarchicalDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLHierarchicalDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLHierarchicalDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLHierarchicalDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
