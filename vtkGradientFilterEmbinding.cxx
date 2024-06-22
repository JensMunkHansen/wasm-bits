// JavaScript wrapper for vtkGradientFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkGradientFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkGradientFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGradientFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkGradientFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkGradientFilter>(vtkGradientFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGradientFilter_class) {
  using ContributingCellEnum=vtkGradientFilter::ContributingCellEnum;
  using ReplacementValueEnum=vtkGradientFilter::ReplacementValueEnum;
  emscripten::class_<vtkGradientFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkGradientFilter")
    .smart_ptr<vtkSmartPointer<vtkGradientFilter>>("vtkSmartPointer<vtkGradientFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGradientFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGradientFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGradientFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGradientFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGradientFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGradientFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGradientFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputScalars", emscripten::select_overload<void(vtkGradientFilter&, int, const std::string &)>([](vtkGradientFilter& self, int arg_0, const std::string & arg_1) -> void { return self.SetInputScalars( arg_0, arg_1.c_str()); }))
    .function("SetInputScalars", emscripten::select_overload<void(vtkGradientFilter&, int, int)>([](vtkGradientFilter& self, int arg_0, int arg_1) -> void { return self.SetInputScalars( arg_0, arg_1); }))
    .function("GetResultArrayName", emscripten::optional_override([](vtkGradientFilter& self) -> std::string {  return self.GetResultArrayName();}))
    .function("SetResultArrayName", emscripten::optional_override([](vtkGradientFilter& self, const std::string & arg_0) -> void {  return self.SetResultArrayName( arg_0.c_str());}))
    .function("GetDivergenceArrayName", emscripten::optional_override([](vtkGradientFilter& self) -> std::string {  return self.GetDivergenceArrayName();}))
    .function("SetDivergenceArrayName", emscripten::optional_override([](vtkGradientFilter& self, const std::string & arg_0) -> void {  return self.SetDivergenceArrayName( arg_0.c_str());}))
    .function("GetVorticityArrayName", emscripten::optional_override([](vtkGradientFilter& self) -> std::string {  return self.GetVorticityArrayName();}))
    .function("SetVorticityArrayName", emscripten::optional_override([](vtkGradientFilter& self, const std::string & arg_0) -> void {  return self.SetVorticityArrayName( arg_0.c_str());}))
    .function("GetQCriterionArrayName", emscripten::optional_override([](vtkGradientFilter& self) -> std::string {  return self.GetQCriterionArrayName();}))
    .function("SetQCriterionArrayName", emscripten::optional_override([](vtkGradientFilter& self, const std::string & arg_0) -> void {  return self.SetQCriterionArrayName( arg_0.c_str());}))
    .function("GetFasterApproximation", &vtkGradientFilter::GetFasterApproximation)
    .function("SetFasterApproximation", &vtkGradientFilter::SetFasterApproximation)
    .function("FasterApproximationOn", &vtkGradientFilter::FasterApproximationOn)
    .function("FasterApproximationOff", &vtkGradientFilter::FasterApproximationOff)
    .function("SetComputeGradient", &vtkGradientFilter::SetComputeGradient)
    .function("GetComputeGradient", &vtkGradientFilter::GetComputeGradient)
    .function("ComputeGradientOn", &vtkGradientFilter::ComputeGradientOn)
    .function("ComputeGradientOff", &vtkGradientFilter::ComputeGradientOff)
    .function("SetComputeDivergence", &vtkGradientFilter::SetComputeDivergence)
    .function("GetComputeDivergence", &vtkGradientFilter::GetComputeDivergence)
    .function("ComputeDivergenceOn", &vtkGradientFilter::ComputeDivergenceOn)
    .function("ComputeDivergenceOff", &vtkGradientFilter::ComputeDivergenceOff)
    .function("SetComputeVorticity", &vtkGradientFilter::SetComputeVorticity)
    .function("GetComputeVorticity", &vtkGradientFilter::GetComputeVorticity)
    .function("ComputeVorticityOn", &vtkGradientFilter::ComputeVorticityOn)
    .function("ComputeVorticityOff", &vtkGradientFilter::ComputeVorticityOff)
    .function("SetComputeQCriterion", &vtkGradientFilter::SetComputeQCriterion)
    .function("GetComputeQCriterion", &vtkGradientFilter::GetComputeQCriterion)
    .function("ComputeQCriterionOn", &vtkGradientFilter::ComputeQCriterionOn)
    .function("ComputeQCriterionOff", &vtkGradientFilter::ComputeQCriterionOff)
    .function("SetContributingCellOption", &vtkGradientFilter::SetContributingCellOption)
    .function("GetContributingCellOptionMinValue", &vtkGradientFilter::GetContributingCellOptionMinValue)
    .function("GetContributingCellOptionMaxValue", &vtkGradientFilter::GetContributingCellOptionMaxValue)
    .function("GetContributingCellOption", &vtkGradientFilter::GetContributingCellOption)
    .function("SetReplacementValueOption", &vtkGradientFilter::SetReplacementValueOption)
    .function("GetReplacementValueOptionMinValue", &vtkGradientFilter::GetReplacementValueOptionMinValue)
    .function("GetReplacementValueOptionMaxValue", &vtkGradientFilter::GetReplacementValueOptionMaxValue)
    .function("GetReplacementValueOption", &vtkGradientFilter::GetReplacementValueOption);
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkGradientFilter_0_2_constants) {
    typedef vtkGradientFilter::ContributingCellEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkGradientFilter_ContributingCellEnum_All", vtkGradientFilter::All },
      { "vtkGradientFilter_ContributingCellEnum_Patch", vtkGradientFilter::Patch },
      { "vtkGradientFilter_ContributingCellEnum_DataSetMax", vtkGradientFilter::DataSetMax },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkGradientFilter_1_2_constants) {
    typedef vtkGradientFilter::ReplacementValueEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkGradientFilter_ReplacementValueEnum_Zero", vtkGradientFilter::Zero },
      { "vtkGradientFilter_ReplacementValueEnum_NaN", vtkGradientFilter::NaN },
      { "vtkGradientFilter_ReplacementValueEnum_DataTypeMin", vtkGradientFilter::DataTypeMin },
      { "vtkGradientFilter_ReplacementValueEnum_DataTypeMax", vtkGradientFilter::DataTypeMax },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
