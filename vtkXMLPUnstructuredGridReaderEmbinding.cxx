// JavaScript wrapper for vtkXMLPUnstructuredGridReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLPUnstructuredGridReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLPUnstructuredGridReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGrid.h"
#include "vtkXMLPUnstructuredGridReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPUnstructuredGridReader>(vtkXMLPUnstructuredGridReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPUnstructuredGridReader_class) {
  emscripten::class_<vtkXMLPUnstructuredGridReader, emscripten::base<vtkXMLPUnstructuredDataReader>>("vtkXMLPUnstructuredGridReader")
    .smart_ptr<vtkSmartPointer<vtkXMLPUnstructuredGridReader>>("vtkSmartPointer<vtkXMLPUnstructuredGridReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLPUnstructuredGridReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPUnstructuredGridReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPUnstructuredGridReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPUnstructuredGridReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPUnstructuredGridReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPUnstructuredGridReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPUnstructuredGridReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkUnstructuredGrid*(vtkXMLPUnstructuredGridReader&)>([](vtkXMLPUnstructuredGridReader& self) -> vtkUnstructuredGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkUnstructuredGrid*(vtkXMLPUnstructuredGridReader&, int)>([](vtkXMLPUnstructuredGridReader& self, int arg_0) -> vtkUnstructuredGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers());
}
