// JavaScript wrapper for vtkSQLiteToTableReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkIOSQL.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkSQLiteToTableReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/SQL/vtkSQLiteToTableReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSQLiteToTableReader.h"

template<> void emscripten::internal::raw_destructor<vtkSQLiteToTableReader>(vtkSQLiteToTableReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSQLiteToTableReader_class) {
  emscripten::class_<vtkSQLiteToTableReader, emscripten::base<vtkDatabaseToTableReader>>("vtkSQLiteToTableReader")
    .smart_ptr<vtkSmartPointer<vtkSQLiteToTableReader>>("vtkSmartPointer<vtkSQLiteToTableReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSQLiteToTableReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSQLiteToTableReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSQLiteToTableReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSQLiteToTableReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSQLiteToTableReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSQLiteToTableReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSQLiteToTableReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
