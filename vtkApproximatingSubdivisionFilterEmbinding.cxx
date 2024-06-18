// JavaScript wrapper for vtkApproximatingSubdivisionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkApproximatingSubdivisionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkApproximatingSubdivisionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkApproximatingSubdivisionFilter.h"

template<> void emscripten::internal::raw_destructor<vtkApproximatingSubdivisionFilter>(vtkApproximatingSubdivisionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkApproximatingSubdivisionFilter_class) {
  emscripten::class_<vtkApproximatingSubdivisionFilter, emscripten::base<vtkSubdivisionFilter>>("vtkApproximatingSubdivisionFilter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkApproximatingSubdivisionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkApproximatingSubdivisionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkApproximatingSubdivisionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkApproximatingSubdivisionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkApproximatingSubdivisionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkApproximatingSubdivisionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
