// JavaScript wrapper for vtkGenericProbeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkFiltersGeneric.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkGenericProbeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Generic/vtkGenericProbeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericDataSet.h"
#include "vtkIdTypeArray.h"
#include "vtkGenericProbeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkGenericProbeFilter>(vtkGenericProbeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericProbeFilter_class) {
  emscripten::class_<vtkGenericProbeFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkGenericProbeFilter")
    .smart_ptr<vtkSmartPointer<vtkGenericProbeFilter>>("vtkSmartPointer<vtkGenericProbeFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGenericProbeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericProbeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericProbeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericProbeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericProbeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericProbeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericProbeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceData", &vtkGenericProbeFilter::SetSourceData, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkGenericProbeFilter::GetSource, emscripten::allow_raw_pointers())
    .function("GetValidPoints", &vtkGenericProbeFilter::GetValidPoints, emscripten::allow_raw_pointers());
}
