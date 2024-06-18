// JavaScript wrapper for vtkFLUENTReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkFLUENTReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkFLUENTReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFLUENTReader.h"

template<> void emscripten::internal::raw_destructor<vtkFLUENTReader>(vtkFLUENTReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFLUENTReader_class) {
  emscripten::class_<vtkFLUENTReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkFLUENTReader")
    .smart_ptr<vtkSmartPointer<vtkFLUENTReader>>("vtkSmartPointer<vtkFLUENTReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFLUENTReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFLUENTReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFLUENTReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFLUENTReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFLUENTReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFLUENTReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFLUENTReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkFLUENTReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkFLUENTReader& self) -> std::string {  return self.GetFileName();}))
    .function("GetNumberOfCells", &vtkFLUENTReader::GetNumberOfCells)
    .function("GetNumberOfCellArrays", &vtkFLUENTReader::GetNumberOfCellArrays)
    .function("GetCellArrayName", emscripten::optional_override([](vtkFLUENTReader& self, int arg_0) -> std::string {  return self.GetCellArrayName( arg_0);}))
    .function("GetCellArrayStatus", emscripten::optional_override([](vtkFLUENTReader& self, const std::string & arg_0) -> int {  return self.GetCellArrayStatus( arg_0.c_str());}))
    .function("SetCellArrayStatus", emscripten::optional_override([](vtkFLUENTReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetCellArrayStatus( arg_0.c_str(), arg_1);}))
    .function("DisableAllCellArrays", &vtkFLUENTReader::DisableAllCellArrays)
    .function("EnableAllCellArrays", &vtkFLUENTReader::EnableAllCellArrays)
    .function("SetDataByteOrderToBigEndian", &vtkFLUENTReader::SetDataByteOrderToBigEndian)
    .function("SetDataByteOrderToLittleEndian", &vtkFLUENTReader::SetDataByteOrderToLittleEndian)
    .function("GetDataByteOrder", &vtkFLUENTReader::GetDataByteOrder)
    .function("SetDataByteOrder", &vtkFLUENTReader::SetDataByteOrder)
    .function("GetDataByteOrderAsString", emscripten::optional_override([](vtkFLUENTReader& self) -> std::string {  return self.GetDataByteOrderAsString();}));
}
