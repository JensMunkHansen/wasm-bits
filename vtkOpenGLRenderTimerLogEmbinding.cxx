// JavaScript wrapper for vtkOpenGLRenderTimerLog with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLRenderTimerLogEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLRenderTimerLog.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOpenGLRenderTimerLog.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLRenderTimerLog>(vtkOpenGLRenderTimerLog * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLRenderTimerLog_class) {
  emscripten::class_<vtkOpenGLRenderTimerLog, emscripten::base<vtkRenderTimerLog>>("vtkOpenGLRenderTimerLog")
    .smart_ptr<vtkSmartPointer<vtkOpenGLRenderTimerLog>>("vtkSmartPointer<vtkOpenGLRenderTimerLog>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLRenderTimerLog>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLRenderTimerLog::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLRenderTimerLog& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLRenderTimerLog::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLRenderTimerLog::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLRenderTimerLog::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLRenderTimerLog& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsSupported", &vtkOpenGLRenderTimerLog::IsSupported)
    .function("GetLoggingEnabled", &vtkOpenGLRenderTimerLog::GetLoggingEnabled)
    .function("MarkFrame", &vtkOpenGLRenderTimerLog::MarkFrame)
    .function("MarkStartEvent", &vtkOpenGLRenderTimerLog::MarkStartEvent)
    .function("MarkEndEvent", &vtkOpenGLRenderTimerLog::MarkEndEvent)
    .function("FrameReady", &vtkOpenGLRenderTimerLog::FrameReady)
    .function("ReleaseGraphicsResources", &vtkOpenGLRenderTimerLog::ReleaseGraphicsResources)
    .function("SetMinTimerPoolSize", &vtkOpenGLRenderTimerLog::SetMinTimerPoolSize)
    .function("GetMinTimerPoolSize", &vtkOpenGLRenderTimerLog::GetMinTimerPoolSize);
}
