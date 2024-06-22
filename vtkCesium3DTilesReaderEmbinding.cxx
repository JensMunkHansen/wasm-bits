// JavaScript wrapper for vtkCesium3DTilesReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCesium3DTiles.js/vtkIOCesium3DTiles.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCesium3DTiles.js/vtkCesium3DTilesReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Cesium3DTiles/vtkCesium3DTilesReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkCesium3DTilesReader.h"

template<> void emscripten::internal::raw_destructor<vtkCesium3DTilesReader>(vtkCesium3DTilesReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCesium3DTilesReader_class) {
  emscripten::class_<vtkCesium3DTilesReader, emscripten::base<vtkPartitionedDataSetCollectionAlgorithm>>("vtkCesium3DTilesReader")
    .smart_ptr<vtkSmartPointer<vtkCesium3DTilesReader>>("vtkSmartPointer<vtkCesium3DTilesReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCesium3DTilesReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCesium3DTilesReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCesium3DTilesReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCesium3DTilesReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCesium3DTilesReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCesium3DTilesReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCesium3DTilesReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkCesium3DTilesReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkCesium3DTilesReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetLevel", &vtkCesium3DTilesReader::SetLevel)
    .function("GetLevel", &vtkCesium3DTilesReader::GetLevel)
    .function("CanReadFile", emscripten::optional_override([](vtkCesium3DTilesReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetTileReader", &vtkCesium3DTilesReader::GetTileReader);
}
