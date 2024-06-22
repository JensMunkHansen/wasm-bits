// JavaScript wrapper for vtkSQLDatabaseTableSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkIOSQL.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkSQLDatabaseTableSourceEmbinding.cxx \
 /home/jmh/github/vtk/IO/SQL/vtkSQLDatabaseTableSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkSQLDatabaseTableSource.h"

template<> void emscripten::internal::raw_destructor<vtkSQLDatabaseTableSource>(vtkSQLDatabaseTableSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSQLDatabaseTableSource_class) {
  emscripten::class_<vtkSQLDatabaseTableSource, emscripten::base<vtkTableAlgorithm>>("vtkSQLDatabaseTableSource")
    .smart_ptr<vtkSmartPointer<vtkSQLDatabaseTableSource>>("vtkSmartPointer<vtkSQLDatabaseTableSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSQLDatabaseTableSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSQLDatabaseTableSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSQLDatabaseTableSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSQLDatabaseTableSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSQLDatabaseTableSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSQLDatabaseTableSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSQLDatabaseTableSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetURL", &vtkSQLDatabaseTableSource::GetURL)
    .function("SetURL", &vtkSQLDatabaseTableSource::SetURL)
    .function("SetPassword", &vtkSQLDatabaseTableSource::SetPassword)
    .function("GetQuery", &vtkSQLDatabaseTableSource::GetQuery)
    .function("SetQuery", &vtkSQLDatabaseTableSource::SetQuery)
    .function("SetPedigreeIdArrayName", emscripten::optional_override([](vtkSQLDatabaseTableSource& self, const std::string & arg_0) -> void {  return self.SetPedigreeIdArrayName( arg_0.c_str());}))
    .function("GetPedigreeIdArrayName", emscripten::optional_override([](vtkSQLDatabaseTableSource& self) -> std::string {  return self.GetPedigreeIdArrayName();}))
    .function("SetGeneratePedigreeIds", &vtkSQLDatabaseTableSource::SetGeneratePedigreeIds)
    .function("GetGeneratePedigreeIds", &vtkSQLDatabaseTableSource::GetGeneratePedigreeIds)
    .function("GeneratePedigreeIdsOn", &vtkSQLDatabaseTableSource::GeneratePedigreeIdsOn)
    .function("GeneratePedigreeIdsOff", &vtkSQLDatabaseTableSource::GeneratePedigreeIdsOff);
}
