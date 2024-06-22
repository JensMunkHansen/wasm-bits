// JavaScript wrapper for vtkOpenGLShaderProperty with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLShaderPropertyEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLShaderProperty.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkShader.h"
#include "vtkOpenGLShaderProperty.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLShaderProperty>(vtkOpenGLShaderProperty * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLShaderProperty_class) {
  emscripten::class_<vtkOpenGLShaderProperty, emscripten::base<vtkShaderProperty>>("vtkOpenGLShaderProperty")
    .smart_ptr<vtkSmartPointer<vtkOpenGLShaderProperty>>("vtkSmartPointer<vtkOpenGLShaderProperty>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLShaderProperty>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLShaderProperty::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLShaderProperty& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLShaderProperty::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLShaderProperty::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLShaderProperty::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLShaderProperty& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DeepCopy", &vtkOpenGLShaderProperty::DeepCopy, emscripten::allow_raw_pointers())
    .function("AddVertexShaderReplacement", &vtkOpenGLShaderProperty::AddVertexShaderReplacement)
    .function("AddFragmentShaderReplacement", &vtkOpenGLShaderProperty::AddFragmentShaderReplacement)
    .function("AddGeometryShaderReplacement", &vtkOpenGLShaderProperty::AddGeometryShaderReplacement)
    .function("AddTessControlShaderReplacement", &vtkOpenGLShaderProperty::AddTessControlShaderReplacement)
    .function("AddTessEvaluationShaderReplacement", &vtkOpenGLShaderProperty::AddTessEvaluationShaderReplacement)
    .function("GetNumberOfShaderReplacements", &vtkOpenGLShaderProperty::GetNumberOfShaderReplacements)
    .function("GetNthShaderReplacementTypeAsString", &vtkOpenGLShaderProperty::GetNthShaderReplacementTypeAsString)
    .function("ClearVertexShaderReplacement", &vtkOpenGLShaderProperty::ClearVertexShaderReplacement)
    .function("ClearFragmentShaderReplacement", &vtkOpenGLShaderProperty::ClearFragmentShaderReplacement)
    .function("ClearGeometryShaderReplacement", &vtkOpenGLShaderProperty::ClearGeometryShaderReplacement)
    .function("ClearTessControlShaderReplacement", &vtkOpenGLShaderProperty::ClearTessControlShaderReplacement)
    .function("ClearTessEvaluationShaderReplacement", &vtkOpenGLShaderProperty::ClearTessEvaluationShaderReplacement)
    .function("ClearAllVertexShaderReplacements", &vtkOpenGLShaderProperty::ClearAllVertexShaderReplacements)
    .function("ClearAllFragmentShaderReplacements", &vtkOpenGLShaderProperty::ClearAllFragmentShaderReplacements)
    .function("ClearAllGeometryShaderReplacements", &vtkOpenGLShaderProperty::ClearAllGeometryShaderReplacements)
    .function("ClearAllTessControlShaderReplacements", &vtkOpenGLShaderProperty::ClearAllTessControlShaderReplacements)
    .function("ClearAllTessEvalShaderReplacements", &vtkOpenGLShaderProperty::ClearAllTessEvalShaderReplacements)
    .function("ClearAllShaderReplacements", emscripten::select_overload<void(vtkOpenGLShaderProperty&)>([](vtkOpenGLShaderProperty& self) -> void { return self.ClearAllShaderReplacements(); }))
    .function("ClearAllShaderReplacements", emscripten::select_overload<void(vtkOpenGLShaderProperty&, vtkShader::Type)>([](vtkOpenGLShaderProperty& self, vtkShader::Type arg_0) -> void { return self.ClearAllShaderReplacements( arg_0); }))
    .function("AddShaderReplacement", &vtkOpenGLShaderProperty::AddShaderReplacement)
    .function("ClearShaderReplacement", &vtkOpenGLShaderProperty::ClearShaderReplacement);
}
