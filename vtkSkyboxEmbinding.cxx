// JavaScript wrapper for vtkSkybox with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkSkyboxEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkSkybox.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSkybox.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkSkybox_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSkybox>(vtkSkybox * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSkybox_class) {
  emscripten::class_<vtkSkybox, emscripten::base<vtkActor>>("vtkSkybox")
    .smart_ptr<vtkSmartPointer<vtkSkybox>>("vtkSmartPointer<vtkSkybox>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSkybox>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSkybox::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSkybox& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSkybox::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSkybox::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSkybox::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSkybox& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetProjection", &vtkSkybox::GetProjection)
    .function("SetProjection", &vtkSkybox::SetProjection)
    .function("SetProjectionToCube", &vtkSkybox::SetProjectionToCube)
    .function("SetProjectionToSphere", &vtkSkybox::SetProjectionToSphere)
    .function("SetProjectionToStereoSphere", &vtkSkybox::SetProjectionToStereoSphere)
    .function("SetProjectionToFloor", &vtkSkybox::SetProjectionToFloor)
    .function("SetFloorPlane", emscripten::select_overload<void(vtkSkybox&, float, float, float, float)>([](vtkSkybox& self, float arg_0, float arg_1, float arg_2, float arg_3) -> void { return self.SetFloorPlane( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetFloorRight", emscripten::select_overload<void(vtkSkybox&, float, float, float)>([](vtkSkybox& self, float arg_0, float arg_1, float arg_2) -> void { return self.SetFloorRight( arg_0, arg_1, arg_2); }))
    .function("SetFloorTexCoordScale", emscripten::select_overload<void(vtkSkybox&, float, float)>([](vtkSkybox& self, float arg_0, float arg_1) -> void { return self.SetFloorTexCoordScale( arg_0, arg_1); }))
    .function("GetGammaCorrect", &vtkSkybox::GetGammaCorrect)
    .function("SetGammaCorrect", &vtkSkybox::SetGammaCorrect)
    .function("GammaCorrectOn", &vtkSkybox::GammaCorrectOn)
    .function("GammaCorrectOff", &vtkSkybox::GammaCorrectOff);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkSkybox_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkSkybox_Cube", vtkSkybox::Cube },
      { "vtkSkybox_Sphere", vtkSkybox::Sphere },
      { "vtkSkybox_Floor", vtkSkybox::Floor },
      { "vtkSkybox_StereoSphere", vtkSkybox::StereoSphere },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
