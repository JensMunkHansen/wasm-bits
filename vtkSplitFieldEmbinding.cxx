// JavaScript wrapper for vtkSplitField with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkSplitFieldEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkSplitField.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSplitField.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkSplitField_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSplitField>(vtkSplitField * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSplitField_class) {
  using FieldLocations=vtkSplitField::FieldLocations;
  emscripten::class_<vtkSplitField, emscripten::base<vtkDataSetAlgorithm>>("vtkSplitField")
    .smart_ptr<vtkSmartPointer<vtkSplitField>>("vtkSmartPointer<vtkSplitField>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSplitField>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplitField::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSplitField& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSplitField::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSplitField::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplitField::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSplitField& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputField", emscripten::select_overload<void(vtkSplitField&, int, int)>([](vtkSplitField& self, int arg_0, int arg_1) -> void { return self.SetInputField( arg_0, arg_1); }))
    .function("SetInputField", emscripten::select_overload<void(vtkSplitField&, const std::string &, int)>([](vtkSplitField& self, const std::string & arg_0, int arg_1) -> void { return self.SetInputField( arg_0.c_str(), arg_1); }))
    .function("SetInputField", emscripten::select_overload<void(vtkSplitField&, const std::string &, const std::string &)>([](vtkSplitField& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.SetInputField( arg_0.c_str(), arg_1.c_str()); }))
    .function("Split", emscripten::optional_override([](vtkSplitField& self, int arg_0, const std::string & arg_1) -> void {  return self.Split( arg_0, arg_1.c_str());}));
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkSplitField_0_2_constants) {
    typedef vtkSplitField::FieldLocations cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkSplitField_FieldLocations_DATA_OBJECT", vtkSplitField::DATA_OBJECT },
      { "vtkSplitField_FieldLocations_POINT_DATA", vtkSplitField::POINT_DATA },
      { "vtkSplitField_FieldLocations_CELL_DATA", vtkSplitField::CELL_DATA },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
