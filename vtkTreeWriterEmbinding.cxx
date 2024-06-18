// JavaScript wrapper for vtkTreeWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkTreeWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkTreeWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTree.h"
#include "vtkTreeWriter.h"

template<> void emscripten::internal::raw_destructor<vtkTreeWriter>(vtkTreeWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeWriter_class) {
  emscripten::class_<vtkTreeWriter, emscripten::base<vtkDataWriter>>("vtkTreeWriter")
    .smart_ptr<vtkSmartPointer<vtkTreeWriter>>("vtkSmartPointer<vtkTreeWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTreeWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkTree*(vtkTreeWriter&)>([](vtkTreeWriter& self) -> vtkTree* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkTree*(vtkTreeWriter&, int)>([](vtkTreeWriter& self, int arg_0) -> vtkTree* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers());
}
