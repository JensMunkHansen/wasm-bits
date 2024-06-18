// JavaScript wrapper for vtkExtractDataArraysOverTime with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractDataArraysOverTimeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractDataArraysOverTime.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractDataArraysOverTime.h"

EMSCRIPTEN_BINDINGS(vtkFiltersExtraction_vtkExtractDataArraysOverTime_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkExtractDataArraysOverTime>(vtkExtractDataArraysOverTime * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractDataArraysOverTime_class) {
  emscripten::class_<vtkExtractDataArraysOverTime, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkExtractDataArraysOverTime")
    .smart_ptr<vtkSmartPointer<vtkExtractDataArraysOverTime>>("vtkSmartPointer<vtkExtractDataArraysOverTime>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractDataArraysOverTime>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractDataArraysOverTime::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractDataArraysOverTime& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractDataArraysOverTime::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractDataArraysOverTime::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractDataArraysOverTime::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractDataArraysOverTime& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfTimeSteps", &vtkExtractDataArraysOverTime::GetNumberOfTimeSteps)
    .function("SetFieldAssociation", &vtkExtractDataArraysOverTime::SetFieldAssociation)
    .function("GetFieldAssociationMinValue", &vtkExtractDataArraysOverTime::GetFieldAssociationMinValue)
    .function("GetFieldAssociationMaxValue", &vtkExtractDataArraysOverTime::GetFieldAssociationMaxValue)
    .function("GetFieldAssociation", &vtkExtractDataArraysOverTime::GetFieldAssociation)
    .function("SetReportStatisticsOnly", &vtkExtractDataArraysOverTime::SetReportStatisticsOnly)
    .function("GetReportStatisticsOnly", &vtkExtractDataArraysOverTime::GetReportStatisticsOnly)
    .function("ReportStatisticsOnlyOn", &vtkExtractDataArraysOverTime::ReportStatisticsOnlyOn)
    .function("ReportStatisticsOnlyOff", &vtkExtractDataArraysOverTime::ReportStatisticsOnlyOff)
    .function("SetUseGlobalIDs", &vtkExtractDataArraysOverTime::SetUseGlobalIDs)
    .function("GetUseGlobalIDs", &vtkExtractDataArraysOverTime::GetUseGlobalIDs);
}
