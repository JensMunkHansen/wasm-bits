// JavaScript wrapper for vtkMultiCorrelativeStatistics with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkMultiCorrelativeStatisticsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkMultiCorrelativeStatistics.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObjectCollection.h"
#include "vtkMultiBlockDataSet.h"
#include "vtkMultiCorrelativeStatistics.h"

template<> void emscripten::internal::raw_destructor<vtkMultiCorrelativeStatistics>(vtkMultiCorrelativeStatistics * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMultiCorrelativeStatistics_class) {
  emscripten::class_<vtkMultiCorrelativeStatistics, emscripten::base<vtkStatisticsAlgorithm>>("vtkMultiCorrelativeStatistics")
    .smart_ptr<vtkSmartPointer<vtkMultiCorrelativeStatistics>>("vtkSmartPointer<vtkMultiCorrelativeStatistics>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMultiCorrelativeStatistics>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiCorrelativeStatistics::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMultiCorrelativeStatistics& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMultiCorrelativeStatistics::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMultiCorrelativeStatistics::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiCorrelativeStatistics::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMultiCorrelativeStatistics& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Aggregate", &vtkMultiCorrelativeStatistics::Aggregate, emscripten::allow_raw_pointers())
    .function("SetMedianAbsoluteDeviation", &vtkMultiCorrelativeStatistics::SetMedianAbsoluteDeviation)
    .function("GetMedianAbsoluteDeviation", &vtkMultiCorrelativeStatistics::GetMedianAbsoluteDeviation)
    .function("MedianAbsoluteDeviationOn", &vtkMultiCorrelativeStatistics::MedianAbsoluteDeviationOn)
    .function("MedianAbsoluteDeviationOff", &vtkMultiCorrelativeStatistics::MedianAbsoluteDeviationOff)
    .function("SetGhostsToSkip", &vtkMultiCorrelativeStatistics::SetGhostsToSkip)
    .function("GetGhostsToSkip", &vtkMultiCorrelativeStatistics::GetGhostsToSkip);
}
