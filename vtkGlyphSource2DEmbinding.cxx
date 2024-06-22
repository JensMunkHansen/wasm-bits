// JavaScript wrapper for vtkGlyphSource2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkGlyphSource2DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkGlyphSource2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGlyphSource2D.h"

EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkGlyphSource2D_0_1_constants) {
  const struct { const char *name; int value; }
    constants[14] = {
      { "VTK_NO_GLYPH", 0 },
      { "VTK_VERTEX_GLYPH", 1 },
      { "VTK_DASH_GLYPH", 2 },
      { "VTK_CROSS_GLYPH", 3 },
      { "VTK_THICKCROSS_GLYPH", 4 },
      { "VTK_TRIANGLE_GLYPH", 5 },
      { "VTK_SQUARE_GLYPH", 6 },
      { "VTK_CIRCLE_GLYPH", 7 },
      { "VTK_DIAMOND_GLYPH", 8 },
      { "VTK_ARROW_GLYPH", 9 },
      { "VTK_THICKARROW_GLYPH", 10 },
      { "VTK_HOOKEDARROW_GLYPH", 11 },
      { "VTK_EDGEARROW_GLYPH", 12 },
      { "VTK_MAX_CIRCLE_RESOLUTION", 1024 },
  };
  for (int c = 0; c < 14; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkGlyphSource2D>(vtkGlyphSource2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGlyphSource2D_class) {
  emscripten::class_<vtkGlyphSource2D, emscripten::base<vtkPolyDataAlgorithm>>("vtkGlyphSource2D")
    .smart_ptr<vtkSmartPointer<vtkGlyphSource2D>>("vtkSmartPointer<vtkGlyphSource2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGlyphSource2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGlyphSource2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGlyphSource2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGlyphSource2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGlyphSource2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGlyphSource2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGlyphSource2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCenter", emscripten::select_overload<void(vtkGlyphSource2D&, double, double, double)>([](vtkGlyphSource2D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetScale", &vtkGlyphSource2D::SetScale)
    .function("GetScaleMinValue", &vtkGlyphSource2D::GetScaleMinValue)
    .function("GetScaleMaxValue", &vtkGlyphSource2D::GetScaleMaxValue)
    .function("GetScale", &vtkGlyphSource2D::GetScale)
    .function("SetScale2", &vtkGlyphSource2D::SetScale2)
    .function("GetScale2MinValue", &vtkGlyphSource2D::GetScale2MinValue)
    .function("GetScale2MaxValue", &vtkGlyphSource2D::GetScale2MaxValue)
    .function("GetScale2", &vtkGlyphSource2D::GetScale2)
    .function("SetColor", emscripten::select_overload<void(vtkGlyphSource2D&, double, double, double)>([](vtkGlyphSource2D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetColor( arg_0, arg_1, arg_2); }))
    .function("SetFilled", &vtkGlyphSource2D::SetFilled)
    .function("GetFilled", &vtkGlyphSource2D::GetFilled)
    .function("FilledOn", &vtkGlyphSource2D::FilledOn)
    .function("FilledOff", &vtkGlyphSource2D::FilledOff)
    .function("SetDash", &vtkGlyphSource2D::SetDash)
    .function("GetDash", &vtkGlyphSource2D::GetDash)
    .function("DashOn", &vtkGlyphSource2D::DashOn)
    .function("DashOff", &vtkGlyphSource2D::DashOff)
    .function("SetCross", &vtkGlyphSource2D::SetCross)
    .function("GetCross", &vtkGlyphSource2D::GetCross)
    .function("CrossOn", &vtkGlyphSource2D::CrossOn)
    .function("CrossOff", &vtkGlyphSource2D::CrossOff)
    .function("SetRotationAngle", &vtkGlyphSource2D::SetRotationAngle)
    .function("GetRotationAngle", &vtkGlyphSource2D::GetRotationAngle)
    .function("SetResolution", &vtkGlyphSource2D::SetResolution)
    .function("GetResolutionMinValue", &vtkGlyphSource2D::GetResolutionMinValue)
    .function("GetResolutionMaxValue", &vtkGlyphSource2D::GetResolutionMaxValue)
    .function("GetResolution", &vtkGlyphSource2D::GetResolution)
    .function("SetGlyphType", &vtkGlyphSource2D::SetGlyphType)
    .function("GetGlyphTypeMinValue", &vtkGlyphSource2D::GetGlyphTypeMinValue)
    .function("GetGlyphTypeMaxValue", &vtkGlyphSource2D::GetGlyphTypeMaxValue)
    .function("GetGlyphType", &vtkGlyphSource2D::GetGlyphType)
    .function("SetGlyphTypeToNone", &vtkGlyphSource2D::SetGlyphTypeToNone)
    .function("SetGlyphTypeToVertex", &vtkGlyphSource2D::SetGlyphTypeToVertex)
    .function("SetGlyphTypeToDash", &vtkGlyphSource2D::SetGlyphTypeToDash)
    .function("SetGlyphTypeToCross", &vtkGlyphSource2D::SetGlyphTypeToCross)
    .function("SetGlyphTypeToThickCross", &vtkGlyphSource2D::SetGlyphTypeToThickCross)
    .function("SetGlyphTypeToTriangle", &vtkGlyphSource2D::SetGlyphTypeToTriangle)
    .function("SetGlyphTypeToSquare", &vtkGlyphSource2D::SetGlyphTypeToSquare)
    .function("SetGlyphTypeToCircle", &vtkGlyphSource2D::SetGlyphTypeToCircle)
    .function("SetGlyphTypeToDiamond", &vtkGlyphSource2D::SetGlyphTypeToDiamond)
    .function("SetGlyphTypeToArrow", &vtkGlyphSource2D::SetGlyphTypeToArrow)
    .function("SetGlyphTypeToThickArrow", &vtkGlyphSource2D::SetGlyphTypeToThickArrow)
    .function("SetGlyphTypeToHookedArrow", &vtkGlyphSource2D::SetGlyphTypeToHookedArrow)
    .function("SetGlyphTypeToEdgeArrow", &vtkGlyphSource2D::SetGlyphTypeToEdgeArrow)
    .function("SetOutputPointsPrecision", &vtkGlyphSource2D::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkGlyphSource2D::GetOutputPointsPrecision)
    .function("SetTipLength", &vtkGlyphSource2D::SetTipLength)
    .function("GetTipLengthMinValue", &vtkGlyphSource2D::GetTipLengthMinValue)
    .function("GetTipLengthMaxValue", &vtkGlyphSource2D::GetTipLengthMaxValue)
    .function("GetTipLength", &vtkGlyphSource2D::GetTipLength)
    .function("SetDoublePointed", &vtkGlyphSource2D::SetDoublePointed)
    .function("GetDoublePointed", &vtkGlyphSource2D::GetDoublePointed)
    .function("DoublePointedOn", &vtkGlyphSource2D::DoublePointedOn)
    .function("DoublePointedOff", &vtkGlyphSource2D::DoublePointedOff)
    .function("SetPointInwards", &vtkGlyphSource2D::SetPointInwards)
    .function("GetPointInwards", &vtkGlyphSource2D::GetPointInwards)
    .function("PointInwardsOn", &vtkGlyphSource2D::PointInwardsOn)
    .function("PointInwardsOff", &vtkGlyphSource2D::PointInwardsOff);
}
