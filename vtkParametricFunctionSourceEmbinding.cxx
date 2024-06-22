// JavaScript wrapper for vtkParametricFunctionSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkParametricFunctionSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkParametricFunctionSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricFunction.h"
#include "vtkParametricFunctionSource.h"

EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkParametricFunctionSource_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkParametricFunctionSource>(vtkParametricFunctionSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricFunctionSource_class) {
  using SCALAR_MODE=vtkParametricFunctionSource::SCALAR_MODE;
  emscripten::class_<vtkParametricFunctionSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkParametricFunctionSource")
    .smart_ptr<vtkSmartPointer<vtkParametricFunctionSource>>("vtkSmartPointer<vtkParametricFunctionSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParametricFunctionSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricFunctionSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricFunctionSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricFunctionSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricFunctionSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricFunctionSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricFunctionSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetParametricFunction", &vtkParametricFunctionSource::SetParametricFunction, emscripten::allow_raw_pointers())
    .function("GetParametricFunction", &vtkParametricFunctionSource::GetParametricFunction, emscripten::allow_raw_pointers())
    .function("SetUResolution", &vtkParametricFunctionSource::SetUResolution)
    .function("GetUResolutionMinValue", &vtkParametricFunctionSource::GetUResolutionMinValue)
    .function("GetUResolutionMaxValue", &vtkParametricFunctionSource::GetUResolutionMaxValue)
    .function("GetUResolution", &vtkParametricFunctionSource::GetUResolution)
    .function("SetVResolution", &vtkParametricFunctionSource::SetVResolution)
    .function("GetVResolutionMinValue", &vtkParametricFunctionSource::GetVResolutionMinValue)
    .function("GetVResolutionMaxValue", &vtkParametricFunctionSource::GetVResolutionMaxValue)
    .function("GetVResolution", &vtkParametricFunctionSource::GetVResolution)
    .function("SetWResolution", &vtkParametricFunctionSource::SetWResolution)
    .function("GetWResolutionMinValue", &vtkParametricFunctionSource::GetWResolutionMinValue)
    .function("GetWResolutionMaxValue", &vtkParametricFunctionSource::GetWResolutionMaxValue)
    .function("GetWResolution", &vtkParametricFunctionSource::GetWResolution)
    .function("GenerateTextureCoordinatesOn", &vtkParametricFunctionSource::GenerateTextureCoordinatesOn)
    .function("GenerateTextureCoordinatesOff", &vtkParametricFunctionSource::GenerateTextureCoordinatesOff)
    .function("SetGenerateTextureCoordinates", &vtkParametricFunctionSource::SetGenerateTextureCoordinates)
    .function("GetGenerateTextureCoordinatesMinValue", &vtkParametricFunctionSource::GetGenerateTextureCoordinatesMinValue)
    .function("GetGenerateTextureCoordinatesMaxValue", &vtkParametricFunctionSource::GetGenerateTextureCoordinatesMaxValue)
    .function("GetGenerateTextureCoordinates", &vtkParametricFunctionSource::GetGenerateTextureCoordinates)
    .function("GenerateNormalsOn", &vtkParametricFunctionSource::GenerateNormalsOn)
    .function("GenerateNormalsOff", &vtkParametricFunctionSource::GenerateNormalsOff)
    .function("SetGenerateNormals", &vtkParametricFunctionSource::SetGenerateNormals)
    .function("GetGenerateNormalsMinValue", &vtkParametricFunctionSource::GetGenerateNormalsMinValue)
    .function("GetGenerateNormalsMaxValue", &vtkParametricFunctionSource::GetGenerateNormalsMaxValue)
    .function("GetGenerateNormals", &vtkParametricFunctionSource::GetGenerateNormals)
    .function("SetScalarMode", &vtkParametricFunctionSource::SetScalarMode)
    .function("GetScalarModeMinValue", &vtkParametricFunctionSource::GetScalarModeMinValue)
    .function("GetScalarModeMaxValue", &vtkParametricFunctionSource::GetScalarModeMaxValue)
    .function("GetScalarMode", &vtkParametricFunctionSource::GetScalarMode)
    .function("SetScalarModeToNone", &vtkParametricFunctionSource::SetScalarModeToNone)
    .function("SetScalarModeToU", &vtkParametricFunctionSource::SetScalarModeToU)
    .function("SetScalarModeToV", &vtkParametricFunctionSource::SetScalarModeToV)
    .function("SetScalarModeToU0", &vtkParametricFunctionSource::SetScalarModeToU0)
    .function("SetScalarModeToV0", &vtkParametricFunctionSource::SetScalarModeToV0)
    .function("SetScalarModeToU0V0", &vtkParametricFunctionSource::SetScalarModeToU0V0)
    .function("SetScalarModeToModulus", &vtkParametricFunctionSource::SetScalarModeToModulus)
    .function("SetScalarModeToPhase", &vtkParametricFunctionSource::SetScalarModeToPhase)
    .function("SetScalarModeToQuadrant", &vtkParametricFunctionSource::SetScalarModeToQuadrant)
    .function("SetScalarModeToX", &vtkParametricFunctionSource::SetScalarModeToX)
    .function("SetScalarModeToY", &vtkParametricFunctionSource::SetScalarModeToY)
    .function("SetScalarModeToZ", &vtkParametricFunctionSource::SetScalarModeToZ)
    .function("SetScalarModeToDistance", &vtkParametricFunctionSource::SetScalarModeToDistance)
    .function("SetScalarModeToFunctionDefined", &vtkParametricFunctionSource::SetScalarModeToFunctionDefined)
    .function("GetMTime", &vtkParametricFunctionSource::GetMTime)
    .function("SetOutputPointsPrecision", &vtkParametricFunctionSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkParametricFunctionSource::GetOutputPointsPrecision);
}
EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkParametricFunctionSource_0_2_constants) {
    typedef vtkParametricFunctionSource::SCALAR_MODE cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[14] = {
      { "vtkParametricFunctionSource_SCALAR_MODE_SCALAR_NONE", vtkParametricFunctionSource::SCALAR_NONE },
      { "vtkParametricFunctionSource_SCALAR_MODE_SCALAR_U", vtkParametricFunctionSource::SCALAR_U },
      { "vtkParametricFunctionSource_SCALAR_MODE_SCALAR_V", vtkParametricFunctionSource::SCALAR_V },
      { "vtkParametricFunctionSource_SCALAR_MODE_SCALAR_U0", vtkParametricFunctionSource::SCALAR_U0 },
      { "vtkParametricFunctionSource_SCALAR_MODE_SCALAR_V0", vtkParametricFunctionSource::SCALAR_V0 },
      { "vtkParametricFunctionSource_SCALAR_MODE_SCALAR_U0V0", vtkParametricFunctionSource::SCALAR_U0V0 },
      { "vtkParametricFunctionSource_SCALAR_MODE_SCALAR_MODULUS", vtkParametricFunctionSource::SCALAR_MODULUS },
      { "vtkParametricFunctionSource_SCALAR_MODE_SCALAR_PHASE", vtkParametricFunctionSource::SCALAR_PHASE },
      { "vtkParametricFunctionSource_SCALAR_MODE_SCALAR_QUADRANT", vtkParametricFunctionSource::SCALAR_QUADRANT },
      { "vtkParametricFunctionSource_SCALAR_MODE_SCALAR_X", vtkParametricFunctionSource::SCALAR_X },
      { "vtkParametricFunctionSource_SCALAR_MODE_SCALAR_Y", vtkParametricFunctionSource::SCALAR_Y },
      { "vtkParametricFunctionSource_SCALAR_MODE_SCALAR_Z", vtkParametricFunctionSource::SCALAR_Z },
      { "vtkParametricFunctionSource_SCALAR_MODE_SCALAR_DISTANCE", vtkParametricFunctionSource::SCALAR_DISTANCE },
      { "vtkParametricFunctionSource_SCALAR_MODE_SCALAR_FUNCTION_DEFINED", vtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED },
  };
  for (int c = 0; c < 14; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
