// JavaScript wrapper for vtkXMLDataParser with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXMLParser.js/vtkIOXMLParser.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXMLParser.js/vtkXMLDataParserEmbinding.cxx \
 /home/jmh/github/vtk/IO/XMLParser/vtkXMLDataParser.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLDataElement.h"
#include "vtkDataCompressor.h"
#include "vtkXMLDataParser.h"

template<> void emscripten::internal::raw_destructor<vtkXMLDataParser>(vtkXMLDataParser * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLDataParser_class) {
  emscripten::class_<vtkXMLDataParser, emscripten::base<vtkXMLParser>>("vtkXMLDataParser")
    .smart_ptr<vtkSmartPointer<vtkXMLDataParser>>("vtkSmartPointer<vtkXMLDataParser>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLDataParser>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLDataParser::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLDataParser& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLDataParser::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLDataParser::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLDataParser::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLDataParser& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetRootElement", &vtkXMLDataParser::GetRootElement, emscripten::allow_raw_pointers())
    .function("ReadInlineData", emscripten::select_overload<size_t(vtkXMLDataParser&, vtkXMLDataElement*, int, std::uintptr_t, unsigned long long, size_t, int)>([](vtkXMLDataParser& self, vtkXMLDataElement* arg_0, int arg_1, std::uintptr_t arg_2, unsigned long long arg_3, size_t arg_4, int arg_5) -> size_t { return self.ReadInlineData( arg_0, arg_1,reinterpret_cast<void*>(arg_2), arg_3, arg_4, arg_5); }), emscripten::allow_raw_pointers())
    .function("ReadInlineData", emscripten::select_overload<size_t(vtkXMLDataParser&, vtkXMLDataElement*, int, std::uintptr_t, unsigned long long, size_t)>([](vtkXMLDataParser& self, vtkXMLDataElement* arg_0, int arg_1, std::uintptr_t arg_2, unsigned long long arg_3, size_t arg_4) -> size_t { return self.ReadInlineData( arg_0, arg_1,reinterpret_cast<char*>(arg_2 * sizeof(char)), arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("ReadAppendedData", emscripten::select_overload<size_t(vtkXMLDataParser&, long long, std::uintptr_t, unsigned long long, size_t, int)>([](vtkXMLDataParser& self, long long arg_0, std::uintptr_t arg_1, unsigned long long arg_2, size_t arg_3, int arg_4) -> size_t { return self.ReadAppendedData( arg_0,reinterpret_cast<void*>(arg_1), arg_2, arg_3, arg_4); }))
    .function("ReadAppendedData", emscripten::select_overload<size_t(vtkXMLDataParser&, long long, std::uintptr_t, unsigned long long, size_t)>([](vtkXMLDataParser& self, long long arg_0, std::uintptr_t arg_1, unsigned long long arg_2, size_t arg_3) -> size_t { return self.ReadAppendedData( arg_0,reinterpret_cast<char*>(arg_1 * sizeof(char)), arg_2, arg_3); }))
    .function("ReadAsciiData", emscripten::optional_override([](vtkXMLDataParser& self, std::uintptr_t arg_0, unsigned long long arg_1, size_t arg_2, int arg_3) -> size_t {  return self.ReadAsciiData(reinterpret_cast<void*>(arg_0), arg_1, arg_2, arg_3);}))
    .function("ReadBinaryData", emscripten::optional_override([](vtkXMLDataParser& self, std::uintptr_t arg_0, unsigned long long arg_1, size_t arg_2, int arg_3) -> size_t {  return self.ReadBinaryData(reinterpret_cast<void*>(arg_0), arg_1, arg_2, arg_3);}))
    .function("SetCompressor", &vtkXMLDataParser::SetCompressor, emscripten::allow_raw_pointers())
    .function("GetCompressor", &vtkXMLDataParser::GetCompressor, emscripten::allow_raw_pointers())
    .function("GetWordTypeSize", &vtkXMLDataParser::GetWordTypeSize)
    .function("Parse", emscripten::select_overload<int(vtkXMLDataParser&)>([](vtkXMLDataParser& self) -> int { return self.Parse(); }))
    .function("GetAbort", &vtkXMLDataParser::GetAbort)
    .function("SetAbort", &vtkXMLDataParser::SetAbort)
    .function("GetProgress", &vtkXMLDataParser::GetProgress)
    .function("SetProgress", &vtkXMLDataParser::SetProgress)
    .function("SetAttributesEncoding", &vtkXMLDataParser::SetAttributesEncoding)
    .function("GetAttributesEncodingMinValue", &vtkXMLDataParser::GetAttributesEncodingMinValue)
    .function("GetAttributesEncodingMaxValue", &vtkXMLDataParser::GetAttributesEncodingMaxValue)
    .function("GetAttributesEncoding", &vtkXMLDataParser::GetAttributesEncoding)
    .function("CharacterDataHandler", emscripten::optional_override([](vtkXMLDataParser& self, const std::string & arg_0, int arg_1) -> void {  return self.CharacterDataHandler( arg_0.c_str(), arg_1);}))
    .function("GetAppendedDataPosition", &vtkXMLDataParser::GetAppendedDataPosition);
}
EMSCRIPTEN_BINDINGS(vtkIOXMLParser_vtkXMLDataParser_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkXMLDataParser_BigEndian", vtkXMLDataParser::BigEndian },
      { "vtkXMLDataParser_LittleEndian", vtkXMLDataParser::LittleEndian },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
