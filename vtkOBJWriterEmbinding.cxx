// JavaScript wrapper for vtkOBJWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkOBJWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkOBJWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkImageData.h"
#include "vtkDataSet.h"
#include "vtkOBJWriter.h"

template<> void emscripten::internal::raw_destructor<vtkOBJWriter>(vtkOBJWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOBJWriter_class) {
  emscripten::class_<vtkOBJWriter, emscripten::base<vtkWriter>>("vtkOBJWriter")
    .smart_ptr<vtkSmartPointer<vtkOBJWriter>>("vtkSmartPointer<vtkOBJWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOBJWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOBJWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOBJWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOBJWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOBJWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOBJWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOBJWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInputGeometry", &vtkOBJWriter::GetInputGeometry, emscripten::allow_raw_pointers())
    .function("GetInputTexture", &vtkOBJWriter::GetInputTexture, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkOBJWriter::GetInput, emscripten::allow_raw_pointers())
    .function("SetTextureFileName", emscripten::optional_override([](vtkOBJWriter& self, const std::string & arg_0) -> void {  return self.SetTextureFileName( arg_0.c_str());}))
    .function("GetTextureFileName", emscripten::optional_override([](vtkOBJWriter& self) -> std::string {  return self.GetTextureFileName();}))
    .function("SetFileName", emscripten::optional_override([](vtkOBJWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkOBJWriter& self) -> std::string {  return self.GetFileName();}));
}
