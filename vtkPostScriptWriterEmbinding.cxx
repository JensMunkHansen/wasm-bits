// JavaScript wrapper for vtkPostScriptWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkPostScriptWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkPostScriptWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPostScriptWriter.h"

template<> void emscripten::internal::raw_destructor<vtkPostScriptWriter>(vtkPostScriptWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPostScriptWriter_class) {
  emscripten::class_<vtkPostScriptWriter, emscripten::base<vtkImageWriter>>("vtkPostScriptWriter")
    .smart_ptr<vtkSmartPointer<vtkPostScriptWriter>>("vtkSmartPointer<vtkPostScriptWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPostScriptWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPostScriptWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPostScriptWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPostScriptWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPostScriptWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPostScriptWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPostScriptWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
