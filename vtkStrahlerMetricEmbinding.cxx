// JavaScript wrapper for vtkStrahlerMetric with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkStrahlerMetricEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkStrahlerMetric.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStrahlerMetric.h"

template<> void emscripten::internal::raw_destructor<vtkStrahlerMetric>(vtkStrahlerMetric * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStrahlerMetric_class) {
  emscripten::class_<vtkStrahlerMetric, emscripten::base<vtkTreeAlgorithm>>("vtkStrahlerMetric")
    .smart_ptr<vtkSmartPointer<vtkStrahlerMetric>>("vtkSmartPointer<vtkStrahlerMetric>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStrahlerMetric>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStrahlerMetric::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStrahlerMetric& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStrahlerMetric::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStrahlerMetric::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStrahlerMetric::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStrahlerMetric& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMetricArrayName", emscripten::optional_override([](vtkStrahlerMetric& self, const std::string & arg_0) -> void {  return self.SetMetricArrayName( arg_0.c_str());}))
    .function("SetNormalize", &vtkStrahlerMetric::SetNormalize)
    .function("GetNormalize", &vtkStrahlerMetric::GetNormalize)
    .function("NormalizeOn", &vtkStrahlerMetric::NormalizeOn)
    .function("NormalizeOff", &vtkStrahlerMetric::NormalizeOff)
    .function("GetMaxStrahler", &vtkStrahlerMetric::GetMaxStrahler);
}
