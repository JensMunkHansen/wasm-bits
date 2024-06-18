// JavaScript wrapper for vtkProjectedTexture with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkProjectedTextureEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkProjectedTexture.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProjectedTexture.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkProjectedTexture_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_PROJECTED_TEXTURE_USE_PINHOLE", 0 },
      { "VTK_PROJECTED_TEXTURE_USE_TWO_MIRRORS", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkProjectedTexture>(vtkProjectedTexture * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProjectedTexture_class) {
  emscripten::class_<vtkProjectedTexture, emscripten::base<vtkDataSetAlgorithm>>("vtkProjectedTexture")
    .smart_ptr<vtkSmartPointer<vtkProjectedTexture>>("vtkSmartPointer<vtkProjectedTexture>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkProjectedTexture>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProjectedTexture::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProjectedTexture& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProjectedTexture::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProjectedTexture::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProjectedTexture::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProjectedTexture& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPosition", emscripten::select_overload<void(vtkProjectedTexture&, double, double, double)>([](vtkProjectedTexture& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPosition( arg_0, arg_1, arg_2); }))
    .function("SetFocalPoint", emscripten::select_overload<void(vtkProjectedTexture&, double, double, double)>([](vtkProjectedTexture& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetFocalPoint( arg_0, arg_1, arg_2); }))
    .function("SetCameraMode", &vtkProjectedTexture::SetCameraMode)
    .function("GetCameraMode", &vtkProjectedTexture::GetCameraMode)
    .function("SetCameraModeToPinhole", &vtkProjectedTexture::SetCameraModeToPinhole)
    .function("SetCameraModeToTwoMirror", &vtkProjectedTexture::SetCameraModeToTwoMirror)
    .function("SetMirrorSeparation", &vtkProjectedTexture::SetMirrorSeparation)
    .function("GetMirrorSeparation", &vtkProjectedTexture::GetMirrorSeparation)
    .function("SetUp", emscripten::select_overload<void(vtkProjectedTexture&, double, double, double)>([](vtkProjectedTexture& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetUp( arg_0, arg_1, arg_2); }))
    .function("SetAspectRatio", emscripten::select_overload<void(vtkProjectedTexture&, double, double, double)>([](vtkProjectedTexture& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAspectRatio( arg_0, arg_1, arg_2); }))
    .function("SetSRange", emscripten::select_overload<void(vtkProjectedTexture&, double, double)>([](vtkProjectedTexture& self, double arg_0, double arg_1) -> void { return self.SetSRange( arg_0, arg_1); }))
    .function("SetTRange", emscripten::select_overload<void(vtkProjectedTexture&, double, double)>([](vtkProjectedTexture& self, double arg_0, double arg_1) -> void { return self.SetTRange( arg_0, arg_1); }));
}
