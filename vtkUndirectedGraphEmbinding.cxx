// JavaScript wrapper for vtkUndirectedGraph with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkUndirectedGraphEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkUndirectedGraph.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkGraphEdge.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkInEdgeIterator.h"
#include "vtkUndirectedGraph.h"

template<> void emscripten::internal::raw_destructor<vtkUndirectedGraph>(vtkUndirectedGraph * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUndirectedGraph_class) {
  emscripten::class_<vtkUndirectedGraph, emscripten::base<vtkGraph>>("vtkUndirectedGraph")
    .smart_ptr<vtkSmartPointer<vtkUndirectedGraph>>("vtkSmartPointer<vtkUndirectedGraph>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUndirectedGraph>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUndirectedGraph::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUndirectedGraph& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUndirectedGraph::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUndirectedGraph::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUndirectedGraph::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUndirectedGraph& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkUndirectedGraph::GetDataObjectType)
    .function("GetInDegree", &vtkUndirectedGraph::GetInDegree)
    .function("GetInEdge", emscripten::select_overload<vtkInEdgeType(vtkUndirectedGraph&, int, int)>([](vtkUndirectedGraph& self, int arg_0, int arg_1) -> vtkInEdgeType { return self.GetInEdge( arg_0, arg_1); }))
    .function("GetInEdge", emscripten::select_overload<void(vtkUndirectedGraph&, int, int, vtkGraphEdge*)>([](vtkUndirectedGraph& self, int arg_0, int arg_1, vtkGraphEdge* arg_2) -> void { return self.GetInEdge( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkUndirectedGraph*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkUndirectedGraph* { return vtkUndirectedGraph::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkUndirectedGraph*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkUndirectedGraph* { return vtkUndirectedGraph::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInEdges", emscripten::select_overload<void(vtkUndirectedGraph&, int, vtkInEdgeIterator*)>([](vtkUndirectedGraph& self, int arg_0, vtkInEdgeIterator* arg_1) -> void { return self.GetInEdges( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("IsStructureValid", &vtkUndirectedGraph::IsStructureValid, emscripten::allow_raw_pointers());
}
