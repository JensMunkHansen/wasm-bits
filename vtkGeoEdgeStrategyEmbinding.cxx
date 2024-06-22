// JavaScript wrapper for vtkGeoEdgeStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkGeoEdgeStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkGeoEdgeStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGeoEdgeStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkGeoEdgeStrategy>(vtkGeoEdgeStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGeoEdgeStrategy_class) {
  emscripten::class_<vtkGeoEdgeStrategy, emscripten::base<vtkEdgeLayoutStrategy>>("vtkGeoEdgeStrategy")
    .smart_ptr<vtkSmartPointer<vtkGeoEdgeStrategy>>("vtkSmartPointer<vtkGeoEdgeStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGeoEdgeStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeoEdgeStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGeoEdgeStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGeoEdgeStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGeoEdgeStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeoEdgeStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGeoEdgeStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGlobeRadius", &vtkGeoEdgeStrategy::SetGlobeRadius)
    .function("GetGlobeRadius", &vtkGeoEdgeStrategy::GetGlobeRadius)
    .function("SetExplodeFactor", &vtkGeoEdgeStrategy::SetExplodeFactor)
    .function("GetExplodeFactor", &vtkGeoEdgeStrategy::GetExplodeFactor)
    .function("SetNumberOfSubdivisions", &vtkGeoEdgeStrategy::SetNumberOfSubdivisions)
    .function("GetNumberOfSubdivisions", &vtkGeoEdgeStrategy::GetNumberOfSubdivisions)
    .function("Layout", &vtkGeoEdgeStrategy::Layout);
}
