// JavaScript wrapper for vtkConstrained2DLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkConstrained2DLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkConstrained2DLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkConstrained2DLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkConstrained2DLayoutStrategy>(vtkConstrained2DLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConstrained2DLayoutStrategy_class) {
  emscripten::class_<vtkConstrained2DLayoutStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkConstrained2DLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkConstrained2DLayoutStrategy>>("vtkSmartPointer<vtkConstrained2DLayoutStrategy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkConstrained2DLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstrained2DLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConstrained2DLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConstrained2DLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConstrained2DLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstrained2DLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConstrained2DLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRandomSeed", &vtkConstrained2DLayoutStrategy::SetRandomSeed)
    .function("GetRandomSeedMinValue", &vtkConstrained2DLayoutStrategy::GetRandomSeedMinValue)
    .function("GetRandomSeedMaxValue", &vtkConstrained2DLayoutStrategy::GetRandomSeedMaxValue)
    .function("GetRandomSeed", &vtkConstrained2DLayoutStrategy::GetRandomSeed)
    .function("SetMaxNumberOfIterations", &vtkConstrained2DLayoutStrategy::SetMaxNumberOfIterations)
    .function("GetMaxNumberOfIterationsMinValue", &vtkConstrained2DLayoutStrategy::GetMaxNumberOfIterationsMinValue)
    .function("GetMaxNumberOfIterationsMaxValue", &vtkConstrained2DLayoutStrategy::GetMaxNumberOfIterationsMaxValue)
    .function("GetMaxNumberOfIterations", &vtkConstrained2DLayoutStrategy::GetMaxNumberOfIterations)
    .function("SetIterationsPerLayout", &vtkConstrained2DLayoutStrategy::SetIterationsPerLayout)
    .function("GetIterationsPerLayoutMinValue", &vtkConstrained2DLayoutStrategy::GetIterationsPerLayoutMinValue)
    .function("GetIterationsPerLayoutMaxValue", &vtkConstrained2DLayoutStrategy::GetIterationsPerLayoutMaxValue)
    .function("GetIterationsPerLayout", &vtkConstrained2DLayoutStrategy::GetIterationsPerLayout)
    .function("SetInitialTemperature", &vtkConstrained2DLayoutStrategy::SetInitialTemperature)
    .function("GetInitialTemperatureMinValue", &vtkConstrained2DLayoutStrategy::GetInitialTemperatureMinValue)
    .function("GetInitialTemperatureMaxValue", &vtkConstrained2DLayoutStrategy::GetInitialTemperatureMaxValue)
    .function("GetInitialTemperature", &vtkConstrained2DLayoutStrategy::GetInitialTemperature)
    .function("SetCoolDownRate", &vtkConstrained2DLayoutStrategy::SetCoolDownRate)
    .function("GetCoolDownRateMinValue", &vtkConstrained2DLayoutStrategy::GetCoolDownRateMinValue)
    .function("GetCoolDownRateMaxValue", &vtkConstrained2DLayoutStrategy::GetCoolDownRateMaxValue)
    .function("GetCoolDownRate", &vtkConstrained2DLayoutStrategy::GetCoolDownRate)
    .function("SetRestDistance", &vtkConstrained2DLayoutStrategy::SetRestDistance)
    .function("GetRestDistance", &vtkConstrained2DLayoutStrategy::GetRestDistance)
    .function("Initialize", &vtkConstrained2DLayoutStrategy::Initialize)
    .function("Layout", &vtkConstrained2DLayoutStrategy::Layout)
    .function("IsLayoutComplete", &vtkConstrained2DLayoutStrategy::IsLayoutComplete)
    .function("SetInputArrayName", emscripten::optional_override([](vtkConstrained2DLayoutStrategy& self, const std::string & arg_0) -> void {  return self.SetInputArrayName( arg_0.c_str());}))
    .function("GetInputArrayName", emscripten::optional_override([](vtkConstrained2DLayoutStrategy& self) -> std::string {  return self.GetInputArrayName();}));
}
