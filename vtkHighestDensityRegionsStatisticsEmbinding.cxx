// JavaScript wrapper for vtkHighestDensityRegionsStatistics with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkHighestDensityRegionsStatisticsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkHighestDensityRegionsStatistics.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObjectCollection.h"
#include "vtkMultiBlockDataSet.h"
#include "vtkDataArray.h"
#include "vtkHighestDensityRegionsStatistics.h"

template<> void emscripten::internal::raw_destructor<vtkHighestDensityRegionsStatistics>(vtkHighestDensityRegionsStatistics * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHighestDensityRegionsStatistics_class) {
  emscripten::class_<vtkHighestDensityRegionsStatistics, emscripten::base<vtkStatisticsAlgorithm>>("vtkHighestDensityRegionsStatistics")
    .smart_ptr<vtkSmartPointer<vtkHighestDensityRegionsStatistics>>("vtkSmartPointer<vtkHighestDensityRegionsStatistics>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHighestDensityRegionsStatistics>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHighestDensityRegionsStatistics::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHighestDensityRegionsStatistics& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHighestDensityRegionsStatistics::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHighestDensityRegionsStatistics::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHighestDensityRegionsStatistics::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHighestDensityRegionsStatistics& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Aggregate", &vtkHighestDensityRegionsStatistics::Aggregate, emscripten::allow_raw_pointers())
    .function("SetSigma", &vtkHighestDensityRegionsStatistics::SetSigma)
    .function("SetSigmaMatrix", &vtkHighestDensityRegionsStatistics::SetSigmaMatrix)
    .function("ComputeHDR", emscripten::select_overload<double(vtkHighestDensityRegionsStatistics&, vtkDataArray*, vtkDataArray*)>([](vtkHighestDensityRegionsStatistics& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> double { return self.ComputeHDR( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ComputeHDR", emscripten::select_overload<double(vtkHighestDensityRegionsStatistics&, vtkDataArray*, vtkDataArray*, vtkDataArray*)>([](vtkHighestDensityRegionsStatistics& self, vtkDataArray* arg_0, vtkDataArray* arg_1, vtkDataArray* arg_2) -> double { return self.ComputeHDR( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers());
}
