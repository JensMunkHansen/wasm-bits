// JavaScript wrapper for vtkTransposeTable with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkTransposeTableEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkTransposeTable.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTransposeTable.h"

template<> void emscripten::internal::raw_destructor<vtkTransposeTable>(vtkTransposeTable * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransposeTable_class) {
  emscripten::class_<vtkTransposeTable, emscripten::base<vtkTableAlgorithm>>("vtkTransposeTable")
    .smart_ptr<vtkSmartPointer<vtkTransposeTable>>("vtkSmartPointer<vtkTransposeTable>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTransposeTable>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransposeTable::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransposeTable& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransposeTable::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransposeTable::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransposeTable::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransposeTable& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetAddIdColumn", &vtkTransposeTable::GetAddIdColumn)
    .function("SetAddIdColumn", &vtkTransposeTable::SetAddIdColumn)
    .function("AddIdColumnOn", &vtkTransposeTable::AddIdColumnOn)
    .function("AddIdColumnOff", &vtkTransposeTable::AddIdColumnOff)
    .function("GetUseIdColumn", &vtkTransposeTable::GetUseIdColumn)
    .function("SetUseIdColumn", &vtkTransposeTable::SetUseIdColumn)
    .function("UseIdColumnOn", &vtkTransposeTable::UseIdColumnOn)
    .function("UseIdColumnOff", &vtkTransposeTable::UseIdColumnOff)
    .function("GetIdColumnName", emscripten::optional_override([](vtkTransposeTable& self) -> std::string {  return self.GetIdColumnName();}))
    .function("SetIdColumnName", emscripten::optional_override([](vtkTransposeTable& self, const std::string & arg_0) -> void {  return self.SetIdColumnName( arg_0.c_str());}));
}
