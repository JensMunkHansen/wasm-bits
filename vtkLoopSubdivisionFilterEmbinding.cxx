// JavaScript wrapper for vtkLoopSubdivisionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkLoopSubdivisionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkLoopSubdivisionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLoopSubdivisionFilter.h"

template<> void emscripten::internal::raw_destructor<vtkLoopSubdivisionFilter>(vtkLoopSubdivisionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLoopSubdivisionFilter_class) {
  emscripten::class_<vtkLoopSubdivisionFilter, emscripten::base<vtkApproximatingSubdivisionFilter>>("vtkLoopSubdivisionFilter")
    .smart_ptr<vtkSmartPointer<vtkLoopSubdivisionFilter>>("vtkSmartPointer<vtkLoopSubdivisionFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLoopSubdivisionFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLoopSubdivisionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLoopSubdivisionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLoopSubdivisionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLoopSubdivisionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLoopSubdivisionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLoopSubdivisionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
