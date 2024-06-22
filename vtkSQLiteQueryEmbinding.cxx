// JavaScript wrapper for vtkSQLiteQuery with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkIOSQL.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkSQLiteQueryEmbinding.cxx \
 /home/jmh/github/vtk/IO/SQL/vtkSQLiteQuery.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkSQLiteQuery.h"

template<> void emscripten::internal::raw_destructor<vtkSQLiteQuery>(vtkSQLiteQuery * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSQLiteQuery_class) {
  emscripten::class_<vtkSQLiteQuery, emscripten::base<vtkSQLQuery>>("vtkSQLiteQuery")
    .smart_ptr<vtkSmartPointer<vtkSQLiteQuery>>("vtkSmartPointer<vtkSQLiteQuery>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSQLiteQuery>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSQLiteQuery::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSQLiteQuery& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSQLiteQuery::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSQLiteQuery::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSQLiteQuery::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSQLiteQuery& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetQuery", emscripten::optional_override([](vtkSQLiteQuery& self, const std::string & arg_0) -> bool {  return self.SetQuery( arg_0.c_str());}))
    .function("Execute", &vtkSQLiteQuery::Execute)
    .function("GetNumberOfFields", &vtkSQLiteQuery::GetNumberOfFields)
    .function("GetFieldName", emscripten::optional_override([](vtkSQLiteQuery& self, int arg_0) -> std::string {  return self.GetFieldName( arg_0);}))
    .function("GetFieldType", &vtkSQLiteQuery::GetFieldType)
    .function("NextRow", &vtkSQLiteQuery::NextRow)
    .function("HasError", &vtkSQLiteQuery::HasError)
    .function("BeginTransaction", &vtkSQLiteQuery::BeginTransaction)
    .function("RollbackTransaction", &vtkSQLiteQuery::RollbackTransaction)
    .function("CommitTransaction", &vtkSQLiteQuery::CommitTransaction)
    .function("DataValue", &vtkSQLiteQuery::DataValue)
    .function("GetLastErrorText", emscripten::optional_override([](vtkSQLiteQuery& self) -> std::string {  return self.GetLastErrorText();}))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, unsigned char)>([](vtkSQLiteQuery& self, int arg_0, unsigned char arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, signed char)>([](vtkSQLiteQuery& self, int arg_0, signed char arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, unsigned short)>([](vtkSQLiteQuery& self, int arg_0, unsigned short arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, short)>([](vtkSQLiteQuery& self, int arg_0, short arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, unsigned int)>([](vtkSQLiteQuery& self, int arg_0, unsigned int arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, int)>([](vtkSQLiteQuery& self, int arg_0, int arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, unsigned long)>([](vtkSQLiteQuery& self, int arg_0, unsigned long arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, long)>([](vtkSQLiteQuery& self, int arg_0, long arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, unsigned long long)>([](vtkSQLiteQuery& self, int arg_0, unsigned long long arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, long long)>([](vtkSQLiteQuery& self, int arg_0, long long arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, float)>([](vtkSQLiteQuery& self, int arg_0, float arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, double)>([](vtkSQLiteQuery& self, int arg_0, double arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, const std::string &)>([](vtkSQLiteQuery& self, int arg_0, const std::string & arg_1) -> bool { return self.BindParameter( arg_0, arg_1.c_str()); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, const vtkStdString&)>([](vtkSQLiteQuery& self, int arg_0, const vtkStdString& arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, vtkVariant)>([](vtkSQLiteQuery& self, int arg_0, vtkVariant arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, const std::string &, size_t)>([](vtkSQLiteQuery& self, int arg_0, const std::string & arg_1, size_t arg_2) -> bool { return self.BindParameter( arg_0, arg_1.c_str(), arg_2); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLiteQuery&, int, std::uintptr_t, size_t)>([](vtkSQLiteQuery& self, int arg_0, std::uintptr_t arg_1, size_t arg_2) -> bool { return self.BindParameter( arg_0,reinterpret_cast<void*>(arg_1), arg_2); }))
    .function("ClearParameterBindings", &vtkSQLiteQuery::ClearParameterBindings);
}
