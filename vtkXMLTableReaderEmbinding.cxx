// JavaScript wrapper for vtkXMLTableReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLTableReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLTableReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTable.h"
#include "vtkInformation.h"
#include "vtkXMLTableReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLTableReader>(vtkXMLTableReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLTableReader_class) {
  emscripten::class_<vtkXMLTableReader, emscripten::base<vtkXMLReader>>("vtkXMLTableReader")
    .smart_ptr<vtkSmartPointer<vtkXMLTableReader>>("vtkSmartPointer<vtkXMLTableReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLTableReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLTableReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLTableReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLTableReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLTableReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLTableReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLTableReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkTable*(vtkXMLTableReader&)>([](vtkXMLTableReader& self) -> vtkTable* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkTable*(vtkXMLTableReader&, int)>([](vtkXMLTableReader& self, int arg_0) -> vtkTable* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNumberOfRows", &vtkXMLTableReader::GetNumberOfRows)
    .function("GetNumberOfPieces", &vtkXMLTableReader::GetNumberOfPieces)
    .function("SetupUpdateExtent", &vtkXMLTableReader::SetupUpdateExtent)
    .function("CopyOutputInformation", &vtkXMLTableReader::CopyOutputInformation, emscripten::allow_raw_pointers());
}
