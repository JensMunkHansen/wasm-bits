// JavaScript wrapper for vtkOpenGLVertexBufferObjectCache with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLVertexBufferObjectCacheEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLVertexBufferObjectCache.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOpenGLVertexBufferObject.h"
#include "vtkDataArray.h"
#include "vtkOpenGLVertexBufferObjectCache.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLVertexBufferObjectCache>(vtkOpenGLVertexBufferObjectCache * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLVertexBufferObjectCache_class) {
  emscripten::class_<vtkOpenGLVertexBufferObjectCache, emscripten::base<vtkObject>>("vtkOpenGLVertexBufferObjectCache")
    .smart_ptr<vtkSmartPointer<vtkOpenGLVertexBufferObjectCache>>("vtkSmartPointer<vtkOpenGLVertexBufferObjectCache>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLVertexBufferObjectCache>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLVertexBufferObjectCache::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLVertexBufferObjectCache& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLVertexBufferObjectCache::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLVertexBufferObjectCache::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLVertexBufferObjectCache::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLVertexBufferObjectCache& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetVBO", &vtkOpenGLVertexBufferObjectCache::GetVBO, emscripten::allow_raw_pointers())
    .function("RemoveVBO", &vtkOpenGLVertexBufferObjectCache::RemoveVBO, emscripten::allow_raw_pointers());
}
