// JavaScript wrapper for vtkOpenGLVertexArrayObject with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLVertexArrayObjectEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLVertexArrayObject.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkShaderProgram.h"
#include "vtkOpenGLBufferObject.h"
#include "vtkOpenGLVertexBufferObject.h"
#include "vtkOpenGLVertexArrayObject.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLVertexArrayObject>(vtkOpenGLVertexArrayObject * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLVertexArrayObject_class) {
  emscripten::class_<vtkOpenGLVertexArrayObject, emscripten::base<vtkObject>>("vtkOpenGLVertexArrayObject")
    .smart_ptr<vtkSmartPointer<vtkOpenGLVertexArrayObject>>("vtkSmartPointer<vtkOpenGLVertexArrayObject>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLVertexArrayObject>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLVertexArrayObject::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLVertexArrayObject& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLVertexArrayObject::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLVertexArrayObject::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLVertexArrayObject::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLVertexArrayObject& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Bind", &vtkOpenGLVertexArrayObject::Bind)
    .function("Release", &vtkOpenGLVertexArrayObject::Release)
    .function("ReleaseGraphicsResources", &vtkOpenGLVertexArrayObject::ReleaseGraphicsResources)
    .function("ShaderProgramChanged", &vtkOpenGLVertexArrayObject::ShaderProgramChanged)
    .function("AddAttributeArray", emscripten::select_overload<bool(vtkOpenGLVertexArrayObject&, vtkShaderProgram*, vtkOpenGLBufferObject*, const std::string&, int, size_t, int, int, bool)>([](vtkOpenGLVertexArrayObject& self, vtkShaderProgram* arg_0, vtkOpenGLBufferObject* arg_1, const std::string& arg_2, int arg_3, size_t arg_4, int arg_5, int arg_6, bool arg_7) -> bool { return self.AddAttributeArray( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7); }), emscripten::allow_raw_pointers())
    .function("AddAttributeArray", emscripten::select_overload<bool(vtkOpenGLVertexArrayObject&, vtkShaderProgram*, vtkOpenGLVertexBufferObject*, const std::string&, int, bool)>([](vtkOpenGLVertexArrayObject& self, vtkShaderProgram* arg_0, vtkOpenGLVertexBufferObject* arg_1, const std::string& arg_2, int arg_3, bool arg_4) -> bool { return self.AddAttributeArray( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("AddAttributeArrayWithDivisor", &vtkOpenGLVertexArrayObject::AddAttributeArrayWithDivisor, emscripten::allow_raw_pointers())
    .function("AddAttributeMatrixWithDivisor", &vtkOpenGLVertexArrayObject::AddAttributeMatrixWithDivisor, emscripten::allow_raw_pointers())
    .function("RemoveAttributeArray", &vtkOpenGLVertexArrayObject::RemoveAttributeArray)
    .function("SetForceEmulation", &vtkOpenGLVertexArrayObject::SetForceEmulation);
}
