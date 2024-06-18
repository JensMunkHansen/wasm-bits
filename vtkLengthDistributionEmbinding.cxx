// JavaScript wrapper for vtkLengthDistribution with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkLengthDistributionEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkLengthDistribution.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkLengthDistribution.h"

template<> void emscripten::internal::raw_destructor<vtkLengthDistribution>(vtkLengthDistribution * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLengthDistribution_class) {
  emscripten::class_<vtkLengthDistribution, emscripten::base<vtkTableAlgorithm>>("vtkLengthDistribution")
    .smart_ptr<vtkSmartPointer<vtkLengthDistribution>>("vtkSmartPointer<vtkLengthDistribution>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLengthDistribution>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLengthDistribution::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLengthDistribution& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLengthDistribution::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLengthDistribution::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLengthDistribution::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLengthDistribution& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetSampleSize", &vtkLengthDistribution::GetSampleSize)
    .function("SetSampleSize", &vtkLengthDistribution::SetSampleSize)
    .function("GetSortSample", &vtkLengthDistribution::GetSortSample)
    .function("SetSortSample", &vtkLengthDistribution::SetSortSample)
    .function("SortSampleOn", &vtkLengthDistribution::SortSampleOn)
    .function("SortSampleOff", &vtkLengthDistribution::SortSampleOff)
    .function("GetLengthQuantile", &vtkLengthDistribution::GetLengthQuantile);
}
