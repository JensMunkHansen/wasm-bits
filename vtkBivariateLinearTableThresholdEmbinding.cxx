// JavaScript wrapper for vtkBivariateLinearTableThreshold with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkBivariateLinearTableThresholdEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkBivariateLinearTableThreshold.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdTypeArray.h"
#include "vtkBivariateLinearTableThreshold.h"

EMSCRIPTEN_BINDINGS(vtkFiltersStatistics_vtkBivariateLinearTableThreshold_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkBivariateLinearTableThreshold>(vtkBivariateLinearTableThreshold * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBivariateLinearTableThreshold_class) {
  using OutputPorts=vtkBivariateLinearTableThreshold::OutputPorts;
  emscripten::class_<vtkBivariateLinearTableThreshold, emscripten::base<vtkTableAlgorithm>>("vtkBivariateLinearTableThreshold")
    .smart_ptr<vtkSmartPointer<vtkBivariateLinearTableThreshold>>("vtkSmartPointer<vtkBivariateLinearTableThreshold>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBivariateLinearTableThreshold>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBivariateLinearTableThreshold::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBivariateLinearTableThreshold& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBivariateLinearTableThreshold::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBivariateLinearTableThreshold::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBivariateLinearTableThreshold::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBivariateLinearTableThreshold& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInclusive", &vtkBivariateLinearTableThreshold::SetInclusive)
    .function("GetInclusive", &vtkBivariateLinearTableThreshold::GetInclusive)
    .function("AddColumnToThreshold", &vtkBivariateLinearTableThreshold::AddColumnToThreshold)
    .function("GetNumberOfColumnsToThreshold", &vtkBivariateLinearTableThreshold::GetNumberOfColumnsToThreshold)
    .function("ClearColumnsToThreshold", &vtkBivariateLinearTableThreshold::ClearColumnsToThreshold)
    .function("GetSelectedRowIds", &vtkBivariateLinearTableThreshold::GetSelectedRowIds, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkBivariateLinearTableThreshold::Initialize)
    .function("AddLineEquation", emscripten::select_overload<void(vtkBivariateLinearTableThreshold&, std::uintptr_t, std::uintptr_t)>([](vtkBivariateLinearTableThreshold& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> void { return self.AddLineEquation(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double))); }))
    .function("AddLineEquation", emscripten::select_overload<void(vtkBivariateLinearTableThreshold&, std::uintptr_t, double)>([](vtkBivariateLinearTableThreshold& self, std::uintptr_t arg_0, double arg_1) -> void { return self.AddLineEquation(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1); }))
    .function("AddLineEquation", emscripten::select_overload<void(vtkBivariateLinearTableThreshold&, double, double, double)>([](vtkBivariateLinearTableThreshold& self, double arg_0, double arg_1, double arg_2) -> void { return self.AddLineEquation( arg_0, arg_1, arg_2); }))
    .function("ClearLineEquations", &vtkBivariateLinearTableThreshold::ClearLineEquations)
    .function("GetLinearThresholdType", &vtkBivariateLinearTableThreshold::GetLinearThresholdType)
    .function("SetLinearThresholdType", &vtkBivariateLinearTableThreshold::SetLinearThresholdType)
    .function("SetLinearThresholdTypeToAbove", &vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToAbove)
    .function("SetLinearThresholdTypeToBelow", &vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToBelow)
    .function("SetLinearThresholdTypeToNear", &vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToNear)
    .function("SetLinearThresholdTypeToBetween", &vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToBetween)
    .function("SetColumnRanges", emscripten::select_overload<void(vtkBivariateLinearTableThreshold&, double, double)>([](vtkBivariateLinearTableThreshold& self, double arg_0, double arg_1) -> void { return self.SetColumnRanges( arg_0, arg_1); }))
    .function("SetDistanceThreshold", &vtkBivariateLinearTableThreshold::SetDistanceThreshold)
    .function("GetDistanceThreshold", &vtkBivariateLinearTableThreshold::GetDistanceThreshold)
    .function("SetUseNormalizedDistance", &vtkBivariateLinearTableThreshold::SetUseNormalizedDistance)
    .function("GetUseNormalizedDistance", &vtkBivariateLinearTableThreshold::GetUseNormalizedDistance)
    .function("UseNormalizedDistanceOn", &vtkBivariateLinearTableThreshold::UseNormalizedDistanceOn)
    .function("UseNormalizedDistanceOff", &vtkBivariateLinearTableThreshold::UseNormalizedDistanceOff)
    .class_function("ComputeImplicitLineFunction", emscripten::select_overload<void( std::uintptr_t, std::uintptr_t, std::uintptr_t)>([]( std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> void { return vtkBivariateLinearTableThreshold::ComputeImplicitLineFunction(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double))); }))
    .class_function("ComputeImplicitLineFunction", emscripten::select_overload<void( std::uintptr_t, double, std::uintptr_t)>([]( std::uintptr_t arg_0, double arg_1, std::uintptr_t arg_2) -> void { return vtkBivariateLinearTableThreshold::ComputeImplicitLineFunction(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double))); }));
}
EMSCRIPTEN_BINDINGS(vtkFiltersStatistics_vtkBivariateLinearTableThreshold_0_2_constants) {
    typedef vtkBivariateLinearTableThreshold::OutputPorts cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkBivariateLinearTableThreshold_OutputPorts_OUTPUT_ROW_IDS", vtkBivariateLinearTableThreshold::OUTPUT_ROW_IDS },
      { "vtkBivariateLinearTableThreshold_OutputPorts_OUTPUT_ROW_DATA", vtkBivariateLinearTableThreshold::OUTPUT_ROW_DATA },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersStatistics_vtkBivariateLinearTableThreshold_1_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkBivariateLinearTableThreshold_BLT_ABOVE", vtkBivariateLinearTableThreshold::BLT_ABOVE },
      { "vtkBivariateLinearTableThreshold_BLT_BELOW", vtkBivariateLinearTableThreshold::BLT_BELOW },
      { "vtkBivariateLinearTableThreshold_BLT_NEAR", vtkBivariateLinearTableThreshold::BLT_NEAR },
      { "vtkBivariateLinearTableThreshold_BLT_BETWEEN", vtkBivariateLinearTableThreshold::BLT_BETWEEN },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
