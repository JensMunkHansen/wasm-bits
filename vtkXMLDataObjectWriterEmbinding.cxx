// JavaScript wrapper for vtkXMLDataObjectWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLDataObjectWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLDataObjectWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkXMLWriter.h"
#include "vtkXMLDataObjectWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLDataObjectWriter>(vtkXMLDataObjectWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLDataObjectWriter_class) {
  emscripten::class_<vtkXMLDataObjectWriter, emscripten::base<vtkXMLWriter>>("vtkXMLDataObjectWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLDataObjectWriter>>("vtkSmartPointer<vtkXMLDataObjectWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLDataObjectWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLDataObjectWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLDataObjectWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLDataObjectWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLDataObjectWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLDataObjectWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLDataObjectWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", &vtkXMLDataObjectWriter::GetInput, emscripten::allow_raw_pointers())
    .class_function("NewWriter", &vtkXMLDataObjectWriter::NewWriter, emscripten::allow_raw_pointers());
}
