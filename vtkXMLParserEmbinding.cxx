// JavaScript wrapper for vtkXMLParser with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXMLParser.js/vtkIOXMLParser.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXMLParser.js/vtkXMLParserEmbinding.cxx \
 /home/jmh/github/vtk/IO/XMLParser/vtkXMLParser.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLParser.h"

template<> void emscripten::internal::raw_destructor<vtkXMLParser>(vtkXMLParser * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLParser_class) {
  emscripten::class_<vtkXMLParser, emscripten::base<vtkObject>>("vtkXMLParser")
    .smart_ptr<vtkSmartPointer<vtkXMLParser>>("vtkSmartPointer<vtkXMLParser>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLParser>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLParser::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLParser& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLParser::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLParser::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLParser::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLParser& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("TellG", &vtkXMLParser::TellG)
    .function("SeekG", &vtkXMLParser::SeekG)
    .function("Parse", emscripten::select_overload<int(vtkXMLParser&)>([](vtkXMLParser& self) -> int { return self.Parse(); }))
    .function("Parse", emscripten::select_overload<int(vtkXMLParser&, const std::string &)>([](vtkXMLParser& self, const std::string & arg_0) -> int { return self.Parse( arg_0.c_str()); }))
    .function("Parse", emscripten::select_overload<int(vtkXMLParser&, const std::string &, unsigned int)>([](vtkXMLParser& self, const std::string & arg_0, unsigned int arg_1) -> int { return self.Parse( arg_0.c_str(), arg_1); }))
    .function("InitializeParser", &vtkXMLParser::InitializeParser)
    .function("ParseChunk", emscripten::optional_override([](vtkXMLParser& self, const std::string & arg_0, unsigned int arg_1) -> int {  return self.ParseChunk( arg_0.c_str(), arg_1);}))
    .function("CleanupParser", &vtkXMLParser::CleanupParser)
    .function("SetFileName", emscripten::optional_override([](vtkXMLParser& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkXMLParser& self) -> std::string {  return self.GetFileName();}))
    .function("SetIgnoreCharacterData", &vtkXMLParser::SetIgnoreCharacterData)
    .function("GetIgnoreCharacterData", &vtkXMLParser::GetIgnoreCharacterData)
    .function("SetEncoding", emscripten::optional_override([](vtkXMLParser& self, const std::string & arg_0) -> void {  return self.SetEncoding( arg_0.c_str());}))
    .function("GetEncoding", emscripten::optional_override([](vtkXMLParser& self) -> std::string {  return self.GetEncoding();}))
    .class_function("hasLargeOffsets", &vtkXMLParser::hasLargeOffsets);
}
