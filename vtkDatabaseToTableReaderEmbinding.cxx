// JavaScript wrapper for vtkDatabaseToTableReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkIOSQL.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkDatabaseToTableReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/SQL/vtkDatabaseToTableReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSQLDatabase.h"
#include "vtkDatabaseToTableReader.h"

template<> void emscripten::internal::raw_destructor<vtkDatabaseToTableReader>(vtkDatabaseToTableReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDatabaseToTableReader_class) {
  emscripten::class_<vtkDatabaseToTableReader, emscripten::base<vtkTableAlgorithm>>("vtkDatabaseToTableReader")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDatabaseToTableReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDatabaseToTableReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDatabaseToTableReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDatabaseToTableReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDatabaseToTableReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDatabaseToTableReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDatabase", &vtkDatabaseToTableReader::SetDatabase, emscripten::allow_raw_pointers())
    .function("SetTableName", emscripten::optional_override([](vtkDatabaseToTableReader& self, const std::string & arg_0) -> bool {  return self.SetTableName( arg_0.c_str());}))
    .function("CheckIfTableExists", &vtkDatabaseToTableReader::CheckIfTableExists)
    .function("GetDatabase", &vtkDatabaseToTableReader::GetDatabase, emscripten::allow_raw_pointers());
}
