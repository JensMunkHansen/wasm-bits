// JavaScript wrapper for vtkOpenGLUniforms with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLUniformsEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLUniforms.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkShaderProgram.h"
#include "vtkUniforms.h"
#include "vtkMatrix3x3.h"
#include "vtkMatrix4x4.h"
#include "vtkOpenGLUniforms.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLUniforms>(vtkOpenGLUniforms * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLUniforms_class) {
  emscripten::class_<vtkOpenGLUniforms, emscripten::base<vtkUniforms>>("vtkOpenGLUniforms")
    .smart_ptr<vtkSmartPointer<vtkOpenGLUniforms>>("vtkSmartPointer<vtkOpenGLUniforms>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLUniforms>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLUniforms::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLUniforms::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLUniforms::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLUniforms::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDeclarations", &vtkOpenGLUniforms::GetDeclarations)
    .function("SetUniforms", &vtkOpenGLUniforms::SetUniforms, emscripten::allow_raw_pointers())
    .function("GetUniformListMTime", &vtkOpenGLUniforms::GetUniformListMTime)
    .function("RemoveUniform", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0) -> void {  return self.RemoveUniform( arg_0.c_str());}))
    .function("RemoveAllUniforms", &vtkOpenGLUniforms::RemoveAllUniforms)
    .function("SetUniform", emscripten::select_overload<void(vtkOpenGLUniforms&, const std::string &, vtkUniforms::TupleType, int, const std::vector<int>&)>([](vtkOpenGLUniforms& self, const std::string & arg_0, vtkUniforms::TupleType arg_1, int arg_2, const std::vector<int>& arg_3) -> void { return self.SetUniform( arg_0.c_str(), arg_1, arg_2, arg_3); }))
    .function("SetUniform", emscripten::select_overload<void(vtkOpenGLUniforms&, const std::string &, vtkUniforms::TupleType, int, const std::vector<float>&)>([](vtkOpenGLUniforms& self, const std::string & arg_0, vtkUniforms::TupleType arg_1, int arg_2, const std::vector<float>& arg_3) -> void { return self.SetUniform( arg_0.c_str(), arg_1, arg_2, arg_3); }))
    .function("GetUniform", emscripten::select_overload<bool(vtkOpenGLUniforms&, const std::string &, std::vector<int>&)>([](vtkOpenGLUniforms& self, const std::string & arg_0, std::vector<int>& arg_1) -> bool { return self.GetUniform( arg_0.c_str(), arg_1); }))
    .function("GetUniform", emscripten::select_overload<bool(vtkOpenGLUniforms&, const std::string &, std::vector<float>&)>([](vtkOpenGLUniforms& self, const std::string & arg_0, std::vector<float>& arg_1) -> bool { return self.GetUniform( arg_0.c_str(), arg_1); }))
    .function("SetUniformi", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0, int arg_1) -> void {  return self.SetUniformi( arg_0.c_str(), arg_1);}))
    .function("SetUniformf", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0, float arg_1) -> void {  return self.SetUniformf( arg_0.c_str(), arg_1);}))
    .function("SetUniformMatrix3x3", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0, std::uintptr_t arg_1) -> void {  return self.SetUniformMatrix3x3( arg_0.c_str(),reinterpret_cast<float*>(arg_1 * sizeof(float)));}))
    .function("SetUniformMatrix4x4", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0, std::uintptr_t arg_1) -> void {  return self.SetUniformMatrix4x4( arg_0.c_str(),reinterpret_cast<float*>(arg_1 * sizeof(float)));}))
    .function("SetUniform1iv", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> void {  return self.SetUniform1iv( arg_0.c_str(), arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int)));}))
    .function("SetUniform1fv", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> void {  return self.SetUniform1fv( arg_0.c_str(), arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float)));}))
    .function("SetUniformMatrix4x4v", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> void {  return self.SetUniformMatrix4x4v( arg_0.c_str(), arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float)));}))
    .function("SetUniformMatrix", emscripten::select_overload<void(vtkOpenGLUniforms&, const std::string &, vtkMatrix3x3*)>([](vtkOpenGLUniforms& self, const std::string & arg_0, vtkMatrix3x3* arg_1) -> void { return self.SetUniformMatrix( arg_0.c_str(), arg_1); }), emscripten::allow_raw_pointers())
    .function("SetUniformMatrix", emscripten::select_overload<void(vtkOpenGLUniforms&, const std::string &, vtkMatrix4x4*)>([](vtkOpenGLUniforms& self, const std::string & arg_0, vtkMatrix4x4* arg_1) -> void { return self.SetUniformMatrix( arg_0.c_str(), arg_1); }), emscripten::allow_raw_pointers())
    .function("GetUniformMatrix3x3", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0, std::uintptr_t arg_1) -> bool {  return self.GetUniformMatrix3x3( arg_0.c_str(),reinterpret_cast<float*>(arg_1 * sizeof(float)));}))
    .function("GetUniformMatrix4x4", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0, std::uintptr_t arg_1) -> bool {  return self.GetUniformMatrix4x4( arg_0.c_str(),reinterpret_cast<float*>(arg_1 * sizeof(float)));}))
    .function("GetUniformMatrix", emscripten::select_overload<bool(vtkOpenGLUniforms&, const std::string &, vtkMatrix3x3*)>([](vtkOpenGLUniforms& self, const std::string & arg_0, vtkMatrix3x3* arg_1) -> bool { return self.GetUniformMatrix( arg_0.c_str(), arg_1); }), emscripten::allow_raw_pointers())
    .function("GetUniformMatrix", emscripten::select_overload<bool(vtkOpenGLUniforms&, const std::string &, vtkMatrix4x4*)>([](vtkOpenGLUniforms& self, const std::string & arg_0, vtkMatrix4x4* arg_1) -> bool { return self.GetUniformMatrix( arg_0.c_str(), arg_1); }), emscripten::allow_raw_pointers())
    .function("GetUniform1iv", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0, std::vector<int>& arg_1) -> bool {  return self.GetUniform1iv( arg_0.c_str(), arg_1);}))
    .function("GetUniform1fv", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0, std::vector<float>& arg_1) -> bool {  return self.GetUniform1fv( arg_0.c_str(), arg_1);}))
    .function("GetUniform2fv", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0, std::vector<float>& arg_1) -> bool {  return self.GetUniform2fv( arg_0.c_str(), arg_1);}))
    .function("GetUniform3fv", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0, std::vector<float>& arg_1) -> bool {  return self.GetUniform3fv( arg_0.c_str(), arg_1);}))
    .function("GetUniform4fv", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0, std::vector<float>& arg_1) -> bool {  return self.GetUniform4fv( arg_0.c_str(), arg_1);}))
    .function("GetUniformMatrix4x4v", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0, std::vector<float>& arg_1) -> bool {  return self.GetUniformMatrix4x4v( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfUniforms", &vtkOpenGLUniforms::GetNumberOfUniforms)
    .function("GetNthUniformName", emscripten::optional_override([](vtkOpenGLUniforms& self, int arg_0) -> std::string {  return self.GetNthUniformName( arg_0);}))
    .function("GetUniformScalarType", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0) -> int {  return self.GetUniformScalarType( arg_0.c_str());}))
    .function("GetUniformNumberOfComponents", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0) -> int {  return self.GetUniformNumberOfComponents( arg_0.c_str());}))
    .function("GetUniformNumberOfTuples", emscripten::optional_override([](vtkOpenGLUniforms& self, const std::string & arg_0) -> int {  return self.GetUniformNumberOfTuples( arg_0.c_str());}));
}
