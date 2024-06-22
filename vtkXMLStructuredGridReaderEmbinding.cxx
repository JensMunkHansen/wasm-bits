// JavaScript wrapper for vtkXMLStructuredGridReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLStructuredGridReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLStructuredGridReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStructuredGrid.h"
#include "vtkXMLStructuredGridReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLStructuredGridReader>(vtkXMLStructuredGridReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLStructuredGridReader_class) {
  emscripten::class_<vtkXMLStructuredGridReader, emscripten::base<vtkXMLStructuredDataReader>>("vtkXMLStructuredGridReader")
    .smart_ptr<vtkSmartPointer<vtkXMLStructuredGridReader>>("vtkSmartPointer<vtkXMLStructuredGridReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLStructuredGridReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLStructuredGridReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLStructuredGridReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLStructuredGridReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLStructuredGridReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLStructuredGridReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLStructuredGridReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkStructuredGrid*(vtkXMLStructuredGridReader&)>([](vtkXMLStructuredGridReader& self) -> vtkStructuredGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkStructuredGrid*(vtkXMLStructuredGridReader&, int)>([](vtkXMLStructuredGridReader& self, int arg_0) -> vtkStructuredGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers());
}
