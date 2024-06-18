// JavaScript wrapper for vtkReduceTable with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkReduceTableEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkReduceTable.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkReduceTable.h"

template<> void emscripten::internal::raw_destructor<vtkReduceTable>(vtkReduceTable * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkReduceTable_class) {
  emscripten::class_<vtkReduceTable, emscripten::base<vtkTableAlgorithm>>("vtkReduceTable")
    .smart_ptr<vtkSmartPointer<vtkReduceTable>>("vtkSmartPointer<vtkReduceTable>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkReduceTable>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkReduceTable::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkReduceTable& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkReduceTable::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkReduceTable::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkReduceTable::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkReduceTable& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetIndexColumn", &vtkReduceTable::GetIndexColumn)
    .function("SetIndexColumn", &vtkReduceTable::SetIndexColumn)
    .function("GetNumericalReductionMethod", &vtkReduceTable::GetNumericalReductionMethod)
    .function("SetNumericalReductionMethod", &vtkReduceTable::SetNumericalReductionMethod)
    .function("GetNonNumericalReductionMethod", &vtkReduceTable::GetNonNumericalReductionMethod)
    .function("SetNonNumericalReductionMethod", &vtkReduceTable::SetNonNumericalReductionMethod)
    .function("GetReductionMethodForColumn", &vtkReduceTable::GetReductionMethodForColumn)
    .function("SetReductionMethodForColumn", &vtkReduceTable::SetReductionMethodForColumn);
}
EMSCRIPTEN_BINDINGS(vtkInfovisCore_vtkReduceTable_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkReduceTable_MEAN", vtkReduceTable::MEAN },
      { "vtkReduceTable_MEDIAN", vtkReduceTable::MEDIAN },
      { "vtkReduceTable_MODE", vtkReduceTable::MODE },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
