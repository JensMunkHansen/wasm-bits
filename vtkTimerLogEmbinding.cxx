// JavaScript wrapper for vtkTimerLog with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonSystem.js/vtkCommonSystem.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonSystem.js/vtkTimerLogEmbinding.cxx \
 /home/jmh/github/vtk/Common/System/vtkTimerLog.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTimerLog.h"

EMSCRIPTEN_BINDINGS(vtkCommonSystem_vtkTimerLogEntry_class_enums) {
}

EMSCRIPTEN_BINDINGS(vtkTimerLogEntry_class) {
  using LogEntryType=vtkTimerLogEntry::LogEntryType;
  emscripten::class_<vtkTimerLogEntry>("vtkTimerLogEntry");
}
EMSCRIPTEN_BINDINGS(vtkCommonSystem_vtkTimerLogEntry_0_3_constants) {
    typedef vtkTimerLogEntry::LogEntryType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkTimerLogEntry_LogEntryType_INVALID", vtkTimerLogEntry::INVALID },
      { "vtkTimerLogEntry_LogEntryType_STANDALONE", vtkTimerLogEntry::STANDALONE },
      { "vtkTimerLogEntry_LogEntryType_START", vtkTimerLogEntry::START },
      { "vtkTimerLogEntry_LogEntryType_END", vtkTimerLogEntry::END },
      { "vtkTimerLogEntry_LogEntryType_INSERTED", vtkTimerLogEntry::INSERTED },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
template<> void emscripten::internal::raw_destructor<vtkTimerLog>(vtkTimerLog * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTimerLog_class) {
  emscripten::class_<vtkTimerLog, emscripten::base<vtkObject>>("vtkTimerLog")
    .smart_ptr<vtkSmartPointer<vtkTimerLog>>("vtkSmartPointer<vtkTimerLog>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTimerLog>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTimerLog::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTimerLog& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTimerLog::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTimerLog::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTimerLog::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTimerLog& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("SetLogging", &vtkTimerLog::SetLogging)
    .class_function("GetLogging", &vtkTimerLog::GetLogging)
    .class_function("LoggingOn", &vtkTimerLog::LoggingOn)
    .class_function("LoggingOff", &vtkTimerLog::LoggingOff)
    .class_function("SetMaxEntries", &vtkTimerLog::SetMaxEntries)
    .class_function("GetMaxEntries", &vtkTimerLog::GetMaxEntries)
    .class_function("DumpLog", emscripten::optional_override([]( const std::string & arg_0) -> void {  return vtkTimerLog::DumpLog( arg_0.c_str());}))
    .class_function("MarkStartEvent", emscripten::optional_override([]( const std::string & arg_0) -> void {  return vtkTimerLog::MarkStartEvent( arg_0.c_str());}))
    .class_function("MarkEndEvent", emscripten::optional_override([]( const std::string & arg_0) -> void {  return vtkTimerLog::MarkEndEvent( arg_0.c_str());}))
    .class_function("InsertTimedEvent", emscripten::optional_override([]( const std::string & arg_0, double arg_1, int arg_2) -> void {  return vtkTimerLog::InsertTimedEvent( arg_0.c_str(), arg_1, arg_2);}))
    .class_function("GetNumberOfEvents", &vtkTimerLog::GetNumberOfEvents)
    .class_function("GetEventIndent", &vtkTimerLog::GetEventIndent)
    .class_function("GetEventWallTime", &vtkTimerLog::GetEventWallTime)
    .class_function("GetEventString", emscripten::optional_override([]( int arg_0) -> std::string {  return vtkTimerLog::GetEventString( arg_0);}))
    .class_function("GetEventType", &vtkTimerLog::GetEventType)
    .class_function("MarkEvent", emscripten::optional_override([]( const std::string & arg_0) -> void {  return vtkTimerLog::MarkEvent( arg_0.c_str());}))
    .class_function("ResetLog", &vtkTimerLog::ResetLog)
    .class_function("CleanupLog", &vtkTimerLog::CleanupLog)
    .class_function("GetUniversalTime", &vtkTimerLog::GetUniversalTime)
    .class_function("GetCPUTime", &vtkTimerLog::GetCPUTime)
    .function("StartTimer", &vtkTimerLog::StartTimer)
    .function("StopTimer", &vtkTimerLog::StopTimer)
    .function("GetElapsedTime", &vtkTimerLog::GetElapsedTime);
}

EMSCRIPTEN_BINDINGS(vtkTimerLogScope_class) {
  emscripten::class_<vtkTimerLogScope>("vtkTimerLogScope");
}

EMSCRIPTEN_BINDINGS(vtkTimerLogCleanup_class) {
  emscripten::class_<vtkTimerLogCleanup>("vtkTimerLogCleanup")
    .smart_ptr<std::shared_ptr<vtkTimerLogCleanup>>("std::shared_ptr<vtkTimerLogCleanup>")
    .constructor(&std::make_shared<vtkTimerLogCleanup>);
}
