// JavaScript wrapper for vtkTableToGraph with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkTableToGraphEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkTableToGraph.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMutableDirectedGraph.h"
#include "vtkStringArray.h"
#include "vtkBitArray.h"
#include "vtkAlgorithmOutput.h"
#include "vtkTableToGraph.h"

template<> void emscripten::internal::raw_destructor<vtkTableToGraph>(vtkTableToGraph * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTableToGraph_class) {
  emscripten::class_<vtkTableToGraph, emscripten::base<vtkGraphAlgorithm>>("vtkTableToGraph")
    .smart_ptr<vtkSmartPointer<vtkTableToGraph>>("vtkSmartPointer<vtkTableToGraph>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTableToGraph>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToGraph::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTableToGraph& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTableToGraph::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTableToGraph::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToGraph::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTableToGraph& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddLinkVertex", emscripten::optional_override([](vtkTableToGraph& self, const std::string & arg_0, const std::string & arg_1, int arg_2) -> void {  return self.AddLinkVertex( arg_0.c_str(), arg_1.c_str(), arg_2);}))
    .function("ClearLinkVertices", &vtkTableToGraph::ClearLinkVertices)
    .function("AddLinkEdge", emscripten::optional_override([](vtkTableToGraph& self, const std::string & arg_0, const std::string & arg_1) -> void {  return self.AddLinkEdge( arg_0.c_str(), arg_1.c_str());}))
    .function("ClearLinkEdges", &vtkTableToGraph::ClearLinkEdges)
    .function("GetLinkGraph", &vtkTableToGraph::GetLinkGraph, emscripten::allow_raw_pointers())
    .function("SetLinkGraph", &vtkTableToGraph::SetLinkGraph, emscripten::allow_raw_pointers())
    .function("LinkColumnPath", &vtkTableToGraph::LinkColumnPath, emscripten::allow_raw_pointers())
    .function("SetDirected", &vtkTableToGraph::SetDirected)
    .function("GetDirected", &vtkTableToGraph::GetDirected)
    .function("DirectedOn", &vtkTableToGraph::DirectedOn)
    .function("DirectedOff", &vtkTableToGraph::DirectedOff)
    .function("GetMTime", &vtkTableToGraph::GetMTime)
    .function("SetVertexTableConnection", &vtkTableToGraph::SetVertexTableConnection, emscripten::allow_raw_pointers());
}
