// JavaScript wrapper for vtkCollectGraph with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkCollectGraphEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkCollectGraph.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkSocketController.h"
#include "vtkCollectGraph.h"

template<> void emscripten::internal::raw_destructor<vtkCollectGraph>(vtkCollectGraph * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCollectGraph_class) {
  emscripten::class_<vtkCollectGraph, emscripten::base<vtkGraphAlgorithm>>("vtkCollectGraph")
    .smart_ptr<vtkSmartPointer<vtkCollectGraph>>("vtkSmartPointer<vtkCollectGraph>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCollectGraph>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCollectGraph::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCollectGraph& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCollectGraph::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCollectGraph::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCollectGraph::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCollectGraph& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkCollectGraph::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkCollectGraph::GetController, emscripten::allow_raw_pointers())
    .function("SetSocketController", &vtkCollectGraph::SetSocketController, emscripten::allow_raw_pointers())
    .function("GetSocketController", &vtkCollectGraph::GetSocketController, emscripten::allow_raw_pointers())
    .function("SetPassThrough", &vtkCollectGraph::SetPassThrough)
    .function("GetPassThrough", &vtkCollectGraph::GetPassThrough)
    .function("PassThroughOn", &vtkCollectGraph::PassThroughOn)
    .function("PassThroughOff", &vtkCollectGraph::PassThroughOff)
    .function("SetOutputType", &vtkCollectGraph::SetOutputType)
    .function("GetOutputType", &vtkCollectGraph::GetOutputType);
}
EMSCRIPTEN_BINDINGS(vtkFiltersParallel_vtkCollectGraph_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkCollectGraph_DIRECTED_OUTPUT", vtkCollectGraph::DIRECTED_OUTPUT },
      { "vtkCollectGraph_UNDIRECTED_OUTPUT", vtkCollectGraph::UNDIRECTED_OUTPUT },
      { "vtkCollectGraph_USE_INPUT_TYPE", vtkCollectGraph::USE_INPUT_TYPE },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
