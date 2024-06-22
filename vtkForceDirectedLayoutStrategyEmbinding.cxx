// JavaScript wrapper for vtkForceDirectedLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkForceDirectedLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkForceDirectedLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkForceDirectedLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkForceDirectedLayoutStrategy>(vtkForceDirectedLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkForceDirectedLayoutStrategy_class) {
  emscripten::class_<vtkForceDirectedLayoutStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkForceDirectedLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkForceDirectedLayoutStrategy>>("vtkSmartPointer<vtkForceDirectedLayoutStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkForceDirectedLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkForceDirectedLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkForceDirectedLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkForceDirectedLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkForceDirectedLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkForceDirectedLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkForceDirectedLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRandomSeed", &vtkForceDirectedLayoutStrategy::SetRandomSeed)
    .function("GetRandomSeedMinValue", &vtkForceDirectedLayoutStrategy::GetRandomSeedMinValue)
    .function("GetRandomSeedMaxValue", &vtkForceDirectedLayoutStrategy::GetRandomSeedMaxValue)
    .function("GetRandomSeed", &vtkForceDirectedLayoutStrategy::GetRandomSeed)
    .function("SetGraphBounds", emscripten::select_overload<void(vtkForceDirectedLayoutStrategy&, double, double, double, double, double, double)>([](vtkForceDirectedLayoutStrategy& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetGraphBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetAutomaticBoundsComputation", &vtkForceDirectedLayoutStrategy::SetAutomaticBoundsComputation)
    .function("GetAutomaticBoundsComputation", &vtkForceDirectedLayoutStrategy::GetAutomaticBoundsComputation)
    .function("AutomaticBoundsComputationOn", &vtkForceDirectedLayoutStrategy::AutomaticBoundsComputationOn)
    .function("AutomaticBoundsComputationOff", &vtkForceDirectedLayoutStrategy::AutomaticBoundsComputationOff)
    .function("SetMaxNumberOfIterations", &vtkForceDirectedLayoutStrategy::SetMaxNumberOfIterations)
    .function("GetMaxNumberOfIterationsMinValue", &vtkForceDirectedLayoutStrategy::GetMaxNumberOfIterationsMinValue)
    .function("GetMaxNumberOfIterationsMaxValue", &vtkForceDirectedLayoutStrategy::GetMaxNumberOfIterationsMaxValue)
    .function("GetMaxNumberOfIterations", &vtkForceDirectedLayoutStrategy::GetMaxNumberOfIterations)
    .function("SetIterationsPerLayout", &vtkForceDirectedLayoutStrategy::SetIterationsPerLayout)
    .function("GetIterationsPerLayoutMinValue", &vtkForceDirectedLayoutStrategy::GetIterationsPerLayoutMinValue)
    .function("GetIterationsPerLayoutMaxValue", &vtkForceDirectedLayoutStrategy::GetIterationsPerLayoutMaxValue)
    .function("GetIterationsPerLayout", &vtkForceDirectedLayoutStrategy::GetIterationsPerLayout)
    .function("SetCoolDownRate", &vtkForceDirectedLayoutStrategy::SetCoolDownRate)
    .function("GetCoolDownRateMinValue", &vtkForceDirectedLayoutStrategy::GetCoolDownRateMinValue)
    .function("GetCoolDownRateMaxValue", &vtkForceDirectedLayoutStrategy::GetCoolDownRateMaxValue)
    .function("GetCoolDownRate", &vtkForceDirectedLayoutStrategy::GetCoolDownRate)
    .function("SetThreeDimensionalLayout", &vtkForceDirectedLayoutStrategy::SetThreeDimensionalLayout)
    .function("GetThreeDimensionalLayout", &vtkForceDirectedLayoutStrategy::GetThreeDimensionalLayout)
    .function("ThreeDimensionalLayoutOn", &vtkForceDirectedLayoutStrategy::ThreeDimensionalLayoutOn)
    .function("ThreeDimensionalLayoutOff", &vtkForceDirectedLayoutStrategy::ThreeDimensionalLayoutOff)
    .function("SetRandomInitialPoints", &vtkForceDirectedLayoutStrategy::SetRandomInitialPoints)
    .function("GetRandomInitialPoints", &vtkForceDirectedLayoutStrategy::GetRandomInitialPoints)
    .function("RandomInitialPointsOn", &vtkForceDirectedLayoutStrategy::RandomInitialPointsOn)
    .function("RandomInitialPointsOff", &vtkForceDirectedLayoutStrategy::RandomInitialPointsOff)
    .function("SetInitialTemperature", &vtkForceDirectedLayoutStrategy::SetInitialTemperature)
    .function("GetInitialTemperatureMinValue", &vtkForceDirectedLayoutStrategy::GetInitialTemperatureMinValue)
    .function("GetInitialTemperatureMaxValue", &vtkForceDirectedLayoutStrategy::GetInitialTemperatureMaxValue)
    .function("GetInitialTemperature", &vtkForceDirectedLayoutStrategy::GetInitialTemperature)
    .function("Initialize", &vtkForceDirectedLayoutStrategy::Initialize)
    .function("Layout", &vtkForceDirectedLayoutStrategy::Layout)
    .function("IsLayoutComplete", &vtkForceDirectedLayoutStrategy::IsLayoutComplete);
}
