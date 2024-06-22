// JavaScript wrapper for vtkConstrainedSmoothingFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkConstrainedSmoothingFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkConstrainedSmoothingFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellArray.h"
#include "vtkConstrainedSmoothingFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkConstrainedSmoothingFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkConstrainedSmoothingFilter>(vtkConstrainedSmoothingFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConstrainedSmoothingFilter_class) {
  using ConstraintStrategyType=vtkConstrainedSmoothingFilter::ConstraintStrategyType;
  emscripten::class_<vtkConstrainedSmoothingFilter, emscripten::base<vtkPointSetAlgorithm>>("vtkConstrainedSmoothingFilter")
    .smart_ptr<vtkSmartPointer<vtkConstrainedSmoothingFilter>>("vtkSmartPointer<vtkConstrainedSmoothingFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkConstrainedSmoothingFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstrainedSmoothingFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConstrainedSmoothingFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConstrainedSmoothingFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConstrainedSmoothingFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstrainedSmoothingFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConstrainedSmoothingFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetConvergence", &vtkConstrainedSmoothingFilter::SetConvergence)
    .function("GetConvergenceMinValue", &vtkConstrainedSmoothingFilter::GetConvergenceMinValue)
    .function("GetConvergenceMaxValue", &vtkConstrainedSmoothingFilter::GetConvergenceMaxValue)
    .function("GetConvergence", &vtkConstrainedSmoothingFilter::GetConvergence)
    .function("SetNumberOfIterations", &vtkConstrainedSmoothingFilter::SetNumberOfIterations)
    .function("GetNumberOfIterationsMinValue", &vtkConstrainedSmoothingFilter::GetNumberOfIterationsMinValue)
    .function("GetNumberOfIterationsMaxValue", &vtkConstrainedSmoothingFilter::GetNumberOfIterationsMaxValue)
    .function("GetNumberOfIterations", &vtkConstrainedSmoothingFilter::GetNumberOfIterations)
    .function("SetRelaxationFactor", &vtkConstrainedSmoothingFilter::SetRelaxationFactor)
    .function("GetRelaxationFactor", &vtkConstrainedSmoothingFilter::GetRelaxationFactor)
    .function("SetConstraintStrategy", &vtkConstrainedSmoothingFilter::SetConstraintStrategy)
    .function("GetConstraintStrategyMinValue", &vtkConstrainedSmoothingFilter::GetConstraintStrategyMinValue)
    .function("GetConstraintStrategyMaxValue", &vtkConstrainedSmoothingFilter::GetConstraintStrategyMaxValue)
    .function("GetConstraintStrategy", &vtkConstrainedSmoothingFilter::GetConstraintStrategy)
    .function("SetConstraintStrategyToDefault", &vtkConstrainedSmoothingFilter::SetConstraintStrategyToDefault)
    .function("SetConstraintStrategyToConstraintDistance", &vtkConstrainedSmoothingFilter::SetConstraintStrategyToConstraintDistance)
    .function("SetConstraintStrategyToConstraintBox", &vtkConstrainedSmoothingFilter::SetConstraintStrategyToConstraintBox)
    .function("SetConstraintStrategyToConstraintArray", &vtkConstrainedSmoothingFilter::SetConstraintStrategyToConstraintArray)
    .function("SetConstraintDistance", &vtkConstrainedSmoothingFilter::SetConstraintDistance)
    .function("GetConstraintDistanceMinValue", &vtkConstrainedSmoothingFilter::GetConstraintDistanceMinValue)
    .function("GetConstraintDistanceMaxValue", &vtkConstrainedSmoothingFilter::GetConstraintDistanceMaxValue)
    .function("GetConstraintDistance", &vtkConstrainedSmoothingFilter::GetConstraintDistance)
    .function("SetConstraintBox", emscripten::select_overload<void(vtkConstrainedSmoothingFilter&, double, double, double)>([](vtkConstrainedSmoothingFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetConstraintBox( arg_0, arg_1, arg_2); }))
    .function("SetSmoothingStencils", &vtkConstrainedSmoothingFilter::SetSmoothingStencils, emscripten::allow_raw_pointers())
    .function("GetSmoothingStencils", &vtkConstrainedSmoothingFilter::GetSmoothingStencils, emscripten::allow_raw_pointers())
    .function("SetGenerateErrorScalars", &vtkConstrainedSmoothingFilter::SetGenerateErrorScalars)
    .function("GetGenerateErrorScalars", &vtkConstrainedSmoothingFilter::GetGenerateErrorScalars)
    .function("GenerateErrorScalarsOn", &vtkConstrainedSmoothingFilter::GenerateErrorScalarsOn)
    .function("GenerateErrorScalarsOff", &vtkConstrainedSmoothingFilter::GenerateErrorScalarsOff)
    .function("SetGenerateErrorVectors", &vtkConstrainedSmoothingFilter::SetGenerateErrorVectors)
    .function("GetGenerateErrorVectors", &vtkConstrainedSmoothingFilter::GetGenerateErrorVectors)
    .function("GenerateErrorVectorsOn", &vtkConstrainedSmoothingFilter::GenerateErrorVectorsOn)
    .function("GenerateErrorVectorsOff", &vtkConstrainedSmoothingFilter::GenerateErrorVectorsOff)
    .function("SetOutputPointsPrecision", &vtkConstrainedSmoothingFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkConstrainedSmoothingFilter::GetOutputPointsPrecision);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkConstrainedSmoothingFilter_0_2_constants) {
    typedef vtkConstrainedSmoothingFilter::ConstraintStrategyType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkConstrainedSmoothingFilter_ConstraintStrategyType_DEFAULT", vtkConstrainedSmoothingFilter::DEFAULT },
      { "vtkConstrainedSmoothingFilter_ConstraintStrategyType_CONSTRAINT_DISTANCE", vtkConstrainedSmoothingFilter::CONSTRAINT_DISTANCE },
      { "vtkConstrainedSmoothingFilter_ConstraintStrategyType_CONSTRAINT_BOX", vtkConstrainedSmoothingFilter::CONSTRAINT_BOX },
      { "vtkConstrainedSmoothingFilter_ConstraintStrategyType_CONSTRAINT_ARRAY", vtkConstrainedSmoothingFilter::CONSTRAINT_ARRAY },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
