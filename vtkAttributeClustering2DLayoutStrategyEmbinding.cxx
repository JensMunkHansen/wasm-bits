// JavaScript wrapper for vtkAttributeClustering2DLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkAttributeClustering2DLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkAttributeClustering2DLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAttributeClustering2DLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkAttributeClustering2DLayoutStrategy>(vtkAttributeClustering2DLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAttributeClustering2DLayoutStrategy_class) {
  emscripten::class_<vtkAttributeClustering2DLayoutStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkAttributeClustering2DLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkAttributeClustering2DLayoutStrategy>>("vtkSmartPointer<vtkAttributeClustering2DLayoutStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAttributeClustering2DLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAttributeClustering2DLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAttributeClustering2DLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAttributeClustering2DLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAttributeClustering2DLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAttributeClustering2DLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAttributeClustering2DLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetVertexAttribute", emscripten::optional_override([](vtkAttributeClustering2DLayoutStrategy& self) -> std::string {  return self.GetVertexAttribute();}))
    .function("SetVertexAttribute", emscripten::optional_override([](vtkAttributeClustering2DLayoutStrategy& self, const std::string & arg_0) -> void {  return self.SetVertexAttribute( arg_0.c_str());}))
    .function("SetRandomSeed", &vtkAttributeClustering2DLayoutStrategy::SetRandomSeed)
    .function("GetRandomSeedMinValue", &vtkAttributeClustering2DLayoutStrategy::GetRandomSeedMinValue)
    .function("GetRandomSeedMaxValue", &vtkAttributeClustering2DLayoutStrategy::GetRandomSeedMaxValue)
    .function("GetRandomSeed", &vtkAttributeClustering2DLayoutStrategy::GetRandomSeed)
    .function("SetMaxNumberOfIterations", &vtkAttributeClustering2DLayoutStrategy::SetMaxNumberOfIterations)
    .function("GetMaxNumberOfIterationsMinValue", &vtkAttributeClustering2DLayoutStrategy::GetMaxNumberOfIterationsMinValue)
    .function("GetMaxNumberOfIterationsMaxValue", &vtkAttributeClustering2DLayoutStrategy::GetMaxNumberOfIterationsMaxValue)
    .function("GetMaxNumberOfIterations", &vtkAttributeClustering2DLayoutStrategy::GetMaxNumberOfIterations)
    .function("SetIterationsPerLayout", &vtkAttributeClustering2DLayoutStrategy::SetIterationsPerLayout)
    .function("GetIterationsPerLayoutMinValue", &vtkAttributeClustering2DLayoutStrategy::GetIterationsPerLayoutMinValue)
    .function("GetIterationsPerLayoutMaxValue", &vtkAttributeClustering2DLayoutStrategy::GetIterationsPerLayoutMaxValue)
    .function("GetIterationsPerLayout", &vtkAttributeClustering2DLayoutStrategy::GetIterationsPerLayout)
    .function("SetInitialTemperature", &vtkAttributeClustering2DLayoutStrategy::SetInitialTemperature)
    .function("GetInitialTemperatureMinValue", &vtkAttributeClustering2DLayoutStrategy::GetInitialTemperatureMinValue)
    .function("GetInitialTemperatureMaxValue", &vtkAttributeClustering2DLayoutStrategy::GetInitialTemperatureMaxValue)
    .function("GetInitialTemperature", &vtkAttributeClustering2DLayoutStrategy::GetInitialTemperature)
    .function("SetCoolDownRate", &vtkAttributeClustering2DLayoutStrategy::SetCoolDownRate)
    .function("GetCoolDownRateMinValue", &vtkAttributeClustering2DLayoutStrategy::GetCoolDownRateMinValue)
    .function("GetCoolDownRateMaxValue", &vtkAttributeClustering2DLayoutStrategy::GetCoolDownRateMaxValue)
    .function("GetCoolDownRate", &vtkAttributeClustering2DLayoutStrategy::GetCoolDownRate)
    .function("SetRestDistance", &vtkAttributeClustering2DLayoutStrategy::SetRestDistance)
    .function("GetRestDistance", &vtkAttributeClustering2DLayoutStrategy::GetRestDistance)
    .function("Initialize", &vtkAttributeClustering2DLayoutStrategy::Initialize)
    .function("Layout", &vtkAttributeClustering2DLayoutStrategy::Layout)
    .function("IsLayoutComplete", &vtkAttributeClustering2DLayoutStrategy::IsLayoutComplete);
}
