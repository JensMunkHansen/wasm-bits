// JavaScript wrapper for vtkSQLDatabaseSchema with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkIOSQL.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkSQLDatabaseSchemaEmbinding.cxx \
 /home/jmh/github/vtk/IO/SQL/vtkSQLDatabaseSchema.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSQLDatabaseSchema.h"

EMSCRIPTEN_BINDINGS(vtkIOSQL_vtkSQLDatabaseSchema_0_1_constants) {
  emscripten::constant("VTK_SQL_ALLBACKENDS", std::string("*"));
}
EMSCRIPTEN_BINDINGS(vtkIOSQL_vtkSQLDatabaseSchema_1_1_constants) {
  emscripten::constant("VTK_SQL_MYSQL", std::string("vtkMySQLDatabase"));
}
EMSCRIPTEN_BINDINGS(vtkIOSQL_vtkSQLDatabaseSchema_2_1_constants) {
  emscripten::constant("VTK_SQL_POSTGRESQL", std::string("vtkPostgreSQLDatabase"));
}
EMSCRIPTEN_BINDINGS(vtkIOSQL_vtkSQLDatabaseSchema_3_1_constants) {
  emscripten::constant("VTK_SQL_SQLITE", std::string("vtkSQLiteDatabase"));
}
EMSCRIPTEN_BINDINGS(vtkIOSQL_vtkSQLDatabaseSchema_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSQLDatabaseSchema>(vtkSQLDatabaseSchema * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSQLDatabaseSchema_class) {
  using DatabaseColumnType=vtkSQLDatabaseSchema::DatabaseColumnType;
  using DatabaseIndexType=vtkSQLDatabaseSchema::DatabaseIndexType;
  using DatabaseTriggerType=vtkSQLDatabaseSchema::DatabaseTriggerType;
  using VarargTokens=vtkSQLDatabaseSchema::VarargTokens;
  emscripten::class_<vtkSQLDatabaseSchema, emscripten::base<vtkObject>>("vtkSQLDatabaseSchema")
    .smart_ptr<vtkSmartPointer<vtkSQLDatabaseSchema>>("vtkSmartPointer<vtkSQLDatabaseSchema>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSQLDatabaseSchema>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSQLDatabaseSchema::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSQLDatabaseSchema& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSQLDatabaseSchema::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSQLDatabaseSchema::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSQLDatabaseSchema::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSQLDatabaseSchema& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddPreamble", emscripten::optional_override([](vtkSQLDatabaseSchema& self, const std::string & arg_0, const std::string & arg_1, const std::string & arg_2) -> int {  return self.AddPreamble( arg_0.c_str(), arg_1.c_str(), arg_2.c_str());}))
    .function("AddTable", emscripten::optional_override([](vtkSQLDatabaseSchema& self, const std::string & arg_0) -> int {  return self.AddTable( arg_0.c_str());}))
    .function("AddColumnToTable", emscripten::select_overload<int(vtkSQLDatabaseSchema&, int, int, const std::string &, int, const std::string &)>([](vtkSQLDatabaseSchema& self, int arg_0, int arg_1, const std::string & arg_2, int arg_3, const std::string & arg_4) -> int { return self.AddColumnToTable( arg_0, arg_1, arg_2.c_str(), arg_3, arg_4.c_str()); }))
    .function("AddColumnToTable", emscripten::select_overload<int(vtkSQLDatabaseSchema&, const std::string &, int, const std::string &, int, const std::string &)>([](vtkSQLDatabaseSchema& self, const std::string & arg_0, int arg_1, const std::string & arg_2, int arg_3, const std::string & arg_4) -> int { return self.AddColumnToTable( arg_0.c_str(), arg_1, arg_2.c_str(), arg_3, arg_4.c_str()); }))
    .function("AddIndexToTable", emscripten::select_overload<int(vtkSQLDatabaseSchema&, int, int, const std::string &)>([](vtkSQLDatabaseSchema& self, int arg_0, int arg_1, const std::string & arg_2) -> int { return self.AddIndexToTable( arg_0, arg_1, arg_2.c_str()); }))
    .function("AddIndexToTable", emscripten::select_overload<int(vtkSQLDatabaseSchema&, const std::string &, int, const std::string &)>([](vtkSQLDatabaseSchema& self, const std::string & arg_0, int arg_1, const std::string & arg_2) -> int { return self.AddIndexToTable( arg_0.c_str(), arg_1, arg_2.c_str()); }))
    .function("AddColumnToIndex", emscripten::select_overload<int(vtkSQLDatabaseSchema&, int, int, int)>([](vtkSQLDatabaseSchema& self, int arg_0, int arg_1, int arg_2) -> int { return self.AddColumnToIndex( arg_0, arg_1, arg_2); }))
    .function("AddColumnToIndex", emscripten::select_overload<int(vtkSQLDatabaseSchema&, const std::string &, const std::string &, const std::string &)>([](vtkSQLDatabaseSchema& self, const std::string & arg_0, const std::string & arg_1, const std::string & arg_2) -> int { return self.AddColumnToIndex( arg_0.c_str(), arg_1.c_str(), arg_2.c_str()); }))
    .function("AddTriggerToTable", emscripten::select_overload<int(vtkSQLDatabaseSchema&, int, int, const std::string &, const std::string &, const std::string &)>([](vtkSQLDatabaseSchema& self, int arg_0, int arg_1, const std::string & arg_2, const std::string & arg_3, const std::string & arg_4) -> int { return self.AddTriggerToTable( arg_0, arg_1, arg_2.c_str(), arg_3.c_str(), arg_4.c_str()); }))
    .function("AddTriggerToTable", emscripten::select_overload<int(vtkSQLDatabaseSchema&, const std::string &, int, const std::string &, const std::string &, const std::string &)>([](vtkSQLDatabaseSchema& self, const std::string & arg_0, int arg_1, const std::string & arg_2, const std::string & arg_3, const std::string & arg_4) -> int { return self.AddTriggerToTable( arg_0.c_str(), arg_1, arg_2.c_str(), arg_3.c_str(), arg_4.c_str()); }))
    .function("AddOptionToTable", emscripten::select_overload<int(vtkSQLDatabaseSchema&, int, const std::string &, const std::string &)>([](vtkSQLDatabaseSchema& self, int arg_0, const std::string & arg_1, const std::string & arg_2) -> int { return self.AddOptionToTable( arg_0, arg_1.c_str(), arg_2.c_str()); }))
    .function("AddOptionToTable", emscripten::select_overload<int(vtkSQLDatabaseSchema&, const std::string &, const std::string &, const std::string &)>([](vtkSQLDatabaseSchema& self, const std::string & arg_0, const std::string & arg_1, const std::string & arg_2) -> int { return self.AddOptionToTable( arg_0.c_str(), arg_1.c_str(), arg_2.c_str()); }))
    .function("GetPreambleHandleFromName", emscripten::optional_override([](vtkSQLDatabaseSchema& self, const std::string & arg_0) -> int {  return self.GetPreambleHandleFromName( arg_0.c_str());}))
    .function("GetPreambleNameFromHandle", emscripten::optional_override([](vtkSQLDatabaseSchema& self, int arg_0) -> std::string {  return self.GetPreambleNameFromHandle( arg_0);}))
    .function("GetPreambleActionFromHandle", emscripten::optional_override([](vtkSQLDatabaseSchema& self, int arg_0) -> std::string {  return self.GetPreambleActionFromHandle( arg_0);}))
    .function("GetPreambleBackendFromHandle", emscripten::optional_override([](vtkSQLDatabaseSchema& self, int arg_0) -> std::string {  return self.GetPreambleBackendFromHandle( arg_0);}))
    .function("GetTableHandleFromName", emscripten::optional_override([](vtkSQLDatabaseSchema& self, const std::string & arg_0) -> int {  return self.GetTableHandleFromName( arg_0.c_str());}))
    .function("GetTableNameFromHandle", emscripten::optional_override([](vtkSQLDatabaseSchema& self, int arg_0) -> std::string {  return self.GetTableNameFromHandle( arg_0);}))
    .function("GetIndexHandleFromName", emscripten::optional_override([](vtkSQLDatabaseSchema& self, const std::string & arg_0, const std::string & arg_1) -> int {  return self.GetIndexHandleFromName( arg_0.c_str(), arg_1.c_str());}))
    .function("GetIndexNameFromHandle", emscripten::optional_override([](vtkSQLDatabaseSchema& self, int arg_0, int arg_1) -> std::string {  return self.GetIndexNameFromHandle( arg_0, arg_1);}))
    .function("GetIndexTypeFromHandle", &vtkSQLDatabaseSchema::GetIndexTypeFromHandle)
    .function("GetIndexColumnNameFromHandle", emscripten::optional_override([](vtkSQLDatabaseSchema& self, int arg_0, int arg_1, int arg_2) -> std::string {  return self.GetIndexColumnNameFromHandle( arg_0, arg_1, arg_2);}))
    .function("GetColumnHandleFromName", emscripten::optional_override([](vtkSQLDatabaseSchema& self, const std::string & arg_0, const std::string & arg_1) -> int {  return self.GetColumnHandleFromName( arg_0.c_str(), arg_1.c_str());}))
    .function("GetColumnNameFromHandle", emscripten::optional_override([](vtkSQLDatabaseSchema& self, int arg_0, int arg_1) -> std::string {  return self.GetColumnNameFromHandle( arg_0, arg_1);}))
    .function("GetColumnTypeFromHandle", &vtkSQLDatabaseSchema::GetColumnTypeFromHandle)
    .function("GetColumnSizeFromHandle", &vtkSQLDatabaseSchema::GetColumnSizeFromHandle)
    .function("GetColumnAttributesFromHandle", emscripten::optional_override([](vtkSQLDatabaseSchema& self, int arg_0, int arg_1) -> std::string {  return self.GetColumnAttributesFromHandle( arg_0, arg_1);}))
    .function("GetTriggerHandleFromName", emscripten::optional_override([](vtkSQLDatabaseSchema& self, const std::string & arg_0, const std::string & arg_1) -> int {  return self.GetTriggerHandleFromName( arg_0.c_str(), arg_1.c_str());}))
    .function("GetTriggerNameFromHandle", emscripten::optional_override([](vtkSQLDatabaseSchema& self, int arg_0, int arg_1) -> std::string {  return self.GetTriggerNameFromHandle( arg_0, arg_1);}))
    .function("GetTriggerTypeFromHandle", &vtkSQLDatabaseSchema::GetTriggerTypeFromHandle)
    .function("GetTriggerActionFromHandle", emscripten::optional_override([](vtkSQLDatabaseSchema& self, int arg_0, int arg_1) -> std::string {  return self.GetTriggerActionFromHandle( arg_0, arg_1);}))
    .function("GetTriggerBackendFromHandle", emscripten::optional_override([](vtkSQLDatabaseSchema& self, int arg_0, int arg_1) -> std::string {  return self.GetTriggerBackendFromHandle( arg_0, arg_1);}))
    .function("GetOptionTextFromHandle", emscripten::optional_override([](vtkSQLDatabaseSchema& self, int arg_0, int arg_1) -> std::string {  return self.GetOptionTextFromHandle( arg_0, arg_1);}))
    .function("GetOptionBackendFromHandle", emscripten::optional_override([](vtkSQLDatabaseSchema& self, int arg_0, int arg_1) -> std::string {  return self.GetOptionBackendFromHandle( arg_0, arg_1);}))
    .function("Reset", &vtkSQLDatabaseSchema::Reset)
    .function("GetNumberOfPreambles", &vtkSQLDatabaseSchema::GetNumberOfPreambles)
    .function("GetNumberOfTables", &vtkSQLDatabaseSchema::GetNumberOfTables)
    .function("GetNumberOfColumnsInTable", &vtkSQLDatabaseSchema::GetNumberOfColumnsInTable)
    .function("GetNumberOfIndicesInTable", &vtkSQLDatabaseSchema::GetNumberOfIndicesInTable)
    .function("GetNumberOfColumnNamesInIndex", &vtkSQLDatabaseSchema::GetNumberOfColumnNamesInIndex)
    .function("GetNumberOfTriggersInTable", &vtkSQLDatabaseSchema::GetNumberOfTriggersInTable)
    .function("GetNumberOfOptionsInTable", &vtkSQLDatabaseSchema::GetNumberOfOptionsInTable)
    .function("SetName", emscripten::optional_override([](vtkSQLDatabaseSchema& self, const std::string & arg_0) -> void {  return self.SetName( arg_0.c_str());}))
    .function("GetName", emscripten::optional_override([](vtkSQLDatabaseSchema& self) -> std::string {  return self.GetName();}))
    .function("AddTableMultipleArguments", emscripten::optional_override([](vtkSQLDatabaseSchema& self, const std::string & arg_0) -> int {  return self.AddTableMultipleArguments( arg_0.c_str());}));
}
EMSCRIPTEN_BINDINGS(vtkIOSQL_vtkSQLDatabaseSchema_0_2_constants) {
    typedef vtkSQLDatabaseSchema::DatabaseColumnType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[12] = {
      { "vtkSQLDatabaseSchema_DatabaseColumnType_SERIAL", vtkSQLDatabaseSchema::SERIAL },
      { "vtkSQLDatabaseSchema_DatabaseColumnType_SMALLINT", vtkSQLDatabaseSchema::SMALLINT },
      { "vtkSQLDatabaseSchema_DatabaseColumnType_INTEGER", vtkSQLDatabaseSchema::INTEGER },
      { "vtkSQLDatabaseSchema_DatabaseColumnType_BIGINT", vtkSQLDatabaseSchema::BIGINT },
      { "vtkSQLDatabaseSchema_DatabaseColumnType_VARCHAR", vtkSQLDatabaseSchema::VARCHAR },
      { "vtkSQLDatabaseSchema_DatabaseColumnType_TEXT", vtkSQLDatabaseSchema::TEXT },
      { "vtkSQLDatabaseSchema_DatabaseColumnType_REAL", vtkSQLDatabaseSchema::REAL },
      { "vtkSQLDatabaseSchema_DatabaseColumnType_DOUBLE", vtkSQLDatabaseSchema::DOUBLE },
      { "vtkSQLDatabaseSchema_DatabaseColumnType_BLOB", vtkSQLDatabaseSchema::BLOB },
      { "vtkSQLDatabaseSchema_DatabaseColumnType_TIME", vtkSQLDatabaseSchema::TIME },
      { "vtkSQLDatabaseSchema_DatabaseColumnType_DATE", vtkSQLDatabaseSchema::DATE },
      { "vtkSQLDatabaseSchema_DatabaseColumnType_TIMESTAMP", vtkSQLDatabaseSchema::TIMESTAMP },
  };
  for (int c = 0; c < 12; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkIOSQL_vtkSQLDatabaseSchema_1_2_constants) {
    typedef vtkSQLDatabaseSchema::DatabaseIndexType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkSQLDatabaseSchema_DatabaseIndexType_INDEX", vtkSQLDatabaseSchema::INDEX },
      { "vtkSQLDatabaseSchema_DatabaseIndexType_UNIQUE", vtkSQLDatabaseSchema::UNIQUE },
      { "vtkSQLDatabaseSchema_DatabaseIndexType_PRIMARY_KEY", vtkSQLDatabaseSchema::PRIMARY_KEY },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkIOSQL_vtkSQLDatabaseSchema_2_2_constants) {
    typedef vtkSQLDatabaseSchema::DatabaseTriggerType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[6] = {
      { "vtkSQLDatabaseSchema_DatabaseTriggerType_BEFORE_INSERT", vtkSQLDatabaseSchema::BEFORE_INSERT },
      { "vtkSQLDatabaseSchema_DatabaseTriggerType_AFTER_INSERT", vtkSQLDatabaseSchema::AFTER_INSERT },
      { "vtkSQLDatabaseSchema_DatabaseTriggerType_BEFORE_UPDATE", vtkSQLDatabaseSchema::BEFORE_UPDATE },
      { "vtkSQLDatabaseSchema_DatabaseTriggerType_AFTER_UPDATE", vtkSQLDatabaseSchema::AFTER_UPDATE },
      { "vtkSQLDatabaseSchema_DatabaseTriggerType_BEFORE_DELETE", vtkSQLDatabaseSchema::BEFORE_DELETE },
      { "vtkSQLDatabaseSchema_DatabaseTriggerType_AFTER_DELETE", vtkSQLDatabaseSchema::AFTER_DELETE },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkIOSQL_vtkSQLDatabaseSchema_3_2_constants) {
    typedef vtkSQLDatabaseSchema::VarargTokens cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkSQLDatabaseSchema_VarargTokens_COLUMN_TOKEN", vtkSQLDatabaseSchema::COLUMN_TOKEN },
      { "vtkSQLDatabaseSchema_VarargTokens_INDEX_TOKEN", vtkSQLDatabaseSchema::INDEX_TOKEN },
      { "vtkSQLDatabaseSchema_VarargTokens_INDEX_COLUMN_TOKEN", vtkSQLDatabaseSchema::INDEX_COLUMN_TOKEN },
      { "vtkSQLDatabaseSchema_VarargTokens_END_INDEX_TOKEN", vtkSQLDatabaseSchema::END_INDEX_TOKEN },
      { "vtkSQLDatabaseSchema_VarargTokens_TRIGGER_TOKEN", vtkSQLDatabaseSchema::TRIGGER_TOKEN },
      { "vtkSQLDatabaseSchema_VarargTokens_OPTION_TOKEN", vtkSQLDatabaseSchema::OPTION_TOKEN },
      { "vtkSQLDatabaseSchema_VarargTokens_END_TABLE_TOKEN", vtkSQLDatabaseSchema::END_TABLE_TOKEN },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
