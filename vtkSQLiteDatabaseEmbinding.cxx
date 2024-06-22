// JavaScript wrapper for vtkSQLiteDatabase with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkIOSQL.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkSQLiteDatabaseEmbinding.cxx \
 /home/jmh/github/vtk/IO/SQL/vtkSQLiteDatabase.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSQLQuery.h"
#include "vtkStringArray.h"
#include "vtkStdString.h"
#include "vtkSQLDatabaseSchema.h"
#include "vtkSQLiteDatabase.h"

template<> void emscripten::internal::raw_destructor<vtkSQLiteDatabase>(vtkSQLiteDatabase * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSQLiteDatabase_class) {
  emscripten::class_<vtkSQLiteDatabase, emscripten::base<vtkSQLDatabase>>("vtkSQLiteDatabase")
    .smart_ptr<vtkSmartPointer<vtkSQLiteDatabase>>("vtkSmartPointer<vtkSQLiteDatabase>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSQLiteDatabase>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSQLiteDatabase::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSQLiteDatabase& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSQLiteDatabase::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSQLiteDatabase::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSQLiteDatabase::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSQLiteDatabase& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Open", emscripten::select_overload<bool(vtkSQLiteDatabase&, const std::string &)>([](vtkSQLiteDatabase& self, const std::string & arg_0) -> bool { return self.Open( arg_0.c_str()); }))
    .function("Open", emscripten::select_overload<bool(vtkSQLiteDatabase&, const std::string &, int)>([](vtkSQLiteDatabase& self, const std::string & arg_0, int arg_1) -> bool { return self.Open( arg_0.c_str(), arg_1); }))
    .function("Close", &vtkSQLiteDatabase::Close)
    .function("IsOpen", &vtkSQLiteDatabase::IsOpen)
    .function("GetQueryInstance", &vtkSQLiteDatabase::GetQueryInstance, emscripten::allow_raw_pointers())
    .function("GetTables", &vtkSQLiteDatabase::GetTables, emscripten::allow_raw_pointers())
    .function("GetRecord", emscripten::optional_override([](vtkSQLiteDatabase& self, const std::string & arg_0) -> vtkStringArray* {  return self.GetRecord( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .function("IsSupported", &vtkSQLiteDatabase::IsSupported)
    .function("HasError", &vtkSQLiteDatabase::HasError)
    .function("GetLastErrorText", emscripten::optional_override([](vtkSQLiteDatabase& self) -> std::string {  return self.GetLastErrorText();}))
    .function("GetDatabaseType", emscripten::optional_override([](vtkSQLiteDatabase& self) -> std::string {  return self.GetDatabaseType();}))
    .function("GetDatabaseFileName", emscripten::optional_override([](vtkSQLiteDatabase& self) -> std::string {  return self.GetDatabaseFileName();}))
    .function("SetDatabaseFileName", emscripten::optional_override([](vtkSQLiteDatabase& self, const std::string & arg_0) -> void {  return self.SetDatabaseFileName( arg_0.c_str());}))
    .function("GetURL", &vtkSQLiteDatabase::GetURL)
    .function("GetColumnSpecification", &vtkSQLiteDatabase::GetColumnSpecification, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkIOSQL_vtkSQLiteDatabase_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkSQLiteDatabase_USE_EXISTING", vtkSQLiteDatabase::USE_EXISTING },
      { "vtkSQLiteDatabase_USE_EXISTING_OR_CREATE", vtkSQLiteDatabase::USE_EXISTING_OR_CREATE },
      { "vtkSQLiteDatabase_CREATE_OR_CLEAR", vtkSQLiteDatabase::CREATE_OR_CLEAR },
      { "vtkSQLiteDatabase_CREATE", vtkSQLiteDatabase::CREATE },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
