// JavaScript wrapper for vtkAbstractInterpolatedVelocityField with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkAbstractInterpolatedVelocityFieldEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkAbstractInterpolatedVelocityField.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositeDataSet.h"
#include "vtkDataSet.h"
#include "vtkFindCellStrategy.h"
#include "vtkAbstractInterpolatedVelocityField.h"

EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkAbstractInterpolatedVelocityField_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkAbstractInterpolatedVelocityField>(vtkAbstractInterpolatedVelocityField * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractInterpolatedVelocityField_class) {
  using VelocityFieldInitializationState=vtkAbstractInterpolatedVelocityField::VelocityFieldInitializationState;
  emscripten::class_<vtkAbstractInterpolatedVelocityField, emscripten::base<vtkFunctionSet>>("vtkAbstractInterpolatedVelocityField")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractInterpolatedVelocityField::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractInterpolatedVelocityField& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractInterpolatedVelocityField::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractInterpolatedVelocityField::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractInterpolatedVelocityField::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractInterpolatedVelocityField& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkAbstractInterpolatedVelocityField::Initialize, emscripten::allow_raw_pointers())
    .function("GetInitializationState", &vtkAbstractInterpolatedVelocityField::GetInitializationState)
    .function("SetCaching", &vtkAbstractInterpolatedVelocityField::SetCaching)
    .function("GetCaching", &vtkAbstractInterpolatedVelocityField::GetCaching)
    .function("GetCacheHit", &vtkAbstractInterpolatedVelocityField::GetCacheHit)
    .function("GetCacheMiss", &vtkAbstractInterpolatedVelocityField::GetCacheMiss)
    .function("GetLastDataSet", &vtkAbstractInterpolatedVelocityField::GetLastDataSet, emscripten::allow_raw_pointers())
    .function("GetLastCellId", &vtkAbstractInterpolatedVelocityField::GetLastCellId)
    .function("SetLastCellId", emscripten::select_overload<void(vtkAbstractInterpolatedVelocityField&, int)>([](vtkAbstractInterpolatedVelocityField& self, int arg_0) -> void { return self.SetLastCellId( arg_0); }))
    .function("GetVectorsSelection", emscripten::optional_override([](vtkAbstractInterpolatedVelocityField& self) -> std::string {  return self.GetVectorsSelection();}))
    .function("GetVectorsType", &vtkAbstractInterpolatedVelocityField::GetVectorsType)
    .function("SelectVectors", emscripten::optional_override([](vtkAbstractInterpolatedVelocityField& self, int arg_0, const std::string & arg_1) -> void {  return self.SelectVectors( arg_0, arg_1.c_str());}))
    .function("SetNormalizeVector", &vtkAbstractInterpolatedVelocityField::SetNormalizeVector)
    .function("GetNormalizeVector", &vtkAbstractInterpolatedVelocityField::GetNormalizeVector)
    .function("SetForceSurfaceTangentVector", &vtkAbstractInterpolatedVelocityField::SetForceSurfaceTangentVector)
    .function("GetForceSurfaceTangentVector", &vtkAbstractInterpolatedVelocityField::GetForceSurfaceTangentVector)
    .function("SetSurfaceDataset", &vtkAbstractInterpolatedVelocityField::SetSurfaceDataset)
    .function("GetSurfaceDataset", &vtkAbstractInterpolatedVelocityField::GetSurfaceDataset)
    .function("CopyParameters", &vtkAbstractInterpolatedVelocityField::CopyParameters, emscripten::allow_raw_pointers())
    .function("ClearLastCellId", &vtkAbstractInterpolatedVelocityField::ClearLastCellId)
    .function("GetLastWeights", emscripten::optional_override([](vtkAbstractInterpolatedVelocityField& self, std::uintptr_t arg_0) -> int {  return self.GetLastWeights(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetFindCellStrategy", &vtkAbstractInterpolatedVelocityField::SetFindCellStrategy, emscripten::allow_raw_pointers())
    .function("GetFindCellStrategy", &vtkAbstractInterpolatedVelocityField::GetFindCellStrategy, emscripten::allow_raw_pointers())
    .function("FunctionValues", emscripten::select_overload<int(vtkAbstractInterpolatedVelocityField&, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([](vtkAbstractInterpolatedVelocityField& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> int { return self.FunctionValues(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<void*>(arg_2)); }));
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkAbstractInterpolatedVelocityField_0_2_constants) {
    typedef vtkAbstractInterpolatedVelocityField::VelocityFieldInitializationState cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkAbstractInterpolatedVelocityField_VelocityFieldInitializationState_NOT_INITIALIZED", vtkAbstractInterpolatedVelocityField::NOT_INITIALIZED },
      { "vtkAbstractInterpolatedVelocityField_VelocityFieldInitializationState_INITIALIZE_ALL_DATASETS", vtkAbstractInterpolatedVelocityField::INITIALIZE_ALL_DATASETS },
      { "vtkAbstractInterpolatedVelocityField_VelocityFieldInitializationState_SELF_INITIALIZE", vtkAbstractInterpolatedVelocityField::SELF_INITIALIZE },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
