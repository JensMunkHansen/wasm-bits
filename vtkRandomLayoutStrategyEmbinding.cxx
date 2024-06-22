// JavaScript wrapper for vtkRandomLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkRandomLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkRandomLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkRandomLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkRandomLayoutStrategy>(vtkRandomLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRandomLayoutStrategy_class) {
  emscripten::class_<vtkRandomLayoutStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkRandomLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkRandomLayoutStrategy>>("vtkSmartPointer<vtkRandomLayoutStrategy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRandomLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRandomLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRandomLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRandomLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRandomLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRandomLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRandomLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRandomSeed", &vtkRandomLayoutStrategy::SetRandomSeed)
    .function("GetRandomSeedMinValue", &vtkRandomLayoutStrategy::GetRandomSeedMinValue)
    .function("GetRandomSeedMaxValue", &vtkRandomLayoutStrategy::GetRandomSeedMaxValue)
    .function("GetRandomSeed", &vtkRandomLayoutStrategy::GetRandomSeed)
    .function("SetGraphBounds", emscripten::select_overload<void(vtkRandomLayoutStrategy&, double, double, double, double, double, double)>([](vtkRandomLayoutStrategy& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetGraphBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetAutomaticBoundsComputation", &vtkRandomLayoutStrategy::SetAutomaticBoundsComputation)
    .function("GetAutomaticBoundsComputation", &vtkRandomLayoutStrategy::GetAutomaticBoundsComputation)
    .function("AutomaticBoundsComputationOn", &vtkRandomLayoutStrategy::AutomaticBoundsComputationOn)
    .function("AutomaticBoundsComputationOff", &vtkRandomLayoutStrategy::AutomaticBoundsComputationOff)
    .function("SetThreeDimensionalLayout", &vtkRandomLayoutStrategy::SetThreeDimensionalLayout)
    .function("GetThreeDimensionalLayout", &vtkRandomLayoutStrategy::GetThreeDimensionalLayout)
    .function("ThreeDimensionalLayoutOn", &vtkRandomLayoutStrategy::ThreeDimensionalLayoutOn)
    .function("ThreeDimensionalLayoutOff", &vtkRandomLayoutStrategy::ThreeDimensionalLayoutOff)
    .function("SetGraph", &vtkRandomLayoutStrategy::SetGraph, emscripten::allow_raw_pointers())
    .function("Layout", &vtkRandomLayoutStrategy::Layout);
}
