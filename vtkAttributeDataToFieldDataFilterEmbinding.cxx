// JavaScript wrapper for vtkAttributeDataToFieldDataFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkAttributeDataToFieldDataFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkAttributeDataToFieldDataFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkAttributeDataToFieldDataFilter.h"

template<> void emscripten::internal::raw_destructor<vtkAttributeDataToFieldDataFilter>(vtkAttributeDataToFieldDataFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAttributeDataToFieldDataFilter_class) {
  emscripten::class_<vtkAttributeDataToFieldDataFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkAttributeDataToFieldDataFilter")
    .smart_ptr<vtkSmartPointer<vtkAttributeDataToFieldDataFilter>>("vtkSmartPointer<vtkAttributeDataToFieldDataFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAttributeDataToFieldDataFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAttributeDataToFieldDataFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAttributeDataToFieldDataFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAttributeDataToFieldDataFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAttributeDataToFieldDataFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAttributeDataToFieldDataFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAttributeDataToFieldDataFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPassAttributeData", &vtkAttributeDataToFieldDataFilter::SetPassAttributeData)
    .function("GetPassAttributeData", &vtkAttributeDataToFieldDataFilter::GetPassAttributeData)
    .function("PassAttributeDataOn", &vtkAttributeDataToFieldDataFilter::PassAttributeDataOn)
    .function("PassAttributeDataOff", &vtkAttributeDataToFieldDataFilter::PassAttributeDataOff);
}
