// JavaScript wrapper for vtkGeodesicPath with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkGeodesicPathEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkGeodesicPath.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGeodesicPath.h"

template<> void emscripten::internal::raw_destructor<vtkGeodesicPath>(vtkGeodesicPath * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGeodesicPath_class) {
  emscripten::class_<vtkGeodesicPath, emscripten::base<vtkPolyDataAlgorithm>>("vtkGeodesicPath")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeodesicPath::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGeodesicPath& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGeodesicPath::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGeodesicPath::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeodesicPath::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGeodesicPath& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
