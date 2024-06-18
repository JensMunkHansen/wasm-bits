// JavaScript wrapper for vtkTableToDatabaseWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkIOSQL.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkTableToDatabaseWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/SQL/vtkTableToDatabaseWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSQLDatabase.h"
#include "vtkTable.h"
#include "vtkTableToDatabaseWriter.h"

template<> void emscripten::internal::raw_destructor<vtkTableToDatabaseWriter>(vtkTableToDatabaseWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTableToDatabaseWriter_class) {
  emscripten::class_<vtkTableToDatabaseWriter, emscripten::base<vtkWriter>>("vtkTableToDatabaseWriter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToDatabaseWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTableToDatabaseWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTableToDatabaseWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTableToDatabaseWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToDatabaseWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTableToDatabaseWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDatabase", &vtkTableToDatabaseWriter::SetDatabase, emscripten::allow_raw_pointers())
    .function("SetTableName", emscripten::optional_override([](vtkTableToDatabaseWriter& self, const std::string & arg_0) -> bool {  return self.SetTableName( arg_0.c_str());}))
    .function("TableNameIsNew", &vtkTableToDatabaseWriter::TableNameIsNew)
    .function("GetDatabase", &vtkTableToDatabaseWriter::GetDatabase, emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkTable*(vtkTableToDatabaseWriter&)>([](vtkTableToDatabaseWriter& self) -> vtkTable* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkTable*(vtkTableToDatabaseWriter&, int)>([](vtkTableToDatabaseWriter& self, int arg_0) -> vtkTable* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers());
}
