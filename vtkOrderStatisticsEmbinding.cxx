// JavaScript wrapper for vtkOrderStatistics with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkOrderStatisticsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkOrderStatistics.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObjectCollection.h"
#include "vtkMultiBlockDataSet.h"
#include "vtkOrderStatistics.h"

EMSCRIPTEN_BINDINGS(vtkFiltersStatistics_vtkOrderStatistics_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkOrderStatistics>(vtkOrderStatistics * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOrderStatistics_class) {
  using QuantileDefinitionType=vtkOrderStatistics::QuantileDefinitionType;
  emscripten::class_<vtkOrderStatistics, emscripten::base<vtkStatisticsAlgorithm>>("vtkOrderStatistics")
    .smart_ptr<vtkSmartPointer<vtkOrderStatistics>>("vtkSmartPointer<vtkOrderStatistics>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOrderStatistics>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrderStatistics::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOrderStatistics& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOrderStatistics::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOrderStatistics::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrderStatistics::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOrderStatistics& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfIntervals", &vtkOrderStatistics::SetNumberOfIntervals)
    .function("GetNumberOfIntervals", &vtkOrderStatistics::GetNumberOfIntervals)
    .function("SetQuantileDefinition", emscripten::select_overload<void(vtkOrderStatistics&, QuantileDefinitionType)>([](vtkOrderStatistics& self, QuantileDefinitionType arg_0) -> void { return self.SetQuantileDefinition( arg_0); }))
    .function("SetQuantileDefinition", emscripten::select_overload<void(vtkOrderStatistics&, int)>([](vtkOrderStatistics& self, int arg_0) -> void { return self.SetQuantileDefinition( arg_0); }))
    .function("SetQuantize", &vtkOrderStatistics::SetQuantize)
    .function("GetQuantize", &vtkOrderStatistics::GetQuantize)
    .function("SetMaximumHistogramSize", &vtkOrderStatistics::SetMaximumHistogramSize)
    .function("GetMaximumHistogramSize", &vtkOrderStatistics::GetMaximumHistogramSize)
    .function("GetQuantileDefinition", &vtkOrderStatistics::GetQuantileDefinition)
    .function("SetParameter", emscripten::optional_override([](vtkOrderStatistics& self, const std::string & arg_0, int arg_1, vtkVariant arg_2) -> bool {  return self.SetParameter( arg_0.c_str(), arg_1, arg_2);}))
    .function("Aggregate", &vtkOrderStatistics::Aggregate, emscripten::allow_raw_pointers())
    .function("SetGhostsToSkip", &vtkOrderStatistics::SetGhostsToSkip)
    .function("GetGhostsToSkip", &vtkOrderStatistics::GetGhostsToSkip);
}
EMSCRIPTEN_BINDINGS(vtkFiltersStatistics_vtkOrderStatistics_0_2_constants) {
    typedef vtkOrderStatistics::QuantileDefinitionType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkOrderStatistics_QuantileDefinitionType_InverseCDF", vtkOrderStatistics::InverseCDF },
      { "vtkOrderStatistics_QuantileDefinitionType_InverseCDFAveragedSteps", vtkOrderStatistics::InverseCDFAveragedSteps },
      { "vtkOrderStatistics_QuantileDefinitionType_NearestObservation", vtkOrderStatistics::NearestObservation },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
