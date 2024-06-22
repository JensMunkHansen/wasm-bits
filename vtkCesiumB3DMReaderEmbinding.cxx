// JavaScript wrapper for vtkCesiumB3DMReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCesium3DTiles.js/vtkIOCesium3DTiles.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCesium3DTiles.js/vtkCesiumB3DMReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Cesium3DTiles/vtkCesiumB3DMReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGLTFReader.h"
#include "vtkCesiumB3DMReader.h"

template<> void emscripten::internal::raw_destructor<vtkCesiumB3DMReader>(vtkCesiumB3DMReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCesiumB3DMReader_class) {
  emscripten::class_<vtkCesiumB3DMReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkCesiumB3DMReader")
    .smart_ptr<vtkSmartPointer<vtkCesiumB3DMReader>>("vtkSmartPointer<vtkCesiumB3DMReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCesiumB3DMReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCesiumB3DMReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCesiumB3DMReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCesiumB3DMReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCesiumB3DMReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCesiumB3DMReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCesiumB3DMReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkCesiumB3DMReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkCesiumB3DMReader& self) -> std::string {  return self.GetFileName();}))
    .function("GetGLTFReader", &vtkCesiumB3DMReader::GetGLTFReader, emscripten::allow_raw_pointers());
}
