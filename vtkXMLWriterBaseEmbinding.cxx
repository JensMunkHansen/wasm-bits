// JavaScript wrapper for vtkXMLWriterBase with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLWriterBaseEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLWriterBase.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataCompressor.h"
#include "vtkXMLWriterBase.h"

EMSCRIPTEN_BINDINGS(vtkIOXML_vtkXMLWriterBase_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkXMLWriterBase>(vtkXMLWriterBase * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLWriterBase_class) {
  using CompressorType=vtkXMLWriterBase::CompressorType;
  emscripten::class_<vtkXMLWriterBase, emscripten::base<vtkAlgorithm>>("vtkXMLWriterBase")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLWriterBase::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLWriterBase& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLWriterBase::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLWriterBase::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLWriterBase::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLWriterBase& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetByteOrder", &vtkXMLWriterBase::SetByteOrder)
    .function("GetByteOrder", &vtkXMLWriterBase::GetByteOrder)
    .function("SetByteOrderToBigEndian", &vtkXMLWriterBase::SetByteOrderToBigEndian)
    .function("SetByteOrderToLittleEndian", &vtkXMLWriterBase::SetByteOrderToLittleEndian)
    .function("SetHeaderType", &vtkXMLWriterBase::SetHeaderType)
    .function("GetHeaderType", &vtkXMLWriterBase::GetHeaderType)
    .function("SetHeaderTypeToUInt32", &vtkXMLWriterBase::SetHeaderTypeToUInt32)
    .function("SetHeaderTypeToUInt64", &vtkXMLWriterBase::SetHeaderTypeToUInt64)
    .function("SetIdType", &vtkXMLWriterBase::SetIdType)
    .function("GetIdType", &vtkXMLWriterBase::GetIdType)
    .function("SetIdTypeToInt32", &vtkXMLWriterBase::SetIdTypeToInt32)
    .function("SetIdTypeToInt64", &vtkXMLWriterBase::SetIdTypeToInt64)
    .function("SetFileName", emscripten::optional_override([](vtkXMLWriterBase& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkXMLWriterBase& self) -> std::string {  return self.GetFileName();}))
    .function("SetWriteToOutputString", &vtkXMLWriterBase::SetWriteToOutputString)
    .function("GetWriteToOutputString", &vtkXMLWriterBase::GetWriteToOutputString)
    .function("WriteToOutputStringOn", &vtkXMLWriterBase::WriteToOutputStringOn)
    .function("WriteToOutputStringOff", &vtkXMLWriterBase::WriteToOutputStringOff)
    .function("GetOutputString", &vtkXMLWriterBase::GetOutputString)
    .function("SetCompressor", &vtkXMLWriterBase::SetCompressor, emscripten::allow_raw_pointers())
    .function("GetCompressor", &vtkXMLWriterBase::GetCompressor, emscripten::allow_raw_pointers())
    .function("SetCompressorType", &vtkXMLWriterBase::SetCompressorType)
    .function("SetCompressorTypeToNone", &vtkXMLWriterBase::SetCompressorTypeToNone)
    .function("SetCompressorTypeToLZ4", &vtkXMLWriterBase::SetCompressorTypeToLZ4)
    .function("SetCompressorTypeToZLib", &vtkXMLWriterBase::SetCompressorTypeToZLib)
    .function("SetCompressorTypeToLZMA", &vtkXMLWriterBase::SetCompressorTypeToLZMA)
    .function("SetCompressionLevel", &vtkXMLWriterBase::SetCompressionLevel)
    .function("GetCompressionLevel", &vtkXMLWriterBase::GetCompressionLevel)
    .function("SetBlockSize", &vtkXMLWriterBase::SetBlockSize)
    .function("GetBlockSize", &vtkXMLWriterBase::GetBlockSize)
    .function("SetDataMode", &vtkXMLWriterBase::SetDataMode)
    .function("GetDataMode", &vtkXMLWriterBase::GetDataMode)
    .function("SetDataModeToAscii", &vtkXMLWriterBase::SetDataModeToAscii)
    .function("SetDataModeToBinary", &vtkXMLWriterBase::SetDataModeToBinary)
    .function("SetDataModeToAppended", &vtkXMLWriterBase::SetDataModeToAppended)
    .function("SetEncodeAppendedData", &vtkXMLWriterBase::SetEncodeAppendedData)
    .function("GetEncodeAppendedData", &vtkXMLWriterBase::GetEncodeAppendedData)
    .function("EncodeAppendedDataOn", &vtkXMLWriterBase::EncodeAppendedDataOn)
    .function("EncodeAppendedDataOff", &vtkXMLWriterBase::EncodeAppendedDataOff)
    .function("GetWriteTimeValue", &vtkXMLWriterBase::GetWriteTimeValue)
    .function("SetWriteTimeValue", &vtkXMLWriterBase::SetWriteTimeValue)
    .function("WriteTimeValueOn", &vtkXMLWriterBase::WriteTimeValueOn)
    .function("WriteTimeValueOff", &vtkXMLWriterBase::WriteTimeValueOff)
    .function("Write", &vtkXMLWriterBase::Write);
}
EMSCRIPTEN_BINDINGS(vtkIOXML_vtkXMLWriterBase_0_2_constants) {
  const struct { const char *name; int value; }
    constants[9] = {
      { "vtkXMLWriterBase_BigEndian", vtkXMLWriterBase::BigEndian },
      { "vtkXMLWriterBase_LittleEndian", vtkXMLWriterBase::LittleEndian },
      { "vtkXMLWriterBase_Ascii", vtkXMLWriterBase::Ascii },
      { "vtkXMLWriterBase_Binary", vtkXMLWriterBase::Binary },
      { "vtkXMLWriterBase_Appended", vtkXMLWriterBase::Appended },
      { "vtkXMLWriterBase_Int32", vtkXMLWriterBase::Int32 },
      { "vtkXMLWriterBase_Int64", vtkXMLWriterBase::Int64 },
      { "vtkXMLWriterBase_UInt32", vtkXMLWriterBase::UInt32 },
      { "vtkXMLWriterBase_UInt64", vtkXMLWriterBase::UInt64 },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkIOXML_vtkXMLWriterBase_1_2_constants) {
    typedef vtkXMLWriterBase::CompressorType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkXMLWriterBase_CompressorType_NONE", vtkXMLWriterBase::NONE },
      { "vtkXMLWriterBase_CompressorType_ZLIB", vtkXMLWriterBase::ZLIB },
      { "vtkXMLWriterBase_CompressorType_LZ4", vtkXMLWriterBase::LZ4 },
      { "vtkXMLWriterBase_CompressorType_LZMA", vtkXMLWriterBase::LZMA },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
