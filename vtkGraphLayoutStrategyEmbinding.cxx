// JavaScript wrapper for vtkGraphLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkGraphLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkGraphLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkGraphLayoutStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkGraphLayoutStrategy>(vtkGraphLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphLayoutStrategy_class) {
  emscripten::class_<vtkGraphLayoutStrategy, emscripten::base<vtkObject>>("vtkGraphLayoutStrategy")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGraph", &vtkGraphLayoutStrategy::SetGraph, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkGraphLayoutStrategy::Initialize)
    .function("IsLayoutComplete", &vtkGraphLayoutStrategy::IsLayoutComplete)
    .function("SetWeightEdges", &vtkGraphLayoutStrategy::SetWeightEdges)
    .function("GetWeightEdges", &vtkGraphLayoutStrategy::GetWeightEdges)
    .function("SetEdgeWeightField", emscripten::optional_override([](vtkGraphLayoutStrategy& self, const std::string & arg_0) -> void {  return self.SetEdgeWeightField( arg_0.c_str());}))
    .function("GetEdgeWeightField", emscripten::optional_override([](vtkGraphLayoutStrategy& self) -> std::string {  return self.GetEdgeWeightField();}));
}
