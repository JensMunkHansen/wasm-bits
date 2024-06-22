// JavaScript wrapper for vtkMapArrayValues with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkMapArrayValuesEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkMapArrayValues.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMapArrayValues.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkMapArrayValues_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkMapArrayValues>(vtkMapArrayValues * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMapArrayValues_class) {
  emscripten::class_<vtkMapArrayValues, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkMapArrayValues")
    .smart_ptr<vtkSmartPointer<vtkMapArrayValues>>("vtkSmartPointer<vtkMapArrayValues>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMapArrayValues>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMapArrayValues::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMapArrayValues& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMapArrayValues::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMapArrayValues::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMapArrayValues::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMapArrayValues& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFieldType", &vtkMapArrayValues::SetFieldType)
    .function("GetFieldType", &vtkMapArrayValues::GetFieldType)
    .function("SetPassArray", &vtkMapArrayValues::SetPassArray)
    .function("GetPassArray", &vtkMapArrayValues::GetPassArray)
    .function("PassArrayOn", &vtkMapArrayValues::PassArrayOn)
    .function("PassArrayOff", &vtkMapArrayValues::PassArrayOff)
    .function("SetFillValue", &vtkMapArrayValues::SetFillValue)
    .function("GetFillValue", &vtkMapArrayValues::GetFillValue)
    .function("SetInputArrayName", emscripten::optional_override([](vtkMapArrayValues& self, const std::string & arg_0) -> void {  return self.SetInputArrayName( arg_0.c_str());}))
    .function("GetInputArrayName", emscripten::optional_override([](vtkMapArrayValues& self) -> std::string {  return self.GetInputArrayName();}))
    .function("SetOutputArrayName", emscripten::optional_override([](vtkMapArrayValues& self, const std::string & arg_0) -> void {  return self.SetOutputArrayName( arg_0.c_str());}))
    .function("GetOutputArrayName", emscripten::optional_override([](vtkMapArrayValues& self) -> std::string {  return self.GetOutputArrayName();}))
    .function("GetOutputArrayType", &vtkMapArrayValues::GetOutputArrayType)
    .function("SetOutputArrayType", &vtkMapArrayValues::SetOutputArrayType)
    .function("AddToMap", emscripten::select_overload<void(vtkMapArrayValues&, vtkVariant, vtkVariant)>([](vtkMapArrayValues& self, vtkVariant arg_0, vtkVariant arg_1) -> void { return self.AddToMap( arg_0, arg_1); }))
    .function("AddToMap", emscripten::select_overload<void(vtkMapArrayValues&, int, int)>([](vtkMapArrayValues& self, int arg_0, int arg_1) -> void { return self.AddToMap( arg_0, arg_1); }))
    .function("AddToMap", emscripten::select_overload<void(vtkMapArrayValues&, int, const std::string &)>([](vtkMapArrayValues& self, int arg_0, const std::string & arg_1) -> void { return self.AddToMap( arg_0, arg_1.c_str()); }))
    .function("AddToMap", emscripten::select_overload<void(vtkMapArrayValues&, const std::string &, int)>([](vtkMapArrayValues& self, const std::string & arg_0, int arg_1) -> void { return self.AddToMap( arg_0.c_str(), arg_1); }))
    .function("AddToMap", emscripten::select_overload<void(vtkMapArrayValues&, const std::string &, const std::string &)>([](vtkMapArrayValues& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.AddToMap( arg_0.c_str(), arg_1.c_str()); }))
    .function("ClearMap", &vtkMapArrayValues::ClearMap)
    .function("GetMapSize", &vtkMapArrayValues::GetMapSize);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkMapArrayValues_0_2_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "vtkMapArrayValues_POINT_DATA", vtkMapArrayValues::POINT_DATA },
      { "vtkMapArrayValues_CELL_DATA", vtkMapArrayValues::CELL_DATA },
      { "vtkMapArrayValues_VERTEX_DATA", vtkMapArrayValues::VERTEX_DATA },
      { "vtkMapArrayValues_EDGE_DATA", vtkMapArrayValues::EDGE_DATA },
      { "vtkMapArrayValues_ROW_DATA", vtkMapArrayValues::ROW_DATA },
      { "vtkMapArrayValues_NUM_ATTRIBUTE_LOCS", vtkMapArrayValues::NUM_ATTRIBUTE_LOCS },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
