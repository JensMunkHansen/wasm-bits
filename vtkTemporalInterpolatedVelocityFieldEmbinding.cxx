// JavaScript wrapper for vtkTemporalInterpolatedVelocityField with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkTemporalInterpolatedVelocityFieldEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkTemporalInterpolatedVelocityField.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositeDataSet.h"
#include "vtkDataSet.h"
#include "vtkPointData.h"
#include "vtkGenericCell.h"
#include "vtkDoubleArray.h"
#include "vtkFindCellStrategy.h"
#include "vtkTemporalInterpolatedVelocityField.h"

EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkTemporalInterpolatedVelocityField_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkTemporalInterpolatedVelocityField>(vtkTemporalInterpolatedVelocityField * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTemporalInterpolatedVelocityField_class) {
  using IDStates=vtkTemporalInterpolatedVelocityField::IDStates;
  using MeshOverTimeTypes=vtkTemporalInterpolatedVelocityField::MeshOverTimeTypes;
  emscripten::class_<vtkTemporalInterpolatedVelocityField, emscripten::base<vtkFunctionSet>>("vtkTemporalInterpolatedVelocityField")
    .smart_ptr<vtkSmartPointer<vtkTemporalInterpolatedVelocityField>>("vtkSmartPointer<vtkTemporalInterpolatedVelocityField>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTemporalInterpolatedVelocityField>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalInterpolatedVelocityField::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTemporalInterpolatedVelocityField& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTemporalInterpolatedVelocityField::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTemporalInterpolatedVelocityField::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalInterpolatedVelocityField::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTemporalInterpolatedVelocityField& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMeshOverTime", &vtkTemporalInterpolatedVelocityField::SetMeshOverTime)
    .function("GetMeshOverTimeMinValue", &vtkTemporalInterpolatedVelocityField::GetMeshOverTimeMinValue)
    .function("GetMeshOverTimeMaxValue", &vtkTemporalInterpolatedVelocityField::GetMeshOverTimeMaxValue)
    .function("SetMeshOverTimeToDifferent", &vtkTemporalInterpolatedVelocityField::SetMeshOverTimeToDifferent)
    .function("SetMeshOverTimeToStatic", &vtkTemporalInterpolatedVelocityField::SetMeshOverTimeToStatic)
    .function("SetMeshOverTimeToLinearTransformation", &vtkTemporalInterpolatedVelocityField::SetMeshOverTimeToLinearTransformation)
    .function("SetMeshOverTimeToSameTopology", &vtkTemporalInterpolatedVelocityField::SetMeshOverTimeToSameTopology)
    .function("GetMeshOverTime", &vtkTemporalInterpolatedVelocityField::GetMeshOverTime)
    .function("Initialize", &vtkTemporalInterpolatedVelocityField::Initialize, emscripten::allow_raw_pointers())
    .function("CopyParameters", &vtkTemporalInterpolatedVelocityField::CopyParameters, emscripten::allow_raw_pointers())
    .function("FunctionValues", emscripten::select_overload<int(vtkTemporalInterpolatedVelocityField&, std::uintptr_t, std::uintptr_t)>([](vtkTemporalInterpolatedVelocityField& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> int { return self.FunctionValues(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double))); }))
    .function("FunctionValues", emscripten::select_overload<int(vtkTemporalInterpolatedVelocityField&, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([](vtkTemporalInterpolatedVelocityField& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> int { return self.FunctionValues(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<void*>(arg_2)); }))
    .function("FunctionValuesAtT", emscripten::optional_override([](vtkTemporalInterpolatedVelocityField& self, int arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> int {  return self.FunctionValuesAtT( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)));}))
    .function("SelectVectors", emscripten::optional_override([](vtkTemporalInterpolatedVelocityField& self, const std::string & arg_0) -> void {  return self.SelectVectors( arg_0.c_str());}))
    .function("AddDataSetAtTime", &vtkTemporalInterpolatedVelocityField::AddDataSetAtTime, emscripten::allow_raw_pointers())
    .function("ClearCache", &vtkTemporalInterpolatedVelocityField::ClearCache)
    .function("TestPoint", emscripten::optional_override([](vtkTemporalInterpolatedVelocityField& self, std::uintptr_t arg_0) -> int {  return self.TestPoint(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("QuickTestPoint", emscripten::optional_override([](vtkTemporalInterpolatedVelocityField& self, std::uintptr_t arg_0) -> int {  return self.QuickTestPoint(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("GetCurrentWeight", &vtkTemporalInterpolatedVelocityField::GetCurrentWeight)
    .function("InterpolatePoint", emscripten::select_overload<bool(vtkTemporalInterpolatedVelocityField&, vtkPointData*, vtkPointData*, int)>([](vtkTemporalInterpolatedVelocityField& self, vtkPointData* arg_0, vtkPointData* arg_1, int arg_2) -> bool { return self.InterpolatePoint( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("InterpolatePoint", emscripten::select_overload<bool(vtkTemporalInterpolatedVelocityField&, int, vtkPointData*, int)>([](vtkTemporalInterpolatedVelocityField& self, int arg_0, vtkPointData* arg_1, int arg_2) -> bool { return self.InterpolatePoint( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("ShowCacheResults", &vtkTemporalInterpolatedVelocityField::ShowCacheResults)
    .function("AdvanceOneTimeStep", &vtkTemporalInterpolatedVelocityField::AdvanceOneTimeStep)
    .function("SetFindCellStrategy", &vtkTemporalInterpolatedVelocityField::SetFindCellStrategy, emscripten::allow_raw_pointers())
    .function("GetFindCellStrategy", &vtkTemporalInterpolatedVelocityField::GetFindCellStrategy, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkTemporalInterpolatedVelocityField_0_2_constants) {
    typedef vtkTemporalInterpolatedVelocityField::IDStates cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkTemporalInterpolatedVelocityField_IDStates_INSIDE_ALL", vtkTemporalInterpolatedVelocityField::INSIDE_ALL },
      { "vtkTemporalInterpolatedVelocityField_IDStates_OUTSIDE_ALL", vtkTemporalInterpolatedVelocityField::OUTSIDE_ALL },
      { "vtkTemporalInterpolatedVelocityField_IDStates_OUTSIDE_T0", vtkTemporalInterpolatedVelocityField::OUTSIDE_T0 },
      { "vtkTemporalInterpolatedVelocityField_IDStates_OUTSIDE_T1", vtkTemporalInterpolatedVelocityField::OUTSIDE_T1 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkTemporalInterpolatedVelocityField_1_2_constants) {
    typedef vtkTemporalInterpolatedVelocityField::MeshOverTimeTypes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkTemporalInterpolatedVelocityField_MeshOverTimeTypes_DIFFERENT", vtkTemporalInterpolatedVelocityField::DIFFERENT },
      { "vtkTemporalInterpolatedVelocityField_MeshOverTimeTypes_STATIC", vtkTemporalInterpolatedVelocityField::STATIC },
      { "vtkTemporalInterpolatedVelocityField_MeshOverTimeTypes_LINEAR_TRANSFORMATION", vtkTemporalInterpolatedVelocityField::LINEAR_TRANSFORMATION },
      { "vtkTemporalInterpolatedVelocityField_MeshOverTimeTypes_SAME_TOPOLOGY", vtkTemporalInterpolatedVelocityField::SAME_TOPOLOGY },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
