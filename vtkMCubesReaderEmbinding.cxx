// JavaScript wrapper for vtkMCubesReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkMCubesReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkMCubesReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkMCubesReader.h"

EMSCRIPTEN_BINDINGS(vtkIOGeometry_vtkMCubesReader_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_FILE_BYTE_ORDER_BIG_ENDIAN", 0 },
      { "VTK_FILE_BYTE_ORDER_LITTLE_ENDIAN", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkMCubesReader>(vtkMCubesReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMCubesReader_class) {
  emscripten::class_<vtkMCubesReader, emscripten::base<vtkPolyDataAlgorithm>>("vtkMCubesReader")
    .smart_ptr<vtkSmartPointer<vtkMCubesReader>>("vtkSmartPointer<vtkMCubesReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMCubesReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMCubesReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMCubesReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMCubesReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMCubesReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMCubesReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMCubesReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkMCubesReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkMCubesReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetLimitsFileName", emscripten::optional_override([](vtkMCubesReader& self, const std::string & arg_0) -> void {  return self.SetLimitsFileName( arg_0.c_str());}))
    .function("GetLimitsFileName", emscripten::optional_override([](vtkMCubesReader& self) -> std::string {  return self.GetLimitsFileName();}))
    .function("SetHeaderSize", &vtkMCubesReader::SetHeaderSize)
    .function("GetHeaderSizeMinValue", &vtkMCubesReader::GetHeaderSizeMinValue)
    .function("GetHeaderSizeMaxValue", &vtkMCubesReader::GetHeaderSizeMaxValue)
    .function("GetHeaderSize", &vtkMCubesReader::GetHeaderSize)
    .function("SetFlipNormals", &vtkMCubesReader::SetFlipNormals)
    .function("GetFlipNormals", &vtkMCubesReader::GetFlipNormals)
    .function("FlipNormalsOn", &vtkMCubesReader::FlipNormalsOn)
    .function("FlipNormalsOff", &vtkMCubesReader::FlipNormalsOff)
    .function("SetNormals", &vtkMCubesReader::SetNormals)
    .function("GetNormals", &vtkMCubesReader::GetNormals)
    .function("NormalsOn", &vtkMCubesReader::NormalsOn)
    .function("NormalsOff", &vtkMCubesReader::NormalsOff)
    .function("SetDataByteOrderToBigEndian", &vtkMCubesReader::SetDataByteOrderToBigEndian)
    .function("SetDataByteOrderToLittleEndian", &vtkMCubesReader::SetDataByteOrderToLittleEndian)
    .function("GetDataByteOrder", &vtkMCubesReader::GetDataByteOrder)
    .function("SetDataByteOrder", &vtkMCubesReader::SetDataByteOrder)
    .function("GetDataByteOrderAsString", emscripten::optional_override([](vtkMCubesReader& self) -> std::string {  return self.GetDataByteOrderAsString();}))
    .function("SetSwapBytes", &vtkMCubesReader::SetSwapBytes)
    .function("GetSwapBytes", &vtkMCubesReader::GetSwapBytes)
    .function("SwapBytesOn", &vtkMCubesReader::SwapBytesOn)
    .function("SwapBytesOff", &vtkMCubesReader::SwapBytesOff)
    .function("SetLocator", &vtkMCubesReader::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkMCubesReader::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkMCubesReader::CreateDefaultLocator)
    .function("GetMTime", &vtkMCubesReader::GetMTime);
}
