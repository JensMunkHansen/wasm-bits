// JavaScript wrapper for vtkMPASReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkIONetCDF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkMPASReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/NetCDF/vtkMPASReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGrid.h"
#include "vtkStringArray.h"
#include "vtkMPASReader.h"

EMSCRIPTEN_BINDINGS(vtkIONetCDF_vtkMPASReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkMPASReader>(vtkMPASReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMPASReader_class) {
  emscripten::class_<vtkMPASReader, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkMPASReader")
    .smart_ptr<vtkSmartPointer<vtkMPASReader>>("vtkSmartPointer<vtkMPASReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMPASReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMPASReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMPASReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMPASReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMPASReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMPASReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMPASReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkMPASReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkMPASReader& self) -> std::string {  return self.GetFileName();}))
    .function("GetMaximumCells", &vtkMPASReader::GetMaximumCells)
    .function("GetMaximumPoints", &vtkMPASReader::GetMaximumPoints)
    .function("GetNumberOfCellVars", &vtkMPASReader::GetNumberOfCellVars)
    .function("GetNumberOfPointVars", &vtkMPASReader::GetNumberOfPointVars)
    .function("GetOutput", emscripten::select_overload<vtkUnstructuredGrid*(vtkMPASReader&)>([](vtkMPASReader& self) -> vtkUnstructuredGrid* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkUnstructuredGrid*(vtkMPASReader&, int)>([](vtkMPASReader& self, int arg_0) -> vtkUnstructuredGrid* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetUseDimensionedArrayNames", &vtkMPASReader::SetUseDimensionedArrayNames)
    .function("GetUseDimensionedArrayNames", &vtkMPASReader::GetUseDimensionedArrayNames)
    .function("UseDimensionedArrayNamesOn", &vtkMPASReader::UseDimensionedArrayNamesOn)
    .function("UseDimensionedArrayNamesOff", &vtkMPASReader::UseDimensionedArrayNamesOff)
    .function("GetNumberOfPointArrays", &vtkMPASReader::GetNumberOfPointArrays)
    .function("GetPointArrayName", emscripten::optional_override([](vtkMPASReader& self, int arg_0) -> std::string {  return self.GetPointArrayName( arg_0);}))
    .function("GetPointArrayStatus", emscripten::optional_override([](vtkMPASReader& self, const std::string & arg_0) -> int {  return self.GetPointArrayStatus( arg_0.c_str());}))
    .function("SetPointArrayStatus", emscripten::optional_override([](vtkMPASReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetPointArrayStatus( arg_0.c_str(), arg_1);}))
    .function("DisableAllPointArrays", &vtkMPASReader::DisableAllPointArrays)
    .function("EnableAllPointArrays", &vtkMPASReader::EnableAllPointArrays)
    .function("GetNumberOfCellArrays", &vtkMPASReader::GetNumberOfCellArrays)
    .function("GetCellArrayName", emscripten::optional_override([](vtkMPASReader& self, int arg_0) -> std::string {  return self.GetCellArrayName( arg_0);}))
    .function("GetCellArrayStatus", emscripten::optional_override([](vtkMPASReader& self, const std::string & arg_0) -> int {  return self.GetCellArrayStatus( arg_0.c_str());}))
    .function("SetCellArrayStatus", emscripten::optional_override([](vtkMPASReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetCellArrayStatus( arg_0.c_str(), arg_1);}))
    .function("DisableAllCellArrays", &vtkMPASReader::DisableAllCellArrays)
    .function("EnableAllCellArrays", &vtkMPASReader::EnableAllCellArrays)
    .function("GetNumberOfDimensions", &vtkMPASReader::GetNumberOfDimensions)
    .function("GetDimensionName", &vtkMPASReader::GetDimensionName)
    .function("GetAllDimensions", &vtkMPASReader::GetAllDimensions, emscripten::allow_raw_pointers())
    .function("GetDimensionCurrentIndex", &vtkMPASReader::GetDimensionCurrentIndex)
    .function("SetDimensionCurrentIndex", &vtkMPASReader::SetDimensionCurrentIndex)
    .function("GetDimensionSize", &vtkMPASReader::GetDimensionSize)
    .function("SetVerticalDimension", &vtkMPASReader::SetVerticalDimension)
    .function("GetVerticalDimension", &vtkMPASReader::GetVerticalDimension)
    .function("SetVerticalLevel", &vtkMPASReader::SetVerticalLevel)
    .function("GetVerticalLevel", &vtkMPASReader::GetVerticalLevel)
    .function("SetLayerThickness", &vtkMPASReader::SetLayerThickness)
    .function("GetLayerThickness", &vtkMPASReader::GetLayerThickness)
    .function("SetCenterLon", &vtkMPASReader::SetCenterLon)
    .function("SetProjectLatLon", &vtkMPASReader::SetProjectLatLon)
    .function("GetProjectLatLon", &vtkMPASReader::GetProjectLatLon)
    .function("SetIsAtmosphere", &vtkMPASReader::SetIsAtmosphere)
    .function("GetIsAtmosphere", &vtkMPASReader::GetIsAtmosphere)
    .function("SetIsZeroCentered", &vtkMPASReader::SetIsZeroCentered)
    .function("GetIsZeroCentered", &vtkMPASReader::GetIsZeroCentered)
    .function("SetShowMultilayerView", &vtkMPASReader::SetShowMultilayerView)
    .function("GetShowMultilayerView", &vtkMPASReader::GetShowMultilayerView)
    .class_function("CanReadFile", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMPASReader::CanReadFile( arg_0.c_str());}))
    .function("GetMTime", &vtkMPASReader::GetMTime);
}
