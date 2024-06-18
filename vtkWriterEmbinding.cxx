// JavaScript wrapper for vtkWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkWriter.h"

EMSCRIPTEN_BINDINGS(vtkIOCore_vtkWriter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_ASCII", 1 },
      { "VTK_BINARY", 2 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkWriter>(vtkWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWriter_class) {
  emscripten::class_<vtkWriter, emscripten::base<vtkAlgorithm>>("vtkWriter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Write", &vtkWriter::Write)
    .function("EncodeString", emscripten::optional_override([](vtkWriter& self, std::uintptr_t arg_0, const std::string & arg_1, bool arg_2) -> void {  return self.EncodeString(reinterpret_cast<char*>(arg_0 * sizeof(char)), arg_1.c_str(), arg_2);}))
    .function("SetInputData", emscripten::select_overload<void(vtkWriter&, vtkDataObject*)>([](vtkWriter& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkWriter&, int, vtkDataObject*)>([](vtkWriter& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkWriter&)>([](vtkWriter& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkWriter&, int)>([](vtkWriter& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers());
}
