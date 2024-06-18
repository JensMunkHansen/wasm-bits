// JavaScript wrapper for vtkOpenGLIndexBufferObject with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLIndexBufferObjectEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLIndexBufferObject.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellArray.h"
#include "vtkPoints.h"
#include "vtkDataArray.h"
#include "vtkOpenGLIndexBufferObject.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLIndexBufferObject>(vtkOpenGLIndexBufferObject * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLIndexBufferObject_class) {
  emscripten::class_<vtkOpenGLIndexBufferObject, emscripten::base<vtkOpenGLBufferObject>>("vtkOpenGLIndexBufferObject")
    .smart_ptr<vtkSmartPointer<vtkOpenGLIndexBufferObject>>("vtkSmartPointer<vtkOpenGLIndexBufferObject>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLIndexBufferObject>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLIndexBufferObject::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLIndexBufferObject& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLIndexBufferObject::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLIndexBufferObject::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLIndexBufferObject::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLIndexBufferObject& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CreateTriangleLineIndexBuffer", &vtkOpenGLIndexBufferObject::CreateTriangleLineIndexBuffer, emscripten::allow_raw_pointers())
    .class_function("AppendLineIndexBuffer", emscripten::optional_override([]( std::vector<unsigned int>& arg_0, vtkCellArray* arg_1, int arg_2) -> void {  return vtkOpenGLIndexBufferObject::AppendLineIndexBuffer( arg_0, arg_1, arg_2);}), emscripten::allow_raw_pointers())
    .function("CreateLineIndexBuffer", &vtkOpenGLIndexBufferObject::CreateLineIndexBuffer, emscripten::allow_raw_pointers())
    .class_function("AppendTriangleLineIndexBuffer", emscripten::optional_override([]( std::vector<unsigned int>& arg_0, vtkCellArray* arg_1, int arg_2) -> void {  return vtkOpenGLIndexBufferObject::AppendTriangleLineIndexBuffer( arg_0, arg_1, arg_2);}), emscripten::allow_raw_pointers())
    .function("CreatePointIndexBuffer", &vtkOpenGLIndexBufferObject::CreatePointIndexBuffer, emscripten::allow_raw_pointers())
    .class_function("AppendPointIndexBuffer", emscripten::optional_override([]( std::vector<unsigned int>& arg_0, vtkCellArray* arg_1, int arg_2) -> void {  return vtkOpenGLIndexBufferObject::AppendPointIndexBuffer( arg_0, arg_1, arg_2);}), emscripten::allow_raw_pointers())
    .function("CreateStripIndexBuffer", &vtkOpenGLIndexBufferObject::CreateStripIndexBuffer, emscripten::allow_raw_pointers())
    .class_function("AppendStripIndexBuffer", emscripten::optional_override([]( std::vector<unsigned int>& arg_0, vtkCellArray* arg_1, int arg_2, bool arg_3) -> void {  return vtkOpenGLIndexBufferObject::AppendStripIndexBuffer( arg_0, arg_1, arg_2, arg_3);}), emscripten::allow_raw_pointers())
    .class_function("AppendEdgeFlagIndexBuffer", emscripten::optional_override([]( std::vector<unsigned int>& arg_0, vtkCellArray* arg_1, int arg_2, vtkDataArray* arg_3) -> void {  return vtkOpenGLIndexBufferObject::AppendEdgeFlagIndexBuffer( arg_0, arg_1, arg_2, arg_3);}), emscripten::allow_raw_pointers())
    .function("CreateEdgeFlagIndexBuffer", &vtkOpenGLIndexBufferObject::CreateEdgeFlagIndexBuffer, emscripten::allow_raw_pointers());
}
