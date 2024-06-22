// JavaScript wrapper for vtkExtractSelectedArraysOverTime with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractSelectedArraysOverTimeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractSelectedArraysOverTime.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkExtractSelection.h"
#include "vtkExtractSelectedArraysOverTime.h"

EMSCRIPTEN_BINDINGS(vtkFiltersExtraction_vtkExtractSelectedArraysOverTime_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkExtractSelectedArraysOverTime>(vtkExtractSelectedArraysOverTime * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractSelectedArraysOverTime_class) {
  emscripten::class_<vtkExtractSelectedArraysOverTime, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkExtractSelectedArraysOverTime")
    .smart_ptr<vtkSmartPointer<vtkExtractSelectedArraysOverTime>>("vtkSmartPointer<vtkExtractSelectedArraysOverTime>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractSelectedArraysOverTime>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSelectedArraysOverTime::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractSelectedArraysOverTime& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractSelectedArraysOverTime::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractSelectedArraysOverTime::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSelectedArraysOverTime::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractSelectedArraysOverTime& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfTimeSteps", &vtkExtractSelectedArraysOverTime::GetNumberOfTimeSteps)
    .function("SetSelectionConnection", &vtkExtractSelectedArraysOverTime::SetSelectionConnection, emscripten::allow_raw_pointers())
    .function("SetSelectionExtractor", &vtkExtractSelectedArraysOverTime::SetSelectionExtractor, emscripten::allow_raw_pointers())
    .function("GetSelectionExtractor", &vtkExtractSelectedArraysOverTime::GetSelectionExtractor, emscripten::allow_raw_pointers())
    .function("SetReportStatisticsOnly", &vtkExtractSelectedArraysOverTime::SetReportStatisticsOnly)
    .function("GetReportStatisticsOnly", &vtkExtractSelectedArraysOverTime::GetReportStatisticsOnly)
    .function("ReportStatisticsOnlyOn", &vtkExtractSelectedArraysOverTime::ReportStatisticsOnlyOn)
    .function("ReportStatisticsOnlyOff", &vtkExtractSelectedArraysOverTime::ReportStatisticsOnlyOff);
}
