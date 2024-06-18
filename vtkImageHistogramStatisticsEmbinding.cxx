// JavaScript wrapper for vtkImageHistogramStatistics with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStatistics.js/vtkImagingStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStatistics.js/vtkImageHistogramStatisticsEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Statistics/vtkImageHistogramStatistics.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageHistogramStatistics.h"

template<> void emscripten::internal::raw_destructor<vtkImageHistogramStatistics>(vtkImageHistogramStatistics * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageHistogramStatistics_class) {
  emscripten::class_<vtkImageHistogramStatistics, emscripten::base<vtkImageHistogram>>("vtkImageHistogramStatistics")
    .smart_ptr<vtkSmartPointer<vtkImageHistogramStatistics>>("vtkSmartPointer<vtkImageHistogramStatistics>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageHistogramStatistics>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageHistogramStatistics::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageHistogramStatistics& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageHistogramStatistics::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageHistogramStatistics::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageHistogramStatistics::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageHistogramStatistics& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMinimum", &vtkImageHistogramStatistics::GetMinimum)
    .function("GetMaximum", &vtkImageHistogramStatistics::GetMaximum)
    .function("GetMean", &vtkImageHistogramStatistics::GetMean)
    .function("GetMedian", &vtkImageHistogramStatistics::GetMedian)
    .function("GetStandardDeviation", &vtkImageHistogramStatistics::GetStandardDeviation)
    .function("SetAutoRangePercentiles", emscripten::select_overload<void(vtkImageHistogramStatistics&, double, double)>([](vtkImageHistogramStatistics& self, double arg_0, double arg_1) -> void { return self.SetAutoRangePercentiles( arg_0, arg_1); }))
    .function("SetAutoRangeExpansionFactors", emscripten::select_overload<void(vtkImageHistogramStatistics&, double, double)>([](vtkImageHistogramStatistics& self, double arg_0, double arg_1) -> void { return self.SetAutoRangeExpansionFactors( arg_0, arg_1); }));
}
