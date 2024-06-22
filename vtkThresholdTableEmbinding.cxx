// JavaScript wrapper for vtkThresholdTable with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkThresholdTableEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkThresholdTable.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkThresholdTable.h"

template<> void emscripten::internal::raw_destructor<vtkThresholdTable>(vtkThresholdTable * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkThresholdTable_class) {
  emscripten::class_<vtkThresholdTable, emscripten::base<vtkTableAlgorithm>>("vtkThresholdTable")
    .smart_ptr<vtkSmartPointer<vtkThresholdTable>>("vtkSmartPointer<vtkThresholdTable>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkThresholdTable>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThresholdTable::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkThresholdTable& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkThresholdTable::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkThresholdTable::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThresholdTable::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkThresholdTable& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMode", &vtkThresholdTable::SetMode)
    .function("GetModeMinValue", &vtkThresholdTable::GetModeMinValue)
    .function("GetModeMaxValue", &vtkThresholdTable::GetModeMaxValue)
    .function("GetMode", &vtkThresholdTable::GetMode)
    .function("SetMinValue", emscripten::select_overload<void(vtkThresholdTable&, vtkVariant)>([](vtkThresholdTable& self, vtkVariant arg_0) -> void { return self.SetMinValue( arg_0); }))
    .function("SetMinValue", emscripten::select_overload<void(vtkThresholdTable&, double)>([](vtkThresholdTable& self, double arg_0) -> void { return self.SetMinValue( arg_0); }))
    .function("GetMinValue", &vtkThresholdTable::GetMinValue)
    .function("SetMaxValue", emscripten::select_overload<void(vtkThresholdTable&, vtkVariant)>([](vtkThresholdTable& self, vtkVariant arg_0) -> void { return self.SetMaxValue( arg_0); }))
    .function("SetMaxValue", emscripten::select_overload<void(vtkThresholdTable&, double)>([](vtkThresholdTable& self, double arg_0) -> void { return self.SetMaxValue( arg_0); }))
    .function("GetMaxValue", &vtkThresholdTable::GetMaxValue)
    .function("ThresholdBetween", emscripten::select_overload<void(vtkThresholdTable&, vtkVariant, vtkVariant)>([](vtkThresholdTable& self, vtkVariant arg_0, vtkVariant arg_1) -> void { return self.ThresholdBetween( arg_0, arg_1); }))
    .function("ThresholdBetween", emscripten::select_overload<void(vtkThresholdTable&, double, double)>([](vtkThresholdTable& self, double arg_0, double arg_1) -> void { return self.ThresholdBetween( arg_0, arg_1); }))
    .function("IsValueAcceptable", &vtkThresholdTable::IsValueAcceptable);
}
EMSCRIPTEN_BINDINGS(vtkInfovisCore_vtkThresholdTable_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkThresholdTable_ACCEPT_LESS_THAN", vtkThresholdTable::ACCEPT_LESS_THAN },
      { "vtkThresholdTable_ACCEPT_GREATER_THAN", vtkThresholdTable::ACCEPT_GREATER_THAN },
      { "vtkThresholdTable_ACCEPT_BETWEEN", vtkThresholdTable::ACCEPT_BETWEEN },
      { "vtkThresholdTable_ACCEPT_OUTSIDE", vtkThresholdTable::ACCEPT_OUTSIDE },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
