// JavaScript wrapper for vtkRibbonFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkRibbonFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkRibbonFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRibbonFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkRibbonFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "VTK_TCOORDS_OFF", 0 },
      { "VTK_TCOORDS_FROM_NORMALIZED_LENGTH", 1 },
      { "VTK_TCOORDS_FROM_LENGTH", 2 },
      { "VTK_TCOORDS_FROM_SCALARS", 3 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkRibbonFilter>(vtkRibbonFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRibbonFilter_class) {
  emscripten::class_<vtkRibbonFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkRibbonFilter")
    .smart_ptr<vtkSmartPointer<vtkRibbonFilter>>("vtkSmartPointer<vtkRibbonFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRibbonFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRibbonFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRibbonFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRibbonFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRibbonFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRibbonFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRibbonFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWidth", &vtkRibbonFilter::SetWidth)
    .function("GetWidthMinValue", &vtkRibbonFilter::GetWidthMinValue)
    .function("GetWidthMaxValue", &vtkRibbonFilter::GetWidthMaxValue)
    .function("GetWidth", &vtkRibbonFilter::GetWidth)
    .function("SetAngle", &vtkRibbonFilter::SetAngle)
    .function("GetAngleMinValue", &vtkRibbonFilter::GetAngleMinValue)
    .function("GetAngleMaxValue", &vtkRibbonFilter::GetAngleMaxValue)
    .function("GetAngle", &vtkRibbonFilter::GetAngle)
    .function("SetVaryWidth", &vtkRibbonFilter::SetVaryWidth)
    .function("GetVaryWidth", &vtkRibbonFilter::GetVaryWidth)
    .function("VaryWidthOn", &vtkRibbonFilter::VaryWidthOn)
    .function("VaryWidthOff", &vtkRibbonFilter::VaryWidthOff)
    .function("SetWidthFactor", &vtkRibbonFilter::SetWidthFactor)
    .function("GetWidthFactor", &vtkRibbonFilter::GetWidthFactor)
    .function("SetDefaultNormal", emscripten::select_overload<void(vtkRibbonFilter&, double, double, double)>([](vtkRibbonFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDefaultNormal( arg_0, arg_1, arg_2); }))
    .function("SetUseDefaultNormal", &vtkRibbonFilter::SetUseDefaultNormal)
    .function("GetUseDefaultNormal", &vtkRibbonFilter::GetUseDefaultNormal)
    .function("UseDefaultNormalOn", &vtkRibbonFilter::UseDefaultNormalOn)
    .function("UseDefaultNormalOff", &vtkRibbonFilter::UseDefaultNormalOff)
    .function("SetGenerateTCoords", &vtkRibbonFilter::SetGenerateTCoords)
    .function("GetGenerateTCoordsMinValue", &vtkRibbonFilter::GetGenerateTCoordsMinValue)
    .function("GetGenerateTCoordsMaxValue", &vtkRibbonFilter::GetGenerateTCoordsMaxValue)
    .function("GetGenerateTCoords", &vtkRibbonFilter::GetGenerateTCoords)
    .function("SetGenerateTCoordsToOff", &vtkRibbonFilter::SetGenerateTCoordsToOff)
    .function("SetGenerateTCoordsToNormalizedLength", &vtkRibbonFilter::SetGenerateTCoordsToNormalizedLength)
    .function("SetGenerateTCoordsToUseLength", &vtkRibbonFilter::SetGenerateTCoordsToUseLength)
    .function("SetGenerateTCoordsToUseScalars", &vtkRibbonFilter::SetGenerateTCoordsToUseScalars)
    .function("GetGenerateTCoordsAsString", emscripten::optional_override([](vtkRibbonFilter& self) -> std::string {  return self.GetGenerateTCoordsAsString();}))
    .function("SetTextureLength", &vtkRibbonFilter::SetTextureLength)
    .function("GetTextureLengthMinValue", &vtkRibbonFilter::GetTextureLengthMinValue)
    .function("GetTextureLengthMaxValue", &vtkRibbonFilter::GetTextureLengthMaxValue)
    .function("GetTextureLength", &vtkRibbonFilter::GetTextureLength);
}
