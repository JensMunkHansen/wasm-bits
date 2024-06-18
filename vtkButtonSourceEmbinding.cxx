// JavaScript wrapper for vtkButtonSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkButtonSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkButtonSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkButtonSource.h"

EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkButtonSource_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_TEXTURE_STYLE_FIT_IMAGE", 0 },
      { "VTK_TEXTURE_STYLE_PROPORTIONAL", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkButtonSource>(vtkButtonSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkButtonSource_class) {
  emscripten::class_<vtkButtonSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkButtonSource")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkButtonSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkButtonSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkButtonSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkButtonSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkButtonSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkButtonSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCenter", emscripten::select_overload<void(vtkButtonSource&, double, double, double)>([](vtkButtonSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetTextureStyle", &vtkButtonSource::SetTextureStyle)
    .function("GetTextureStyleMinValue", &vtkButtonSource::GetTextureStyleMinValue)
    .function("GetTextureStyleMaxValue", &vtkButtonSource::GetTextureStyleMaxValue)
    .function("GetTextureStyle", &vtkButtonSource::GetTextureStyle)
    .function("SetTextureStyleToFitImage", &vtkButtonSource::SetTextureStyleToFitImage)
    .function("SetTextureStyleToProportional", &vtkButtonSource::SetTextureStyleToProportional)
    .function("SetTextureDimensions", emscripten::select_overload<void(vtkButtonSource&, int, int)>([](vtkButtonSource& self, int arg_0, int arg_1) -> void { return self.SetTextureDimensions( arg_0, arg_1); }))
    .function("SetShoulderTextureCoordinate", emscripten::select_overload<void(vtkButtonSource&, double, double)>([](vtkButtonSource& self, double arg_0, double arg_1) -> void { return self.SetShoulderTextureCoordinate( arg_0, arg_1); }))
    .function("SetTwoSided", &vtkButtonSource::SetTwoSided)
    .function("GetTwoSided", &vtkButtonSource::GetTwoSided)
    .function("TwoSidedOn", &vtkButtonSource::TwoSidedOn)
    .function("TwoSidedOff", &vtkButtonSource::TwoSidedOff);
}
