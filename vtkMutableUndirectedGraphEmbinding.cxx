// JavaScript wrapper for vtkMutableUndirectedGraph with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkMutableUndirectedGraphEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkMutableUndirectedGraph.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVariantArray.h"
#include "vtkGraph.h"
#include "vtkGraphEdge.h"
#include "vtkIdTypeArray.h"
#include "vtkMutableUndirectedGraph.h"

template<> void emscripten::internal::raw_destructor<vtkMutableUndirectedGraph>(vtkMutableUndirectedGraph * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMutableUndirectedGraph_class) {
  emscripten::class_<vtkMutableUndirectedGraph, emscripten::base<vtkUndirectedGraph>>("vtkMutableUndirectedGraph")
    .smart_ptr<vtkSmartPointer<vtkMutableUndirectedGraph>>("vtkSmartPointer<vtkMutableUndirectedGraph>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMutableUndirectedGraph>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMutableUndirectedGraph::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMutableUndirectedGraph& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMutableUndirectedGraph::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMutableUndirectedGraph::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMutableUndirectedGraph::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMutableUndirectedGraph& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfVertices", &vtkMutableUndirectedGraph::SetNumberOfVertices)
    .function("AddVertex", emscripten::select_overload<int(vtkMutableUndirectedGraph&)>([](vtkMutableUndirectedGraph& self) -> int { return self.AddVertex(); }))
    .function("AddVertex", emscripten::select_overload<int(vtkMutableUndirectedGraph&, vtkVariantArray*)>([](vtkMutableUndirectedGraph& self, vtkVariantArray* arg_0) -> int { return self.AddVertex( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddVertex", emscripten::select_overload<int(vtkMutableUndirectedGraph&, const vtkVariant&)>([](vtkMutableUndirectedGraph& self, const vtkVariant& arg_0) -> int { return self.AddVertex( arg_0); }))
    .function("AddEdge", emscripten::select_overload<vtkEdgeType(vtkMutableUndirectedGraph&, int, int)>([](vtkMutableUndirectedGraph& self, int arg_0, int arg_1) -> vtkEdgeType { return self.AddEdge( arg_0, arg_1); }))
    .function("AddEdge", emscripten::select_overload<vtkEdgeType(vtkMutableUndirectedGraph&, int, int, vtkVariantArray*)>([](vtkMutableUndirectedGraph& self, int arg_0, int arg_1, vtkVariantArray* arg_2) -> vtkEdgeType { return self.AddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AddEdge", emscripten::select_overload<vtkEdgeType(vtkMutableUndirectedGraph&, const vtkVariant&, int, vtkVariantArray*)>([](vtkMutableUndirectedGraph& self, const vtkVariant& arg_0, int arg_1, vtkVariantArray* arg_2) -> vtkEdgeType { return self.AddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AddEdge", emscripten::select_overload<vtkEdgeType(vtkMutableUndirectedGraph&, int, const vtkVariant&, vtkVariantArray*)>([](vtkMutableUndirectedGraph& self, int arg_0, const vtkVariant& arg_1, vtkVariantArray* arg_2) -> vtkEdgeType { return self.AddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AddEdge", emscripten::select_overload<vtkEdgeType(vtkMutableUndirectedGraph&, const vtkVariant&, const vtkVariant&, vtkVariantArray*)>([](vtkMutableUndirectedGraph& self, const vtkVariant& arg_0, const vtkVariant& arg_1, vtkVariantArray* arg_2) -> vtkEdgeType { return self.AddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("LazyAddVertex", emscripten::select_overload<void(vtkMutableUndirectedGraph&)>([](vtkMutableUndirectedGraph& self) -> void { return self.LazyAddVertex(); }))
    .function("LazyAddVertex", emscripten::select_overload<void(vtkMutableUndirectedGraph&, vtkVariantArray*)>([](vtkMutableUndirectedGraph& self, vtkVariantArray* arg_0) -> void { return self.LazyAddVertex( arg_0); }), emscripten::allow_raw_pointers())
    .function("LazyAddVertex", emscripten::select_overload<void(vtkMutableUndirectedGraph&, const vtkVariant&)>([](vtkMutableUndirectedGraph& self, const vtkVariant& arg_0) -> void { return self.LazyAddVertex( arg_0); }))
    .function("LazyAddEdge", emscripten::select_overload<void(vtkMutableUndirectedGraph&, int, int)>([](vtkMutableUndirectedGraph& self, int arg_0, int arg_1) -> void { return self.LazyAddEdge( arg_0, arg_1); }))
    .function("LazyAddEdge", emscripten::select_overload<void(vtkMutableUndirectedGraph&, int, int, vtkVariantArray*)>([](vtkMutableUndirectedGraph& self, int arg_0, int arg_1, vtkVariantArray* arg_2) -> void { return self.LazyAddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("LazyAddEdge", emscripten::select_overload<void(vtkMutableUndirectedGraph&, const vtkVariant&, int, vtkVariantArray*)>([](vtkMutableUndirectedGraph& self, const vtkVariant& arg_0, int arg_1, vtkVariantArray* arg_2) -> void { return self.LazyAddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("LazyAddEdge", emscripten::select_overload<void(vtkMutableUndirectedGraph&, int, const vtkVariant&, vtkVariantArray*)>([](vtkMutableUndirectedGraph& self, int arg_0, const vtkVariant& arg_1, vtkVariantArray* arg_2) -> void { return self.LazyAddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("LazyAddEdge", emscripten::select_overload<void(vtkMutableUndirectedGraph&, const vtkVariant&, const vtkVariant&, vtkVariantArray*)>([](vtkMutableUndirectedGraph& self, const vtkVariant& arg_0, const vtkVariant& arg_1, vtkVariantArray* arg_2) -> void { return self.LazyAddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AddGraphEdge", &vtkMutableUndirectedGraph::AddGraphEdge, emscripten::allow_raw_pointers())
    .function("RemoveVertex", &vtkMutableUndirectedGraph::RemoveVertex)
    .function("RemoveEdge", &vtkMutableUndirectedGraph::RemoveEdge)
    .function("RemoveVertices", &vtkMutableUndirectedGraph::RemoveVertices, emscripten::allow_raw_pointers())
    .function("RemoveEdges", &vtkMutableUndirectedGraph::RemoveEdges, emscripten::allow_raw_pointers());
}
