// JavaScript wrapper for vtkSQLQuery with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkIOSQL.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkSQLQueryEmbinding.cxx \
 /home/jmh/github/vtk/IO/SQL/vtkSQLQuery.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSQLDatabase.h"
#include "vtkStdString.h"
#include "vtkSQLQuery.h"

template<> void emscripten::internal::raw_destructor<vtkSQLQuery>(vtkSQLQuery * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSQLQuery_class) {
  emscripten::class_<vtkSQLQuery, emscripten::base<vtkRowQuery>>("vtkSQLQuery")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSQLQuery::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSQLQuery& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSQLQuery::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSQLQuery::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSQLQuery::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSQLQuery& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetQuery", emscripten::optional_override([](vtkSQLQuery& self, const std::string & arg_0) -> bool {  return self.SetQuery( arg_0.c_str());}))
    .function("GetQuery", emscripten::optional_override([](vtkSQLQuery& self) -> std::string {  return self.GetQuery();}))
    .function("IsActive", &vtkSQLQuery::IsActive)
    .function("BeginTransaction", &vtkSQLQuery::BeginTransaction)
    .function("CommitTransaction", &vtkSQLQuery::CommitTransaction)
    .function("RollbackTransaction", &vtkSQLQuery::RollbackTransaction)
    .function("GetDatabase", &vtkSQLQuery::GetDatabase, emscripten::allow_raw_pointers())
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, unsigned char)>([](vtkSQLQuery& self, int arg_0, unsigned char arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, unsigned short)>([](vtkSQLQuery& self, int arg_0, unsigned short arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, unsigned int)>([](vtkSQLQuery& self, int arg_0, unsigned int arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, unsigned long)>([](vtkSQLQuery& self, int arg_0, unsigned long arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, signed char)>([](vtkSQLQuery& self, int arg_0, signed char arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, short)>([](vtkSQLQuery& self, int arg_0, short arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, int)>([](vtkSQLQuery& self, int arg_0, int arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, long)>([](vtkSQLQuery& self, int arg_0, long arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, unsigned long long)>([](vtkSQLQuery& self, int arg_0, unsigned long long arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, long long)>([](vtkSQLQuery& self, int arg_0, long long arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, float)>([](vtkSQLQuery& self, int arg_0, float arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, double)>([](vtkSQLQuery& self, int arg_0, double arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, const std::string &)>([](vtkSQLQuery& self, int arg_0, const std::string & arg_1) -> bool { return self.BindParameter( arg_0, arg_1.c_str()); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, const vtkStdString&)>([](vtkSQLQuery& self, int arg_0, const vtkStdString& arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, vtkVariant)>([](vtkSQLQuery& self, int arg_0, vtkVariant arg_1) -> bool { return self.BindParameter( arg_0, arg_1); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, const std::string &, size_t)>([](vtkSQLQuery& self, int arg_0, const std::string & arg_1, size_t arg_2) -> bool { return self.BindParameter( arg_0, arg_1.c_str(), arg_2); }))
    .function("BindParameter", emscripten::select_overload<bool(vtkSQLQuery&, int, std::uintptr_t, size_t)>([](vtkSQLQuery& self, int arg_0, std::uintptr_t arg_1, size_t arg_2) -> bool { return self.BindParameter( arg_0,reinterpret_cast<void*>(arg_1), arg_2); }))
    .function("ClearParameterBindings", &vtkSQLQuery::ClearParameterBindings)
    .function("EscapeString", emscripten::select_overload<vtkStdString(vtkSQLQuery&, vtkStdString, bool)>([](vtkSQLQuery& self, vtkStdString arg_0, bool arg_1) -> vtkStdString { return self.EscapeString( arg_0, arg_1); }))
    .function("EscapeString", emscripten::select_overload<std::string(vtkSQLQuery&, const std::string &, bool)>([](vtkSQLQuery& self, const std::string & arg_0, bool arg_1) -> std::string { return self.EscapeString( arg_0.c_str(), arg_1); }));
}
