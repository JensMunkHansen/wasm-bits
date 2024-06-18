// JavaScript wrapper for vtkSubdivisionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkSubdivisionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkSubdivisionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSubdivisionFilter.h"

template<> void emscripten::internal::raw_destructor<vtkSubdivisionFilter>(vtkSubdivisionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSubdivisionFilter_class) {
  emscripten::class_<vtkSubdivisionFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkSubdivisionFilter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSubdivisionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSubdivisionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSubdivisionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSubdivisionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSubdivisionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSubdivisionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfSubdivisions", &vtkSubdivisionFilter::SetNumberOfSubdivisions)
    .function("GetNumberOfSubdivisions", &vtkSubdivisionFilter::GetNumberOfSubdivisions)
    .function("SetCheckForTriangles", &vtkSubdivisionFilter::SetCheckForTriangles)
    .function("GetCheckForTrianglesMinValue", &vtkSubdivisionFilter::GetCheckForTrianglesMinValue)
    .function("GetCheckForTrianglesMaxValue", &vtkSubdivisionFilter::GetCheckForTrianglesMaxValue)
    .function("GetCheckForTriangles", &vtkSubdivisionFilter::GetCheckForTriangles)
    .function("CheckForTrianglesOn", &vtkSubdivisionFilter::CheckForTrianglesOn)
    .function("CheckForTrianglesOff", &vtkSubdivisionFilter::CheckForTrianglesOff);
}
