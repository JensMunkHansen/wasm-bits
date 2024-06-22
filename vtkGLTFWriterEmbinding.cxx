// JavaScript wrapper for vtkGLTFWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkGLTFWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkGLTFWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkGLTFWriter.h"

template<> void emscripten::internal::raw_destructor<vtkGLTFWriter>(vtkGLTFWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGLTFWriter_class) {
  emscripten::class_<vtkGLTFWriter, emscripten::base<vtkWriter>>("vtkGLTFWriter")
    .smart_ptr<vtkSmartPointer<vtkGLTFWriter>>("vtkSmartPointer<vtkGLTFWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGLTFWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLTFWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGLTFWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGLTFWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGLTFWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLTFWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGLTFWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkGLTFWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkGLTFWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetTextureBaseDirectory", emscripten::optional_override([](vtkGLTFWriter& self, const std::string & arg_0) -> void {  return self.SetTextureBaseDirectory( arg_0.c_str());}))
    .function("GetTextureBaseDirectory", emscripten::optional_override([](vtkGLTFWriter& self) -> std::string {  return self.GetTextureBaseDirectory();}))
    .function("SetPropertyTextureFile", emscripten::optional_override([](vtkGLTFWriter& self, const std::string & arg_0) -> void {  return self.SetPropertyTextureFile( arg_0.c_str());}))
    .function("GetPropertyTextureFile", emscripten::optional_override([](vtkGLTFWriter& self) -> std::string {  return self.GetPropertyTextureFile();}))
    .function("GetInlineData", &vtkGLTFWriter::GetInlineData)
    .function("SetInlineData", &vtkGLTFWriter::SetInlineData)
    .function("InlineDataOn", &vtkGLTFWriter::InlineDataOn)
    .function("InlineDataOff", &vtkGLTFWriter::InlineDataOff)
    .function("GetSaveNormal", &vtkGLTFWriter::GetSaveNormal)
    .function("SetSaveNormal", &vtkGLTFWriter::SetSaveNormal)
    .function("SaveNormalOn", &vtkGLTFWriter::SaveNormalOn)
    .function("SaveNormalOff", &vtkGLTFWriter::SaveNormalOff)
    .function("GetSaveBatchId", &vtkGLTFWriter::GetSaveBatchId)
    .function("SetSaveBatchId", &vtkGLTFWriter::SetSaveBatchId)
    .function("SaveBatchIdOn", &vtkGLTFWriter::SaveBatchIdOn)
    .function("SaveBatchIdOff", &vtkGLTFWriter::SaveBatchIdOff)
    .function("GetSaveTextures", &vtkGLTFWriter::GetSaveTextures)
    .function("SetSaveTextures", &vtkGLTFWriter::SetSaveTextures)
    .function("SaveTexturesOn", &vtkGLTFWriter::SaveTexturesOn)
    .function("SaveTexturesOff", &vtkGLTFWriter::SaveTexturesOff)
    .function("GetCopyTextures", &vtkGLTFWriter::GetCopyTextures)
    .function("SetCopyTextures", &vtkGLTFWriter::SetCopyTextures)
    .function("CopyTexturesOn", &vtkGLTFWriter::CopyTexturesOn)
    .function("CopyTexturesOff", &vtkGLTFWriter::CopyTexturesOff)
    .function("GetSaveActivePointColor", &vtkGLTFWriter::GetSaveActivePointColor)
    .function("SetSaveActivePointColor", &vtkGLTFWriter::SetSaveActivePointColor)
    .function("SaveActivePointColorOn", &vtkGLTFWriter::SaveActivePointColorOn)
    .function("SaveActivePointColorOff", &vtkGLTFWriter::SaveActivePointColorOff)
    .function("GetRelativeCoordinates", &vtkGLTFWriter::GetRelativeCoordinates)
    .function("SetRelativeCoordinates", &vtkGLTFWriter::SetRelativeCoordinates)
    .function("RelativeCoordinatesOn", &vtkGLTFWriter::RelativeCoordinatesOn)
    .function("RelativeCoordinatesOff", &vtkGLTFWriter::RelativeCoordinatesOff)
    .function("GetBinary", &vtkGLTFWriter::GetBinary)
    .function("WriteToString", &vtkGLTFWriter::WriteToString)
    .class_function("GetFieldAsStringVector", emscripten::optional_override([]( vtkDataObject* arg_0, const std::string & arg_1) -> std::vector<std::string> {  return vtkGLTFWriter::GetFieldAsStringVector( arg_0, arg_1.c_str());}), emscripten::allow_raw_pointers());
}
