// JavaScript wrapper for vtkProperty2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkProperty2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkProperty2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkProperty2D.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkProperty2D_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_BACKGROUND_LOCATION", 0 },
      { "VTK_FOREGROUND_LOCATION", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkProperty2D>(vtkProperty2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProperty2D_class) {
  emscripten::class_<vtkProperty2D, emscripten::base<vtkObject>>("vtkProperty2D")
    .smart_ptr<vtkSmartPointer<vtkProperty2D>>("vtkSmartPointer<vtkProperty2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkProperty2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProperty2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProperty2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProperty2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProperty2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProperty2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProperty2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DeepCopy", &vtkProperty2D::DeepCopy, emscripten::allow_raw_pointers())
    .function("SetColor", emscripten::select_overload<void(vtkProperty2D&, double, double, double)>([](vtkProperty2D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetColor( arg_0, arg_1, arg_2); }))
    .function("GetOpacity", &vtkProperty2D::GetOpacity)
    .function("SetOpacity", &vtkProperty2D::SetOpacity)
    .function("SetPointSize", &vtkProperty2D::SetPointSize)
    .function("GetPointSizeMinValue", &vtkProperty2D::GetPointSizeMinValue)
    .function("GetPointSizeMaxValue", &vtkProperty2D::GetPointSizeMaxValue)
    .function("GetPointSize", &vtkProperty2D::GetPointSize)
    .function("SetLineWidth", &vtkProperty2D::SetLineWidth)
    .function("GetLineWidthMinValue", &vtkProperty2D::GetLineWidthMinValue)
    .function("GetLineWidthMaxValue", &vtkProperty2D::GetLineWidthMaxValue)
    .function("GetLineWidth", &vtkProperty2D::GetLineWidth)
    .function("SetLineStipplePattern", &vtkProperty2D::SetLineStipplePattern)
    .function("GetLineStipplePattern", &vtkProperty2D::GetLineStipplePattern)
    .function("SetLineStippleRepeatFactor", &vtkProperty2D::SetLineStippleRepeatFactor)
    .function("GetLineStippleRepeatFactorMinValue", &vtkProperty2D::GetLineStippleRepeatFactorMinValue)
    .function("GetLineStippleRepeatFactorMaxValue", &vtkProperty2D::GetLineStippleRepeatFactorMaxValue)
    .function("GetLineStippleRepeatFactor", &vtkProperty2D::GetLineStippleRepeatFactor)
    .function("SetDisplayLocation", &vtkProperty2D::SetDisplayLocation)
    .function("GetDisplayLocationMinValue", &vtkProperty2D::GetDisplayLocationMinValue)
    .function("GetDisplayLocationMaxValue", &vtkProperty2D::GetDisplayLocationMaxValue)
    .function("GetDisplayLocation", &vtkProperty2D::GetDisplayLocation)
    .function("SetDisplayLocationToBackground", &vtkProperty2D::SetDisplayLocationToBackground)
    .function("SetDisplayLocationToForeground", &vtkProperty2D::SetDisplayLocationToForeground)
    .function("Render", &vtkProperty2D::Render, emscripten::allow_raw_pointers());
}
