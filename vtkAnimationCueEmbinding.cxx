// JavaScript wrapper for vtkAnimationCue with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkAnimationCueEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkAnimationCue.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAnimationCue.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkAnimationCue_class_enums) {
  emscripten::enum_<vtkAnimationCue::PlayDirection>("vtkAnimationCue_PlayDirection")
    .value("BACKWARD", vtkAnimationCue::PlayDirection::BACKWARD)
    .value("FORWARD", vtkAnimationCue::PlayDirection::FORWARD);
}
template<> void emscripten::internal::raw_destructor<vtkAnimationCue>(vtkAnimationCue * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAnimationCue_class) {
  using TimeCodes=vtkAnimationCue::TimeCodes;
  using PlayDirection=vtkAnimationCue::PlayDirection;
  emscripten::class_<vtkAnimationCue, emscripten::base<vtkObject>>("vtkAnimationCue")
    .smart_ptr<vtkSmartPointer<vtkAnimationCue>>("vtkSmartPointer<vtkAnimationCue>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAnimationCue>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnimationCue::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAnimationCue& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAnimationCue::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAnimationCue::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnimationCue::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAnimationCue& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTimeMode", &vtkAnimationCue::SetTimeMode)
    .function("GetTimeMode", &vtkAnimationCue::GetTimeMode)
    .function("SetTimeModeToRelative", &vtkAnimationCue::SetTimeModeToRelative)
    .function("SetTimeModeToNormalized", &vtkAnimationCue::SetTimeModeToNormalized)
    .function("SetStartTime", &vtkAnimationCue::SetStartTime)
    .function("GetStartTime", &vtkAnimationCue::GetStartTime)
    .function("SetEndTime", &vtkAnimationCue::SetEndTime)
    .function("GetEndTime", &vtkAnimationCue::GetEndTime)
    .function("Tick", &vtkAnimationCue::Tick)
    .function("Initialize", &vtkAnimationCue::Initialize)
    .function("Finalize", &vtkAnimationCue::Finalize)
    .function("GetAnimationTime", &vtkAnimationCue::GetAnimationTime)
    .function("GetDeltaTime", &vtkAnimationCue::GetDeltaTime)
    .function("GetClockTime", &vtkAnimationCue::GetClockTime)
    .function("SetDirection", &vtkAnimationCue::SetDirection)
    .function("GetDirection", &vtkAnimationCue::GetDirection);
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkAnimationCue_0_2_constants) {
    typedef vtkAnimationCue::TimeCodes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkAnimationCue_TimeCodes_TIMEMODE_NORMALIZED", vtkAnimationCue::TIMEMODE_NORMALIZED },
      { "vtkAnimationCue_TimeCodes_TIMEMODE_RELATIVE", vtkAnimationCue::TIMEMODE_RELATIVE },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
