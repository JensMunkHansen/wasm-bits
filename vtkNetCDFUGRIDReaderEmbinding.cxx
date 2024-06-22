// JavaScript wrapper for vtkNetCDFUGRIDReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkIONetCDF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkNetCDFUGRIDReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/NetCDF/vtkNetCDFUGRIDReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArraySelection.h"
#include "vtkNetCDFUGRIDReader.h"

template<> void emscripten::internal::raw_destructor<vtkNetCDFUGRIDReader>(vtkNetCDFUGRIDReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNetCDFUGRIDReader_class) {
  emscripten::class_<vtkNetCDFUGRIDReader, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkNetCDFUGRIDReader")
    .smart_ptr<vtkSmartPointer<vtkNetCDFUGRIDReader>>("vtkSmartPointer<vtkNetCDFUGRIDReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkNetCDFUGRIDReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetCDFUGRIDReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNetCDFUGRIDReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNetCDFUGRIDReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNetCDFUGRIDReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetCDFUGRIDReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNetCDFUGRIDReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkNetCDFUGRIDReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkNetCDFUGRIDReader& self) -> std::string {  return self.GetFileName();}))
    .function("GetPointDataArraySelection", &vtkNetCDFUGRIDReader::GetPointDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetCellDataArraySelection", &vtkNetCDFUGRIDReader::GetCellDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetNumberOfPointArrays", &vtkNetCDFUGRIDReader::GetNumberOfPointArrays)
    .function("GetNumberOfCellArrays", &vtkNetCDFUGRIDReader::GetNumberOfCellArrays)
    .function("GetPointArrayName", emscripten::optional_override([](vtkNetCDFUGRIDReader& self, int arg_0) -> std::string {  return self.GetPointArrayName( arg_0);}))
    .function("GetCellArrayName", emscripten::optional_override([](vtkNetCDFUGRIDReader& self, int arg_0) -> std::string {  return self.GetCellArrayName( arg_0);}))
    .function("GetPointArrayStatus", emscripten::optional_override([](vtkNetCDFUGRIDReader& self, const std::string & arg_0) -> int {  return self.GetPointArrayStatus( arg_0.c_str());}))
    .function("GetCellArrayStatus", emscripten::optional_override([](vtkNetCDFUGRIDReader& self, const std::string & arg_0) -> int {  return self.GetCellArrayStatus( arg_0.c_str());}))
    .function("SetPointArrayStatus", emscripten::optional_override([](vtkNetCDFUGRIDReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetPointArrayStatus( arg_0.c_str(), arg_1);}))
    .function("SetCellArrayStatus", emscripten::optional_override([](vtkNetCDFUGRIDReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetCellArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetReplaceFillValueWithNan", &vtkNetCDFUGRIDReader::GetReplaceFillValueWithNan)
    .function("SetReplaceFillValueWithNan", &vtkNetCDFUGRIDReader::SetReplaceFillValueWithNan)
    .function("ReplaceFillValueWithNanOn", &vtkNetCDFUGRIDReader::ReplaceFillValueWithNanOn)
    .function("ReplaceFillValueWithNanOff", &vtkNetCDFUGRIDReader::ReplaceFillValueWithNanOff);
}
