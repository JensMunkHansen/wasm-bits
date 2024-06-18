// JavaScript wrapper for vtkSplineFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkSplineFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkSplineFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSpline.h"
#include "vtkSplineFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkSplineFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "VTK_SUBDIVIDE_SPECIFIED", 0 },
      { "VTK_SUBDIVIDE_LENGTH", 1 },
      { "VTK_TCOORDS_OFF", 0 },
      { "VTK_TCOORDS_FROM_NORMALIZED_LENGTH", 1 },
      { "VTK_TCOORDS_FROM_LENGTH", 2 },
      { "VTK_TCOORDS_FROM_SCALARS", 3 },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkSplineFilter>(vtkSplineFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSplineFilter_class) {
  emscripten::class_<vtkSplineFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkSplineFilter")
    .smart_ptr<vtkSmartPointer<vtkSplineFilter>>("vtkSmartPointer<vtkSplineFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSplineFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplineFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSplineFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSplineFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSplineFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplineFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSplineFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaximumNumberOfSubdivisions", &vtkSplineFilter::SetMaximumNumberOfSubdivisions)
    .function("GetMaximumNumberOfSubdivisionsMinValue", &vtkSplineFilter::GetMaximumNumberOfSubdivisionsMinValue)
    .function("GetMaximumNumberOfSubdivisionsMaxValue", &vtkSplineFilter::GetMaximumNumberOfSubdivisionsMaxValue)
    .function("GetMaximumNumberOfSubdivisions", &vtkSplineFilter::GetMaximumNumberOfSubdivisions)
    .function("SetSubdivide", &vtkSplineFilter::SetSubdivide)
    .function("GetSubdivideMinValue", &vtkSplineFilter::GetSubdivideMinValue)
    .function("GetSubdivideMaxValue", &vtkSplineFilter::GetSubdivideMaxValue)
    .function("GetSubdivide", &vtkSplineFilter::GetSubdivide)
    .function("SetSubdivideToSpecified", &vtkSplineFilter::SetSubdivideToSpecified)
    .function("SetSubdivideToLength", &vtkSplineFilter::SetSubdivideToLength)
    .function("GetSubdivideAsString", emscripten::optional_override([](vtkSplineFilter& self) -> std::string {  return self.GetSubdivideAsString();}))
    .function("SetNumberOfSubdivisions", &vtkSplineFilter::SetNumberOfSubdivisions)
    .function("GetNumberOfSubdivisionsMinValue", &vtkSplineFilter::GetNumberOfSubdivisionsMinValue)
    .function("GetNumberOfSubdivisionsMaxValue", &vtkSplineFilter::GetNumberOfSubdivisionsMaxValue)
    .function("GetNumberOfSubdivisions", &vtkSplineFilter::GetNumberOfSubdivisions)
    .function("SetLength", &vtkSplineFilter::SetLength)
    .function("GetLengthMinValue", &vtkSplineFilter::GetLengthMinValue)
    .function("GetLengthMaxValue", &vtkSplineFilter::GetLengthMaxValue)
    .function("GetLength", &vtkSplineFilter::GetLength)
    .function("SetSpline", &vtkSplineFilter::SetSpline, emscripten::allow_raw_pointers())
    .function("GetSpline", &vtkSplineFilter::GetSpline, emscripten::allow_raw_pointers())
    .function("SetGenerateTCoords", &vtkSplineFilter::SetGenerateTCoords)
    .function("GetGenerateTCoordsMinValue", &vtkSplineFilter::GetGenerateTCoordsMinValue)
    .function("GetGenerateTCoordsMaxValue", &vtkSplineFilter::GetGenerateTCoordsMaxValue)
    .function("GetGenerateTCoords", &vtkSplineFilter::GetGenerateTCoords)
    .function("SetGenerateTCoordsToOff", &vtkSplineFilter::SetGenerateTCoordsToOff)
    .function("SetGenerateTCoordsToNormalizedLength", &vtkSplineFilter::SetGenerateTCoordsToNormalizedLength)
    .function("SetGenerateTCoordsToUseLength", &vtkSplineFilter::SetGenerateTCoordsToUseLength)
    .function("SetGenerateTCoordsToUseScalars", &vtkSplineFilter::SetGenerateTCoordsToUseScalars)
    .function("GetGenerateTCoordsAsString", emscripten::optional_override([](vtkSplineFilter& self) -> std::string {  return self.GetGenerateTCoordsAsString();}))
    .function("SetTextureLength", &vtkSplineFilter::SetTextureLength)
    .function("GetTextureLengthMinValue", &vtkSplineFilter::GetTextureLengthMinValue)
    .function("GetTextureLengthMaxValue", &vtkSplineFilter::GetTextureLengthMaxValue)
    .function("GetTextureLength", &vtkSplineFilter::GetTextureLength)
    .function("SetOutputPointsPrecision", &vtkSplineFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkSplineFilter::GetOutputPointsPrecision);
}
