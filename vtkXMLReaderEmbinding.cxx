// JavaScript wrapper for vtkXMLReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCharArray.h"
#include "vtkDataSet.h"
#include "vtkDataArraySelection.h"
#include "vtkStringArray.h"
#include "vtkInformation.h"
#include "vtkXMLDataParser.h"
#include "vtkInformationVector.h"
#include "vtkCommand.h"
#include "vtkXMLReader.h"

EMSCRIPTEN_BINDINGS(vtkIOXML_vtkXMLReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkXMLReader>(vtkXMLReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLReader_class) {
  using FieldType=vtkXMLReader::FieldType;
  emscripten::class_<vtkXMLReader, emscripten::base<vtkAlgorithm>>("vtkXMLReader")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkXMLReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkXMLReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetReadFromInputString", &vtkXMLReader::SetReadFromInputString)
    .function("GetReadFromInputString", &vtkXMLReader::GetReadFromInputString)
    .function("ReadFromInputStringOn", &vtkXMLReader::ReadFromInputStringOn)
    .function("ReadFromInputStringOff", &vtkXMLReader::ReadFromInputStringOff)
    .function("SetInputString", emscripten::select_overload<void(vtkXMLReader&, const std::string &)>([](vtkXMLReader& self, const std::string & arg_0) -> void { return self.SetInputString( arg_0.c_str()); }))
    .function("SetInputString", emscripten::select_overload<void(vtkXMLReader&, const std::string&)>([](vtkXMLReader& self, const std::string& arg_0) -> void { return self.SetInputString( arg_0); }))
    .function("SetInputString", emscripten::select_overload<void(vtkXMLReader&, const std::string &, int)>([](vtkXMLReader& self, const std::string & arg_0, int arg_1) -> void { return self.SetInputString( arg_0.c_str(), arg_1); }))
    .function("SetBinaryInputString", emscripten::optional_override([](vtkXMLReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetBinaryInputString( arg_0.c_str(), arg_1);}))
    .function("SetInputArray", &vtkXMLReader::SetInputArray, emscripten::allow_raw_pointers())
    .function("CanReadFile", emscripten::optional_override([](vtkXMLReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetOutputAsDataSet", emscripten::select_overload<vtkDataSet*(vtkXMLReader&)>([](vtkXMLReader& self) -> vtkDataSet* { return self.GetOutputAsDataSet(); }), emscripten::allow_raw_pointers())
    .function("GetOutputAsDataSet", emscripten::select_overload<vtkDataSet*(vtkXMLReader&, int)>([](vtkXMLReader& self, int arg_0) -> vtkDataSet* { return self.GetOutputAsDataSet( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetPointDataArraySelection", &vtkXMLReader::GetPointDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetCellDataArraySelection", &vtkXMLReader::GetCellDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetColumnArraySelection", &vtkXMLReader::GetColumnArraySelection, emscripten::allow_raw_pointers())
    .function("GetNumberOfPointArrays", &vtkXMLReader::GetNumberOfPointArrays)
    .function("GetNumberOfCellArrays", &vtkXMLReader::GetNumberOfCellArrays)
    .function("GetNumberOfColumnArrays", &vtkXMLReader::GetNumberOfColumnArrays)
    .function("GetNumberOfTimeDataArrays", &vtkXMLReader::GetNumberOfTimeDataArrays)
    .function("GetTimeDataArray", emscripten::optional_override([](vtkXMLReader& self, int arg_0) -> std::string {  return self.GetTimeDataArray( arg_0);}))
    .function("GetTimeDataStringArray", &vtkXMLReader::GetTimeDataStringArray, emscripten::allow_raw_pointers())
    .function("GetActiveTimeDataArrayName", emscripten::optional_override([](vtkXMLReader& self) -> std::string {  return self.GetActiveTimeDataArrayName();}))
    .function("SetActiveTimeDataArrayName", emscripten::optional_override([](vtkXMLReader& self, const std::string & arg_0) -> void {  return self.SetActiveTimeDataArrayName( arg_0.c_str());}))
    .function("GetPointArrayName", emscripten::optional_override([](vtkXMLReader& self, int arg_0) -> std::string {  return self.GetPointArrayName( arg_0);}))
    .function("GetCellArrayName", emscripten::optional_override([](vtkXMLReader& self, int arg_0) -> std::string {  return self.GetCellArrayName( arg_0);}))
    .function("GetColumnArrayName", emscripten::optional_override([](vtkXMLReader& self, int arg_0) -> std::string {  return self.GetColumnArrayName( arg_0);}))
    .function("GetPointArrayStatus", emscripten::optional_override([](vtkXMLReader& self, const std::string & arg_0) -> int {  return self.GetPointArrayStatus( arg_0.c_str());}))
    .function("GetCellArrayStatus", emscripten::optional_override([](vtkXMLReader& self, const std::string & arg_0) -> int {  return self.GetCellArrayStatus( arg_0.c_str());}))
    .function("SetPointArrayStatus", emscripten::optional_override([](vtkXMLReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetPointArrayStatus( arg_0.c_str(), arg_1);}))
    .function("SetCellArrayStatus", emscripten::optional_override([](vtkXMLReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetCellArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetColumnArrayStatus", emscripten::optional_override([](vtkXMLReader& self, const std::string & arg_0) -> int {  return self.GetColumnArrayStatus( arg_0.c_str());}))
    .function("SetColumnArrayStatus", emscripten::optional_override([](vtkXMLReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetColumnArrayStatus( arg_0.c_str(), arg_1);}))
    .function("CopyOutputInformation", &vtkXMLReader::CopyOutputInformation, emscripten::allow_raw_pointers())
    .function("SetTimeStep", &vtkXMLReader::SetTimeStep)
    .function("GetTimeStep", &vtkXMLReader::GetTimeStep)
    .function("GetNumberOfTimeSteps", &vtkXMLReader::GetNumberOfTimeSteps)
    .function("SetTimeStepRange", emscripten::select_overload<void(vtkXMLReader&, int, int)>([](vtkXMLReader& self, int arg_0, int arg_1) -> void { return self.SetTimeStepRange( arg_0, arg_1); }))
    .function("GetXMLParser", &vtkXMLReader::GetXMLParser, emscripten::allow_raw_pointers())
    .function("SetReaderErrorObserver", &vtkXMLReader::SetReaderErrorObserver, emscripten::allow_raw_pointers())
    .function("GetReaderErrorObserver", &vtkXMLReader::GetReaderErrorObserver, emscripten::allow_raw_pointers())
    .function("SetParserErrorObserver", &vtkXMLReader::SetParserErrorObserver, emscripten::allow_raw_pointers())
    .function("GetParserErrorObserver", &vtkXMLReader::GetParserErrorObserver, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkIOXML_vtkXMLReader_0_2_constants) {
    typedef vtkXMLReader::FieldType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkXMLReader_FieldType_POINT_DATA", vtkXMLReader::POINT_DATA },
      { "vtkXMLReader_FieldType_CELL_DATA", vtkXMLReader::CELL_DATA },
      { "vtkXMLReader_FieldType_OTHER", vtkXMLReader::OTHER },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
