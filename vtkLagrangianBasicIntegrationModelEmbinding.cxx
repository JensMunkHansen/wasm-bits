// JavaScript wrapper for vtkLagrangianBasicIntegrationModel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkLagrangianBasicIntegrationModelEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkLagrangianBasicIntegrationModel.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractCellLocator.h"
#include "vtkLagrangianParticleTracker.h"
#include "vtkDataSet.h"
#include "vtkLagrangianParticle.h"
#include "vtkStringArray.h"
#include "vtkIntArray.h"
#include "vtkDoubleArray.h"
#include "vtkInitialValueProblemSolver.h"
#include "vtkPolyData.h"
#include "vtkDataObject.h"
#include "vtkAbstractArray.h"
#include "vtkPointData.h"
#include "vtkFieldData.h"
#include "vtkLagrangianBasicIntegrationModel.h"

EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkLagrangianBasicIntegrationModel_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkLagrangianBasicIntegrationModel>(vtkLagrangianBasicIntegrationModel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLagrangianBasicIntegrationModel_class) {
  using SurfaceType=vtkLagrangianBasicIntegrationModel::SurfaceType;
  using VariableStep=vtkLagrangianBasicIntegrationModel::VariableStep;
  emscripten::class_<vtkLagrangianBasicIntegrationModel, emscripten::base<vtkFunctionSet>>("vtkLagrangianBasicIntegrationModel")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangianBasicIntegrationModel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLagrangianBasicIntegrationModel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLagrangianBasicIntegrationModel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLagrangianBasicIntegrationModel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangianBasicIntegrationModel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLagrangianBasicIntegrationModel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("FunctionValues", emscripten::select_overload<int(vtkLagrangianBasicIntegrationModel&, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([](vtkLagrangianBasicIntegrationModel& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> int { return self.FunctionValues(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<void*>(arg_2)); }))
    .function("FunctionValues", emscripten::select_overload<int(vtkLagrangianBasicIntegrationModel&, std::uintptr_t, std::uintptr_t)>([](vtkLagrangianBasicIntegrationModel& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> int { return self.FunctionValues(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double))); }))
    .function("SetLocator", &vtkLagrangianBasicIntegrationModel::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkLagrangianBasicIntegrationModel::GetLocator, emscripten::allow_raw_pointers())
    .function("GetLocatorsBuilt", &vtkLagrangianBasicIntegrationModel::GetLocatorsBuilt)
    .function("SetLocatorsBuilt", &vtkLagrangianBasicIntegrationModel::SetLocatorsBuilt)
    .function("SetTracker", &vtkLagrangianBasicIntegrationModel::SetTracker, emscripten::allow_raw_pointers())
    .function("AddDataSet", &vtkLagrangianBasicIntegrationModel::AddDataSet, emscripten::allow_raw_pointers())
    .function("ClearDataSets", &vtkLagrangianBasicIntegrationModel::ClearDataSets)
    .function("SetUseInitialIntegrationTime", &vtkLagrangianBasicIntegrationModel::SetUseInitialIntegrationTime)
    .function("GetUseInitialIntegrationTime", &vtkLagrangianBasicIntegrationModel::GetUseInitialIntegrationTime)
    .function("UseInitialIntegrationTimeOn", &vtkLagrangianBasicIntegrationModel::UseInitialIntegrationTimeOn)
    .function("UseInitialIntegrationTimeOff", &vtkLagrangianBasicIntegrationModel::UseInitialIntegrationTimeOff)
    .function("GetTolerance", &vtkLagrangianBasicIntegrationModel::GetTolerance)
    .function("GetLocatorTolerance", &vtkLagrangianBasicIntegrationModel::GetLocatorTolerance)
    .function("SetInputArrayToProcess", emscripten::optional_override([](vtkLagrangianBasicIntegrationModel& self, int arg_0, int arg_1, int arg_2, int arg_3, const std::string & arg_4) -> void {  return self.SetInputArrayToProcess( arg_0, arg_1, arg_2, arg_3, arg_4.c_str());}))
    .function("SetNonPlanarQuadSupport", &vtkLagrangianBasicIntegrationModel::SetNonPlanarQuadSupport)
    .function("GetNonPlanarQuadSupport", &vtkLagrangianBasicIntegrationModel::GetNonPlanarQuadSupport)
    .function("NonPlanarQuadSupportOn", &vtkLagrangianBasicIntegrationModel::NonPlanarQuadSupportOn)
    .function("NonPlanarQuadSupportOff", &vtkLagrangianBasicIntegrationModel::NonPlanarQuadSupportOff)
    .function("GetSeedArrayNames", &vtkLagrangianBasicIntegrationModel::GetSeedArrayNames, emscripten::allow_raw_pointers())
    .function("GetSeedArrayComps", &vtkLagrangianBasicIntegrationModel::GetSeedArrayComps, emscripten::allow_raw_pointers())
    .function("GetSeedArrayTypes", &vtkLagrangianBasicIntegrationModel::GetSeedArrayTypes, emscripten::allow_raw_pointers())
    .function("GetSurfaceArrayNames", &vtkLagrangianBasicIntegrationModel::GetSurfaceArrayNames, emscripten::allow_raw_pointers())
    .function("GetSurfaceArrayTypes", &vtkLagrangianBasicIntegrationModel::GetSurfaceArrayTypes, emscripten::allow_raw_pointers())
    .function("GetSurfaceArrayEnumValues", &vtkLagrangianBasicIntegrationModel::GetSurfaceArrayEnumValues, emscripten::allow_raw_pointers())
    .function("GetSurfaceArrayDefaultValues", &vtkLagrangianBasicIntegrationModel::GetSurfaceArrayDefaultValues, emscripten::allow_raw_pointers())
    .function("GetSurfaceArrayComps", &vtkLagrangianBasicIntegrationModel::GetSurfaceArrayComps, emscripten::allow_raw_pointers())
    .function("GetWeightsSize", &vtkLagrangianBasicIntegrationModel::GetWeightsSize)
    .function("InitializeThreadedData", &vtkLagrangianBasicIntegrationModel::InitializeThreadedData, emscripten::allow_raw_pointers())
    .function("FinalizeOutputs", &vtkLagrangianBasicIntegrationModel::FinalizeOutputs, emscripten::allow_raw_pointers())
    .function("PreParticleInitalization", &vtkLagrangianBasicIntegrationModel::PreParticleInitalization)
    .function("GetSeedArray", emscripten::select_overload<vtkAbstractArray*(vtkLagrangianBasicIntegrationModel&, int, vtkPointData*)>([](vtkLagrangianBasicIntegrationModel& self, int arg_0, vtkPointData* arg_1) -> vtkAbstractArray* { return self.GetSeedArray( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetNumberOfTrackedUserData", &vtkLagrangianBasicIntegrationModel::SetNumberOfTrackedUserData)
    .function("GetNumberOfTrackedUserData", &vtkLagrangianBasicIntegrationModel::GetNumberOfTrackedUserData)
    .function("InitializePathData", &vtkLagrangianBasicIntegrationModel::InitializePathData, emscripten::allow_raw_pointers())
    .function("InitializeInteractionData", &vtkLagrangianBasicIntegrationModel::InitializeInteractionData, emscripten::allow_raw_pointers())
    .function("InitializeParticleData", &vtkLagrangianBasicIntegrationModel::InitializeParticleData, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkLagrangianBasicIntegrationModel_0_2_constants) {
    typedef vtkLagrangianBasicIntegrationModel::SurfaceType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkLagrangianBasicIntegrationModel_SurfaceType_SURFACE_TYPE_MODEL", vtkLagrangianBasicIntegrationModel::SURFACE_TYPE_MODEL },
      { "vtkLagrangianBasicIntegrationModel_SurfaceType_SURFACE_TYPE_TERM", vtkLagrangianBasicIntegrationModel::SURFACE_TYPE_TERM },
      { "vtkLagrangianBasicIntegrationModel_SurfaceType_SURFACE_TYPE_BOUNCE", vtkLagrangianBasicIntegrationModel::SURFACE_TYPE_BOUNCE },
      { "vtkLagrangianBasicIntegrationModel_SurfaceType_SURFACE_TYPE_BREAK", vtkLagrangianBasicIntegrationModel::SURFACE_TYPE_BREAK },
      { "vtkLagrangianBasicIntegrationModel_SurfaceType_SURFACE_TYPE_PASS", vtkLagrangianBasicIntegrationModel::SURFACE_TYPE_PASS },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkLagrangianBasicIntegrationModel_1_2_constants) {
    typedef vtkLagrangianBasicIntegrationModel::VariableStep cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkLagrangianBasicIntegrationModel_VariableStep_VARIABLE_STEP_PREV", vtkLagrangianBasicIntegrationModel::VARIABLE_STEP_PREV },
      { "vtkLagrangianBasicIntegrationModel_VariableStep_VARIABLE_STEP_CURRENT", vtkLagrangianBasicIntegrationModel::VARIABLE_STEP_CURRENT },
      { "vtkLagrangianBasicIntegrationModel_VariableStep_VARIABLE_STEP_NEXT", vtkLagrangianBasicIntegrationModel::VARIABLE_STEP_NEXT },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
