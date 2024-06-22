// JavaScript wrapper for vtkHyperTreeGridGradient with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkHyperTreeGridGradientEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkHyperTreeGridGradient.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridGradient.h"

EMSCRIPTEN_BINDINGS(vtkFiltersHyperTree_vtkHyperTreeGridGradient_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridGradient>(vtkHyperTreeGridGradient * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridGradient_class) {
  using ComputeMode=vtkHyperTreeGridGradient::ComputeMode;
  emscripten::class_<vtkHyperTreeGridGradient, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridGradient")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridGradient>>("vtkSmartPointer<vtkHyperTreeGridGradient>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridGradient>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridGradient::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridGradient& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridGradient::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridGradient::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridGradient::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridGradient& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetComputeGradient", &vtkHyperTreeGridGradient::SetComputeGradient)
    .function("GetComputeGradient", &vtkHyperTreeGridGradient::GetComputeGradient)
    .function("ComputeGradientOn", &vtkHyperTreeGridGradient::ComputeGradientOn)
    .function("ComputeGradientOff", &vtkHyperTreeGridGradient::ComputeGradientOff)
    .function("SetGradientArrayName", emscripten::optional_override([](vtkHyperTreeGridGradient& self, const std::string & arg_0) -> void {  return self.SetGradientArrayName( arg_0.c_str());}))
    .function("GetGradientArrayName", emscripten::optional_override([](vtkHyperTreeGridGradient& self) -> std::string {  return self.GetGradientArrayName();}))
    .function("SetMode", &vtkHyperTreeGridGradient::SetMode)
    .function("GetModeMinValue", &vtkHyperTreeGridGradient::GetModeMinValue)
    .function("GetModeMaxValue", &vtkHyperTreeGridGradient::GetModeMaxValue)
    .function("GetMode", &vtkHyperTreeGridGradient::GetMode)
    .function("SetExtensiveComputation", &vtkHyperTreeGridGradient::SetExtensiveComputation)
    .function("GetExtensiveComputation", &vtkHyperTreeGridGradient::GetExtensiveComputation)
    .function("ExtensiveComputationOn", &vtkHyperTreeGridGradient::ExtensiveComputationOn)
    .function("ExtensiveComputationOff", &vtkHyperTreeGridGradient::ExtensiveComputationOff)
    .function("SetComputeDivergence", &vtkHyperTreeGridGradient::SetComputeDivergence)
    .function("GetComputeDivergence", &vtkHyperTreeGridGradient::GetComputeDivergence)
    .function("ComputeDivergenceOn", &vtkHyperTreeGridGradient::ComputeDivergenceOn)
    .function("ComputeDivergenceOff", &vtkHyperTreeGridGradient::ComputeDivergenceOff)
    .function("SetDivergenceArrayName", emscripten::optional_override([](vtkHyperTreeGridGradient& self, const std::string & arg_0) -> void {  return self.SetDivergenceArrayName( arg_0.c_str());}))
    .function("GetDivergenceArrayName", emscripten::optional_override([](vtkHyperTreeGridGradient& self) -> std::string {  return self.GetDivergenceArrayName();}))
    .function("SetComputeVorticity", &vtkHyperTreeGridGradient::SetComputeVorticity)
    .function("GetComputeVorticity", &vtkHyperTreeGridGradient::GetComputeVorticity)
    .function("ComputeVorticityOn", &vtkHyperTreeGridGradient::ComputeVorticityOn)
    .function("ComputeVorticityOff", &vtkHyperTreeGridGradient::ComputeVorticityOff)
    .function("SetVorticityArrayName", emscripten::optional_override([](vtkHyperTreeGridGradient& self, const std::string & arg_0) -> void {  return self.SetVorticityArrayName( arg_0.c_str());}))
    .function("GetVorticityArrayName", emscripten::optional_override([](vtkHyperTreeGridGradient& self) -> std::string {  return self.GetVorticityArrayName();}))
    .function("SetComputeQCriterion", &vtkHyperTreeGridGradient::SetComputeQCriterion)
    .function("GetComputeQCriterion", &vtkHyperTreeGridGradient::GetComputeQCriterion)
    .function("ComputeQCriterionOn", &vtkHyperTreeGridGradient::ComputeQCriterionOn)
    .function("ComputeQCriterionOff", &vtkHyperTreeGridGradient::ComputeQCriterionOff)
    .function("SetQCriterionArrayName", emscripten::optional_override([](vtkHyperTreeGridGradient& self, const std::string & arg_0) -> void {  return self.SetQCriterionArrayName( arg_0.c_str());}))
    .function("GetQCriterionArrayName", emscripten::optional_override([](vtkHyperTreeGridGradient& self) -> std::string {  return self.GetQCriterionArrayName();}));
}
EMSCRIPTEN_BINDINGS(vtkFiltersHyperTree_vtkHyperTreeGridGradient_0_2_constants) {
    typedef vtkHyperTreeGridGradient::ComputeMode cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkHyperTreeGridGradient_ComputeMode_UNLIMITED", vtkHyperTreeGridGradient::UNLIMITED },
      { "vtkHyperTreeGridGradient_ComputeMode_UNSTRUCTURED", vtkHyperTreeGridGradient::UNSTRUCTURED },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
