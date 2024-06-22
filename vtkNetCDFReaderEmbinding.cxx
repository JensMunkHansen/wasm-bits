// JavaScript wrapper for vtkNetCDFReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkIONetCDF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkNetCDFReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/NetCDF/vtkNetCDFReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStringArray.h"
#include "vtkNetCDFReader.h"

template<> void emscripten::internal::raw_destructor<vtkNetCDFReader>(vtkNetCDFReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNetCDFReader_class) {
  emscripten::class_<vtkNetCDFReader, emscripten::base<vtkDataObjectAlgorithm>>("vtkNetCDFReader")
    .smart_ptr<vtkSmartPointer<vtkNetCDFReader>>("vtkSmartPointer<vtkNetCDFReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkNetCDFReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetCDFReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNetCDFReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNetCDFReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNetCDFReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetCDFReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNetCDFReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkNetCDFReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkNetCDFReader& self) -> std::string {  return self.GetFileName();}))
    .function("UpdateMetaData", &vtkNetCDFReader::UpdateMetaData)
    .function("GetNumberOfVariableArrays", &vtkNetCDFReader::GetNumberOfVariableArrays)
    .function("GetVariableArrayName", emscripten::optional_override([](vtkNetCDFReader& self, int arg_0) -> std::string {  return self.GetVariableArrayName( arg_0);}))
    .function("GetVariableArrayStatus", emscripten::optional_override([](vtkNetCDFReader& self, const std::string & arg_0) -> int {  return self.GetVariableArrayStatus( arg_0.c_str());}))
    .function("SetVariableArrayStatus", emscripten::optional_override([](vtkNetCDFReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetVariableArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetAllVariableArrayNames", &vtkNetCDFReader::GetAllVariableArrayNames, emscripten::allow_raw_pointers())
    .function("GetVariableDimensions", &vtkNetCDFReader::GetVariableDimensions, emscripten::allow_raw_pointers())
    .function("SetDimensions", emscripten::optional_override([](vtkNetCDFReader& self, const std::string & arg_0) -> void {  return self.SetDimensions( arg_0.c_str());}))
    .function("ComputeArraySelection", &vtkNetCDFReader::ComputeArraySelection)
    .function("GetAllDimensions", &vtkNetCDFReader::GetAllDimensions, emscripten::allow_raw_pointers())
    .function("GetReplaceFillValueWithNan", &vtkNetCDFReader::GetReplaceFillValueWithNan)
    .function("SetReplaceFillValueWithNan", &vtkNetCDFReader::SetReplaceFillValueWithNan)
    .function("ReplaceFillValueWithNanOn", &vtkNetCDFReader::ReplaceFillValueWithNanOn)
    .function("ReplaceFillValueWithNanOff", &vtkNetCDFReader::ReplaceFillValueWithNanOff)
    .function("GetTimeUnits", emscripten::optional_override([](vtkNetCDFReader& self) -> std::string {  return self.GetTimeUnits();}))
    .function("GetCalendar", emscripten::optional_override([](vtkNetCDFReader& self) -> std::string {  return self.GetCalendar();}))
    .function("QueryArrayUnits", emscripten::optional_override([](vtkNetCDFReader& self, const std::string & arg_0) -> std::string {  return self.QueryArrayUnits( arg_0.c_str());}));
}
