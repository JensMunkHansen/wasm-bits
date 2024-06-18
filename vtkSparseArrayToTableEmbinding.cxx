// JavaScript wrapper for vtkSparseArrayToTable with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkSparseArrayToTableEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkSparseArrayToTable.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSparseArrayToTable.h"

template<> void emscripten::internal::raw_destructor<vtkSparseArrayToTable>(vtkSparseArrayToTable * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSparseArrayToTable_class) {
  emscripten::class_<vtkSparseArrayToTable, emscripten::base<vtkTableAlgorithm>>("vtkSparseArrayToTable")
    .smart_ptr<vtkSmartPointer<vtkSparseArrayToTable>>("vtkSmartPointer<vtkSparseArrayToTable>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSparseArrayToTable>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSparseArrayToTable::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSparseArrayToTable& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSparseArrayToTable::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSparseArrayToTable::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSparseArrayToTable::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSparseArrayToTable& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetValueColumn", emscripten::optional_override([](vtkSparseArrayToTable& self) -> std::string {  return self.GetValueColumn();}))
    .function("SetValueColumn", emscripten::optional_override([](vtkSparseArrayToTable& self, const std::string & arg_0) -> void {  return self.SetValueColumn( arg_0.c_str());}));
}
