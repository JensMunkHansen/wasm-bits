// JavaScript wrapper for vtkArrayToTable with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkArrayToTableEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkArrayToTable.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkArrayToTable.h"

template<> void emscripten::internal::raw_destructor<vtkArrayToTable>(vtkArrayToTable * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArrayToTable_class) {
  emscripten::class_<vtkArrayToTable, emscripten::base<vtkTableAlgorithm>>("vtkArrayToTable")
    .smart_ptr<vtkSmartPointer<vtkArrayToTable>>("vtkSmartPointer<vtkArrayToTable>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkArrayToTable>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayToTable::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArrayToTable& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArrayToTable::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArrayToTable::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayToTable::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArrayToTable& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
