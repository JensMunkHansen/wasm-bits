// JavaScript wrapper for vtkRenderTimerLog with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderTimerLogEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkRenderTimerLog.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderTimerLog.h"

template<> void emscripten::internal::raw_destructor<vtkRenderTimerLog>(vtkRenderTimerLog * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderTimerLog_class) {
  emscripten::class_<vtkRenderTimerLog, emscripten::base<vtkObject>>("vtkRenderTimerLog")
    .smart_ptr<vtkSmartPointer<vtkRenderTimerLog>>("vtkSmartPointer<vtkRenderTimerLog>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRenderTimerLog>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderTimerLog::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderTimerLog& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderTimerLog::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderTimerLog::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderTimerLog::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderTimerLog& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsSupported", &vtkRenderTimerLog::IsSupported)
    .function("MarkFrame", &vtkRenderTimerLog::MarkFrame)
    .function("MarkStartEvent", &vtkRenderTimerLog::MarkStartEvent)
    .function("MarkEndEvent", &vtkRenderTimerLog::MarkEndEvent)
    .function("FrameReady", &vtkRenderTimerLog::FrameReady)
    .function("SetLoggingEnabled", &vtkRenderTimerLog::SetLoggingEnabled)
    .function("GetLoggingEnabled", &vtkRenderTimerLog::GetLoggingEnabled)
    .function("LoggingEnabledOn", &vtkRenderTimerLog::LoggingEnabledOn)
    .function("LoggingEnabledOff", &vtkRenderTimerLog::LoggingEnabledOff)
    .function("SetFrameLimit", &vtkRenderTimerLog::SetFrameLimit)
    .function("GetFrameLimit", &vtkRenderTimerLog::GetFrameLimit)
    .function("ReleaseGraphicsResources", &vtkRenderTimerLog::ReleaseGraphicsResources);
}
