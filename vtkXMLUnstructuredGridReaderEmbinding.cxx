// JavaScript wrapper for vtkXMLUnstructuredGridReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLUnstructuredGridReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLUnstructuredGridReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGrid.h"
#include "vtkXMLUnstructuredGridReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLUnstructuredGridReader>(vtkXMLUnstructuredGridReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLUnstructuredGridReader_class) {
  emscripten::class_<vtkXMLUnstructuredGridReader, emscripten::base<vtkXMLUnstructuredDataReader>>("vtkXMLUnstructuredGridReader")
    .smart_ptr<vtkSmartPointer<vtkXMLUnstructuredGridReader>>("vtkSmartPointer<vtkXMLUnstructuredGridReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLUnstructuredGridReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLUnstructuredGridReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLUnstructuredGridReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLUnstructuredGridReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLUnstructuredGridReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLUnstructuredGridReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLUnstructuredGridReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkUnstructuredGrid*(vtkXMLUnstructuredGridReader&)>([](vtkXMLUnstructuredGridReader& self) -> vtkUnstructuredGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkUnstructuredGrid*(vtkXMLUnstructuredGridReader&, int)>([](vtkXMLUnstructuredGridReader& self, int arg_0) -> vtkUnstructuredGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers());
}
