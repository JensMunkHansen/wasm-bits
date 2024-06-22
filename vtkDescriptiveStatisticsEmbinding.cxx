// JavaScript wrapper for vtkDescriptiveStatistics with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkDescriptiveStatisticsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkDescriptiveStatistics.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObjectCollection.h"
#include "vtkMultiBlockDataSet.h"
#include "vtkDescriptiveStatistics.h"

template<> void emscripten::internal::raw_destructor<vtkDescriptiveStatistics>(vtkDescriptiveStatistics * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDescriptiveStatistics_class) {
  emscripten::class_<vtkDescriptiveStatistics, emscripten::base<vtkStatisticsAlgorithm>>("vtkDescriptiveStatistics")
    .smart_ptr<vtkSmartPointer<vtkDescriptiveStatistics>>("vtkSmartPointer<vtkDescriptiveStatistics>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDescriptiveStatistics>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDescriptiveStatistics::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDescriptiveStatistics& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDescriptiveStatistics::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDescriptiveStatistics::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDescriptiveStatistics::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDescriptiveStatistics& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSampleEstimate", &vtkDescriptiveStatistics::SetSampleEstimate)
    .function("GetSampleEstimate", &vtkDescriptiveStatistics::GetSampleEstimate)
    .function("SampleEstimateOn", &vtkDescriptiveStatistics::SampleEstimateOn)
    .function("SampleEstimateOff", &vtkDescriptiveStatistics::SampleEstimateOff)
    .function("SetSignedDeviations", &vtkDescriptiveStatistics::SetSignedDeviations)
    .function("GetSignedDeviations", &vtkDescriptiveStatistics::GetSignedDeviations)
    .function("SignedDeviationsOn", &vtkDescriptiveStatistics::SignedDeviationsOn)
    .function("SignedDeviationsOff", &vtkDescriptiveStatistics::SignedDeviationsOff)
    .function("SetGhostsToSkip", &vtkDescriptiveStatistics::SetGhostsToSkip)
    .function("GetGhostsToSkip", &vtkDescriptiveStatistics::GetGhostsToSkip)
    .function("Aggregate", &vtkDescriptiveStatistics::Aggregate, emscripten::allow_raw_pointers());
}
