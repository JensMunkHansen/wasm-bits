// JavaScript wrapper for vtkXMLRectilinearGridReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLRectilinearGridReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLRectilinearGridReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRectilinearGrid.h"
#include "vtkXMLRectilinearGridReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLRectilinearGridReader>(vtkXMLRectilinearGridReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLRectilinearGridReader_class) {
  emscripten::class_<vtkXMLRectilinearGridReader, emscripten::base<vtkXMLStructuredDataReader>>("vtkXMLRectilinearGridReader")
    .smart_ptr<vtkSmartPointer<vtkXMLRectilinearGridReader>>("vtkSmartPointer<vtkXMLRectilinearGridReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLRectilinearGridReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLRectilinearGridReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLRectilinearGridReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLRectilinearGridReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLRectilinearGridReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLRectilinearGridReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLRectilinearGridReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkRectilinearGrid*(vtkXMLRectilinearGridReader&)>([](vtkXMLRectilinearGridReader& self) -> vtkRectilinearGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkRectilinearGrid*(vtkXMLRectilinearGridReader&, int)>([](vtkXMLRectilinearGridReader& self, int arg_0) -> vtkRectilinearGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers());
}
