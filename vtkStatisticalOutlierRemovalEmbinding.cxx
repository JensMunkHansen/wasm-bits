// JavaScript wrapper for vtkStatisticalOutlierRemoval with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkStatisticalOutlierRemovalEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkStatisticalOutlierRemoval.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractPointLocator.h"
#include "vtkStatisticalOutlierRemoval.h"

template<> void emscripten::internal::raw_destructor<vtkStatisticalOutlierRemoval>(vtkStatisticalOutlierRemoval * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStatisticalOutlierRemoval_class) {
  emscripten::class_<vtkStatisticalOutlierRemoval, emscripten::base<vtkPointCloudFilter>>("vtkStatisticalOutlierRemoval")
    .smart_ptr<vtkSmartPointer<vtkStatisticalOutlierRemoval>>("vtkSmartPointer<vtkStatisticalOutlierRemoval>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStatisticalOutlierRemoval>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStatisticalOutlierRemoval::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStatisticalOutlierRemoval& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStatisticalOutlierRemoval::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStatisticalOutlierRemoval::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStatisticalOutlierRemoval::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStatisticalOutlierRemoval& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSampleSize", &vtkStatisticalOutlierRemoval::SetSampleSize)
    .function("GetSampleSizeMinValue", &vtkStatisticalOutlierRemoval::GetSampleSizeMinValue)
    .function("GetSampleSizeMaxValue", &vtkStatisticalOutlierRemoval::GetSampleSizeMaxValue)
    .function("GetSampleSize", &vtkStatisticalOutlierRemoval::GetSampleSize)
    .function("SetStandardDeviationFactor", &vtkStatisticalOutlierRemoval::SetStandardDeviationFactor)
    .function("GetStandardDeviationFactorMinValue", &vtkStatisticalOutlierRemoval::GetStandardDeviationFactorMinValue)
    .function("GetStandardDeviationFactorMaxValue", &vtkStatisticalOutlierRemoval::GetStandardDeviationFactorMaxValue)
    .function("GetStandardDeviationFactor", &vtkStatisticalOutlierRemoval::GetStandardDeviationFactor)
    .function("SetLocator", &vtkStatisticalOutlierRemoval::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkStatisticalOutlierRemoval::GetLocator, emscripten::allow_raw_pointers())
    .function("SetComputedMean", &vtkStatisticalOutlierRemoval::SetComputedMean)
    .function("GetComputedMeanMinValue", &vtkStatisticalOutlierRemoval::GetComputedMeanMinValue)
    .function("GetComputedMeanMaxValue", &vtkStatisticalOutlierRemoval::GetComputedMeanMaxValue)
    .function("GetComputedMean", &vtkStatisticalOutlierRemoval::GetComputedMean)
    .function("SetComputedStandardDeviation", &vtkStatisticalOutlierRemoval::SetComputedStandardDeviation)
    .function("GetComputedStandardDeviationMinValue", &vtkStatisticalOutlierRemoval::GetComputedStandardDeviationMinValue)
    .function("GetComputedStandardDeviationMaxValue", &vtkStatisticalOutlierRemoval::GetComputedStandardDeviationMaxValue)
    .function("GetComputedStandardDeviation", &vtkStatisticalOutlierRemoval::GetComputedStandardDeviation);
}
