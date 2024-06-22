// JavaScript wrapper for vtkRearrangeFields with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkRearrangeFieldsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkRearrangeFields.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRearrangeFields.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkRearrangeFields_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkRearrangeFields>(vtkRearrangeFields * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRearrangeFields_class) {
  using OperationType=vtkRearrangeFields::OperationType;
  using FieldLocation=vtkRearrangeFields::FieldLocation;
  using FieldType=vtkRearrangeFields::FieldType;
  emscripten::class_<vtkRearrangeFields, emscripten::base<vtkDataSetAlgorithm>>("vtkRearrangeFields")
    .smart_ptr<vtkSmartPointer<vtkRearrangeFields>>("vtkSmartPointer<vtkRearrangeFields>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRearrangeFields>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRearrangeFields::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRearrangeFields& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRearrangeFields::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRearrangeFields::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRearrangeFields::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRearrangeFields& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddOperation", emscripten::select_overload<int(vtkRearrangeFields&, int, int, int, int)>([](vtkRearrangeFields& self, int arg_0, int arg_1, int arg_2, int arg_3) -> int { return self.AddOperation( arg_0, arg_1, arg_2, arg_3); }))
    .function("AddOperation", emscripten::select_overload<int(vtkRearrangeFields&, int, const std::string &, int, int)>([](vtkRearrangeFields& self, int arg_0, const std::string & arg_1, int arg_2, int arg_3) -> int { return self.AddOperation( arg_0, arg_1.c_str(), arg_2, arg_3); }))
    .function("AddOperation", emscripten::select_overload<int(vtkRearrangeFields&, const std::string &, const std::string &, const std::string &, const std::string &)>([](vtkRearrangeFields& self, const std::string & arg_0, const std::string & arg_1, const std::string & arg_2, const std::string & arg_3) -> int { return self.AddOperation( arg_0.c_str(), arg_1.c_str(), arg_2.c_str(), arg_3.c_str()); }))
    .function("RemoveOperation", emscripten::select_overload<int(vtkRearrangeFields&, int)>([](vtkRearrangeFields& self, int arg_0) -> int { return self.RemoveOperation( arg_0); }))
    .function("RemoveOperation", emscripten::select_overload<int(vtkRearrangeFields&, int, int, int, int)>([](vtkRearrangeFields& self, int arg_0, int arg_1, int arg_2, int arg_3) -> int { return self.RemoveOperation( arg_0, arg_1, arg_2, arg_3); }))
    .function("RemoveOperation", emscripten::select_overload<int(vtkRearrangeFields&, int, const std::string &, int, int)>([](vtkRearrangeFields& self, int arg_0, const std::string & arg_1, int arg_2, int arg_3) -> int { return self.RemoveOperation( arg_0, arg_1.c_str(), arg_2, arg_3); }))
    .function("RemoveOperation", emscripten::select_overload<int(vtkRearrangeFields&, const std::string &, const std::string &, const std::string &, const std::string &)>([](vtkRearrangeFields& self, const std::string & arg_0, const std::string & arg_1, const std::string & arg_2, const std::string & arg_3) -> int { return self.RemoveOperation( arg_0.c_str(), arg_1.c_str(), arg_2.c_str(), arg_3.c_str()); }))
    .function("RemoveAllOperations", &vtkRearrangeFields::RemoveAllOperations);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkRearrangeFields_0_2_constants) {
    typedef vtkRearrangeFields::OperationType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkRearrangeFields_OperationType_COPY", vtkRearrangeFields::COPY },
      { "vtkRearrangeFields_OperationType_MOVE", vtkRearrangeFields::MOVE },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkRearrangeFields_1_2_constants) {
    typedef vtkRearrangeFields::FieldLocation cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkRearrangeFields_FieldLocation_DATA_OBJECT", vtkRearrangeFields::DATA_OBJECT },
      { "vtkRearrangeFields_FieldLocation_POINT_DATA", vtkRearrangeFields::POINT_DATA },
      { "vtkRearrangeFields_FieldLocation_CELL_DATA", vtkRearrangeFields::CELL_DATA },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkRearrangeFields_2_2_constants) {
    typedef vtkRearrangeFields::FieldType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkRearrangeFields_FieldType_NAME", vtkRearrangeFields::NAME },
      { "vtkRearrangeFields_FieldType_ATTRIBUTE", vtkRearrangeFields::ATTRIBUTE },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
