// JavaScript wrapper for vtkCommunity2DLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkCommunity2DLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkCommunity2DLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCommunity2DLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkCommunity2DLayoutStrategy>(vtkCommunity2DLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCommunity2DLayoutStrategy_class) {
  emscripten::class_<vtkCommunity2DLayoutStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkCommunity2DLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkCommunity2DLayoutStrategy>>("vtkSmartPointer<vtkCommunity2DLayoutStrategy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCommunity2DLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCommunity2DLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCommunity2DLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCommunity2DLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCommunity2DLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCommunity2DLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCommunity2DLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRandomSeed", &vtkCommunity2DLayoutStrategy::SetRandomSeed)
    .function("GetRandomSeedMinValue", &vtkCommunity2DLayoutStrategy::GetRandomSeedMinValue)
    .function("GetRandomSeedMaxValue", &vtkCommunity2DLayoutStrategy::GetRandomSeedMaxValue)
    .function("GetRandomSeed", &vtkCommunity2DLayoutStrategy::GetRandomSeed)
    .function("SetMaxNumberOfIterations", &vtkCommunity2DLayoutStrategy::SetMaxNumberOfIterations)
    .function("GetMaxNumberOfIterationsMinValue", &vtkCommunity2DLayoutStrategy::GetMaxNumberOfIterationsMinValue)
    .function("GetMaxNumberOfIterationsMaxValue", &vtkCommunity2DLayoutStrategy::GetMaxNumberOfIterationsMaxValue)
    .function("GetMaxNumberOfIterations", &vtkCommunity2DLayoutStrategy::GetMaxNumberOfIterations)
    .function("SetIterationsPerLayout", &vtkCommunity2DLayoutStrategy::SetIterationsPerLayout)
    .function("GetIterationsPerLayoutMinValue", &vtkCommunity2DLayoutStrategy::GetIterationsPerLayoutMinValue)
    .function("GetIterationsPerLayoutMaxValue", &vtkCommunity2DLayoutStrategy::GetIterationsPerLayoutMaxValue)
    .function("GetIterationsPerLayout", &vtkCommunity2DLayoutStrategy::GetIterationsPerLayout)
    .function("SetInitialTemperature", &vtkCommunity2DLayoutStrategy::SetInitialTemperature)
    .function("GetInitialTemperatureMinValue", &vtkCommunity2DLayoutStrategy::GetInitialTemperatureMinValue)
    .function("GetInitialTemperatureMaxValue", &vtkCommunity2DLayoutStrategy::GetInitialTemperatureMaxValue)
    .function("GetInitialTemperature", &vtkCommunity2DLayoutStrategy::GetInitialTemperature)
    .function("SetCoolDownRate", &vtkCommunity2DLayoutStrategy::SetCoolDownRate)
    .function("GetCoolDownRateMinValue", &vtkCommunity2DLayoutStrategy::GetCoolDownRateMinValue)
    .function("GetCoolDownRateMaxValue", &vtkCommunity2DLayoutStrategy::GetCoolDownRateMaxValue)
    .function("GetCoolDownRate", &vtkCommunity2DLayoutStrategy::GetCoolDownRate)
    .function("SetRestDistance", &vtkCommunity2DLayoutStrategy::SetRestDistance)
    .function("GetRestDistance", &vtkCommunity2DLayoutStrategy::GetRestDistance)
    .function("Initialize", &vtkCommunity2DLayoutStrategy::Initialize)
    .function("Layout", &vtkCommunity2DLayoutStrategy::Layout)
    .function("IsLayoutComplete", &vtkCommunity2DLayoutStrategy::IsLayoutComplete)
    .function("GetCommunityArrayName", emscripten::optional_override([](vtkCommunity2DLayoutStrategy& self) -> std::string {  return self.GetCommunityArrayName();}))
    .function("SetCommunityArrayName", emscripten::optional_override([](vtkCommunity2DLayoutStrategy& self, const std::string & arg_0) -> void {  return self.SetCommunityArrayName( arg_0.c_str());}))
    .function("SetCommunityStrength", &vtkCommunity2DLayoutStrategy::SetCommunityStrength)
    .function("GetCommunityStrengthMinValue", &vtkCommunity2DLayoutStrategy::GetCommunityStrengthMinValue)
    .function("GetCommunityStrengthMaxValue", &vtkCommunity2DLayoutStrategy::GetCommunityStrengthMaxValue)
    .function("GetCommunityStrength", &vtkCommunity2DLayoutStrategy::GetCommunityStrength);
}
