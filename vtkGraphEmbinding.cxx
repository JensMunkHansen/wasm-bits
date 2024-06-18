// JavaScript wrapper for vtkGraph with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkGraphEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkGraph.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSetAttributes.h"
#include "vtkPoints.h"
#include "vtkOutEdgeIterator.h"
#include "vtkGraphEdge.h"
#include "vtkInEdgeIterator.h"
#include "vtkAdjacentVertexIterator.h"
#include "vtkEdgeListIterator.h"
#include "vtkVertexListIterator.h"
#include "vtkDistributedGraphHelper.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkIdTypeArray.h"
#include "vtkGraphInternals.h"
#include "vtkFieldData.h"
#include "vtkDirectedGraph.h"
#include "vtkUndirectedGraph.h"
#include "vtkGraph.h"


EMSCRIPTEN_BINDINGS(vtkEdgeBase_class) {
  emscripten::class_<vtkEdgeBase>("vtkEdgeBase");
}

EMSCRIPTEN_BINDINGS(vtkOutEdgeType_class) {
  emscripten::class_<vtkOutEdgeType, emscripten::base<vtkEdgeBase>>("vtkOutEdgeType");
}

EMSCRIPTEN_BINDINGS(vtkInEdgeType_class) {
  emscripten::class_<vtkInEdgeType, emscripten::base<vtkEdgeBase>>("vtkInEdgeType");
}

