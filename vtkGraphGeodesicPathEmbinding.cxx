// JavaScript wrapper for vtkGraphGeodesicPath with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkGraphGeodesicPathEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkGraphGeodesicPath.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraphGeodesicPath.h"

template<> void emscripten::internal::raw_destructor<vtkGraphGeodesicPath>(vtkGraphGeodesicPath * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphGeodesicPath_class) {
  emscripten::class_<vtkGraphGeodesicPath, emscripten::base<vtkGeodesicPath>>("vtkGraphGeodesicPath")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphGeodesicPath::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphGeodesicPath& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphGeodesicPath::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphGeodesicPath::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphGeodesicPath::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphGeodesicPath& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetStartVertex", &vtkGraphGeodesicPath::GetStartVertex)
    .function("SetStartVertex", &vtkGraphGeodesicPath::SetStartVertex)
    .function("GetEndVertex", &vtkGraphGeodesicPath::GetEndVertex)
    .function("SetEndVertex", &vtkGraphGeodesicPath::SetEndVertex);
}
