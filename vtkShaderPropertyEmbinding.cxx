// JavaScript wrapper for vtkShaderProperty with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkShaderPropertyEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkShaderProperty.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUniforms.h"
#include "vtkShaderProperty.h"

template<> void emscripten::internal::raw_destructor<vtkShaderProperty>(vtkShaderProperty * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkShaderProperty_class) {
  emscripten::class_<vtkShaderProperty, emscripten::base<vtkObject>>("vtkShaderProperty")
    .smart_ptr<vtkSmartPointer<vtkShaderProperty>>("vtkSmartPointer<vtkShaderProperty>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkShaderProperty>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShaderProperty::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkShaderProperty& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkShaderProperty::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkShaderProperty::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShaderProperty::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkShaderProperty& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DeepCopy", &vtkShaderProperty::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetShaderMTime", &vtkShaderProperty::GetShaderMTime)
    .function("HasVertexShaderCode", &vtkShaderProperty::HasVertexShaderCode)
    .function("HasFragmentShaderCode", &vtkShaderProperty::HasFragmentShaderCode)
    .function("HasGeometryShaderCode", &vtkShaderProperty::HasGeometryShaderCode)
    .function("HasTessControlShaderCode", &vtkShaderProperty::HasTessControlShaderCode)
    .function("HasTessEvalShaderCode", &vtkShaderProperty::HasTessEvalShaderCode)
    .function("SetVertexShaderCode", emscripten::optional_override([](vtkShaderProperty& self, const std::string & arg_0) -> void {  return self.SetVertexShaderCode( arg_0.c_str());}))
    .function("GetVertexShaderCode", emscripten::optional_override([](vtkShaderProperty& self) -> std::string {  return self.GetVertexShaderCode();}))
    .function("SetFragmentShaderCode", emscripten::optional_override([](vtkShaderProperty& self, const std::string & arg_0) -> void {  return self.SetFragmentShaderCode( arg_0.c_str());}))
    .function("GetFragmentShaderCode", emscripten::optional_override([](vtkShaderProperty& self) -> std::string {  return self.GetFragmentShaderCode();}))
    .function("SetGeometryShaderCode", emscripten::optional_override([](vtkShaderProperty& self, const std::string & arg_0) -> void {  return self.SetGeometryShaderCode( arg_0.c_str());}))
    .function("GetGeometryShaderCode", emscripten::optional_override([](vtkShaderProperty& self) -> std::string {  return self.GetGeometryShaderCode();}))
    .function("SetTessControlShaderCode", emscripten::optional_override([](vtkShaderProperty& self, const std::string & arg_0) -> void {  return self.SetTessControlShaderCode( arg_0.c_str());}))
    .function("GetTessControlShaderCode", emscripten::optional_override([](vtkShaderProperty& self) -> std::string {  return self.GetTessControlShaderCode();}))
    .function("SetTessEvaluationShaderCode", emscripten::optional_override([](vtkShaderProperty& self, const std::string & arg_0) -> void {  return self.SetTessEvaluationShaderCode( arg_0.c_str());}))
    .function("GetTessEvaluationShaderCode", emscripten::optional_override([](vtkShaderProperty& self) -> std::string {  return self.GetTessEvaluationShaderCode();}))
    .function("GetFragmentCustomUniforms", &vtkShaderProperty::GetFragmentCustomUniforms, emscripten::allow_raw_pointers())
    .function("GetVertexCustomUniforms", &vtkShaderProperty::GetVertexCustomUniforms, emscripten::allow_raw_pointers())
    .function("GetGeometryCustomUniforms", &vtkShaderProperty::GetGeometryCustomUniforms, emscripten::allow_raw_pointers())
    .function("GetTessControlCustomUniforms", &vtkShaderProperty::GetTessControlCustomUniforms, emscripten::allow_raw_pointers())
    .function("GetTessEvaluationCustomUniforms", &vtkShaderProperty::GetTessEvaluationCustomUniforms, emscripten::allow_raw_pointers());
}
