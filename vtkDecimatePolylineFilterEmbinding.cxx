// JavaScript wrapper for vtkDecimatePolylineFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkDecimatePolylineFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkDecimatePolylineFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDecimatePolylineStrategy.h"
#include "vtkDecimatePolylineFilter.h"

template<> void emscripten::internal::raw_destructor<vtkDecimatePolylineFilter>(vtkDecimatePolylineFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDecimatePolylineFilter_class) {
  emscripten::class_<vtkDecimatePolylineFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkDecimatePolylineFilter")
    .smart_ptr<vtkSmartPointer<vtkDecimatePolylineFilter>>("vtkSmartPointer<vtkDecimatePolylineFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDecimatePolylineFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDecimatePolylineFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDecimatePolylineFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDecimatePolylineFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDecimatePolylineFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDecimatePolylineFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDecimatePolylineFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTargetReduction", &vtkDecimatePolylineFilter::SetTargetReduction)
    .function("GetTargetReductionMinValue", &vtkDecimatePolylineFilter::GetTargetReductionMinValue)
    .function("GetTargetReductionMaxValue", &vtkDecimatePolylineFilter::GetTargetReductionMaxValue)
    .function("GetTargetReduction", &vtkDecimatePolylineFilter::GetTargetReduction)
    .function("SetMaximumError", &vtkDecimatePolylineFilter::SetMaximumError)
    .function("GetMaximumErrorMinValue", &vtkDecimatePolylineFilter::GetMaximumErrorMinValue)
    .function("GetMaximumErrorMaxValue", &vtkDecimatePolylineFilter::GetMaximumErrorMaxValue)
    .function("GetMaximumError", &vtkDecimatePolylineFilter::GetMaximumError)
    .function("SetOutputPointsPrecision", &vtkDecimatePolylineFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkDecimatePolylineFilter::GetOutputPointsPrecision)
    .function("SetDecimationStrategy", &vtkDecimatePolylineFilter::SetDecimationStrategy, emscripten::allow_raw_pointers())
    .function("GetDecimationStrategy", &vtkDecimatePolylineFilter::GetDecimationStrategy, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkDecimatePolylineFilter::GetMTime);
}
