// JavaScript wrapper for vtkOpenGLRenderUtilities with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLRenderUtilitiesEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLRenderUtilities.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkShaderProgram.h"
#include "vtkOpenGLVertexArrayObject.h"
#include "vtkOpenGLRenderWindow.h"
#include "vtkOpenGLBufferObject.h"
#include "vtkOpenGLRenderUtilities.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLRenderUtilities>(vtkOpenGLRenderUtilities * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLRenderUtilities_class) {
  emscripten::class_<vtkOpenGLRenderUtilities, emscripten::base<vtkObject>>("vtkOpenGLRenderUtilities")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLRenderUtilities::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLRenderUtilities& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLRenderUtilities::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLRenderUtilities::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLRenderUtilities::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLRenderUtilities& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("RenderQuad", emscripten::optional_override([]( std::uintptr_t arg_0, std::uintptr_t arg_1, vtkShaderProgram* arg_2, vtkOpenGLVertexArrayObject* arg_3) -> void {  return vtkOpenGLRenderUtilities::RenderQuad(reinterpret_cast<float*>(arg_0 * sizeof(float)),reinterpret_cast<float*>(arg_1 * sizeof(float)), arg_2, arg_3);}), emscripten::allow_raw_pointers())
    .class_function("GetFullScreenQuadVertexShader", &vtkOpenGLRenderUtilities::GetFullScreenQuadVertexShader)
    .class_function("GetFullScreenQuadFragmentShaderTemplate", &vtkOpenGLRenderUtilities::GetFullScreenQuadFragmentShaderTemplate)
    .class_function("GetFullScreenQuadGeometryShader", &vtkOpenGLRenderUtilities::GetFullScreenQuadGeometryShader)
    .class_function("PrepFullScreenVAO", emscripten::select_overload<bool( vtkOpenGLRenderWindow*, vtkOpenGLVertexArrayObject*, vtkShaderProgram*)>([]( vtkOpenGLRenderWindow* arg_0, vtkOpenGLVertexArrayObject* arg_1, vtkShaderProgram* arg_2) -> bool { return vtkOpenGLRenderUtilities::PrepFullScreenVAO( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("PrepFullScreenVAO", emscripten::select_overload<bool( vtkOpenGLBufferObject*, vtkOpenGLVertexArrayObject*, vtkShaderProgram*)>([]( vtkOpenGLBufferObject* arg_0, vtkOpenGLVertexArrayObject* arg_1, vtkShaderProgram* arg_2) -> bool { return vtkOpenGLRenderUtilities::PrepFullScreenVAO( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("DrawFullScreenQuad", &vtkOpenGLRenderUtilities::DrawFullScreenQuad)
    .class_function("MarkDebugEvent", &vtkOpenGLRenderUtilities::MarkDebugEvent);
}
