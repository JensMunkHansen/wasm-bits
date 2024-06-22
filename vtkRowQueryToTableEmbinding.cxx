// JavaScript wrapper for vtkRowQueryToTable with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkIOSQL.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkRowQueryToTableEmbinding.cxx \
 /home/jmh/github/vtk/IO/SQL/vtkRowQueryToTable.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRowQuery.h"
#include "vtkRowQueryToTable.h"

template<> void emscripten::internal::raw_destructor<vtkRowQueryToTable>(vtkRowQueryToTable * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRowQueryToTable_class) {
  emscripten::class_<vtkRowQueryToTable, emscripten::base<vtkTableAlgorithm>>("vtkRowQueryToTable")
    .smart_ptr<vtkSmartPointer<vtkRowQueryToTable>>("vtkSmartPointer<vtkRowQueryToTable>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRowQueryToTable>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRowQueryToTable::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRowQueryToTable& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRowQueryToTable::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRowQueryToTable::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRowQueryToTable::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRowQueryToTable& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetQuery", &vtkRowQueryToTable::SetQuery, emscripten::allow_raw_pointers())
    .function("GetQuery", &vtkRowQueryToTable::GetQuery, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkRowQueryToTable::GetMTime);
}
