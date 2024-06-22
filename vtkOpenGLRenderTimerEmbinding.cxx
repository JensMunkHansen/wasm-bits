// JavaScript wrapper for vtkOpenGLRenderTimer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLRenderTimerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLRenderTimer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkOpenGLRenderTimer.h"


EMSCRIPTEN_BINDINGS(vtkOpenGLRenderTimer_class) {
  emscripten::class_<vtkOpenGLRenderTimer>("vtkOpenGLRenderTimer")
    .smart_ptr<std::shared_ptr<vtkOpenGLRenderTimer>>("std::shared_ptr<vtkOpenGLRenderTimer>")
    .constructor(&std::make_shared<vtkOpenGLRenderTimer>)
    .class_function("IsSupported", &vtkOpenGLRenderTimer::IsSupported)
    .function("Reset", &vtkOpenGLRenderTimer::Reset)
    .function("Start", &vtkOpenGLRenderTimer::Start)
    .function("Stop", &vtkOpenGLRenderTimer::Stop)
    .function("Started", &vtkOpenGLRenderTimer::Started)
    .function("Stopped", &vtkOpenGLRenderTimer::Stopped)
    .function("Ready", &vtkOpenGLRenderTimer::Ready)
    .function("GetElapsedSeconds", &vtkOpenGLRenderTimer::GetElapsedSeconds)
    .function("GetElapsedMilliseconds", &vtkOpenGLRenderTimer::GetElapsedMilliseconds)
    .function("GetElapsedNanoseconds", &vtkOpenGLRenderTimer::GetElapsedNanoseconds)
    .function("ReusableStart", &vtkOpenGLRenderTimer::ReusableStart)
    .function("ReusableStop", &vtkOpenGLRenderTimer::ReusableStop)
    .function("GetReusableElapsedSeconds", &vtkOpenGLRenderTimer::GetReusableElapsedSeconds)
    .function("GetStartTime", &vtkOpenGLRenderTimer::GetStartTime)
    .function("GetStopTime", &vtkOpenGLRenderTimer::GetStopTime)
    .function("ReleaseGraphicsResources", &vtkOpenGLRenderTimer::ReleaseGraphicsResources);
}
