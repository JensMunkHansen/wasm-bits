// JavaScript wrapper for vtkClustering2DLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkClustering2DLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkClustering2DLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkClustering2DLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkClustering2DLayoutStrategy>(vtkClustering2DLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkClustering2DLayoutStrategy_class) {
  emscripten::class_<vtkClustering2DLayoutStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkClustering2DLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkClustering2DLayoutStrategy>>("vtkSmartPointer<vtkClustering2DLayoutStrategy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkClustering2DLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClustering2DLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkClustering2DLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkClustering2DLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkClustering2DLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClustering2DLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkClustering2DLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRandomSeed", &vtkClustering2DLayoutStrategy::SetRandomSeed)
    .function("GetRandomSeedMinValue", &vtkClustering2DLayoutStrategy::GetRandomSeedMinValue)
    .function("GetRandomSeedMaxValue", &vtkClustering2DLayoutStrategy::GetRandomSeedMaxValue)
    .function("GetRandomSeed", &vtkClustering2DLayoutStrategy::GetRandomSeed)
    .function("SetMaxNumberOfIterations", &vtkClustering2DLayoutStrategy::SetMaxNumberOfIterations)
    .function("GetMaxNumberOfIterationsMinValue", &vtkClustering2DLayoutStrategy::GetMaxNumberOfIterationsMinValue)
    .function("GetMaxNumberOfIterationsMaxValue", &vtkClustering2DLayoutStrategy::GetMaxNumberOfIterationsMaxValue)
    .function("GetMaxNumberOfIterations", &vtkClustering2DLayoutStrategy::GetMaxNumberOfIterations)
    .function("SetIterationsPerLayout", &vtkClustering2DLayoutStrategy::SetIterationsPerLayout)
    .function("GetIterationsPerLayoutMinValue", &vtkClustering2DLayoutStrategy::GetIterationsPerLayoutMinValue)
    .function("GetIterationsPerLayoutMaxValue", &vtkClustering2DLayoutStrategy::GetIterationsPerLayoutMaxValue)
    .function("GetIterationsPerLayout", &vtkClustering2DLayoutStrategy::GetIterationsPerLayout)
    .function("SetInitialTemperature", &vtkClustering2DLayoutStrategy::SetInitialTemperature)
    .function("GetInitialTemperatureMinValue", &vtkClustering2DLayoutStrategy::GetInitialTemperatureMinValue)
    .function("GetInitialTemperatureMaxValue", &vtkClustering2DLayoutStrategy::GetInitialTemperatureMaxValue)
    .function("GetInitialTemperature", &vtkClustering2DLayoutStrategy::GetInitialTemperature)
    .function("SetCoolDownRate", &vtkClustering2DLayoutStrategy::SetCoolDownRate)
    .function("GetCoolDownRateMinValue", &vtkClustering2DLayoutStrategy::GetCoolDownRateMinValue)
    .function("GetCoolDownRateMaxValue", &vtkClustering2DLayoutStrategy::GetCoolDownRateMaxValue)
    .function("GetCoolDownRate", &vtkClustering2DLayoutStrategy::GetCoolDownRate)
    .function("SetRestDistance", &vtkClustering2DLayoutStrategy::SetRestDistance)
    .function("GetRestDistance", &vtkClustering2DLayoutStrategy::GetRestDistance)
    .function("Initialize", &vtkClustering2DLayoutStrategy::Initialize)
    .function("Layout", &vtkClustering2DLayoutStrategy::Layout)
    .function("IsLayoutComplete", &vtkClustering2DLayoutStrategy::IsLayoutComplete);
}
