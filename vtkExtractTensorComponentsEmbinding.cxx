// JavaScript wrapper for vtkExtractTensorComponents with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractTensorComponentsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractTensorComponents.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractTensorComponents.h"

EMSCRIPTEN_BINDINGS(vtkFiltersExtraction_vtkExtractTensorComponents_0_1_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "VTK_EXTRACT_COMPONENT", 0 },
      { "VTK_EXTRACT_EFFECTIVE_STRESS", 1 },
      { "VTK_EXTRACT_DETERMINANT", 2 },
      { "VTK_EXTRACT_NONNEGATIVE_DETERMINANT", 3 },
      { "VTK_EXTRACT_TRACE", 4 },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkExtractTensorComponents>(vtkExtractTensorComponents * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractTensorComponents_class) {
  emscripten::class_<vtkExtractTensorComponents, emscripten::base<vtkDataSetAlgorithm>>("vtkExtractTensorComponents")
    .smart_ptr<vtkSmartPointer<vtkExtractTensorComponents>>("vtkSmartPointer<vtkExtractTensorComponents>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractTensorComponents>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractTensorComponents::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractTensorComponents& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractTensorComponents::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractTensorComponents::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractTensorComponents::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractTensorComponents& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPassTensorsToOutput", &vtkExtractTensorComponents::SetPassTensorsToOutput)
    .function("GetPassTensorsToOutput", &vtkExtractTensorComponents::GetPassTensorsToOutput)
    .function("PassTensorsToOutputOn", &vtkExtractTensorComponents::PassTensorsToOutputOn)
    .function("PassTensorsToOutputOff", &vtkExtractTensorComponents::PassTensorsToOutputOff)
    .function("SetExtractScalars", &vtkExtractTensorComponents::SetExtractScalars)
    .function("GetExtractScalars", &vtkExtractTensorComponents::GetExtractScalars)
    .function("ExtractScalarsOn", &vtkExtractTensorComponents::ExtractScalarsOn)
    .function("ExtractScalarsOff", &vtkExtractTensorComponents::ExtractScalarsOff)
    .function("SetScalarComponents", emscripten::select_overload<void(vtkExtractTensorComponents&, int, int)>([](vtkExtractTensorComponents& self, int arg_0, int arg_1) -> void { return self.SetScalarComponents( arg_0, arg_1); }))
    .function("SetScalarMode", &vtkExtractTensorComponents::SetScalarMode)
    .function("GetScalarMode", &vtkExtractTensorComponents::GetScalarMode)
    .function("SetScalarModeToComponent", &vtkExtractTensorComponents::SetScalarModeToComponent)
    .function("SetScalarModeToEffectiveStress", &vtkExtractTensorComponents::SetScalarModeToEffectiveStress)
    .function("SetScalarModeToDeterminant", &vtkExtractTensorComponents::SetScalarModeToDeterminant)
    .function("SetScalarModeToNonNegativeDeterminant", &vtkExtractTensorComponents::SetScalarModeToNonNegativeDeterminant)
    .function("SetScalarModeToTrace", &vtkExtractTensorComponents::SetScalarModeToTrace)
    .function("ScalarIsComponent", &vtkExtractTensorComponents::ScalarIsComponent)
    .function("ScalarIsEffectiveStress", &vtkExtractTensorComponents::ScalarIsEffectiveStress)
    .function("ScalarIsDeterminant", &vtkExtractTensorComponents::ScalarIsDeterminant)
    .function("ScalarIsNonNegativeDeterminant", &vtkExtractTensorComponents::ScalarIsNonNegativeDeterminant)
    .function("ScalarIsTrace", &vtkExtractTensorComponents::ScalarIsTrace)
    .function("SetExtractVectors", &vtkExtractTensorComponents::SetExtractVectors)
    .function("GetExtractVectors", &vtkExtractTensorComponents::GetExtractVectors)
    .function("ExtractVectorsOn", &vtkExtractTensorComponents::ExtractVectorsOn)
    .function("ExtractVectorsOff", &vtkExtractTensorComponents::ExtractVectorsOff)
    .function("SetVectorComponents", emscripten::select_overload<void(vtkExtractTensorComponents&, int, int, int, int, int, int)>([](vtkExtractTensorComponents& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetVectorComponents( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetExtractNormals", &vtkExtractTensorComponents::SetExtractNormals)
    .function("GetExtractNormals", &vtkExtractTensorComponents::GetExtractNormals)
    .function("ExtractNormalsOn", &vtkExtractTensorComponents::ExtractNormalsOn)
    .function("ExtractNormalsOff", &vtkExtractTensorComponents::ExtractNormalsOff)
    .function("SetNormalizeNormals", &vtkExtractTensorComponents::SetNormalizeNormals)
    .function("GetNormalizeNormals", &vtkExtractTensorComponents::GetNormalizeNormals)
    .function("NormalizeNormalsOn", &vtkExtractTensorComponents::NormalizeNormalsOn)
    .function("NormalizeNormalsOff", &vtkExtractTensorComponents::NormalizeNormalsOff)
    .function("SetNormalComponents", emscripten::select_overload<void(vtkExtractTensorComponents&, int, int, int, int, int, int)>([](vtkExtractTensorComponents& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetNormalComponents( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetExtractTCoords", &vtkExtractTensorComponents::SetExtractTCoords)
    .function("GetExtractTCoords", &vtkExtractTensorComponents::GetExtractTCoords)
    .function("ExtractTCoordsOn", &vtkExtractTensorComponents::ExtractTCoordsOn)
    .function("ExtractTCoordsOff", &vtkExtractTensorComponents::ExtractTCoordsOff)
    .function("SetNumberOfTCoords", &vtkExtractTensorComponents::SetNumberOfTCoords)
    .function("GetNumberOfTCoordsMinValue", &vtkExtractTensorComponents::GetNumberOfTCoordsMinValue)
    .function("GetNumberOfTCoordsMaxValue", &vtkExtractTensorComponents::GetNumberOfTCoordsMaxValue)
    .function("GetNumberOfTCoords", &vtkExtractTensorComponents::GetNumberOfTCoords)
    .function("SetTCoordComponents", emscripten::select_overload<void(vtkExtractTensorComponents&, int, int, int, int, int, int)>([](vtkExtractTensorComponents& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetTCoordComponents( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetOutputPrecision", &vtkExtractTensorComponents::SetOutputPrecision)
    .function("GetOutputPrecision", &vtkExtractTensorComponents::GetOutputPrecision);
}
