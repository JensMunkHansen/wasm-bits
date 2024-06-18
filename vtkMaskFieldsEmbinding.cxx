// JavaScript wrapper for vtkMaskFields with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkMaskFieldsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkMaskFields.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMaskFields.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkMaskFields_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkMaskFields>(vtkMaskFields * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMaskFields_class) {
  using FieldLocation=vtkMaskFields::FieldLocation;
  emscripten::class_<vtkMaskFields, emscripten::base<vtkDataSetAlgorithm>>("vtkMaskFields")
    .smart_ptr<vtkSmartPointer<vtkMaskFields>>("vtkSmartPointer<vtkMaskFields>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMaskFields>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMaskFields::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMaskFields& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMaskFields::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMaskFields::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMaskFields::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMaskFields& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CopyFieldOn", emscripten::select_overload<void(vtkMaskFields&, int, const std::string &)>([](vtkMaskFields& self, int arg_0, const std::string & arg_1) -> void { return self.CopyFieldOn( arg_0, arg_1.c_str()); }))
    .function("CopyFieldOn", emscripten::select_overload<void(vtkMaskFields&, const std::string &, const std::string &)>([](vtkMaskFields& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.CopyFieldOn( arg_0.c_str(), arg_1.c_str()); }))
    .function("CopyFieldOff", emscripten::select_overload<void(vtkMaskFields&, int, const std::string &)>([](vtkMaskFields& self, int arg_0, const std::string & arg_1) -> void { return self.CopyFieldOff( arg_0, arg_1.c_str()); }))
    .function("CopyFieldOff", emscripten::select_overload<void(vtkMaskFields&, const std::string &, const std::string &)>([](vtkMaskFields& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.CopyFieldOff( arg_0.c_str(), arg_1.c_str()); }))
    .function("CopyAttributeOn", emscripten::select_overload<void(vtkMaskFields&, int, int)>([](vtkMaskFields& self, int arg_0, int arg_1) -> void { return self.CopyAttributeOn( arg_0, arg_1); }))
    .function("CopyAttributeOn", emscripten::select_overload<void(vtkMaskFields&, const std::string &, const std::string &)>([](vtkMaskFields& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.CopyAttributeOn( arg_0.c_str(), arg_1.c_str()); }))
    .function("CopyAttributeOff", emscripten::select_overload<void(vtkMaskFields&, int, int)>([](vtkMaskFields& self, int arg_0, int arg_1) -> void { return self.CopyAttributeOff( arg_0, arg_1); }))
    .function("CopyAttributeOff", emscripten::select_overload<void(vtkMaskFields&, const std::string &, const std::string &)>([](vtkMaskFields& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.CopyAttributeOff( arg_0.c_str(), arg_1.c_str()); }))
    .function("CopyFieldsOff", &vtkMaskFields::CopyFieldsOff)
    .function("CopyAttributesOff", &vtkMaskFields::CopyAttributesOff)
    .function("CopyFieldsOn", &vtkMaskFields::CopyFieldsOn)
    .function("CopyAttributesOn", &vtkMaskFields::CopyAttributesOn)
    .function("CopyAllOn", &vtkMaskFields::CopyAllOn)
    .function("CopyAllOff", &vtkMaskFields::CopyAllOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkMaskFields_0_2_constants) {
    typedef vtkMaskFields::FieldLocation cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkMaskFields_FieldLocation_OBJECT_DATA", vtkMaskFields::OBJECT_DATA },
      { "vtkMaskFields_FieldLocation_POINT_DATA", vtkMaskFields::POINT_DATA },
      { "vtkMaskFields_FieldLocation_CELL_DATA", vtkMaskFields::CELL_DATA },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
