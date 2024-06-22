// JavaScript wrapper for vtkAssignAttribute with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkAssignAttributeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkAssignAttribute.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAssignAttribute.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkAssignAttribute_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkAssignAttribute>(vtkAssignAttribute * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAssignAttribute_class) {
  using AttributeLocation=vtkAssignAttribute::AttributeLocation;
  emscripten::class_<vtkAssignAttribute, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkAssignAttribute")
    .smart_ptr<vtkSmartPointer<vtkAssignAttribute>>("vtkSmartPointer<vtkAssignAttribute>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAssignAttribute>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAssignAttribute::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAssignAttribute& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAssignAttribute::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAssignAttribute::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAssignAttribute::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAssignAttribute& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Assign", emscripten::select_overload<void(vtkAssignAttribute&, int, int, int)>([](vtkAssignAttribute& self, int arg_0, int arg_1, int arg_2) -> void { return self.Assign( arg_0, arg_1, arg_2); }))
    .function("Assign", emscripten::select_overload<void(vtkAssignAttribute&, const std::string &, int, int)>([](vtkAssignAttribute& self, const std::string & arg_0, int arg_1, int arg_2) -> void { return self.Assign( arg_0.c_str(), arg_1, arg_2); }))
    .function("Assign", emscripten::select_overload<void(vtkAssignAttribute&, const std::string &, const std::string &, const std::string &)>([](vtkAssignAttribute& self, const std::string & arg_0, const std::string & arg_1, const std::string & arg_2) -> void { return self.Assign( arg_0.c_str(), arg_1.c_str(), arg_2.c_str()); }));
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkAssignAttribute_0_2_constants) {
    typedef vtkAssignAttribute::AttributeLocation cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkAssignAttribute_AttributeLocation_POINT_DATA", vtkAssignAttribute::POINT_DATA },
      { "vtkAssignAttribute_AttributeLocation_CELL_DATA", vtkAssignAttribute::CELL_DATA },
      { "vtkAssignAttribute_AttributeLocation_VERTEX_DATA", vtkAssignAttribute::VERTEX_DATA },
      { "vtkAssignAttribute_AttributeLocation_EDGE_DATA", vtkAssignAttribute::EDGE_DATA },
      { "vtkAssignAttribute_AttributeLocation_NUM_ATTRIBUTE_LOCS", vtkAssignAttribute::NUM_ATTRIBUTE_LOCS },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
