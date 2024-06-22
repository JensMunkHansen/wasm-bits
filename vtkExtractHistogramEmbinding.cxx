// JavaScript wrapper for vtkExtractHistogram with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkExtractHistogramEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkExtractHistogram.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractHistogram.h"

template<> void emscripten::internal::raw_destructor<vtkExtractHistogram>(vtkExtractHistogram * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractHistogram_class) {
  emscripten::class_<vtkExtractHistogram, emscripten::base<vtkTableAlgorithm>>("vtkExtractHistogram")
    .smart_ptr<vtkSmartPointer<vtkExtractHistogram>>("vtkSmartPointer<vtkExtractHistogram>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractHistogram>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractHistogram::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractHistogram& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractHistogram::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractHistogram::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractHistogram::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractHistogram& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetComponent", &vtkExtractHistogram::SetComponent)
    .function("GetComponentMinValue", &vtkExtractHistogram::GetComponentMinValue)
    .function("GetComponentMaxValue", &vtkExtractHistogram::GetComponentMaxValue)
    .function("GetComponent", &vtkExtractHistogram::GetComponent)
    .function("SetBinCount", &vtkExtractHistogram::SetBinCount)
    .function("GetBinCountMinValue", &vtkExtractHistogram::GetBinCountMinValue)
    .function("GetBinCountMaxValue", &vtkExtractHistogram::GetBinCountMaxValue)
    .function("GetBinCount", &vtkExtractHistogram::GetBinCount)
    .function("SetCenterBinsAroundMinAndMax", &vtkExtractHistogram::SetCenterBinsAroundMinAndMax)
    .function("GetCenterBinsAroundMinAndMax", &vtkExtractHistogram::GetCenterBinsAroundMinAndMax)
    .function("CenterBinsAroundMinAndMaxOn", &vtkExtractHistogram::CenterBinsAroundMinAndMaxOn)
    .function("CenterBinsAroundMinAndMaxOff", &vtkExtractHistogram::CenterBinsAroundMinAndMaxOff)
    .function("SetCustomBinRanges", emscripten::select_overload<void(vtkExtractHistogram&, double, double)>([](vtkExtractHistogram& self, double arg_0, double arg_1) -> void { return self.SetCustomBinRanges( arg_0, arg_1); }))
    .function("SetUseCustomBinRanges", &vtkExtractHistogram::SetUseCustomBinRanges)
    .function("GetUseCustomBinRanges", &vtkExtractHistogram::GetUseCustomBinRanges)
    .function("UseCustomBinRangesOn", &vtkExtractHistogram::UseCustomBinRangesOn)
    .function("UseCustomBinRangesOff", &vtkExtractHistogram::UseCustomBinRangesOff)
    .function("SetCalculateAverages", &vtkExtractHistogram::SetCalculateAverages)
    .function("GetCalculateAverages", &vtkExtractHistogram::GetCalculateAverages)
    .function("CalculateAveragesOn", &vtkExtractHistogram::CalculateAveragesOn)
    .function("CalculateAveragesOff", &vtkExtractHistogram::CalculateAveragesOff)
    .function("SetBinExtentsArrayName", emscripten::optional_override([](vtkExtractHistogram& self, const std::string & arg_0) -> void {  return self.SetBinExtentsArrayName( arg_0.c_str());}))
    .function("GetBinExtentsArrayName", emscripten::optional_override([](vtkExtractHistogram& self) -> std::string {  return self.GetBinExtentsArrayName();}))
    .function("SetBinValuesArrayName", emscripten::optional_override([](vtkExtractHistogram& self, const std::string & arg_0) -> void {  return self.SetBinValuesArrayName( arg_0.c_str());}))
    .function("GetBinValuesArrayName", emscripten::optional_override([](vtkExtractHistogram& self) -> std::string {  return self.GetBinValuesArrayName();}))
    .function("SetNormalize", &vtkExtractHistogram::SetNormalize)
    .function("NormalizeOn", &vtkExtractHistogram::NormalizeOn)
    .function("NormalizeOff", &vtkExtractHistogram::NormalizeOff)
    .function("GetNormalize", &vtkExtractHistogram::GetNormalize)
    .function("SetAccumulation", &vtkExtractHistogram::SetAccumulation)
    .function("AccumulationOn", &vtkExtractHistogram::AccumulationOn)
    .function("AccumulationOff", &vtkExtractHistogram::AccumulationOff)
    .function("GetAccumulation", &vtkExtractHistogram::GetAccumulation)
    .function("SetBinAccumulationArrayName", emscripten::optional_override([](vtkExtractHistogram& self, const std::string & arg_0) -> void {  return self.SetBinAccumulationArrayName( arg_0.c_str());}))
    .function("GetBinAccumulationArrayName", emscripten::optional_override([](vtkExtractHistogram& self) -> std::string {  return self.GetBinAccumulationArrayName();}));
}
