// JavaScript wrapper for vtkCorrelativeStatistics with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkCorrelativeStatisticsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkCorrelativeStatistics.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObjectCollection.h"
#include "vtkMultiBlockDataSet.h"
#include "vtkCorrelativeStatistics.h"

template<> void emscripten::internal::raw_destructor<vtkCorrelativeStatistics>(vtkCorrelativeStatistics * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCorrelativeStatistics_class) {
  emscripten::class_<vtkCorrelativeStatistics, emscripten::base<vtkStatisticsAlgorithm>>("vtkCorrelativeStatistics")
    .smart_ptr<vtkSmartPointer<vtkCorrelativeStatistics>>("vtkSmartPointer<vtkCorrelativeStatistics>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCorrelativeStatistics>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCorrelativeStatistics::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCorrelativeStatistics& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCorrelativeStatistics::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCorrelativeStatistics::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCorrelativeStatistics::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCorrelativeStatistics& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Aggregate", &vtkCorrelativeStatistics::Aggregate, emscripten::allow_raw_pointers());
}
