// JavaScript wrapper for vtkXMLPStructuredGridReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLPStructuredGridReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLPStructuredGridReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStructuredGrid.h"
#include "vtkXMLPStructuredGridReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPStructuredGridReader>(vtkXMLPStructuredGridReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPStructuredGridReader_class) {
  emscripten::class_<vtkXMLPStructuredGridReader, emscripten::base<vtkXMLPStructuredDataReader>>("vtkXMLPStructuredGridReader")
    .smart_ptr<vtkSmartPointer<vtkXMLPStructuredGridReader>>("vtkSmartPointer<vtkXMLPStructuredGridReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLPStructuredGridReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPStructuredGridReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPStructuredGridReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPStructuredGridReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPStructuredGridReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPStructuredGridReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPStructuredGridReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkStructuredGrid*(vtkXMLPStructuredGridReader&)>([](vtkXMLPStructuredGridReader& self) -> vtkStructuredGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkStructuredGrid*(vtkXMLPStructuredGridReader&, int)>([](vtkXMLPStructuredGridReader& self, int arg_0) -> vtkStructuredGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers());
}
