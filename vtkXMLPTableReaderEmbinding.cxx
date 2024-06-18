// JavaScript wrapper for vtkXMLPTableReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLPTableReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLPTableReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTable.h"
#include "vtkInformation.h"
#include "vtkDataArraySelection.h"
#include "vtkXMLPTableReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPTableReader>(vtkXMLPTableReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPTableReader_class) {
  emscripten::class_<vtkXMLPTableReader, emscripten::base<vtkXMLPDataObjectReader>>("vtkXMLPTableReader")
    .smart_ptr<vtkSmartPointer<vtkXMLPTableReader>>("vtkSmartPointer<vtkXMLPTableReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLPTableReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPTableReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPTableReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPTableReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPTableReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPTableReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPTableReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkTable*(vtkXMLPTableReader&)>([](vtkXMLPTableReader& self) -> vtkTable* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkTable*(vtkXMLPTableReader&, int)>([](vtkXMLPTableReader& self, int arg_0) -> vtkTable* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("CopyOutputInformation", &vtkXMLPTableReader::CopyOutputInformation, emscripten::allow_raw_pointers())
    .function("GetNumberOfColumnArrays", &vtkXMLPTableReader::GetNumberOfColumnArrays)
    .function("GetColumnArrayName", emscripten::optional_override([](vtkXMLPTableReader& self, int arg_0) -> std::string {  return self.GetColumnArrayName( arg_0);}))
    .function("GetColumnArrayStatus", emscripten::optional_override([](vtkXMLPTableReader& self, const std::string & arg_0) -> int {  return self.GetColumnArrayStatus( arg_0.c_str());}))
    .function("SetColumnArrayStatus", emscripten::optional_override([](vtkXMLPTableReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetColumnArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetColumnSelection", &vtkXMLPTableReader::GetColumnSelection, emscripten::allow_raw_pointers());
}
