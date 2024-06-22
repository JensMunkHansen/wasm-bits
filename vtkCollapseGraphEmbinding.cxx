// JavaScript wrapper for vtkCollapseGraph with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkCollapseGraphEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkCollapseGraph.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkCollapseGraph.h"

template<> void emscripten::internal::raw_destructor<vtkCollapseGraph>(vtkCollapseGraph * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCollapseGraph_class) {
  emscripten::class_<vtkCollapseGraph, emscripten::base<vtkGraphAlgorithm>>("vtkCollapseGraph")
    .smart_ptr<vtkSmartPointer<vtkCollapseGraph>>("vtkSmartPointer<vtkCollapseGraph>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCollapseGraph>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCollapseGraph::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCollapseGraph& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCollapseGraph::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCollapseGraph::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCollapseGraph::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCollapseGraph& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGraphConnection", &vtkCollapseGraph::SetGraphConnection, emscripten::allow_raw_pointers())
    .function("SetSelectionConnection", &vtkCollapseGraph::SetSelectionConnection, emscripten::allow_raw_pointers());
}
