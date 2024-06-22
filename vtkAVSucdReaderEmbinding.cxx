// JavaScript wrapper for vtkAVSucdReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkAVSucdReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkAVSucdReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAVSucdReader.h"

EMSCRIPTEN_BINDINGS(vtkIOGeometry_vtkAVSucdReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkAVSucdReader>(vtkAVSucdReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAVSucdReader_class) {
  emscripten::class_<vtkAVSucdReader, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkAVSucdReader")
    .smart_ptr<vtkSmartPointer<vtkAVSucdReader>>("vtkSmartPointer<vtkAVSucdReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAVSucdReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAVSucdReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAVSucdReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAVSucdReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAVSucdReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAVSucdReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAVSucdReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkAVSucdReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkAVSucdReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetBinaryFile", &vtkAVSucdReader::SetBinaryFile)
    .function("GetBinaryFile", &vtkAVSucdReader::GetBinaryFile)
    .function("BinaryFileOn", &vtkAVSucdReader::BinaryFileOn)
    .function("BinaryFileOff", &vtkAVSucdReader::BinaryFileOff)
    .function("GetNumberOfCells", &vtkAVSucdReader::GetNumberOfCells)
    .function("GetNumberOfNodes", &vtkAVSucdReader::GetNumberOfNodes)
    .function("GetNumberOfNodeFields", &vtkAVSucdReader::GetNumberOfNodeFields)
    .function("GetNumberOfCellFields", &vtkAVSucdReader::GetNumberOfCellFields)
    .function("GetNumberOfFields", &vtkAVSucdReader::GetNumberOfFields)
    .function("GetNumberOfNodeComponents", &vtkAVSucdReader::GetNumberOfNodeComponents)
    .function("GetNumberOfCellComponents", &vtkAVSucdReader::GetNumberOfCellComponents)
    .function("SetByteOrderToBigEndian", &vtkAVSucdReader::SetByteOrderToBigEndian)
    .function("SetByteOrderToLittleEndian", &vtkAVSucdReader::SetByteOrderToLittleEndian)
    .function("GetByteOrderAsString", emscripten::optional_override([](vtkAVSucdReader& self) -> std::string {  return self.GetByteOrderAsString();}))
    .function("SetByteOrder", &vtkAVSucdReader::SetByteOrder)
    .function("GetByteOrder", &vtkAVSucdReader::GetByteOrder)
    .function("GetNumberOfPointArrays", &vtkAVSucdReader::GetNumberOfPointArrays)
    .function("GetNumberOfCellArrays", &vtkAVSucdReader::GetNumberOfCellArrays)
    .function("GetPointArrayName", emscripten::optional_override([](vtkAVSucdReader& self, int arg_0) -> std::string {  return self.GetPointArrayName( arg_0);}))
    .function("GetCellArrayName", emscripten::optional_override([](vtkAVSucdReader& self, int arg_0) -> std::string {  return self.GetCellArrayName( arg_0);}))
    .function("GetPointArrayStatus", emscripten::optional_override([](vtkAVSucdReader& self, const std::string & arg_0) -> int {  return self.GetPointArrayStatus( arg_0.c_str());}))
    .function("GetCellArrayStatus", emscripten::optional_override([](vtkAVSucdReader& self, const std::string & arg_0) -> int {  return self.GetCellArrayStatus( arg_0.c_str());}))
    .function("SetPointArrayStatus", emscripten::optional_override([](vtkAVSucdReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetPointArrayStatus( arg_0.c_str(), arg_1);}))
    .function("SetCellArrayStatus", emscripten::optional_override([](vtkAVSucdReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetCellArrayStatus( arg_0.c_str(), arg_1);}))
    .function("DisableAllCellArrays", &vtkAVSucdReader::DisableAllCellArrays)
    .function("EnableAllCellArrays", &vtkAVSucdReader::EnableAllCellArrays)
    .function("DisableAllPointArrays", &vtkAVSucdReader::DisableAllPointArrays)
    .function("EnableAllPointArrays", &vtkAVSucdReader::EnableAllPointArrays)
    .function("GetCellDataRange", emscripten::optional_override([](vtkAVSucdReader& self, int arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> void {  return self.GetCellDataRange( arg_0, arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float)),reinterpret_cast<float*>(arg_3 * sizeof(float)));}))
    .function("GetNodeDataRange", emscripten::optional_override([](vtkAVSucdReader& self, int arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> void {  return self.GetNodeDataRange( arg_0, arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float)),reinterpret_cast<float*>(arg_3 * sizeof(float)));}));
}
