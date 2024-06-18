// JavaScript wrapper for vtkMergeFields with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkMergeFieldsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkMergeFields.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMergeFields.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkMergeFields_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkMergeFields>(vtkMergeFields * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMergeFields_class) {
  using FieldLocations=vtkMergeFields::FieldLocations;
  emscripten::class_<vtkMergeFields, emscripten::base<vtkDataSetAlgorithm>>("vtkMergeFields")
    .smart_ptr<vtkSmartPointer<vtkMergeFields>>("vtkSmartPointer<vtkMergeFields>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMergeFields>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeFields::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMergeFields& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMergeFields::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMergeFields::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeFields::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMergeFields& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputField", emscripten::select_overload<void(vtkMergeFields&, const std::string &, int)>([](vtkMergeFields& self, const std::string & arg_0, int arg_1) -> void { return self.SetOutputField( arg_0.c_str(), arg_1); }))
    .function("SetOutputField", emscripten::select_overload<void(vtkMergeFields&, const std::string &, const std::string &)>([](vtkMergeFields& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.SetOutputField( arg_0.c_str(), arg_1.c_str()); }))
    .function("Merge", emscripten::optional_override([](vtkMergeFields& self, int arg_0, const std::string & arg_1, int arg_2) -> void {  return self.Merge( arg_0, arg_1.c_str(), arg_2);}))
    .function("SetNumberOfComponents", &vtkMergeFields::SetNumberOfComponents)
    .function("GetNumberOfComponents", &vtkMergeFields::GetNumberOfComponents);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkMergeFields_0_2_constants) {
    typedef vtkMergeFields::FieldLocations cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkMergeFields_FieldLocations_DATA_OBJECT", vtkMergeFields::DATA_OBJECT },
      { "vtkMergeFields_FieldLocations_POINT_DATA", vtkMergeFields::POINT_DATA },
      { "vtkMergeFields_FieldLocations_CELL_DATA", vtkMergeFields::CELL_DATA },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
