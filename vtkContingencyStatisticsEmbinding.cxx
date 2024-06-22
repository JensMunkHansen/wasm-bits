// JavaScript wrapper for vtkContingencyStatistics with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkContingencyStatisticsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkContingencyStatistics.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObjectCollection.h"
#include "vtkMultiBlockDataSet.h"
#include "vtkContingencyStatistics.h"

template<> void emscripten::internal::raw_destructor<vtkContingencyStatistics>(vtkContingencyStatistics * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContingencyStatistics_class) {
  emscripten::class_<vtkContingencyStatistics, emscripten::base<vtkStatisticsAlgorithm>>("vtkContingencyStatistics")
    .smart_ptr<vtkSmartPointer<vtkContingencyStatistics>>("vtkSmartPointer<vtkContingencyStatistics>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContingencyStatistics>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContingencyStatistics::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContingencyStatistics& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContingencyStatistics::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContingencyStatistics::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContingencyStatistics::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContingencyStatistics& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Aggregate", &vtkContingencyStatistics::Aggregate, emscripten::allow_raw_pointers());
}