// JavaScript wrapper for vtkKMeansStatistics with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkKMeansStatisticsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkKMeansStatistics.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkKMeansDistanceFunctor.h"
#include "vtkDataObjectCollection.h"
#include "vtkMultiBlockDataSet.h"
#include "vtkKMeansStatistics.h"

template<> void emscripten::internal::raw_destructor<vtkKMeansStatistics>(vtkKMeansStatistics * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkKMeansStatistics_class) {
  emscripten::class_<vtkKMeansStatistics, emscripten::base<vtkStatisticsAlgorithm>>("vtkKMeansStatistics")
    .smart_ptr<vtkSmartPointer<vtkKMeansStatistics>>("vtkSmartPointer<vtkKMeansStatistics>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkKMeansStatistics>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKMeansStatistics::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkKMeansStatistics& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkKMeansStatistics::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkKMeansStatistics::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKMeansStatistics::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkKMeansStatistics& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDistanceFunctor", &vtkKMeansStatistics::SetDistanceFunctor, emscripten::allow_raw_pointers())
    .function("GetDistanceFunctor", &vtkKMeansStatistics::GetDistanceFunctor, emscripten::allow_raw_pointers())
    .function("SetDefaultNumberOfClusters", &vtkKMeansStatistics::SetDefaultNumberOfClusters)
    .function("GetDefaultNumberOfClusters", &vtkKMeansStatistics::GetDefaultNumberOfClusters)
    .function("SetKValuesArrayName", emscripten::optional_override([](vtkKMeansStatistics& self, const std::string & arg_0) -> void {  return self.SetKValuesArrayName( arg_0.c_str());}))
    .function("GetKValuesArrayName", emscripten::optional_override([](vtkKMeansStatistics& self) -> std::string {  return self.GetKValuesArrayName();}))
    .function("SetMaxNumIterations", &vtkKMeansStatistics::SetMaxNumIterations)
    .function("GetMaxNumIterations", &vtkKMeansStatistics::GetMaxNumIterations)
    .function("SetTolerance", &vtkKMeansStatistics::SetTolerance)
    .function("GetTolerance", &vtkKMeansStatistics::GetTolerance)
    .function("Aggregate", &vtkKMeansStatistics::Aggregate, emscripten::allow_raw_pointers())
    .function("SetParameter", emscripten::optional_override([](vtkKMeansStatistics& self, const std::string & arg_0, int arg_1, vtkVariant arg_2) -> bool {  return self.SetParameter( arg_0.c_str(), arg_1, arg_2);}))
    .function("SetGhostsToSkip", &vtkKMeansStatistics::SetGhostsToSkip)
    .function("GetGhostsToSkip", &vtkKMeansStatistics::GetGhostsToSkip);
}
