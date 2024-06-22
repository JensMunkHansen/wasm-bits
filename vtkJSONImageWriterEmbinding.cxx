// JavaScript wrapper for vtkJSONImageWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkJSONImageWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkJSONImageWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkJSONImageWriter.h"

template<> void emscripten::internal::raw_destructor<vtkJSONImageWriter>(vtkJSONImageWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkJSONImageWriter_class) {
  emscripten::class_<vtkJSONImageWriter, emscripten::base<vtkImageAlgorithm>>("vtkJSONImageWriter")
    .smart_ptr<vtkSmartPointer<vtkJSONImageWriter>>("vtkSmartPointer<vtkJSONImageWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkJSONImageWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJSONImageWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkJSONImageWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkJSONImageWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkJSONImageWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJSONImageWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkJSONImageWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkJSONImageWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkJSONImageWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetArrayName", emscripten::optional_override([](vtkJSONImageWriter& self, const std::string & arg_0) -> void {  return self.SetArrayName( arg_0.c_str());}))
    .function("GetArrayName", emscripten::optional_override([](vtkJSONImageWriter& self) -> std::string {  return self.GetArrayName();}))
    .function("SetSlice", &vtkJSONImageWriter::SetSlice)
    .function("GetSlice", &vtkJSONImageWriter::GetSlice)
    .function("Write", &vtkJSONImageWriter::Write);
}
