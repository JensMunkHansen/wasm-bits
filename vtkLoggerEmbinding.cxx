// JavaScript wrapper for vtkLogger with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkLoggerEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkLogger.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLogger.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkLogger_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkLogger>(vtkLogger * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLogger_class) {
  using Verbosity=vtkLogger::Verbosity;
  using FileMode=vtkLogger::FileMode;
  emscripten::class_<vtkLogger, emscripten::base<vtkObjectBase>>("vtkLogger")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLogger::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLogger& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLogger::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLogger::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLogger::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLogger& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("Init", emscripten::select_overload<void()>([]() -> void { return vtkLogger::Init(); }))
    .class_function("SetStderrVerbosity", &vtkLogger::SetStderrVerbosity)
    .class_function("SetInternalVerbosityLevel", &vtkLogger::SetInternalVerbosityLevel)
    .class_function("LogToFile", emscripten::optional_override([]( const std::string & arg_0, FileMode arg_1, Verbosity arg_2) -> void {  return vtkLogger::LogToFile( arg_0.c_str(), arg_1, arg_2);}))
    .class_function("EndLogToFile", emscripten::optional_override([]( const std::string & arg_0) -> void {  return vtkLogger::EndLogToFile( arg_0.c_str());}))
    .class_function("SetThreadName", &vtkLogger::SetThreadName)
    .class_function("GetThreadName", &vtkLogger::GetThreadName)
    .class_function("GetIdentifier", &vtkLogger::GetIdentifier, emscripten::allow_raw_pointers())
    .class_function("RemoveCallback", emscripten::optional_override([]( const std::string & arg_0) -> bool {  return vtkLogger::RemoveCallback( arg_0.c_str());}))
    .class_function("IsEnabled", &vtkLogger::IsEnabled)
    .class_function("GetCurrentVerbosityCutoff", &vtkLogger::GetCurrentVerbosityCutoff)
    .class_function("ConvertToVerbosity", emscripten::select_overload<Verbosity( int)>([]( int arg_0) -> Verbosity { return vtkLogger::ConvertToVerbosity( arg_0); }))
    .class_function("ConvertToVerbosity", emscripten::select_overload<Verbosity( const std::string &)>([]( const std::string & arg_0) -> Verbosity { return vtkLogger::ConvertToVerbosity( arg_0.c_str()); }))
    .class_function("Log", emscripten::optional_override([]( Verbosity arg_0, const std::string & arg_1, unsigned int arg_2, const std::string & arg_3) -> void {  return vtkLogger::Log( arg_0, arg_1.c_str(), arg_2, arg_3.c_str());}))
    .class_function("StartScope", emscripten::optional_override([]( Verbosity arg_0, const std::string & arg_1, const std::string & arg_2, unsigned int arg_3) -> void {  return vtkLogger::StartScope( arg_0, arg_1.c_str(), arg_2.c_str(), arg_3);}))
    .class_function("EndScope", emscripten::optional_override([]( const std::string & arg_0) -> void {  return vtkLogger::EndScope( arg_0.c_str());}));
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkLogger_0_2_constants) {
    typedef vtkLogger::Verbosity cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[17] = {
      { "vtkLogger_Verbosity_VERBOSITY_INVALID", vtkLogger::VERBOSITY_INVALID },
      { "vtkLogger_Verbosity_VERBOSITY_OFF", vtkLogger::VERBOSITY_OFF },
      { "vtkLogger_Verbosity_VERBOSITY_ERROR", vtkLogger::VERBOSITY_ERROR },
      { "vtkLogger_Verbosity_VERBOSITY_WARNING", vtkLogger::VERBOSITY_WARNING },
      { "vtkLogger_Verbosity_VERBOSITY_INFO", vtkLogger::VERBOSITY_INFO },
      { "vtkLogger_Verbosity_VERBOSITY_0", vtkLogger::VERBOSITY_0 },
      { "vtkLogger_Verbosity_VERBOSITY_1", vtkLogger::VERBOSITY_1 },
      { "vtkLogger_Verbosity_VERBOSITY_2", vtkLogger::VERBOSITY_2 },
      { "vtkLogger_Verbosity_VERBOSITY_3", vtkLogger::VERBOSITY_3 },
      { "vtkLogger_Verbosity_VERBOSITY_4", vtkLogger::VERBOSITY_4 },
      { "vtkLogger_Verbosity_VERBOSITY_5", vtkLogger::VERBOSITY_5 },
      { "vtkLogger_Verbosity_VERBOSITY_6", vtkLogger::VERBOSITY_6 },
      { "vtkLogger_Verbosity_VERBOSITY_7", vtkLogger::VERBOSITY_7 },
      { "vtkLogger_Verbosity_VERBOSITY_8", vtkLogger::VERBOSITY_8 },
      { "vtkLogger_Verbosity_VERBOSITY_9", vtkLogger::VERBOSITY_9 },
      { "vtkLogger_Verbosity_VERBOSITY_TRACE", vtkLogger::VERBOSITY_TRACE },
      { "vtkLogger_Verbosity_VERBOSITY_MAX", vtkLogger::VERBOSITY_MAX },
  };
  for (int c = 0; c < 17; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkLogger_1_2_constants) {
    typedef vtkLogger::FileMode cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkLogger_FileMode_TRUNCATE", vtkLogger::TRUNCATE },
      { "vtkLogger_FileMode_APPEND", vtkLogger::APPEND },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
