// JavaScript wrapper for vtkXMLDataSetWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLDataSetWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLDataSetWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLDataSetWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLDataSetWriter>(vtkXMLDataSetWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLDataSetWriter_class) {
  emscripten::class_<vtkXMLDataSetWriter, emscripten::base<vtkXMLDataObjectWriter>>("vtkXMLDataSetWriter")
    .smart_ptr<vtkSmartPointer<vtkXMLDataSetWriter>>("vtkSmartPointer<vtkXMLDataSetWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLDataSetWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLDataSetWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLDataSetWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLDataSetWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLDataSetWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLDataSetWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLDataSetWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
