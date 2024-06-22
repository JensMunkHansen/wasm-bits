// JavaScript wrapper for vtkFast2DLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkFast2DLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkFast2DLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFast2DLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkFast2DLayoutStrategy>(vtkFast2DLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFast2DLayoutStrategy_class) {
  emscripten::class_<vtkFast2DLayoutStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkFast2DLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkFast2DLayoutStrategy>>("vtkSmartPointer<vtkFast2DLayoutStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFast2DLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFast2DLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFast2DLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFast2DLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFast2DLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFast2DLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFast2DLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRandomSeed", &vtkFast2DLayoutStrategy::SetRandomSeed)
    .function("GetRandomSeedMinValue", &vtkFast2DLayoutStrategy::GetRandomSeedMinValue)
    .function("GetRandomSeedMaxValue", &vtkFast2DLayoutStrategy::GetRandomSeedMaxValue)
    .function("GetRandomSeed", &vtkFast2DLayoutStrategy::GetRandomSeed)
    .function("SetMaxNumberOfIterations", &vtkFast2DLayoutStrategy::SetMaxNumberOfIterations)
    .function("GetMaxNumberOfIterationsMinValue", &vtkFast2DLayoutStrategy::GetMaxNumberOfIterationsMinValue)
    .function("GetMaxNumberOfIterationsMaxValue", &vtkFast2DLayoutStrategy::GetMaxNumberOfIterationsMaxValue)
    .function("GetMaxNumberOfIterations", &vtkFast2DLayoutStrategy::GetMaxNumberOfIterations)
    .function("SetIterationsPerLayout", &vtkFast2DLayoutStrategy::SetIterationsPerLayout)
    .function("GetIterationsPerLayoutMinValue", &vtkFast2DLayoutStrategy::GetIterationsPerLayoutMinValue)
    .function("GetIterationsPerLayoutMaxValue", &vtkFast2DLayoutStrategy::GetIterationsPerLayoutMaxValue)
    .function("GetIterationsPerLayout", &vtkFast2DLayoutStrategy::GetIterationsPerLayout)
    .function("SetInitialTemperature", &vtkFast2DLayoutStrategy::SetInitialTemperature)
    .function("GetInitialTemperatureMinValue", &vtkFast2DLayoutStrategy::GetInitialTemperatureMinValue)
    .function("GetInitialTemperatureMaxValue", &vtkFast2DLayoutStrategy::GetInitialTemperatureMaxValue)
    .function("GetInitialTemperature", &vtkFast2DLayoutStrategy::GetInitialTemperature)
    .function("SetCoolDownRate", &vtkFast2DLayoutStrategy::SetCoolDownRate)
    .function("GetCoolDownRateMinValue", &vtkFast2DLayoutStrategy::GetCoolDownRateMinValue)
    .function("GetCoolDownRateMaxValue", &vtkFast2DLayoutStrategy::GetCoolDownRateMaxValue)
    .function("GetCoolDownRate", &vtkFast2DLayoutStrategy::GetCoolDownRate)
    .function("SetRestDistance", &vtkFast2DLayoutStrategy::SetRestDistance)
    .function("GetRestDistance", &vtkFast2DLayoutStrategy::GetRestDistance)
    .function("Initialize", &vtkFast2DLayoutStrategy::Initialize)
    .function("Layout", &vtkFast2DLayoutStrategy::Layout)
    .function("IsLayoutComplete", &vtkFast2DLayoutStrategy::IsLayoutComplete);
}
