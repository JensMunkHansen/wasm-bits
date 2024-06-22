// JavaScript wrapper for vtkOpenGLVertexBufferObjectGroup with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLVertexBufferObjectGroupEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLVertexBufferObjectGroup.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWindow.h"
#include "vtkOpenGLVertexBufferObject.h"
#include "vtkShaderProgram.h"
#include "vtkOpenGLVertexArrayObject.h"
#include "vtkDataArray.h"
#include "vtkOpenGLVertexBufferObjectCache.h"
#include "vtkViewport.h"
#include "vtkOpenGLVertexBufferObjectGroup.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLVertexBufferObjectGroup>(vtkOpenGLVertexBufferObjectGroup * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLVertexBufferObjectGroup_class) {
  emscripten::class_<vtkOpenGLVertexBufferObjectGroup, emscripten::base<vtkObject>>("vtkOpenGLVertexBufferObjectGroup")
    .smart_ptr<vtkSmartPointer<vtkOpenGLVertexBufferObjectGroup>>("vtkSmartPointer<vtkOpenGLVertexBufferObjectGroup>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLVertexBufferObjectGroup>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLVertexBufferObjectGroup::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLVertexBufferObjectGroup& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLVertexBufferObjectGroup::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLVertexBufferObjectGroup::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLVertexBufferObjectGroup::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLVertexBufferObjectGroup& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfComponents", emscripten::optional_override([](vtkOpenGLVertexBufferObjectGroup& self, const std::string & arg_0) -> int {  return self.GetNumberOfComponents( arg_0.c_str());}))
    .function("GetNumberOfTuples", emscripten::optional_override([](vtkOpenGLVertexBufferObjectGroup& self, const std::string & arg_0) -> int {  return self.GetNumberOfTuples( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkOpenGLVertexBufferObjectGroup::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetVBO", emscripten::optional_override([](vtkOpenGLVertexBufferObjectGroup& self, const std::string & arg_0) -> vtkOpenGLVertexBufferObject* {  return self.GetVBO( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .function("AddAllAttributesToVAO", &vtkOpenGLVertexBufferObjectGroup::AddAllAttributesToVAO, emscripten::allow_raw_pointers())
    .function("RemoveAttribute", emscripten::optional_override([](vtkOpenGLVertexBufferObjectGroup& self, const std::string & arg_0) -> void {  return self.RemoveAttribute( arg_0.c_str());}))
    .function("CacheDataArray", emscripten::select_overload<void(vtkOpenGLVertexBufferObjectGroup&, const std::string &, vtkDataArray*, vtkOpenGLVertexBufferObjectCache*, int)>([](vtkOpenGLVertexBufferObjectGroup& self, const std::string & arg_0, vtkDataArray* arg_1, vtkOpenGLVertexBufferObjectCache* arg_2, int arg_3) -> void { return self.CacheDataArray( arg_0.c_str(), arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("CacheDataArray", emscripten::select_overload<void(vtkOpenGLVertexBufferObjectGroup&, const std::string &, vtkDataArray*, vtkViewport*, int)>([](vtkOpenGLVertexBufferObjectGroup& self, const std::string & arg_0, vtkDataArray* arg_1, vtkViewport* arg_2, int arg_3) -> void { return self.CacheDataArray( arg_0.c_str(), arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("AppendDataArray", emscripten::optional_override([](vtkOpenGLVertexBufferObjectGroup& self, const std::string & arg_0, vtkDataArray* arg_1, int arg_2) -> void {  return self.AppendDataArray( arg_0.c_str(), arg_1, arg_2);}), emscripten::allow_raw_pointers())
    .function("BuildAllVBOs", emscripten::select_overload<void(vtkOpenGLVertexBufferObjectGroup&, vtkOpenGLVertexBufferObjectCache*)>([](vtkOpenGLVertexBufferObjectGroup& self, vtkOpenGLVertexBufferObjectCache* arg_0) -> void { return self.BuildAllVBOs( arg_0); }), emscripten::allow_raw_pointers())
    .function("BuildAllVBOs", emscripten::select_overload<void(vtkOpenGLVertexBufferObjectGroup&, vtkViewport*)>([](vtkOpenGLVertexBufferObjectGroup& self, vtkViewport* arg_0) -> void { return self.BuildAllVBOs( arg_0); }), emscripten::allow_raw_pointers())
    .function("ClearAllVBOs", &vtkOpenGLVertexBufferObjectGroup::ClearAllVBOs)
    .function("ClearAllDataArrays", &vtkOpenGLVertexBufferObjectGroup::ClearAllDataArrays)
    .function("GetMTime", &vtkOpenGLVertexBufferObjectGroup::GetMTime);
}
