// JavaScript wrapper for vtkTemporalStatistics with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkTemporalStatisticsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkTemporalStatistics.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTemporalStatistics.h"

template<> void emscripten::internal::raw_destructor<vtkTemporalStatistics>(vtkTemporalStatistics * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTemporalStatistics_class) {
  emscripten::class_<vtkTemporalStatistics, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkTemporalStatistics")
    .smart_ptr<vtkSmartPointer<vtkTemporalStatistics>>("vtkSmartPointer<vtkTemporalStatistics>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTemporalStatistics>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalStatistics::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTemporalStatistics& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTemporalStatistics::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTemporalStatistics::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalStatistics::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTemporalStatistics& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("TimeStepsArrayName", emscripten::optional_override([]() -> std::string {  return vtkTemporalStatistics::TimeStepsArrayName();}))
    .function("GetComputeAverage", &vtkTemporalStatistics::GetComputeAverage)
    .function("SetComputeAverage", &vtkTemporalStatistics::SetComputeAverage)
    .function("ComputeAverageOn", &vtkTemporalStatistics::ComputeAverageOn)
    .function("ComputeAverageOff", &vtkTemporalStatistics::ComputeAverageOff)
    .function("GetComputeMinimum", &vtkTemporalStatistics::GetComputeMinimum)
    .function("SetComputeMinimum", &vtkTemporalStatistics::SetComputeMinimum)
    .function("ComputeMinimumOn", &vtkTemporalStatistics::ComputeMinimumOn)
    .function("ComputeMinimumOff", &vtkTemporalStatistics::ComputeMinimumOff)
    .function("GetComputeMaximum", &vtkTemporalStatistics::GetComputeMaximum)
    .function("SetComputeMaximum", &vtkTemporalStatistics::SetComputeMaximum)
    .function("ComputeMaximumOn", &vtkTemporalStatistics::ComputeMaximumOn)
    .function("ComputeMaximumOff", &vtkTemporalStatistics::ComputeMaximumOff)
    .function("GetComputeStandardDeviation", &vtkTemporalStatistics::GetComputeStandardDeviation)
    .function("SetComputeStandardDeviation", &vtkTemporalStatistics::SetComputeStandardDeviation)
    .function("ComputeStandardDeviationOn", &vtkTemporalStatistics::ComputeStandardDeviationOn)
    .function("ComputeStandardDeviationOff", &vtkTemporalStatistics::ComputeStandardDeviationOff);
}
