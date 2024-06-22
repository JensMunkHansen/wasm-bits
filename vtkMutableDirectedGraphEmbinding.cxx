// JavaScript wrapper for vtkMutableDirectedGraph with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkMutableDirectedGraphEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkMutableDirectedGraph.h
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
#include "vtkMutableDirectedGraph.h"

template<> void emscripten::internal::raw_destructor<vtkMutableDirectedGraph>(vtkMutableDirectedGraph * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMutableDirectedGraph_class) {
  emscripten::class_<vtkMutableDirectedGraph, emscripten::base<vtkDirectedGraph>>("vtkMutableDirectedGraph")
    .smart_ptr<vtkSmartPointer<vtkMutableDirectedGraph>>("vtkSmartPointer<vtkMutableDirectedGraph>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMutableDirectedGraph>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMutableDirectedGraph::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMutableDirectedGraph& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMutableDirectedGraph::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMutableDirectedGraph::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMutableDirectedGraph::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMutableDirectedGraph& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfVertices", &vtkMutableDirectedGraph::SetNumberOfVertices)
    .function("AddVertex", emscripten::select_overload<int(vtkMutableDirectedGraph&)>([](vtkMutableDirectedGraph& self) -> int { return self.AddVertex(); }))
    .function("AddVertex", emscripten::select_overload<int(vtkMutableDirectedGraph&, vtkVariantArray*)>([](vtkMutableDirectedGraph& self, vtkVariantArray* arg_0) -> int { return self.AddVertex( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddVertex", emscripten::select_overload<int(vtkMutableDirectedGraph&, const vtkVariant&)>([](vtkMutableDirectedGraph& self, const vtkVariant& arg_0) -> int { return self.AddVertex( arg_0); }))
    .function("AddEdge", emscripten::select_overload<vtkEdgeType(vtkMutableDirectedGraph&, int, int)>([](vtkMutableDirectedGraph& self, int arg_0, int arg_1) -> vtkEdgeType { return self.AddEdge( arg_0, arg_1); }))
    .function("AddEdge", emscripten::select_overload<vtkEdgeType(vtkMutableDirectedGraph&, int, int, vtkVariantArray*)>([](vtkMutableDirectedGraph& self, int arg_0, int arg_1, vtkVariantArray* arg_2) -> vtkEdgeType { return self.AddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AddEdge", emscripten::select_overload<vtkEdgeType(vtkMutableDirectedGraph&, const vtkVariant&, int, vtkVariantArray*)>([](vtkMutableDirectedGraph& self, const vtkVariant& arg_0, int arg_1, vtkVariantArray* arg_2) -> vtkEdgeType { return self.AddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AddEdge", emscripten::select_overload<vtkEdgeType(vtkMutableDirectedGraph&, int, const vtkVariant&, vtkVariantArray*)>([](vtkMutableDirectedGraph& self, int arg_0, const vtkVariant& arg_1, vtkVariantArray* arg_2) -> vtkEdgeType { return self.AddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AddEdge", emscripten::select_overload<vtkEdgeType(vtkMutableDirectedGraph&, const vtkVariant&, const vtkVariant&, vtkVariantArray*)>([](vtkMutableDirectedGraph& self, const vtkVariant& arg_0, const vtkVariant& arg_1, vtkVariantArray* arg_2) -> vtkEdgeType { return self.AddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("LazyAddVertex", emscripten::select_overload<void(vtkMutableDirectedGraph&)>([](vtkMutableDirectedGraph& self) -> void { return self.LazyAddVertex(); }))
    .function("LazyAddVertex", emscripten::select_overload<void(vtkMutableDirectedGraph&, vtkVariantArray*)>([](vtkMutableDirectedGraph& self, vtkVariantArray* arg_0) -> void { return self.LazyAddVertex( arg_0); }), emscripten::allow_raw_pointers())
    .function("LazyAddVertex", emscripten::select_overload<void(vtkMutableDirectedGraph&, const vtkVariant&)>([](vtkMutableDirectedGraph& self, const vtkVariant& arg_0) -> void { return self.LazyAddVertex( arg_0); }))
    .function("LazyAddEdge", emscripten::select_overload<void(vtkMutableDirectedGraph&, int, int, vtkVariantArray*)>([](vtkMutableDirectedGraph& self, int arg_0, int arg_1, vtkVariantArray* arg_2) -> void { return self.LazyAddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("LazyAddEdge", emscripten::select_overload<void(vtkMutableDirectedGraph&, const vtkVariant&, int, vtkVariantArray*)>([](vtkMutableDirectedGraph& self, const vtkVariant& arg_0, int arg_1, vtkVariantArray* arg_2) -> void { return self.LazyAddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("LazyAddEdge", emscripten::select_overload<void(vtkMutableDirectedGraph&, int, const vtkVariant&, vtkVariantArray*)>([](vtkMutableDirectedGraph& self, int arg_0, const vtkVariant& arg_1, vtkVariantArray* arg_2) -> void { return self.LazyAddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("LazyAddEdge", emscripten::select_overload<void(vtkMutableDirectedGraph&, const vtkVariant&, const vtkVariant&, vtkVariantArray*)>([](vtkMutableDirectedGraph& self, const vtkVariant& arg_0, const vtkVariant& arg_1, vtkVariantArray* arg_2) -> void { return self.LazyAddEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AddGraphEdge", &vtkMutableDirectedGraph::AddGraphEdge, emscripten::allow_raw_pointers())
    .function("AddChild", emscripten::select_overload<int(vtkMutableDirectedGraph&, int, vtkVariantArray*)>([](vtkMutableDirectedGraph& self, int arg_0, vtkVariantArray* arg_1) -> int { return self.AddChild( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddChild", emscripten::select_overload<int(vtkMutableDirectedGraph&, int)>([](vtkMutableDirectedGraph& self, int arg_0) -> int { return self.AddChild( arg_0); }))
    .function("RemoveVertex", &vtkMutableDirectedGraph::RemoveVertex)
    .function("RemoveEdge", &vtkMutableDirectedGraph::RemoveEdge)
    .function("RemoveVertices", &vtkMutableDirectedGraph::RemoveVertices, emscripten::allow_raw_pointers())
    .function("RemoveEdges", &vtkMutableDirectedGraph::RemoveEdges, emscripten::allow_raw_pointers());
}