EMSCRIPTEN_BINDINGS(vtkEdgeType_class) {
  emscripten::class_<vtkEdgeType, emscripten::base<vtkEdgeBase>>("vtkEdgeType");
}
template<> void emscripten::internal::raw_destructor<vtkGraph>(vtkGraph * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraph_class) {
  emscripten::class_<vtkGraph, emscripten::base<vtkDataObject>>("vtkGraph")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraph::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraph& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraph::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraph::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraph::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraph& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetVertexData", &vtkGraph::GetVertexData, emscripten::allow_raw_pointers())
    .function("GetEdgeData", &vtkGraph::GetEdgeData, emscripten::allow_raw_pointers())
    .function("GetDataObjectType", &vtkGraph::GetDataObjectType)
    .function("Initialize", &vtkGraph::Initialize)
    .function("GetPoint", emscripten::select_overload<std::uintptr_t(vtkGraph&, int)>([](vtkGraph& self, int arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetPoint( arg_0)); }))
    .function("GetPoints", &vtkGraph::GetPoints, emscripten::allow_raw_pointers())
    .function("SetPoints", &vtkGraph::SetPoints, emscripten::allow_raw_pointers())
    .function("ComputeBounds", &vtkGraph::ComputeBounds)
    .function("GetBounds", emscripten::select_overload<std::uintptr_t(vtkGraph&)>([](vtkGraph& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetBounds()); }))
    .function("GetMTime", &vtkGraph::GetMTime)
    .function("GetOutEdges", emscripten::select_overload<void(vtkGraph&, int, vtkOutEdgeIterator*)>([](vtkGraph& self, int arg_0, vtkOutEdgeIterator* arg_1) -> void { return self.GetOutEdges( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetDegree", &vtkGraph::GetDegree)
    .function("GetOutDegree", &vtkGraph::GetOutDegree)
    .function("GetOutEdge", emscripten::select_overload<vtkOutEdgeType(vtkGraph&, int, int)>([](vtkGraph& self, int arg_0, int arg_1) -> vtkOutEdgeType { return self.GetOutEdge( arg_0, arg_1); }))
    .function("GetOutEdge", emscripten::select_overload<void(vtkGraph&, int, int, vtkGraphEdge*)>([](vtkGraph& self, int arg_0, int arg_1, vtkGraphEdge* arg_2) -> void { return self.GetOutEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetInEdges", emscripten::select_overload<void(vtkGraph&, int, vtkInEdgeIterator*)>([](vtkGraph& self, int arg_0, vtkInEdgeIterator* arg_1) -> void { return self.GetInEdges( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInDegree", &vtkGraph::GetInDegree)
    .function("GetInEdge", emscripten::select_overload<vtkInEdgeType(vtkGraph&, int, int)>([](vtkGraph& self, int arg_0, int arg_1) -> vtkInEdgeType { return self.GetInEdge( arg_0, arg_1); }))
    .function("GetInEdge", emscripten::select_overload<void(vtkGraph&, int, int, vtkGraphEdge*)>([](vtkGraph& self, int arg_0, int arg_1, vtkGraphEdge* arg_2) -> void { return self.GetInEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetAdjacentVertices", &vtkGraph::GetAdjacentVertices, emscripten::allow_raw_pointers())
    .function("GetEdges", &vtkGraph::GetEdges, emscripten::allow_raw_pointers())
    .function("GetNumberOfEdges", &vtkGraph::GetNumberOfEdges)
    .function("GetVertices", &vtkGraph::GetVertices, emscripten::allow_raw_pointers())
    .function("GetNumberOfVertices", &vtkGraph::GetNumberOfVertices)
    .function("SetDistributedGraphHelper", &vtkGraph::SetDistributedGraphHelper, emscripten::allow_raw_pointers())
    .function("GetDistributedGraphHelper", &vtkGraph::GetDistributedGraphHelper, emscripten::allow_raw_pointers())
    .function("FindVertex", &vtkGraph::FindVertex)
    .function("ShallowCopy", &vtkGraph::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkGraph::DeepCopy, emscripten::allow_raw_pointers())
    .function("CopyStructure", &vtkGraph::CopyStructure, emscripten::allow_raw_pointers())
    .function("CheckedShallowCopy", &vtkGraph::CheckedShallowCopy, emscripten::allow_raw_pointers())
    .function("CheckedDeepCopy", &vtkGraph::CheckedDeepCopy, emscripten::allow_raw_pointers())
    .function("Squeeze", &vtkGraph::Squeeze)
    .function("GetActualMemorySize", &vtkGraph::GetActualMemorySize)
    .class_function("GetData", emscripten::select_overload<vtkGraph*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkGraph* { return vtkGraph::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkGraph*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkGraph* { return vtkGraph::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ReorderOutVertices", &vtkGraph::ReorderOutVertices, emscripten::allow_raw_pointers())
    .function("IsSameStructure", &vtkGraph::IsSameStructure, emscripten::allow_raw_pointers())
    .function("GetSourceVertex", &vtkGraph::GetSourceVertex)
    .function("GetTargetVertex", &vtkGraph::GetTargetVertex)
    .function("GetNumberOfEdgePoints", &vtkGraph::GetNumberOfEdgePoints)
    .function("ClearEdgePoints", &vtkGraph::ClearEdgePoints)
    .function("SetEdgePoint", emscripten::select_overload<void(vtkGraph&, int, int, double, double, double)>([](vtkGraph& self, int arg_0, int arg_1, double arg_2, double arg_3, double arg_4) -> void { return self.SetEdgePoint( arg_0, arg_1, arg_2, arg_3, arg_4); }))
    .function("AddEdgePoint", emscripten::select_overload<void(vtkGraph&, int, double, double, double)>([](vtkGraph& self, int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.AddEdgePoint( arg_0, arg_1, arg_2, arg_3); }))
    .function("ShallowCopyEdgePoints", &vtkGraph::ShallowCopyEdgePoints, emscripten::allow_raw_pointers())
    .function("DeepCopyEdgePoints", &vtkGraph::DeepCopyEdgePoints, emscripten::allow_raw_pointers())
    .function("GetGraphInternals", &vtkGraph::GetGraphInternals, emscripten::allow_raw_pointers())
    .function("GetInducedEdges", &vtkGraph::GetInducedEdges, emscripten::allow_raw_pointers())
    .function("GetAttributesAsFieldData", &vtkGraph::GetAttributesAsFieldData, emscripten::allow_raw_pointers())
    .function("GetNumberOfElements", &vtkGraph::GetNumberOfElements)
    .function("Dump", &vtkGraph::Dump)
    .function("GetEdgeId", &vtkGraph::GetEdgeId)
    .function("ToDirectedGraph", &vtkGraph::ToDirectedGraph, emscripten::allow_raw_pointers())
    .function("ToUndirectedGraph", &vtkGraph::ToUndirectedGraph, emscripten::allow_raw_pointers());
}
