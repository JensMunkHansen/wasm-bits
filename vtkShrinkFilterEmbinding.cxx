// JavaScript wrapper for vtkShrinkFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkShrinkFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkShrinkFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkShrinkFilter.h"

template<> void emscripten::internal::raw_destructor<vtkShrinkFilter>(vtkShrinkFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkShrinkFilter_class) {
  emscripten::class_<vtkShrinkFilter, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkShrinkFilter")
    .smart_ptr<vtkSmartPointer<vtkShrinkFilter>>("vtkSmartPointer<vtkShrinkFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkShrinkFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShrinkFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkShrinkFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkShrinkFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkShrinkFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShrinkFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkShrinkFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetShrinkFactor", &vtkShrinkFilter::SetShrinkFactor)
    .function("GetShrinkFactorMinValue", &vtkShrinkFilter::GetShrinkFactorMinValue)
    .function("GetShrinkFactorMaxValue", &vtkShrinkFilter::GetShrinkFactorMaxValue)
    .function("GetShrinkFactor", &vtkShrinkFilter::GetShrinkFactor);
}
