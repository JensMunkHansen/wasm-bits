// JavaScript wrapper for vtkOpenGLShaderCache with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLShaderCacheEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLShaderCache.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkShaderProgram.h"
#include "vtkTransformFeedback.h"
#include "vtkWindow.h"
#include "vtkOpenGLShaderCache.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLShaderCache>(vtkOpenGLShaderCache * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLShaderCache_class) {
  emscripten::class_<vtkOpenGLShaderCache, emscripten::base<vtkObject>>("vtkOpenGLShaderCache")
    .smart_ptr<vtkSmartPointer<vtkOpenGLShaderCache>>("vtkSmartPointer<vtkOpenGLShaderCache>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLShaderCache>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLShaderCache::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLShaderCache& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLShaderCache::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLShaderCache::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLShaderCache::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLShaderCache& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSyncGLSLShaderVersion", &vtkOpenGLShaderCache::SetSyncGLSLShaderVersion)
    .function("GetSyncGLSLShaderVersion", &vtkOpenGLShaderCache::GetSyncGLSLShaderVersion)
    .function("SyncGLSLShaderVersionOn", &vtkOpenGLShaderCache::SyncGLSLShaderVersionOn)
    .function("SyncGLSLShaderVersionOff", &vtkOpenGLShaderCache::SyncGLSLShaderVersionOff)
    .function("ReadyShaderProgram", emscripten::select_overload<vtkShaderProgram*(vtkOpenGLShaderCache&, const std::string &, const std::string &, const std::string &, vtkTransformFeedback*)>([](vtkOpenGLShaderCache& self, const std::string & arg_0, const std::string & arg_1, const std::string & arg_2, vtkTransformFeedback* arg_3) -> vtkShaderProgram* { return self.ReadyShaderProgram( arg_0.c_str(), arg_1.c_str(), arg_2.c_str(), arg_3); }), emscripten::allow_raw_pointers())
    .function("ReadyShaderProgram", emscripten::select_overload<vtkShaderProgram*(vtkOpenGLShaderCache&, const std::string &, const std::string &, const std::string &, const std::string &, const std::string &, vtkTransformFeedback*)>([](vtkOpenGLShaderCache& self, const std::string & arg_0, const std::string & arg_1, const std::string & arg_2, const std::string & arg_3, const std::string & arg_4, vtkTransformFeedback* arg_5) -> vtkShaderProgram* { return self.ReadyShaderProgram( arg_0.c_str(), arg_1.c_str(), arg_2.c_str(), arg_3.c_str(), arg_4.c_str(), arg_5); }), emscripten::allow_raw_pointers())
    .function("ReadyShaderProgram", emscripten::select_overload<vtkShaderProgram*(vtkOpenGLShaderCache&, vtkShaderProgram*, vtkTransformFeedback*)>([](vtkOpenGLShaderCache& self, vtkShaderProgram* arg_0, vtkTransformFeedback* arg_1) -> vtkShaderProgram* { return self.ReadyShaderProgram( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ReleaseCurrentShader", &vtkOpenGLShaderCache::ReleaseCurrentShader)
    .function("ReleaseGraphicsResources", &vtkOpenGLShaderCache::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("ClearLastShaderBound", &vtkOpenGLShaderCache::ClearLastShaderBound)
    .function("GetLastShaderBound", &vtkOpenGLShaderCache::GetLastShaderBound, emscripten::allow_raw_pointers())
    .function("SetElapsedTime", &vtkOpenGLShaderCache::SetElapsedTime);
}
