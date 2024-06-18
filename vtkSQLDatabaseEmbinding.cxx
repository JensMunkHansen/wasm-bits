// JavaScript wrapper for vtkSQLDatabase with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkIOSQL.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkSQLDatabaseEmbinding.cxx \
 /home/jmh/github/vtk/IO/SQL/vtkSQLDatabase.h
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
#include "vtkInformationObjectBaseKey.h"
#include "vtkSQLDatabase.h"

EMSCRIPTEN_BINDINGS(vtkIOSQL_vtkSQLDatabase_0_1_constants) {
  const struct { const char *name; int value; }
    constants[11] = {
      { "VTK_SQL_FEATURE_TRANSACTIONS", 1000 },
      { "VTK_SQL_FEATURE_QUERY_SIZE", 1001 },
      { "VTK_SQL_FEATURE_BLOB", 1002 },
      { "VTK_SQL_FEATURE_UNICODE", 1003 },
      { "VTK_SQL_FEATURE_PREPARED_QUERIES", 1004 },
      { "VTK_SQL_FEATURE_NAMED_PLACEHOLDERS", 1005 },
      { "VTK_SQL_FEATURE_POSITIONAL_PLACEHOLDERS", 1006 },
      { "VTK_SQL_FEATURE_LAST_INSERT_ID", 1007 },
      { "VTK_SQL_FEATURE_BATCH_OPERATIONS", 1008 },
      { "VTK_SQL_FEATURE_TRIGGERS", 1009 },
      { "VTK_SQL_DEFAULT_COLUMN_SIZE", 32 },
  };
  for (int c = 0; c < 11; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkSQLDatabase>(vtkSQLDatabase * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSQLDatabase_class) {
  emscripten::class_<vtkSQLDatabase, emscripten::base<vtkObject>>("vtkSQLDatabase")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSQLDatabase::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSQLDatabase& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSQLDatabase::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSQLDatabase::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSQLDatabase::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSQLDatabase& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsSupported", &vtkSQLDatabase::IsSupported)
    .function("GetTablePreamble", &vtkSQLDatabase::GetTablePreamble)
    .function("GetColumnSpecification", &vtkSQLDatabase::GetColumnSpecification, emscripten::allow_raw_pointers())
    .function("GetTriggerSpecification", &vtkSQLDatabase::GetTriggerSpecification, emscripten::allow_raw_pointers())
    .class_function("CreateFromURL", emscripten::optional_override([]( const std::string & arg_0) -> vtkSQLDatabase* {  return vtkSQLDatabase::CreateFromURL( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .function("EffectSchema", &vtkSQLDatabase::EffectSchema, emscripten::allow_raw_pointers())
    .class_function("UnRegisterAllCreateFromURLCallbacks", &vtkSQLDatabase::UnRegisterAllCreateFromURLCallbacks)
    .class_function("DATABASE", &vtkSQLDatabase::DATABASE, emscripten::allow_raw_pointers());
}
