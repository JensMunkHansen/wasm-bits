// JavaScript wrapper for vtkParticleReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkParticleReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkParticleReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParticleReader.h"

EMSCRIPTEN_BINDINGS(vtkIOGeometry_vtkParticleReader_0_1_constants) {
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
EMSCRIPTEN_BINDINGS(vtkIOGeometry_vtkParticleReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkParticleReader>(vtkParticleReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParticleReader_class) {
  emscripten::class_<vtkParticleReader, emscripten::base<vtkPolyDataAlgorithm>>("vtkParticleReader")
    .smart_ptr<vtkSmartPointer<vtkParticleReader>>("vtkSmartPointer<vtkParticleReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkParticleReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParticleReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParticleReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParticleReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParticleReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParticleReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParticleReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkParticleReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkParticleReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetDataByteOrderToBigEndian", &vtkParticleReader::SetDataByteOrderToBigEndian)
    .function("SetDataByteOrderToLittleEndian", &vtkParticleReader::SetDataByteOrderToLittleEndian)
    .function("GetDataByteOrder", &vtkParticleReader::GetDataByteOrder)
    .function("SetDataByteOrder", &vtkParticleReader::SetDataByteOrder)
    .function("GetDataByteOrderAsString", emscripten::optional_override([](vtkParticleReader& self) -> std::string {  return self.GetDataByteOrderAsString();}))
    .function("SetSwapBytes", &vtkParticleReader::SetSwapBytes)
    .function("GetSwapBytes", &vtkParticleReader::GetSwapBytes)
    .function("SwapBytesOn", &vtkParticleReader::SwapBytesOn)
    .function("SwapBytesOff", &vtkParticleReader::SwapBytesOff)
    .function("SetHasScalar", &vtkParticleReader::SetHasScalar)
    .function("GetHasScalar", &vtkParticleReader::GetHasScalar)
    .function("HasScalarOn", &vtkParticleReader::HasScalarOn)
    .function("HasScalarOff", &vtkParticleReader::HasScalarOff)
    .function("SetFileType", &vtkParticleReader::SetFileType)
    .function("GetFileTypeMinValue", &vtkParticleReader::GetFileTypeMinValue)
    .function("GetFileTypeMaxValue", &vtkParticleReader::GetFileTypeMaxValue)
    .function("GetFileType", &vtkParticleReader::GetFileType)
    .function("SetFileTypeToUnknown", &vtkParticleReader::SetFileTypeToUnknown)
    .function("SetFileTypeToText", &vtkParticleReader::SetFileTypeToText)
    .function("SetFileTypeToBinary", &vtkParticleReader::SetFileTypeToBinary)
    .function("SetDataType", &vtkParticleReader::SetDataType)
    .function("GetDataTypeMinValue", &vtkParticleReader::GetDataTypeMinValue)
    .function("GetDataTypeMaxValue", &vtkParticleReader::GetDataTypeMaxValue)
    .function("GetDataType", &vtkParticleReader::GetDataType)
    .function("SetDataTypeToFloat", &vtkParticleReader::SetDataTypeToFloat)
    .function("SetDataTypeToDouble", &vtkParticleReader::SetDataTypeToDouble);
}
