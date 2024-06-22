// JavaScript wrapper for vtkUniforms with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkUniformsEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkUniforms.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix3x3.h"
#include "vtkMatrix4x4.h"
#include "vtkUniforms.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkUniforms_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkUniforms>(vtkUniforms * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUniforms_class) {
  using TupleType=vtkUniforms::TupleType;
  emscripten::class_<vtkUniforms, emscripten::base<vtkObject>>("vtkUniforms")
    .smart_ptr<vtkSmartPointer<vtkUniforms>>("vtkSmartPointer<vtkUniforms>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUniforms>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniforms::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUniforms& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUniforms::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUniforms::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniforms::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUniforms& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("TupleTypeToString", &vtkUniforms::TupleTypeToString)
    .class_function("StringToTupleType", &vtkUniforms::StringToTupleType)
    .class_function("ScalarTypeToString", &vtkUniforms::ScalarTypeToString)
    .class_function("StringToScalarType", &vtkUniforms::StringToScalarType);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkUniforms_0_2_constants) {
    typedef vtkUniforms::TupleType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkUniforms_TupleType_TupleTypeInvalid", vtkUniforms::TupleTypeInvalid },
      { "vtkUniforms_TupleType_TupleTypeScalar", vtkUniforms::TupleTypeScalar },
      { "vtkUniforms_TupleType_TupleTypeVector", vtkUniforms::TupleTypeVector },
      { "vtkUniforms_TupleType_TupleTypeMatrix", vtkUniforms::TupleTypeMatrix },
      { "vtkUniforms_TupleType_NumberOfTupleTypes", vtkUniforms::NumberOfTupleTypes },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
