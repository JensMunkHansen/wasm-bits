// JavaScript wrapper for vtkCesium3DTilesWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCesium3DTiles.js/vtkIOCesium3DTiles.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCesium3DTiles.js/vtkCesium3DTilesWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Cesium3DTiles/vtkCesium3DTilesWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkCesium3DTilesWriter.h"

EMSCRIPTEN_BINDINGS(vtkIOCesium3DTiles_vtkCesium3DTilesWriter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCesium3DTilesWriter>(vtkCesium3DTilesWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCesium3DTilesWriter_class) {
  emscripten::class_<vtkCesium3DTilesWriter, emscripten::base<vtkWriter>>("vtkCesium3DTilesWriter")
    .smart_ptr<vtkSmartPointer<vtkCesium3DTilesWriter>>("vtkSmartPointer<vtkCesium3DTilesWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCesium3DTilesWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCesium3DTilesWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCesium3DTilesWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCesium3DTilesWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCesium3DTilesWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCesium3DTilesWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCesium3DTilesWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDirectoryName", emscripten::optional_override([](vtkCesium3DTilesWriter& self, const std::string & arg_0) -> void {  return self.SetDirectoryName( arg_0.c_str());}))
    .function("GetDirectoryName", emscripten::optional_override([](vtkCesium3DTilesWriter& self) -> std::string {  return self.GetDirectoryName();}))
    .function("SetTextureBaseDirectory", emscripten::optional_override([](vtkCesium3DTilesWriter& self, const std::string & arg_0) -> void {  return self.SetTextureBaseDirectory( arg_0.c_str());}))
    .function("GetTextureBaseDirectory", emscripten::optional_override([](vtkCesium3DTilesWriter& self) -> std::string {  return self.GetTextureBaseDirectory();}))
    .function("SetPropertyTextureFile", emscripten::optional_override([](vtkCesium3DTilesWriter& self, const std::string & arg_0) -> void {  return self.SetPropertyTextureFile( arg_0.c_str());}))
    .function("GetPropertyTextureFile", emscripten::optional_override([](vtkCesium3DTilesWriter& self) -> std::string {  return self.GetPropertyTextureFile();}))
    .function("SetOffset", emscripten::select_overload<void(vtkCesium3DTilesWriter&, double, double, double)>([](vtkCesium3DTilesWriter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOffset( arg_0, arg_1, arg_2); }))
    .function("SetSaveTextures", &vtkCesium3DTilesWriter::SetSaveTextures)
    .function("GetSaveTextures", &vtkCesium3DTilesWriter::GetSaveTextures)
    .function("SaveTexturesOn", &vtkCesium3DTilesWriter::SaveTexturesOn)
    .function("SaveTexturesOff", &vtkCesium3DTilesWriter::SaveTexturesOff)
    .function("SetSaveTiles", &vtkCesium3DTilesWriter::SetSaveTiles)
    .function("GetSaveTiles", &vtkCesium3DTilesWriter::GetSaveTiles)
    .function("SaveTilesOn", &vtkCesium3DTilesWriter::SaveTilesOn)
    .function("SaveTilesOff", &vtkCesium3DTilesWriter::SaveTilesOff)
    .function("SetMergeTilePolyData", &vtkCesium3DTilesWriter::SetMergeTilePolyData)
    .function("GetMergeTilePolyData", &vtkCesium3DTilesWriter::GetMergeTilePolyData)
    .function("MergeTilePolyDataOn", &vtkCesium3DTilesWriter::MergeTilePolyDataOn)
    .function("MergeTilePolyDataOff", &vtkCesium3DTilesWriter::MergeTilePolyDataOff)
    .function("SetMergedTextureWidth", &vtkCesium3DTilesWriter::SetMergedTextureWidth)
    .function("GetMergedTextureWidth", &vtkCesium3DTilesWriter::GetMergedTextureWidth)
    .function("SetContentGLTF", &vtkCesium3DTilesWriter::SetContentGLTF)
    .function("GetContentGLTF", &vtkCesium3DTilesWriter::GetContentGLTF)
    .function("ContentGLTFOn", &vtkCesium3DTilesWriter::ContentGLTFOn)
    .function("ContentGLTFOff", &vtkCesium3DTilesWriter::ContentGLTFOff)
    .function("SetContentGLTFSaveGLB", &vtkCesium3DTilesWriter::SetContentGLTFSaveGLB)
    .function("GetContentGLTFSaveGLB", &vtkCesium3DTilesWriter::GetContentGLTFSaveGLB)
    .function("ContentGLTFSaveGLBOn", &vtkCesium3DTilesWriter::ContentGLTFSaveGLBOn)
    .function("ContentGLTFSaveGLBOff", &vtkCesium3DTilesWriter::ContentGLTFSaveGLBOff)
    .function("SetInputType", &vtkCesium3DTilesWriter::SetInputType)
    .function("GetInputType", &vtkCesium3DTilesWriter::GetInputType)
    .function("SetNumberOfFeaturesPerTile", &vtkCesium3DTilesWriter::SetNumberOfFeaturesPerTile)
    .function("GetNumberOfFeaturesPerTile", &vtkCesium3DTilesWriter::GetNumberOfFeaturesPerTile)
    .function("SetCRS", emscripten::optional_override([](vtkCesium3DTilesWriter& self, const std::string & arg_0) -> void {  return self.SetCRS( arg_0.c_str());}))
    .function("GetCRS", emscripten::optional_override([](vtkCesium3DTilesWriter& self) -> std::string {  return self.GetCRS();}));
}
EMSCRIPTEN_BINDINGS(vtkIOCesium3DTiles_vtkCesium3DTilesWriter_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkCesium3DTilesWriter_Buildings", vtkCesium3DTilesWriter::Buildings },
      { "vtkCesium3DTilesWriter_Points", vtkCesium3DTilesWriter::Points },
      { "vtkCesium3DTilesWriter_Mesh", vtkCesium3DTilesWriter::Mesh },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
