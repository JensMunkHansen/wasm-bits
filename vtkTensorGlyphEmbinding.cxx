// JavaScript wrapper for vtkTensorGlyph with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkTensorGlyphEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkTensorGlyph.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkTensorGlyph.h"

template<> void emscripten::internal::raw_destructor<vtkTensorGlyph>(vtkTensorGlyph * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTensorGlyph_class) {
  emscripten::class_<vtkTensorGlyph, emscripten::base<vtkPolyDataAlgorithm>>("vtkTensorGlyph")
    .smart_ptr<vtkSmartPointer<vtkTensorGlyph>>("vtkSmartPointer<vtkTensorGlyph>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTensorGlyph>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTensorGlyph::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTensorGlyph& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTensorGlyph::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTensorGlyph::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTensorGlyph::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTensorGlyph& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceData", &vtkTensorGlyph::SetSourceData, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkTensorGlyph::GetSource, emscripten::allow_raw_pointers())
    .function("SetSourceConnection", emscripten::select_overload<void(vtkTensorGlyph&, int, vtkAlgorithmOutput*)>([](vtkTensorGlyph& self, int arg_0, vtkAlgorithmOutput* arg_1) -> void { return self.SetSourceConnection( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetSourceConnection", emscripten::select_overload<void(vtkTensorGlyph&, vtkAlgorithmOutput*)>([](vtkTensorGlyph& self, vtkAlgorithmOutput* arg_0) -> void { return self.SetSourceConnection( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetScaling", &vtkTensorGlyph::SetScaling)
    .function("GetScaling", &vtkTensorGlyph::GetScaling)
    .function("ScalingOn", &vtkTensorGlyph::ScalingOn)
    .function("ScalingOff", &vtkTensorGlyph::ScalingOff)
    .function("SetScaleFactor", &vtkTensorGlyph::SetScaleFactor)
    .function("GetScaleFactor", &vtkTensorGlyph::GetScaleFactor)
    .function("SetThreeGlyphs", &vtkTensorGlyph::SetThreeGlyphs)
    .function("GetThreeGlyphs", &vtkTensorGlyph::GetThreeGlyphs)
    .function("ThreeGlyphsOn", &vtkTensorGlyph::ThreeGlyphsOn)
    .function("ThreeGlyphsOff", &vtkTensorGlyph::ThreeGlyphsOff)
    .function("SetSymmetric", &vtkTensorGlyph::SetSymmetric)
    .function("GetSymmetric", &vtkTensorGlyph::GetSymmetric)
    .function("SymmetricOn", &vtkTensorGlyph::SymmetricOn)
    .function("SymmetricOff", &vtkTensorGlyph::SymmetricOff)
    .function("SetLength", &vtkTensorGlyph::SetLength)
    .function("GetLength", &vtkTensorGlyph::GetLength)
    .function("SetExtractEigenvalues", &vtkTensorGlyph::SetExtractEigenvalues)
    .function("ExtractEigenvaluesOn", &vtkTensorGlyph::ExtractEigenvaluesOn)
    .function("ExtractEigenvaluesOff", &vtkTensorGlyph::ExtractEigenvaluesOff)
    .function("GetExtractEigenvalues", &vtkTensorGlyph::GetExtractEigenvalues)
    .function("SetColorGlyphs", &vtkTensorGlyph::SetColorGlyphs)
    .function("GetColorGlyphs", &vtkTensorGlyph::GetColorGlyphs)
    .function("ColorGlyphsOn", &vtkTensorGlyph::ColorGlyphsOn)
    .function("ColorGlyphsOff", &vtkTensorGlyph::ColorGlyphsOff)
    .function("SetColorMode", &vtkTensorGlyph::SetColorMode)
    .function("GetColorModeMinValue", &vtkTensorGlyph::GetColorModeMinValue)
    .function("GetColorModeMaxValue", &vtkTensorGlyph::GetColorModeMaxValue)
    .function("GetColorMode", &vtkTensorGlyph::GetColorMode)
    .function("SetColorModeToScalars", &vtkTensorGlyph::SetColorModeToScalars)
    .function("SetColorModeToEigenvalues", &vtkTensorGlyph::SetColorModeToEigenvalues)
    .function("SetClampScaling", &vtkTensorGlyph::SetClampScaling)
    .function("GetClampScaling", &vtkTensorGlyph::GetClampScaling)
    .function("ClampScalingOn", &vtkTensorGlyph::ClampScalingOn)
    .function("ClampScalingOff", &vtkTensorGlyph::ClampScalingOff)
    .function("SetMaxScaleFactor", &vtkTensorGlyph::SetMaxScaleFactor)
    .function("GetMaxScaleFactor", &vtkTensorGlyph::GetMaxScaleFactor);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkTensorGlyph_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkTensorGlyph_COLOR_BY_SCALARS", vtkTensorGlyph::COLOR_BY_SCALARS },
      { "vtkTensorGlyph_COLOR_BY_EIGENVALUES", vtkTensorGlyph::COLOR_BY_EIGENVALUES },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
