// JavaScript wrapper for vtkSimple2DLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkSimple2DLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkSimple2DLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSimple2DLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkSimple2DLayoutStrategy>(vtkSimple2DLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSimple2DLayoutStrategy_class) {
  emscripten::class_<vtkSimple2DLayoutStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkSimple2DLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkSimple2DLayoutStrategy>>("vtkSmartPointer<vtkSimple2DLayoutStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSimple2DLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimple2DLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSimple2DLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSimple2DLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSimple2DLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimple2DLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSimple2DLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRandomSeed", &vtkSimple2DLayoutStrategy::SetRandomSeed)
    .function("GetRandomSeedMinValue", &vtkSimple2DLayoutStrategy::GetRandomSeedMinValue)
    .function("GetRandomSeedMaxValue", &vtkSimple2DLayoutStrategy::GetRandomSeedMaxValue)
    .function("GetRandomSeed", &vtkSimple2DLayoutStrategy::GetRandomSeed)
    .function("SetMaxNumberOfIterations", &vtkSimple2DLayoutStrategy::SetMaxNumberOfIterations)
    .function("GetMaxNumberOfIterationsMinValue", &vtkSimple2DLayoutStrategy::GetMaxNumberOfIterationsMinValue)
    .function("GetMaxNumberOfIterationsMaxValue", &vtkSimple2DLayoutStrategy::GetMaxNumberOfIterationsMaxValue)
    .function("GetMaxNumberOfIterations", &vtkSimple2DLayoutStrategy::GetMaxNumberOfIterations)
    .function("SetIterationsPerLayout", &vtkSimple2DLayoutStrategy::SetIterationsPerLayout)
    .function("GetIterationsPerLayoutMinValue", &vtkSimple2DLayoutStrategy::GetIterationsPerLayoutMinValue)
    .function("GetIterationsPerLayoutMaxValue", &vtkSimple2DLayoutStrategy::GetIterationsPerLayoutMaxValue)
    .function("GetIterationsPerLayout", &vtkSimple2DLayoutStrategy::GetIterationsPerLayout)
    .function("SetInitialTemperature", &vtkSimple2DLayoutStrategy::SetInitialTemperature)
    .function("GetInitialTemperatureMinValue", &vtkSimple2DLayoutStrategy::GetInitialTemperatureMinValue)
    .function("GetInitialTemperatureMaxValue", &vtkSimple2DLayoutStrategy::GetInitialTemperatureMaxValue)
    .function("GetInitialTemperature", &vtkSimple2DLayoutStrategy::GetInitialTemperature)
    .function("SetCoolDownRate", &vtkSimple2DLayoutStrategy::SetCoolDownRate)
    .function("GetCoolDownRateMinValue", &vtkSimple2DLayoutStrategy::GetCoolDownRateMinValue)
    .function("GetCoolDownRateMaxValue", &vtkSimple2DLayoutStrategy::GetCoolDownRateMaxValue)
    .function("GetCoolDownRate", &vtkSimple2DLayoutStrategy::GetCoolDownRate)
    .function("SetJitter", &vtkSimple2DLayoutStrategy::SetJitter)
    .function("GetJitter", &vtkSimple2DLayoutStrategy::GetJitter)
    .function("SetRestDistance", &vtkSimple2DLayoutStrategy::SetRestDistance)
    .function("GetRestDistance", &vtkSimple2DLayoutStrategy::GetRestDistance)
    .function("Initialize", &vtkSimple2DLayoutStrategy::Initialize)
    .function("Layout", &vtkSimple2DLayoutStrategy::Layout)
    .function("IsLayoutComplete", &vtkSimple2DLayoutStrategy::IsLayoutComplete);
}
