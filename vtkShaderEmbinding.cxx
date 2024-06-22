// JavaScript wrapper for vtkShader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkShaderEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkShader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkShader.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkShader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkShader>(vtkShader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkShader_class) {
  using Type=vtkShader::Type;
  emscripten::class_<vtkShader, emscripten::base<vtkObject>>("vtkShader")
    .smart_ptr<vtkSmartPointer<vtkShader>>("vtkSmartPointer<vtkShader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkShader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkShader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkShader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkShader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkShader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetType", &vtkShader::SetType)
    .function("GetType", &vtkShader::GetType)
    .function("SetSource", &vtkShader::SetSource)
    .function("GetSource", &vtkShader::GetSource)
    .function("GetError", &vtkShader::GetError)
    .function("GetHandle", &vtkShader::GetHandle)
    .function("Compile", &vtkShader::Compile)
    .function("Cleanup", &vtkShader::Cleanup)
    .class_function("IsComputeShaderSupported", &vtkShader::IsComputeShaderSupported)
    .class_function("IsTessellationShaderSupported", &vtkShader::IsTessellationShaderSupported);
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkShader_0_2_constants) {
    typedef vtkShader::Type cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkShader_Type_Vertex", vtkShader::Vertex },
      { "vtkShader_Type_Fragment", vtkShader::Fragment },
      { "vtkShader_Type_Geometry", vtkShader::Geometry },
      { "vtkShader_Type_Compute", vtkShader::Compute },
      { "vtkShader_Type_TessControl", vtkShader::TessControl },
      { "vtkShader_Type_TessEvaluation", vtkShader::TessEvaluation },
      { "vtkShader_Type_Unknown", vtkShader::Unknown },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
