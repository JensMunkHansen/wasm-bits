// JavaScript wrapper for vtkLagrangianMatidaIntegrationModel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkLagrangianMatidaIntegrationModelEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkLagrangianMatidaIntegrationModel.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLagrangianParticle.h"
#include "vtkDataSet.h"
#include "vtkLagrangianMatidaIntegrationModel.h"

template<> void emscripten::internal::raw_destructor<vtkLagrangianMatidaIntegrationModel>(vtkLagrangianMatidaIntegrationModel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLagrangianMatidaIntegrationModel_class) {
  emscripten::class_<vtkLagrangianMatidaIntegrationModel, emscripten::base<vtkLagrangianBasicIntegrationModel>>("vtkLagrangianMatidaIntegrationModel")
    .smart_ptr<vtkSmartPointer<vtkLagrangianMatidaIntegrationModel>>("vtkSmartPointer<vtkLagrangianMatidaIntegrationModel>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLagrangianMatidaIntegrationModel>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangianMatidaIntegrationModel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLagrangianMatidaIntegrationModel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLagrangianMatidaIntegrationModel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLagrangianMatidaIntegrationModel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangianMatidaIntegrationModel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLagrangianMatidaIntegrationModel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGravity", emscripten::select_overload<void(vtkLagrangianMatidaIntegrationModel&, double, double, double)>([](vtkLagrangianMatidaIntegrationModel& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetGravity( arg_0, arg_1, arg_2); }))
    .function("FunctionValues", emscripten::select_overload<int(vtkLagrangianMatidaIntegrationModel&, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([](vtkLagrangianMatidaIntegrationModel& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> int { return self.FunctionValues(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<void*>(arg_2)); }))
    .function("FunctionValues", emscripten::select_overload<int(vtkLagrangianMatidaIntegrationModel&, std::uintptr_t, std::uintptr_t)>([](vtkLagrangianMatidaIntegrationModel& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> int { return self.FunctionValues(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double))); }));
}
