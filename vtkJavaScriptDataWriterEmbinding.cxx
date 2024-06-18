// JavaScript wrapper for vtkJavaScriptDataWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkJavaScriptDataWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkJavaScriptDataWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkJavaScriptDataWriter.h"

template<> void emscripten::internal::raw_destructor<vtkJavaScriptDataWriter>(vtkJavaScriptDataWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkJavaScriptDataWriter_class) {
  emscripten::class_<vtkJavaScriptDataWriter, emscripten::base<vtkWriter>>("vtkJavaScriptDataWriter")
    .smart_ptr<vtkSmartPointer<vtkJavaScriptDataWriter>>("vtkSmartPointer<vtkJavaScriptDataWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkJavaScriptDataWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJavaScriptDataWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkJavaScriptDataWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkJavaScriptDataWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkJavaScriptDataWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJavaScriptDataWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkJavaScriptDataWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetVariableName", emscripten::optional_override([](vtkJavaScriptDataWriter& self, const std::string & arg_0) -> void {  return self.SetVariableName( arg_0.c_str());}))
    .function("GetVariableName", emscripten::optional_override([](vtkJavaScriptDataWriter& self) -> std::string {  return self.GetVariableName();}))
    .function("SetFileName", emscripten::optional_override([](vtkJavaScriptDataWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkJavaScriptDataWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetIncludeFieldNames", &vtkJavaScriptDataWriter::SetIncludeFieldNames)
    .function("GetIncludeFieldNames", &vtkJavaScriptDataWriter::GetIncludeFieldNames);
}
