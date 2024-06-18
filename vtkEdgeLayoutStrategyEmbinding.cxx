// JavaScript wrapper for vtkEdgeLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkEdgeLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkEdgeLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkEdgeLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkEdgeLayoutStrategy>(vtkEdgeLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEdgeLayoutStrategy_class) {
  emscripten::class_<vtkEdgeLayoutStrategy, emscripten::base<vtkObject>>("vtkEdgeLayoutStrategy")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEdgeLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEdgeLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEdgeLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEdgeLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEdgeLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEdgeLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGraph", &vtkEdgeLayoutStrategy::SetGraph, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkEdgeLayoutStrategy::Initialize)
    .function("SetEdgeWeightArrayName", emscripten::optional_override([](vtkEdgeLayoutStrategy& self, const std::string & arg_0) -> void {  return self.SetEdgeWeightArrayName( arg_0.c_str());}))
    .function("GetEdgeWeightArrayName", emscripten::optional_override([](vtkEdgeLayoutStrategy& self) -> std::string {  return self.GetEdgeWeightArrayName();}));
}
