// JavaScript wrapper for vtkDelimitedTextReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkDelimitedTextReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkDelimitedTextReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkDelimitedTextReader.h"

template<> void emscripten::internal::raw_destructor<vtkDelimitedTextReader>(vtkDelimitedTextReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDelimitedTextReader_class) {
  emscripten::class_<vtkDelimitedTextReader, emscripten::base<vtkTableAlgorithm>>("vtkDelimitedTextReader")
    .smart_ptr<vtkSmartPointer<vtkDelimitedTextReader>>("vtkSmartPointer<vtkDelimitedTextReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDelimitedTextReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDelimitedTextReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDelimitedTextReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDelimitedTextReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDelimitedTextReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDelimitedTextReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDelimitedTextReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkDelimitedTextReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileName", emscripten::optional_override([](vtkDelimitedTextReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("SetInputString", emscripten::select_overload<void(vtkDelimitedTextReader&, const std::string &)>([](vtkDelimitedTextReader& self, const std::string & arg_0) -> void { return self.SetInputString( arg_0.c_str()); }))
    .function("SetInputString", emscripten::select_overload<void(vtkDelimitedTextReader&, const vtkStdString&)>([](vtkDelimitedTextReader& self, const vtkStdString& arg_0) -> void { return self.SetInputString( arg_0); }))
    .function("SetInputString", emscripten::select_overload<void(vtkDelimitedTextReader&, const std::string &, int)>([](vtkDelimitedTextReader& self, const std::string & arg_0, int arg_1) -> void { return self.SetInputString( arg_0.c_str(), arg_1); }))
    .function("GetInputString", emscripten::optional_override([](vtkDelimitedTextReader& self) -> std::string {  return self.GetInputString();}))
    .function("GetInputStringLength", &vtkDelimitedTextReader::GetInputStringLength)
    .function("SetReadFromInputString", &vtkDelimitedTextReader::SetReadFromInputString)
    .function("GetReadFromInputString", &vtkDelimitedTextReader::GetReadFromInputString)
    .function("ReadFromInputStringOn", &vtkDelimitedTextReader::ReadFromInputStringOn)
    .function("ReadFromInputStringOff", &vtkDelimitedTextReader::ReadFromInputStringOff)
    .function("GetUnicodeCharacterSet", emscripten::optional_override([](vtkDelimitedTextReader& self) -> std::string {  return self.GetUnicodeCharacterSet();}))
    .function("SetUnicodeCharacterSet", emscripten::optional_override([](vtkDelimitedTextReader& self, const std::string & arg_0) -> void {  return self.SetUnicodeCharacterSet( arg_0.c_str());}))
    .function("SetUTF8RecordDelimiters", emscripten::optional_override([](vtkDelimitedTextReader& self, const std::string & arg_0) -> void {  return self.SetUTF8RecordDelimiters( arg_0.c_str());}))
    .function("GetUTF8RecordDelimiters", emscripten::optional_override([](vtkDelimitedTextReader& self) -> std::string {  return self.GetUTF8RecordDelimiters();}))
    .function("SetFieldDelimiterCharacters", emscripten::optional_override([](vtkDelimitedTextReader& self, const std::string & arg_0) -> void {  return self.SetFieldDelimiterCharacters( arg_0.c_str());}))
    .function("GetFieldDelimiterCharacters", emscripten::optional_override([](vtkDelimitedTextReader& self) -> std::string {  return self.GetFieldDelimiterCharacters();}))
    .function("SetUTF8FieldDelimiters", emscripten::optional_override([](vtkDelimitedTextReader& self, const std::string & arg_0) -> void {  return self.SetUTF8FieldDelimiters( arg_0.c_str());}))
    .function("GetUTF8FieldDelimiters", emscripten::optional_override([](vtkDelimitedTextReader& self) -> std::string {  return self.GetUTF8FieldDelimiters();}))
    .function("GetStringDelimiter", &vtkDelimitedTextReader::GetStringDelimiter)
    .function("SetStringDelimiter", &vtkDelimitedTextReader::SetStringDelimiter)
    .function("SetUTF8StringDelimiters", emscripten::optional_override([](vtkDelimitedTextReader& self, const std::string & arg_0) -> void {  return self.SetUTF8StringDelimiters( arg_0.c_str());}))
    .function("GetUTF8StringDelimiters", emscripten::optional_override([](vtkDelimitedTextReader& self) -> std::string {  return self.GetUTF8StringDelimiters();}))
    .function("SetUseStringDelimiter", &vtkDelimitedTextReader::SetUseStringDelimiter)
    .function("GetUseStringDelimiter", &vtkDelimitedTextReader::GetUseStringDelimiter)
    .function("UseStringDelimiterOn", &vtkDelimitedTextReader::UseStringDelimiterOn)
    .function("UseStringDelimiterOff", &vtkDelimitedTextReader::UseStringDelimiterOff)
    .function("GetHaveHeaders", &vtkDelimitedTextReader::GetHaveHeaders)
    .function("SetHaveHeaders", &vtkDelimitedTextReader::SetHaveHeaders)
    .function("SetMergeConsecutiveDelimiters", &vtkDelimitedTextReader::SetMergeConsecutiveDelimiters)
    .function("GetMergeConsecutiveDelimiters", &vtkDelimitedTextReader::GetMergeConsecutiveDelimiters)
    .function("MergeConsecutiveDelimitersOn", &vtkDelimitedTextReader::MergeConsecutiveDelimitersOn)
    .function("MergeConsecutiveDelimitersOff", &vtkDelimitedTextReader::MergeConsecutiveDelimitersOff)
    .function("GetMaxRecords", &vtkDelimitedTextReader::GetMaxRecords)
    .function("SetMaxRecords", &vtkDelimitedTextReader::SetMaxRecords)
    .function("SetDetectNumericColumns", &vtkDelimitedTextReader::SetDetectNumericColumns)
    .function("GetDetectNumericColumns", &vtkDelimitedTextReader::GetDetectNumericColumns)
    .function("DetectNumericColumnsOn", &vtkDelimitedTextReader::DetectNumericColumnsOn)
    .function("DetectNumericColumnsOff", &vtkDelimitedTextReader::DetectNumericColumnsOff)
    .function("SetForceDouble", &vtkDelimitedTextReader::SetForceDouble)
    .function("GetForceDouble", &vtkDelimitedTextReader::GetForceDouble)
    .function("ForceDoubleOn", &vtkDelimitedTextReader::ForceDoubleOn)
    .function("ForceDoubleOff", &vtkDelimitedTextReader::ForceDoubleOff)
    .function("SetTrimWhitespacePriorToNumericConversion", &vtkDelimitedTextReader::SetTrimWhitespacePriorToNumericConversion)
    .function("GetTrimWhitespacePriorToNumericConversion", &vtkDelimitedTextReader::GetTrimWhitespacePriorToNumericConversion)
    .function("TrimWhitespacePriorToNumericConversionOn", &vtkDelimitedTextReader::TrimWhitespacePriorToNumericConversionOn)
    .function("TrimWhitespacePriorToNumericConversionOff", &vtkDelimitedTextReader::TrimWhitespacePriorToNumericConversionOff)
    .function("SetDefaultIntegerValue", &vtkDelimitedTextReader::SetDefaultIntegerValue)
    .function("GetDefaultIntegerValue", &vtkDelimitedTextReader::GetDefaultIntegerValue)
    .function("SetDefaultDoubleValue", &vtkDelimitedTextReader::SetDefaultDoubleValue)
    .function("GetDefaultDoubleValue", &vtkDelimitedTextReader::GetDefaultDoubleValue)
    .function("SetPedigreeIdArrayName", emscripten::optional_override([](vtkDelimitedTextReader& self, const std::string & arg_0) -> void {  return self.SetPedigreeIdArrayName( arg_0.c_str());}))
    .function("GetPedigreeIdArrayName", emscripten::optional_override([](vtkDelimitedTextReader& self) -> std::string {  return self.GetPedigreeIdArrayName();}))
    .function("SetGeneratePedigreeIds", &vtkDelimitedTextReader::SetGeneratePedigreeIds)
    .function("GetGeneratePedigreeIds", &vtkDelimitedTextReader::GetGeneratePedigreeIds)
    .function("GeneratePedigreeIdsOn", &vtkDelimitedTextReader::GeneratePedigreeIdsOn)
    .function("GeneratePedigreeIdsOff", &vtkDelimitedTextReader::GeneratePedigreeIdsOff)
    .function("SetOutputPedigreeIds", &vtkDelimitedTextReader::SetOutputPedigreeIds)
    .function("GetOutputPedigreeIds", &vtkDelimitedTextReader::GetOutputPedigreeIds)
    .function("OutputPedigreeIdsOn", &vtkDelimitedTextReader::OutputPedigreeIdsOn)
    .function("OutputPedigreeIdsOff", &vtkDelimitedTextReader::OutputPedigreeIdsOff)
    .function("SetAddTabFieldDelimiter", &vtkDelimitedTextReader::SetAddTabFieldDelimiter)
    .function("GetAddTabFieldDelimiter", &vtkDelimitedTextReader::GetAddTabFieldDelimiter)
    .function("AddTabFieldDelimiterOn", &vtkDelimitedTextReader::AddTabFieldDelimiterOn)
    .function("AddTabFieldDelimiterOff", &vtkDelimitedTextReader::AddTabFieldDelimiterOff)
    .function("GetLastError", &vtkDelimitedTextReader::GetLastError)
    .function("SetReplacementCharacter", &vtkDelimitedTextReader::SetReplacementCharacter)
    .function("GetReplacementCharacter", &vtkDelimitedTextReader::GetReplacementCharacter);
}
