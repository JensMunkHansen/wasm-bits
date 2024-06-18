// JavaScript wrapper for vtkPLYWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOPLY.js/vtkIOPLY.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOPLY.js/vtkPLYWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/PLY/vtkPLYWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScalarsToColors.h"
#include "vtkPolyData.h"
#include "vtkPLYWriter.h"

EMSCRIPTEN_BINDINGS(vtkIOPLY_vtkPLYWriter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[9] = {
      { "VTK_LITTLE_ENDIAN", 0 },
      { "VTK_BIG_ENDIAN", 1 },
      { "VTK_COLOR_MODE_DEFAULT", 0 },
      { "VTK_COLOR_MODE_UNIFORM_CELL_COLOR", 1 },
      { "VTK_COLOR_MODE_UNIFORM_POINT_COLOR", 2 },
      { "VTK_COLOR_MODE_UNIFORM_COLOR", 3 },
      { "VTK_COLOR_MODE_OFF", 4 },
      { "VTK_TEXTURECOORDS_UV", 0 },
      { "VTK_TEXTURECOORDS_TEXTUREUV", 1 },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkPLYWriter>(vtkPLYWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPLYWriter_class) {
  emscripten::class_<vtkPLYWriter, emscripten::base<vtkWriter>>("vtkPLYWriter")
    .smart_ptr<vtkSmartPointer<vtkPLYWriter>>("vtkSmartPointer<vtkPLYWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPLYWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPLYWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPLYWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPLYWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPLYWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPLYWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPLYWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDataByteOrder", &vtkPLYWriter::SetDataByteOrder)
    .function("GetDataByteOrderMinValue", &vtkPLYWriter::GetDataByteOrderMinValue)
    .function("GetDataByteOrderMaxValue", &vtkPLYWriter::GetDataByteOrderMaxValue)
    .function("GetDataByteOrder", &vtkPLYWriter::GetDataByteOrder)
    .function("SetDataByteOrderToBigEndian", &vtkPLYWriter::SetDataByteOrderToBigEndian)
    .function("SetDataByteOrderToLittleEndian", &vtkPLYWriter::SetDataByteOrderToLittleEndian)
    .function("SetWriteToOutputString", &vtkPLYWriter::SetWriteToOutputString)
    .function("GetWriteToOutputString", &vtkPLYWriter::GetWriteToOutputString)
    .function("WriteToOutputStringOn", &vtkPLYWriter::WriteToOutputStringOn)
    .function("WriteToOutputStringOff", &vtkPLYWriter::WriteToOutputStringOff)
    .function("GetOutputString", &vtkPLYWriter::GetOutputString)
    .function("SetWriteObjectInformation", &vtkPLYWriter::SetWriteObjectInformation)
    .function("GetWriteObjectInformation", &vtkPLYWriter::GetWriteObjectInformation)
    .function("WriteObjectInformationOn", &vtkPLYWriter::WriteObjectInformationOn)
    .function("WriteObjectInformationOff", &vtkPLYWriter::WriteObjectInformationOff)
    .function("SetColorMode", &vtkPLYWriter::SetColorMode)
    .function("GetColorMode", &vtkPLYWriter::GetColorMode)
    .function("SetColorModeToDefault", &vtkPLYWriter::SetColorModeToDefault)
    .function("SetColorModeToUniformCellColor", &vtkPLYWriter::SetColorModeToUniformCellColor)
    .function("SetColorModeToUniformPointColor", &vtkPLYWriter::SetColorModeToUniformPointColor)
    .function("SetColorModeToUniformColor", &vtkPLYWriter::SetColorModeToUniformColor)
    .function("SetColorModeToOff", &vtkPLYWriter::SetColorModeToOff)
    .function("SetEnableAlpha", &vtkPLYWriter::SetEnableAlpha)
    .function("GetEnableAlpha", &vtkPLYWriter::GetEnableAlpha)
    .function("EnableAlphaOn", &vtkPLYWriter::EnableAlphaOn)
    .function("EnableAlphaOff", &vtkPLYWriter::EnableAlphaOff)
    .function("SetArrayName", emscripten::optional_override([](vtkPLYWriter& self, const std::string & arg_0) -> void {  return self.SetArrayName( arg_0.c_str());}))
    .function("GetArrayName", emscripten::optional_override([](vtkPLYWriter& self) -> std::string {  return self.GetArrayName();}))
    .function("SetComponent", &vtkPLYWriter::SetComponent)
    .function("GetComponentMinValue", &vtkPLYWriter::GetComponentMinValue)
    .function("GetComponentMaxValue", &vtkPLYWriter::GetComponentMaxValue)
    .function("GetComponent", &vtkPLYWriter::GetComponent)
    .function("SetLookupTable", &vtkPLYWriter::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkPLYWriter::GetLookupTable, emscripten::allow_raw_pointers())
    .function("SetColor", emscripten::select_overload<void(vtkPLYWriter&, unsigned char, unsigned char, unsigned char)>([](vtkPLYWriter& self, unsigned char arg_0, unsigned char arg_1, unsigned char arg_2) -> void { return self.SetColor( arg_0, arg_1, arg_2); }))
    .function("SetAlpha", &vtkPLYWriter::SetAlpha)
    .function("GetAlpha", &vtkPLYWriter::GetAlpha)
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkPLYWriter&)>([](vtkPLYWriter& self) -> vtkPolyData* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkPLYWriter&, int)>([](vtkPLYWriter& self, int arg_0) -> vtkPolyData* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetFileName", emscripten::optional_override([](vtkPLYWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkPLYWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileType", &vtkPLYWriter::SetFileType)
    .function("GetFileTypeMinValue", &vtkPLYWriter::GetFileTypeMinValue)
    .function("GetFileTypeMaxValue", &vtkPLYWriter::GetFileTypeMaxValue)
    .function("GetFileType", &vtkPLYWriter::GetFileType)
    .function("SetFileTypeToASCII", &vtkPLYWriter::SetFileTypeToASCII)
    .function("SetFileTypeToBinary", &vtkPLYWriter::SetFileTypeToBinary)
    .function("SetTextureCoordinatesName", &vtkPLYWriter::SetTextureCoordinatesName)
    .function("GetTextureCoordinatesNameMinValue", &vtkPLYWriter::GetTextureCoordinatesNameMinValue)
    .function("GetTextureCoordinatesNameMaxValue", &vtkPLYWriter::GetTextureCoordinatesNameMaxValue)
    .function("GetTextureCoordinatesName", &vtkPLYWriter::GetTextureCoordinatesName)
    .function("SetTextureCoordinatesNameToUV", &vtkPLYWriter::SetTextureCoordinatesNameToUV)
    .function("SetTextureCoordinatesNameToTextureUV", &vtkPLYWriter::SetTextureCoordinatesNameToTextureUV)
    .function("AddComment", &vtkPLYWriter::AddComment);
}
