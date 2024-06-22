// JavaScript wrapper for vtkImageReader2 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkImageReader2Embinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkImageReader2.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStringArray.h"
#include "vtkImageReader2.h"

EMSCRIPTEN_BINDINGS(vtkIOImage_vtkImageReader2_0_1_constants) {
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
template<> void emscripten::internal::raw_destructor<vtkImageReader2>(vtkImageReader2 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageReader2_class) {
  emscripten::class_<vtkImageReader2, emscripten::base<vtkImageAlgorithm>>("vtkImageReader2")
    .smart_ptr<vtkSmartPointer<vtkImageReader2>>("vtkSmartPointer<vtkImageReader2>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageReader2>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageReader2::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageReader2& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageReader2::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageReader2::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageReader2::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageReader2& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkImageReader2& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkImageReader2& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileNames", &vtkImageReader2::SetFileNames, emscripten::allow_raw_pointers())
    .function("GetFileNames", &vtkImageReader2::GetFileNames, emscripten::allow_raw_pointers())
    .function("SetFilePrefix", emscripten::optional_override([](vtkImageReader2& self, const std::string & arg_0) -> void {  return self.SetFilePrefix( arg_0.c_str());}))
    .function("GetFilePrefix", emscripten::optional_override([](vtkImageReader2& self) -> std::string {  return self.GetFilePrefix();}))
    .function("SetFilePattern", emscripten::optional_override([](vtkImageReader2& self, const std::string & arg_0) -> void {  return self.SetFilePattern( arg_0.c_str());}))
    .function("GetFilePattern", emscripten::optional_override([](vtkImageReader2& self) -> std::string {  return self.GetFilePattern();}))
    .function("SetMemoryBuffer", emscripten::optional_override([](vtkImageReader2& self, std::uintptr_t arg_0) -> void {  return self.SetMemoryBuffer(reinterpret_cast<void*>(arg_0));}))
    .function("GetMemoryBuffer", emscripten::optional_override([](vtkImageReader2& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetMemoryBuffer());}))
    .function("SetMemoryBufferLength", &vtkImageReader2::SetMemoryBufferLength)
    .function("GetMemoryBufferLength", &vtkImageReader2::GetMemoryBufferLength)
    .function("SetDataScalarType", &vtkImageReader2::SetDataScalarType)
    .function("SetDataScalarTypeToFloat", &vtkImageReader2::SetDataScalarTypeToFloat)
    .function("SetDataScalarTypeToDouble", &vtkImageReader2::SetDataScalarTypeToDouble)
    .function("SetDataScalarTypeToInt", &vtkImageReader2::SetDataScalarTypeToInt)
    .function("SetDataScalarTypeToUnsignedInt", &vtkImageReader2::SetDataScalarTypeToUnsignedInt)
    .function("SetDataScalarTypeToShort", &vtkImageReader2::SetDataScalarTypeToShort)
    .function("SetDataScalarTypeToUnsignedShort", &vtkImageReader2::SetDataScalarTypeToUnsignedShort)
    .function("SetDataScalarTypeToChar", &vtkImageReader2::SetDataScalarTypeToChar)
    .function("SetDataScalarTypeToSignedChar", &vtkImageReader2::SetDataScalarTypeToSignedChar)
    .function("SetDataScalarTypeToUnsignedChar", &vtkImageReader2::SetDataScalarTypeToUnsignedChar)
    .function("GetDataScalarType", &vtkImageReader2::GetDataScalarType)
    .function("SetNumberOfScalarComponents", &vtkImageReader2::SetNumberOfScalarComponents)
    .function("GetNumberOfScalarComponents", &vtkImageReader2::GetNumberOfScalarComponents)
    .function("SetDataExtent", emscripten::select_overload<void(vtkImageReader2&, int, int, int, int, int, int)>([](vtkImageReader2& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetDataExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetFileDimensionality", &vtkImageReader2::SetFileDimensionality)
    .function("GetFileDimensionality", &vtkImageReader2::GetFileDimensionality)
    .function("SetDataSpacing", emscripten::select_overload<void(vtkImageReader2&, double, double, double)>([](vtkImageReader2& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDataSpacing( arg_0, arg_1, arg_2); }))
    .function("SetDataOrigin", emscripten::select_overload<void(vtkImageReader2&, double, double, double)>([](vtkImageReader2& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDataOrigin( arg_0, arg_1, arg_2); }))
    .function("SetDataDirection", emscripten::optional_override([](vtkImageReader2& self, std::uintptr_t arg_0) -> void {  return self.SetDataDirection(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("GetHeaderSize", emscripten::select_overload<unsigned long(vtkImageReader2&)>([](vtkImageReader2& self) -> unsigned long { return self.GetHeaderSize(); }))
    .function("GetHeaderSize", emscripten::select_overload<unsigned long(vtkImageReader2&, unsigned long)>([](vtkImageReader2& self, unsigned long arg_0) -> unsigned long { return self.GetHeaderSize( arg_0); }))
    .function("SetHeaderSize", &vtkImageReader2::SetHeaderSize)
    .function("SetDataByteOrderToBigEndian", &vtkImageReader2::SetDataByteOrderToBigEndian)
    .function("SetDataByteOrderToLittleEndian", &vtkImageReader2::SetDataByteOrderToLittleEndian)
    .function("GetDataByteOrder", &vtkImageReader2::GetDataByteOrder)
    .function("SetDataByteOrder", &vtkImageReader2::SetDataByteOrder)
    .function("GetDataByteOrderAsString", emscripten::optional_override([](vtkImageReader2& self) -> std::string {  return self.GetDataByteOrderAsString();}))
    .function("SetFileNameSliceOffset", &vtkImageReader2::SetFileNameSliceOffset)
    .function("GetFileNameSliceOffset", &vtkImageReader2::GetFileNameSliceOffset)
    .function("SetFileNameSliceSpacing", &vtkImageReader2::SetFileNameSliceSpacing)
    .function("GetFileNameSliceSpacing", &vtkImageReader2::GetFileNameSliceSpacing)
    .function("SetSwapBytes", &vtkImageReader2::SetSwapBytes)
    .function("GetSwapBytes", &vtkImageReader2::GetSwapBytes)
    .function("SwapBytesOn", &vtkImageReader2::SwapBytesOn)
    .function("SwapBytesOff", &vtkImageReader2::SwapBytesOff)
    .function("OpenFile", &vtkImageReader2::OpenFile)
    .function("CloseFile", &vtkImageReader2::CloseFile)
    .function("SeekFile", &vtkImageReader2::SeekFile)
    .function("FileLowerLeftOn", &vtkImageReader2::FileLowerLeftOn)
    .function("FileLowerLeftOff", &vtkImageReader2::FileLowerLeftOff)
    .function("GetFileLowerLeft", &vtkImageReader2::GetFileLowerLeft)
    .function("SetFileLowerLeft", &vtkImageReader2::SetFileLowerLeft)
    .function("ComputeInternalFileName", &vtkImageReader2::ComputeInternalFileName)
    .function("GetInternalFileName", emscripten::optional_override([](vtkImageReader2& self) -> std::string {  return self.GetInternalFileName();}))
    .function("CanReadFile", emscripten::optional_override([](vtkImageReader2& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetFileExtensions", emscripten::optional_override([](vtkImageReader2& self) -> std::string {  return self.GetFileExtensions();}))
    .function("GetDescriptiveName", emscripten::optional_override([](vtkImageReader2& self) -> std::string {  return self.GetDescriptiveName();}));
}
