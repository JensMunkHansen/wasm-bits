// JavaScript wrapper for vtkShaderProgram with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkShaderProgramEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkShaderProgram.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkShader.h"
#include "vtkTransformFeedback.h"
#include "vtkWindow.h"
#include "vtkMatrix3x3.h"
#include "vtkMatrix4x4.h"
#include "vtkShaderProgram.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkShaderProgram_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkShaderProgram>(vtkShaderProgram * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkShaderProgram_class) {
  using NormalizeOption=vtkShaderProgram::NormalizeOption;
  using UniformGroups=vtkShaderProgram::UniformGroups;
  emscripten::class_<vtkShaderProgram, emscripten::base<vtkObject>>("vtkShaderProgram")
    .smart_ptr<vtkSmartPointer<vtkShaderProgram>>("vtkSmartPointer<vtkShaderProgram>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkShaderProgram>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShaderProgram::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkShaderProgram::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkShaderProgram::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShaderProgram::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetVertexShader", &vtkShaderProgram::GetVertexShader, emscripten::allow_raw_pointers())
    .function("SetVertexShader", &vtkShaderProgram::SetVertexShader, emscripten::allow_raw_pointers())
    .function("GetFragmentShader", &vtkShaderProgram::GetFragmentShader, emscripten::allow_raw_pointers())
    .function("SetFragmentShader", &vtkShaderProgram::SetFragmentShader, emscripten::allow_raw_pointers())
    .function("GetGeometryShader", &vtkShaderProgram::GetGeometryShader, emscripten::allow_raw_pointers())
    .function("SetGeometryShader", &vtkShaderProgram::SetGeometryShader, emscripten::allow_raw_pointers())
    .function("GetComputeShader", &vtkShaderProgram::GetComputeShader, emscripten::allow_raw_pointers())
    .function("SetComputeShader", &vtkShaderProgram::SetComputeShader, emscripten::allow_raw_pointers())
    .function("GetTessControlShader", &vtkShaderProgram::GetTessControlShader, emscripten::allow_raw_pointers())
    .function("SetTessControlShader", &vtkShaderProgram::SetTessControlShader, emscripten::allow_raw_pointers())
    .function("GetTessEvaluationShader", &vtkShaderProgram::GetTessEvaluationShader, emscripten::allow_raw_pointers())
    .function("SetTessEvaluationShader", &vtkShaderProgram::SetTessEvaluationShader, emscripten::allow_raw_pointers())
    .function("GetTransformFeedback", &vtkShaderProgram::GetTransformFeedback, emscripten::allow_raw_pointers())
    .function("SetTransformFeedback", &vtkShaderProgram::SetTransformFeedback, emscripten::allow_raw_pointers())
    .function("GetCompiled", &vtkShaderProgram::GetCompiled)
    .function("SetCompiled", &vtkShaderProgram::SetCompiled)
    .function("CompiledOn", &vtkShaderProgram::CompiledOn)
    .function("CompiledOff", &vtkShaderProgram::CompiledOff)
    .function("GetMD5Hash", &vtkShaderProgram::GetMD5Hash)
    .function("SetMD5Hash", &vtkShaderProgram::SetMD5Hash)
    .function("isBound", &vtkShaderProgram::isBound)
    .function("ReleaseGraphicsResources", &vtkShaderProgram::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetHandle", &vtkShaderProgram::GetHandle)
    .function("GetError", &vtkShaderProgram::GetError)
    .function("EnableAttributeArray", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0) -> bool {  return self.EnableAttributeArray( arg_0.c_str());}))
    .function("DisableAttributeArray", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0) -> bool {  return self.DisableAttributeArray( arg_0.c_str());}))
    .function("UseAttributeArray", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0, int arg_1, size_t arg_2, int arg_3, int arg_4, NormalizeOption arg_5) -> bool {  return self.UseAttributeArray( arg_0.c_str(), arg_1, arg_2, arg_3, arg_4, arg_5);}))
    .function("SetUniformi", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0, int arg_1) -> bool {  return self.SetUniformi( arg_0.c_str(), arg_1);}))
    .function("SetUniformf", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0, float arg_1) -> bool {  return self.SetUniformf( arg_0.c_str(), arg_1);}))
    .function("SetUniformMatrix", emscripten::select_overload<bool(vtkShaderProgram&, const std::string &, vtkMatrix3x3*)>([](vtkShaderProgram& self, const std::string & arg_0, vtkMatrix3x3* arg_1) -> bool { return self.SetUniformMatrix( arg_0.c_str(), arg_1); }), emscripten::allow_raw_pointers())
    .function("SetUniformMatrix", emscripten::select_overload<bool(vtkShaderProgram&, const std::string &, vtkMatrix4x4*)>([](vtkShaderProgram& self, const std::string & arg_0, vtkMatrix4x4* arg_1) -> bool { return self.SetUniformMatrix( arg_0.c_str(), arg_1); }), emscripten::allow_raw_pointers())
    .function("SetUniformMatrix3x3", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0, std::uintptr_t arg_1) -> bool {  return self.SetUniformMatrix3x3( arg_0.c_str(),reinterpret_cast<float*>(arg_1 * sizeof(float)));}))
    .function("SetUniformMatrix4x4", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0, std::uintptr_t arg_1) -> bool {  return self.SetUniformMatrix4x4( arg_0.c_str(),reinterpret_cast<float*>(arg_1 * sizeof(float)));}))
    .function("SetUniform1iv", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> bool {  return self.SetUniform1iv( arg_0.c_str(), arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int)));}))
    .function("SetUniform1fv", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> bool {  return self.SetUniform1fv( arg_0.c_str(), arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float)));}))
    .function("SetUniform2fv", emscripten::select_overload<bool(vtkShaderProgram&, const std::string &, int, std::uintptr_t)>([](vtkShaderProgram& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> bool { return self.SetUniform2fv( arg_0.c_str(), arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float))); }))
    .function("SetUniform3fv", emscripten::select_overload<bool(vtkShaderProgram&, const std::string &, int, std::uintptr_t)>([](vtkShaderProgram& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> bool { return self.SetUniform3fv( arg_0.c_str(), arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float))); }))
    .function("SetUniform4fv", emscripten::select_overload<bool(vtkShaderProgram&, const std::string &, int, std::uintptr_t)>([](vtkShaderProgram& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> bool { return self.SetUniform4fv( arg_0.c_str(), arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float))); }))
    .function("SetUniformMatrix4x4v", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> bool {  return self.SetUniformMatrix4x4v( arg_0.c_str(), arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float)));}))
    .function("SetNumberOfOutputs", &vtkShaderProgram::SetNumberOfOutputs)
    .class_function("Substitute", emscripten::select_overload<bool( vtkShader*, const std::string&, const std::string&, bool)>([]( vtkShader* arg_0, const std::string& arg_1, const std::string& arg_2, bool arg_3) -> bool { return vtkShaderProgram::Substitute( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("IsUniformUsed", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0) -> bool {  return self.IsUniformUsed( arg_0.c_str());}))
    .function("IsAttributeUsed", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0) -> bool {  return self.IsAttributeUsed( arg_0.c_str());}))
    .function("SetFileNamePrefixForDebugging", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0) -> void {  return self.SetFileNamePrefixForDebugging( arg_0.c_str());}))
    .function("GetFileNamePrefixForDebugging", emscripten::optional_override([](vtkShaderProgram& self) -> std::string {  return self.GetFileNamePrefixForDebugging();}))
    .function("SetUniformGroupUpdateTime", &vtkShaderProgram::SetUniformGroupUpdateTime)
    .function("GetUniformGroupUpdateTime", &vtkShaderProgram::GetUniformGroupUpdateTime)
    .function("FindUniform", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0) -> int {  return self.FindUniform( arg_0.c_str());}))
    .function("FindAttributeArray", emscripten::optional_override([](vtkShaderProgram& self, const std::string & arg_0) -> int {  return self.FindAttributeArray( arg_0.c_str());}));
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkShaderProgram_0_2_constants) {
    typedef vtkShaderProgram::NormalizeOption cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkShaderProgram_NormalizeOption_Normalize", vtkShaderProgram::Normalize },
      { "vtkShaderProgram_NormalizeOption_NoNormalize", vtkShaderProgram::NoNormalize },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkShaderProgram_1_2_constants) {
    typedef vtkShaderProgram::UniformGroups cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkShaderProgram_UniformGroups_CameraGroup", vtkShaderProgram::CameraGroup },
      { "vtkShaderProgram_UniformGroups_LightingGroup", vtkShaderProgram::LightingGroup },
      { "vtkShaderProgram_UniformGroups_UserGroup", vtkShaderProgram::UserGroup },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
