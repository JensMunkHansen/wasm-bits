// JavaScript wrapper for vtkJoinTables with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkJoinTablesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkJoinTables.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkTable.h"
#include "vtkJoinTables.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkJoinTables_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkJoinTables>(vtkJoinTables * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkJoinTables_class) {
  using JoinMode=vtkJoinTables::JoinMode;
  emscripten::class_<vtkJoinTables, emscripten::base<vtkTableAlgorithm>>("vtkJoinTables")
    .smart_ptr<vtkSmartPointer<vtkJoinTables>>("vtkSmartPointer<vtkJoinTables>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkJoinTables>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJoinTables::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkJoinTables& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkJoinTables::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkJoinTables::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJoinTables::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkJoinTables& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMode", &vtkJoinTables::SetMode)
    .function("GetModeMinValue", &vtkJoinTables::GetModeMinValue)
    .function("GetModeMaxValue", &vtkJoinTables::GetModeMaxValue)
    .function("GetMode", &vtkJoinTables::GetMode)
    .function("SetReplacementValue", &vtkJoinTables::SetReplacementValue)
    .function("GetReplacementValue", &vtkJoinTables::GetReplacementValue)
    .function("SetLeftKey", emscripten::optional_override([](vtkJoinTables& self, const std::string & arg_0) -> void {  return self.SetLeftKey( arg_0.c_str());}))
    .function("GetLeftKey", emscripten::optional_override([](vtkJoinTables& self) -> std::string {  return self.GetLeftKey();}))
    .function("SetRightKey", emscripten::optional_override([](vtkJoinTables& self, const std::string & arg_0) -> void {  return self.SetRightKey( arg_0.c_str());}))
    .function("GetRightKey", emscripten::optional_override([](vtkJoinTables& self) -> std::string {  return self.GetRightKey();}))
    .function("SetSourceConnection", &vtkJoinTables::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("SetSourceData", &vtkJoinTables::SetSourceData, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkJoinTables_0_2_constants) {
    typedef vtkJoinTables::JoinMode cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkJoinTables_JoinMode_INTERSECTION", vtkJoinTables::INTERSECTION },
      { "vtkJoinTables_JoinMode_UNION", vtkJoinTables::UNION },
      { "vtkJoinTables_JoinMode_LEFT", vtkJoinTables::LEFT },
      { "vtkJoinTables_JoinMode_RIGHT", vtkJoinTables::RIGHT },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
