// JavaScript wrapper for vtkAnimationScene with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkAnimationSceneEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkAnimationScene.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAnimationCue.h"
#include "vtkAnimationScene.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkAnimationScene_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkAnimationScene>(vtkAnimationScene * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAnimationScene_class) {
  using PlayModes=vtkAnimationScene::PlayModes;
  emscripten::class_<vtkAnimationScene, emscripten::base<vtkAnimationCue>>("vtkAnimationScene")
    .smart_ptr<vtkSmartPointer<vtkAnimationScene>>("vtkSmartPointer<vtkAnimationScene>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAnimationScene>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnimationScene::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAnimationScene& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAnimationScene::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAnimationScene::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnimationScene::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAnimationScene& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPlayMode", &vtkAnimationScene::SetPlayMode)
    .function("SetModeToSequence", &vtkAnimationScene::SetModeToSequence)
    .function("SetModeToRealTime", &vtkAnimationScene::SetModeToRealTime)
    .function("GetPlayMode", &vtkAnimationScene::GetPlayMode)
    .function("SetFrameRate", &vtkAnimationScene::SetFrameRate)
    .function("GetFrameRate", &vtkAnimationScene::GetFrameRate)
    .function("AddCue", &vtkAnimationScene::AddCue, emscripten::allow_raw_pointers())
    .function("RemoveCue", &vtkAnimationScene::RemoveCue, emscripten::allow_raw_pointers())
    .function("RemoveAllCues", &vtkAnimationScene::RemoveAllCues)
    .function("GetNumberOfCues", &vtkAnimationScene::GetNumberOfCues)
    .function("Play", &vtkAnimationScene::Play)
    .function("Stop", &vtkAnimationScene::Stop)
    .function("SetLoop", &vtkAnimationScene::SetLoop)
    .function("GetLoop", &vtkAnimationScene::GetLoop)
    .function("SetAnimationTime", &vtkAnimationScene::SetAnimationTime)
    .function("SetTimeMode", &vtkAnimationScene::SetTimeMode)
    .function("IsInPlay", &vtkAnimationScene::IsInPlay);
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkAnimationScene_0_2_constants) {
    typedef vtkAnimationScene::PlayModes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkAnimationScene_PlayModes_PLAYMODE_SEQUENCE", vtkAnimationScene::PLAYMODE_SEQUENCE },
      { "vtkAnimationScene_PlayModes_PLAYMODE_REALTIME", vtkAnimationScene::PLAYMODE_REALTIME },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
