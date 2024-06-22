// JavaScript wrapper for vtkTableWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkTableWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkTableWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTable.h"
#include "vtkTableWriter.h"

template<> void emscripten::internal::raw_destructor<vtkTableWriter>(vtkTableWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTableWriter_class) {
  emscripten::class_<vtkTableWriter, emscripten::base<vtkDataWriter>>("vtkTableWriter")
    .smart_ptr<vtkSmartPointer<vtkTableWriter>>("vtkSmartPointer<vtkTableWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTableWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTableWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTableWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTableWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTableWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkTable*(vtkTableWriter&)>([](vtkTableWriter& self) -> vtkTable* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkTable*(vtkTableWriter&, int)>([](vtkTableWriter& self, int arg_0) -> vtkTable* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers());
}
