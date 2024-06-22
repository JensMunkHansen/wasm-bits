// JavaScript wrapper for vtkTableToSQLiteWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkIOSQL.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkTableToSQLiteWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/SQL/vtkTableToSQLiteWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTable.h"
#include "vtkTableToSQLiteWriter.h"

template<> void emscripten::internal::raw_destructor<vtkTableToSQLiteWriter>(vtkTableToSQLiteWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTableToSQLiteWriter_class) {
  emscripten::class_<vtkTableToSQLiteWriter, emscripten::base<vtkTableToDatabaseWriter>>("vtkTableToSQLiteWriter")
    .smart_ptr<vtkSmartPointer<vtkTableToSQLiteWriter>>("vtkSmartPointer<vtkTableToSQLiteWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTableToSQLiteWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToSQLiteWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTableToSQLiteWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTableToSQLiteWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTableToSQLiteWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToSQLiteWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTableToSQLiteWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkTable*(vtkTableToSQLiteWriter&)>([](vtkTableToSQLiteWriter& self) -> vtkTable* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkTable*(vtkTableToSQLiteWriter&, int)>([](vtkTableToSQLiteWriter& self, int arg_0) -> vtkTable* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers());
}
