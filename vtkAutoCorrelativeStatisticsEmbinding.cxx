// JavaScript wrapper for vtkAutoCorrelativeStatistics with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkAutoCorrelativeStatisticsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkAutoCorrelativeStatistics.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObjectCollection.h"
#include "vtkMultiBlockDataSet.h"
#include "vtkAutoCorrelativeStatistics.h"

template<> void emscripten::internal::raw_destructor<vtkAutoCorrelativeStatistics>(vtkAutoCorrelativeStatistics * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAutoCorrelativeStatistics_class) {
  emscripten::class_<vtkAutoCorrelativeStatistics, emscripten::base<vtkStatisticsAlgorithm>>("vtkAutoCorrelativeStatistics")
    .smart_ptr<vtkSmartPointer<vtkAutoCorrelativeStatistics>>("vtkSmartPointer<vtkAutoCorrelativeStatistics>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAutoCorrelativeStatistics>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAutoCorrelativeStatistics::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAutoCorrelativeStatistics& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAutoCorrelativeStatistics::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAutoCorrelativeStatistics::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAutoCorrelativeStatistics::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAutoCorrelativeStatistics& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSliceCardinality", &vtkAutoCorrelativeStatistics::SetSliceCardinality)
    .function("GetSliceCardinalityMinValue", &vtkAutoCorrelativeStatistics::GetSliceCardinalityMinValue)
    .function("GetSliceCardinalityMaxValue", &vtkAutoCorrelativeStatistics::GetSliceCardinalityMaxValue)
    .function("GetSliceCardinality", &vtkAutoCorrelativeStatistics::GetSliceCardinality)
    .function("Aggregate", &vtkAutoCorrelativeStatistics::Aggregate, emscripten::allow_raw_pointers());
}
