// JavaScript wrapper for vtkTubeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkTubeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkTubeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTubeFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkTubeFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[9] = {
      { "VTK_VARY_RADIUS_OFF", 0 },
      { "VTK_VARY_RADIUS_BY_SCALAR", 1 },
      { "VTK_VARY_RADIUS_BY_VECTOR", 2 },
      { "VTK_VARY_RADIUS_BY_ABSOLUTE_SCALAR", 3 },
      { "VTK_VARY_RADIUS_BY_VECTOR_NORM", 4 },
      { "VTK_TCOORDS_OFF", 0 },
      { "VTK_TCOORDS_FROM_NORMALIZED_LENGTH", 1 },
      { "VTK_TCOORDS_FROM_LENGTH", 2 },
      { "VTK_TCOORDS_FROM_SCALARS", 3 },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkTubeFilter>(vtkTubeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTubeFilter_class) {
  emscripten::class_<vtkTubeFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkTubeFilter")
    .smart_ptr<vtkSmartPointer<vtkTubeFilter>>("vtkSmartPointer<vtkTubeFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTubeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTubeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTubeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTubeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTubeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTubeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTubeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkTubeFilter::SetRadius)
    .function("GetRadiusMinValue", &vtkTubeFilter::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkTubeFilter::GetRadiusMaxValue)
    .function("GetRadius", &vtkTubeFilter::GetRadius)
    .function("SetVaryRadius", &vtkTubeFilter::SetVaryRadius)
    .function("GetVaryRadiusMinValue", &vtkTubeFilter::GetVaryRadiusMinValue)
    .function("GetVaryRadiusMaxValue", &vtkTubeFilter::GetVaryRadiusMaxValue)
    .function("GetVaryRadius", &vtkTubeFilter::GetVaryRadius)
    .function("SetVaryRadiusToVaryRadiusOff", &vtkTubeFilter::SetVaryRadiusToVaryRadiusOff)
    .function("SetVaryRadiusToVaryRadiusByScalar", &vtkTubeFilter::SetVaryRadiusToVaryRadiusByScalar)
    .function("SetVaryRadiusToVaryRadiusByVector", &vtkTubeFilter::SetVaryRadiusToVaryRadiusByVector)
    .function("SetVaryRadiusToVaryRadiusByVectorNorm", &vtkTubeFilter::SetVaryRadiusToVaryRadiusByVectorNorm)
    .function("SetVaryRadiusToVaryRadiusByAbsoluteScalar", &vtkTubeFilter::SetVaryRadiusToVaryRadiusByAbsoluteScalar)
    .function("GetVaryRadiusAsString", emscripten::optional_override([](vtkTubeFilter& self) -> std::string {  return self.GetVaryRadiusAsString();}))
    .function("SetNumberOfSides", &vtkTubeFilter::SetNumberOfSides)
    .function("GetNumberOfSidesMinValue", &vtkTubeFilter::GetNumberOfSidesMinValue)
    .function("GetNumberOfSidesMaxValue", &vtkTubeFilter::GetNumberOfSidesMaxValue)
    .function("GetNumberOfSides", &vtkTubeFilter::GetNumberOfSides)
    .function("SetRadiusFactor", &vtkTubeFilter::SetRadiusFactor)
    .function("GetRadiusFactor", &vtkTubeFilter::GetRadiusFactor)
    .function("SetDefaultNormal", emscripten::select_overload<void(vtkTubeFilter&, double, double, double)>([](vtkTubeFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDefaultNormal( arg_0, arg_1, arg_2); }))
    .function("SetUseDefaultNormal", &vtkTubeFilter::SetUseDefaultNormal)
    .function("GetUseDefaultNormal", &vtkTubeFilter::GetUseDefaultNormal)
    .function("UseDefaultNormalOn", &vtkTubeFilter::UseDefaultNormalOn)
    .function("UseDefaultNormalOff", &vtkTubeFilter::UseDefaultNormalOff)
    .function("SetSidesShareVertices", &vtkTubeFilter::SetSidesShareVertices)
    .function("GetSidesShareVertices", &vtkTubeFilter::GetSidesShareVertices)
    .function("SidesShareVerticesOn", &vtkTubeFilter::SidesShareVerticesOn)
    .function("SidesShareVerticesOff", &vtkTubeFilter::SidesShareVerticesOff)
    .function("SetCapping", &vtkTubeFilter::SetCapping)
    .function("GetCapping", &vtkTubeFilter::GetCapping)
    .function("CappingOn", &vtkTubeFilter::CappingOn)
    .function("CappingOff", &vtkTubeFilter::CappingOff)
    .function("SetOnRatio", &vtkTubeFilter::SetOnRatio)
    .function("GetOnRatioMinValue", &vtkTubeFilter::GetOnRatioMinValue)
    .function("GetOnRatioMaxValue", &vtkTubeFilter::GetOnRatioMaxValue)
    .function("GetOnRatio", &vtkTubeFilter::GetOnRatio)
    .function("SetOffset", &vtkTubeFilter::SetOffset)
    .function("GetOffsetMinValue", &vtkTubeFilter::GetOffsetMinValue)
    .function("GetOffsetMaxValue", &vtkTubeFilter::GetOffsetMaxValue)
    .function("GetOffset", &vtkTubeFilter::GetOffset)
    .function("SetGenerateTCoords", &vtkTubeFilter::SetGenerateTCoords)
    .function("GetGenerateTCoordsMinValue", &vtkTubeFilter::GetGenerateTCoordsMinValue)
    .function("GetGenerateTCoordsMaxValue", &vtkTubeFilter::GetGenerateTCoordsMaxValue)
    .function("GetGenerateTCoords", &vtkTubeFilter::GetGenerateTCoords)
    .function("SetGenerateTCoordsToOff", &vtkTubeFilter::SetGenerateTCoordsToOff)
    .function("SetGenerateTCoordsToNormalizedLength", &vtkTubeFilter::SetGenerateTCoordsToNormalizedLength)
    .function("SetGenerateTCoordsToUseLength", &vtkTubeFilter::SetGenerateTCoordsToUseLength)
    .function("SetGenerateTCoordsToUseScalars", &vtkTubeFilter::SetGenerateTCoordsToUseScalars)
    .function("GetGenerateTCoordsAsString", emscripten::optional_override([](vtkTubeFilter& self) -> std::string {  return self.GetGenerateTCoordsAsString();}))
    .function("SetTextureLength", &vtkTubeFilter::SetTextureLength)
    .function("GetTextureLengthMinValue", &vtkTubeFilter::GetTextureLengthMinValue)
    .function("GetTextureLengthMaxValue", &vtkTubeFilter::GetTextureLengthMaxValue)
    .function("GetTextureLength", &vtkTubeFilter::GetTextureLength)
    .function("SetOutputPointsPrecision", &vtkTubeFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkTubeFilter::GetOutputPointsPrecision);
}
