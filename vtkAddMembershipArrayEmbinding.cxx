// JavaScript wrapper for vtkAddMembershipArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkAddMembershipArrayEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkAddMembershipArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkAddMembershipArray.h"

template<> void emscripten::internal::raw_destructor<vtkAddMembershipArray>(vtkAddMembershipArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAddMembershipArray_class) {
  emscripten::class_<vtkAddMembershipArray, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkAddMembershipArray")
    .smart_ptr<vtkSmartPointer<vtkAddMembershipArray>>("vtkSmartPointer<vtkAddMembershipArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAddMembershipArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAddMembershipArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAddMembershipArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAddMembershipArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAddMembershipArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAddMembershipArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAddMembershipArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFieldType", &vtkAddMembershipArray::GetFieldType)
    .function("SetFieldType", &vtkAddMembershipArray::SetFieldType)
    .function("GetFieldTypeMinValue", &vtkAddMembershipArray::GetFieldTypeMinValue)
    .function("GetFieldTypeMaxValue", &vtkAddMembershipArray::GetFieldTypeMaxValue)
    .function("SetOutputArrayName", emscripten::optional_override([](vtkAddMembershipArray& self, const std::string & arg_0) -> void {  return self.SetOutputArrayName( arg_0.c_str());}))
    .function("GetOutputArrayName", emscripten::optional_override([](vtkAddMembershipArray& self) -> std::string {  return self.GetOutputArrayName();}))
    .function("SetInputArrayName", emscripten::optional_override([](vtkAddMembershipArray& self, const std::string & arg_0) -> void {  return self.SetInputArrayName( arg_0.c_str());}))
    .function("GetInputArrayName", emscripten::optional_override([](vtkAddMembershipArray& self) -> std::string {  return self.GetInputArrayName();}))
    .function("SetInputValues", &vtkAddMembershipArray::SetInputValues, emscripten::allow_raw_pointers())
    .function("GetInputValues", &vtkAddMembershipArray::GetInputValues, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInfovisCore_vtkAddMembershipArray_0_2_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "vtkAddMembershipArray_FIELD_DATA", vtkAddMembershipArray::FIELD_DATA },
      { "vtkAddMembershipArray_POINT_DATA", vtkAddMembershipArray::POINT_DATA },
      { "vtkAddMembershipArray_CELL_DATA", vtkAddMembershipArray::CELL_DATA },
      { "vtkAddMembershipArray_VERTEX_DATA", vtkAddMembershipArray::VERTEX_DATA },
      { "vtkAddMembershipArray_EDGE_DATA", vtkAddMembershipArray::EDGE_DATA },
      { "vtkAddMembershipArray_ROW_DATA", vtkAddMembershipArray::ROW_DATA },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
