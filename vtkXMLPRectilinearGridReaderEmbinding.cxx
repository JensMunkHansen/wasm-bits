// JavaScript wrapper for vtkXMLPRectilinearGridReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLPRectilinearGridReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLPRectilinearGridReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRectilinearGrid.h"
#include "vtkXMLPRectilinearGridReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPRectilinearGridReader>(vtkXMLPRectilinearGridReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPRectilinearGridReader_class) {
  emscripten::class_<vtkXMLPRectilinearGridReader, emscripten::base<vtkXMLPStructuredDataReader>>("vtkXMLPRectilinearGridReader")
    .smart_ptr<vtkSmartPointer<vtkXMLPRectilinearGridReader>>("vtkSmartPointer<vtkXMLPRectilinearGridReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLPRectilinearGridReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPRectilinearGridReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPRectilinearGridReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPRectilinearGridReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPRectilinearGridReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPRectilinearGridReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPRectilinearGridReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkRectilinearGrid*(vtkXMLPRectilinearGridReader&)>([](vtkXMLPRectilinearGridReader& self) -> vtkRectilinearGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkRectilinearGrid*(vtkXMLPRectilinearGridReader&, int)>([](vtkXMLPRectilinearGridReader& self, int arg_0) -> vtkRectilinearGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers());
}
