// JavaScript wrapper for vtkIconGlyphFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkIconGlyphFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkIconGlyphFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIconGlyphFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkIconGlyphFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[11] = {
      { "VTK_ICON_GRAVITY_TOP_RIGHT", 1 },
      { "VTK_ICON_GRAVITY_TOP_CENTER", 2 },
      { "VTK_ICON_GRAVITY_TOP_LEFT", 3 },
      { "VTK_ICON_GRAVITY_CENTER_RIGHT", 4 },
      { "VTK_ICON_GRAVITY_CENTER_CENTER", 5 },
      { "VTK_ICON_GRAVITY_CENTER_LEFT", 6 },
      { "VTK_ICON_GRAVITY_BOTTOM_RIGHT", 7 },
      { "VTK_ICON_GRAVITY_BOTTOM_CENTER", 8 },
      { "VTK_ICON_GRAVITY_BOTTOM_LEFT", 9 },
      { "VTK_ICON_SCALING_OFF", 0 },
      { "VTK_ICON_SCALING_USE_SCALING_ARRAY", 1 },
  };
  for (int c = 0; c < 11; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkIconGlyphFilter>(vtkIconGlyphFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIconGlyphFilter_class) {
  emscripten::class_<vtkIconGlyphFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkIconGlyphFilter")
    .smart_ptr<vtkSmartPointer<vtkIconGlyphFilter>>("vtkSmartPointer<vtkIconGlyphFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkIconGlyphFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIconGlyphFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIconGlyphFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIconGlyphFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIconGlyphFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIconGlyphFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIconGlyphFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetIconSize", emscripten::select_overload<void(vtkIconGlyphFilter&, int, int)>([](vtkIconGlyphFilter& self, int arg_0, int arg_1) -> void { return self.SetIconSize( arg_0, arg_1); }))
    .function("SetIconSheetSize", emscripten::select_overload<void(vtkIconGlyphFilter&, int, int)>([](vtkIconGlyphFilter& self, int arg_0, int arg_1) -> void { return self.SetIconSheetSize( arg_0, arg_1); }))
    .function("SetDisplaySize", emscripten::select_overload<void(vtkIconGlyphFilter&, int, int)>([](vtkIconGlyphFilter& self, int arg_0, int arg_1) -> void { return self.SetDisplaySize( arg_0, arg_1); }))
    .function("SetUseIconSize", &vtkIconGlyphFilter::SetUseIconSize)
    .function("GetUseIconSize", &vtkIconGlyphFilter::GetUseIconSize)
    .function("UseIconSizeOn", &vtkIconGlyphFilter::UseIconSizeOn)
    .function("UseIconSizeOff", &vtkIconGlyphFilter::UseIconSizeOff)
    .function("SetIconScaling", &vtkIconGlyphFilter::SetIconScaling)
    .function("GetIconScaling", &vtkIconGlyphFilter::GetIconScaling)
    .function("SetIconScalingToScalingOff", &vtkIconGlyphFilter::SetIconScalingToScalingOff)
    .function("SetIconScalingToScalingArray", &vtkIconGlyphFilter::SetIconScalingToScalingArray)
    .function("SetPassScalars", &vtkIconGlyphFilter::SetPassScalars)
    .function("GetPassScalars", &vtkIconGlyphFilter::GetPassScalars)
    .function("PassScalarsOn", &vtkIconGlyphFilter::PassScalarsOn)
    .function("PassScalarsOff", &vtkIconGlyphFilter::PassScalarsOff)
    .function("SetGravity", &vtkIconGlyphFilter::SetGravity)
    .function("GetGravity", &vtkIconGlyphFilter::GetGravity)
    .function("SetGravityToTopRight", &vtkIconGlyphFilter::SetGravityToTopRight)
    .function("SetGravityToTopCenter", &vtkIconGlyphFilter::SetGravityToTopCenter)
    .function("SetGravityToTopLeft", &vtkIconGlyphFilter::SetGravityToTopLeft)
    .function("SetGravityToCenterRight", &vtkIconGlyphFilter::SetGravityToCenterRight)
    .function("SetGravityToCenterCenter", &vtkIconGlyphFilter::SetGravityToCenterCenter)
    .function("SetGravityToCenterLeft", &vtkIconGlyphFilter::SetGravityToCenterLeft)
    .function("SetGravityToBottomRight", &vtkIconGlyphFilter::SetGravityToBottomRight)
    .function("SetGravityToBottomCenter", &vtkIconGlyphFilter::SetGravityToBottomCenter)
    .function("SetGravityToBottomLeft", &vtkIconGlyphFilter::SetGravityToBottomLeft)
    .function("SetOffset", emscripten::select_overload<void(vtkIconGlyphFilter&, int, int)>([](vtkIconGlyphFilter& self, int arg_0, int arg_1) -> void { return self.SetOffset( arg_0, arg_1); }));
}
