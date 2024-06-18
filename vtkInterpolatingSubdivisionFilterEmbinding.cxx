// JavaScript wrapper for vtkInterpolatingSubdivisionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkInterpolatingSubdivisionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkInterpolatingSubdivisionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInterpolatingSubdivisionFilter.h"

template<> void emscripten::internal::raw_destructor<vtkInterpolatingSubdivisionFilter>(vtkInterpolatingSubdivisionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInterpolatingSubdivisionFilter_class) {
  emscripten::class_<vtkInterpolatingSubdivisionFilter, emscripten::base<vtkSubdivisionFilter>>("vtkInterpolatingSubdivisionFilter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInterpolatingSubdivisionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInterpolatingSubdivisionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInterpolatingSubdivisionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInterpolatingSubdivisionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInterpolatingSubdivisionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInterpolatingSubdivisionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
