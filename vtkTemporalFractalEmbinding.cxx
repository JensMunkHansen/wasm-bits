// JavaScript wrapper for vtkTemporalFractal with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkTemporalFractalEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkTemporalFractal.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTemporalFractal.h"

template<> void emscripten::internal::raw_destructor<vtkTemporalFractal>(vtkTemporalFractal * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTemporalFractal_class) {
  emscripten::class_<vtkTemporalFractal, emscripten::base<vtkAlgorithm>>("vtkTemporalFractal")
    .smart_ptr<vtkSmartPointer<vtkTemporalFractal>>("vtkSmartPointer<vtkTemporalFractal>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTemporalFractal>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalFractal::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTemporalFractal& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTemporalFractal::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTemporalFractal::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalFractal::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTemporalFractal& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFractalValue", &vtkTemporalFractal::SetFractalValue)
    .function("GetFractalValue", &vtkTemporalFractal::GetFractalValue)
    .function("SetMaximumLevel", &vtkTemporalFractal::SetMaximumLevel)
    .function("GetMaximumLevel", &vtkTemporalFractal::GetMaximumLevel)
    .function("SetDimensions", &vtkTemporalFractal::SetDimensions)
    .function("GetDimensions", &vtkTemporalFractal::GetDimensions)
    .function("SetGhostLevels", &vtkTemporalFractal::SetGhostLevels)
    .function("GetGhostLevels", &vtkTemporalFractal::GetGhostLevels)
    .function("GhostLevelsOn", &vtkTemporalFractal::GhostLevelsOn)
    .function("GhostLevelsOff", &vtkTemporalFractal::GhostLevelsOff)
    .function("SetGenerateRectilinearGrids", &vtkTemporalFractal::SetGenerateRectilinearGrids)
    .function("GetGenerateRectilinearGrids", &vtkTemporalFractal::GetGenerateRectilinearGrids)
    .function("GenerateRectilinearGridsOn", &vtkTemporalFractal::GenerateRectilinearGridsOn)
    .function("GenerateRectilinearGridsOff", &vtkTemporalFractal::GenerateRectilinearGridsOff)
    .function("SetDiscreteTimeSteps", &vtkTemporalFractal::SetDiscreteTimeSteps)
    .function("GetDiscreteTimeSteps", &vtkTemporalFractal::GetDiscreteTimeSteps)
    .function("DiscreteTimeStepsOn", &vtkTemporalFractal::DiscreteTimeStepsOn)
    .function("DiscreteTimeStepsOff", &vtkTemporalFractal::DiscreteTimeStepsOff)
    .function("SetTwoDimensional", &vtkTemporalFractal::SetTwoDimensional)
    .function("GetTwoDimensional", &vtkTemporalFractal::GetTwoDimensional)
    .function("TwoDimensionalOn", &vtkTemporalFractal::TwoDimensionalOn)
    .function("TwoDimensionalOff", &vtkTemporalFractal::TwoDimensionalOff)
    .function("SetAsymmetric", &vtkTemporalFractal::SetAsymmetric)
    .function("GetAsymmetric", &vtkTemporalFractal::GetAsymmetric)
    .function("SetAdaptiveSubdivision", &vtkTemporalFractal::SetAdaptiveSubdivision)
    .function("GetAdaptiveSubdivision", &vtkTemporalFractal::GetAdaptiveSubdivision)
    .function("AdaptiveSubdivisionOn", &vtkTemporalFractal::AdaptiveSubdivisionOn)
    .function("AdaptiveSubdivisionOff", &vtkTemporalFractal::AdaptiveSubdivisionOff);
}
