// JavaScript wrapper for vtkReebGraph with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkReebGraphEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkReebGraph.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkDataArray.h"
#include "vtkUnstructuredGrid.h"
#include "vtkDataObject.h"
#include "vtkReebGraphSimplificationMetric.h"
#include "vtkMutableDirectedGraph.h"
#include "vtkReebGraph.h"

template<> void emscripten::internal::raw_destructor<vtkReebGraph>(vtkReebGraph * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkReebGraph_class) {
  emscripten::class_<vtkReebGraph, emscripten::base<vtkMutableDirectedGraph>>("vtkReebGraph")
    .smart_ptr<vtkSmartPointer<vtkReebGraph>>("vtkSmartPointer<vtkReebGraph>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkReebGraph>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkReebGraph::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkReebGraph& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkReebGraph::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkReebGraph::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkReebGraph::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkReebGraph& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkReebGraph::GetDataObjectType)
    .function("Build", emscripten::select_overload<int(vtkReebGraph&, vtkPolyData*, vtkDataArray*)>([](vtkReebGraph& self, vtkPolyData* arg_0, vtkDataArray* arg_1) -> int { return self.Build( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Build", emscripten::select_overload<int(vtkReebGraph&, vtkUnstructuredGrid*, vtkDataArray*)>([](vtkReebGraph& self, vtkUnstructuredGrid* arg_0, vtkDataArray* arg_1) -> int { return self.Build( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Build", emscripten::select_overload<int(vtkReebGraph&, vtkPolyData*, int)>([](vtkReebGraph& self, vtkPolyData* arg_0, int arg_1) -> int { return self.Build( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Build", emscripten::select_overload<int(vtkReebGraph&, vtkUnstructuredGrid*, int)>([](vtkReebGraph& self, vtkUnstructuredGrid* arg_0, int arg_1) -> int { return self.Build( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Build", emscripten::select_overload<int(vtkReebGraph&, vtkPolyData*, const std::string &)>([](vtkReebGraph& self, vtkPolyData* arg_0, const std::string & arg_1) -> int { return self.Build( arg_0, arg_1.c_str()); }), emscripten::allow_raw_pointers())
    .function("Build", emscripten::select_overload<int(vtkReebGraph&, vtkUnstructuredGrid*, const std::string &)>([](vtkReebGraph& self, vtkUnstructuredGrid* arg_0, const std::string & arg_1) -> int { return self.Build( arg_0, arg_1.c_str()); }), emscripten::allow_raw_pointers())
    .function("StreamTriangle", &vtkReebGraph::StreamTriangle)
    .function("StreamTetrahedron", &vtkReebGraph::StreamTetrahedron)
    .function("CloseStream", &vtkReebGraph::CloseStream)
    .function("DeepCopy", &vtkReebGraph::DeepCopy, emscripten::allow_raw_pointers())
    .function("Simplify", &vtkReebGraph::Simplify, emscripten::allow_raw_pointers())
    .function("Set", &vtkReebGraph::Set, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkReebGraph_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkReebGraph_ERR_INCORRECT_FIELD", vtkReebGraph::ERR_INCORRECT_FIELD },
      { "vtkReebGraph_ERR_NO_SUCH_FIELD", vtkReebGraph::ERR_NO_SUCH_FIELD },
      { "vtkReebGraph_ERR_NOT_A_SIMPLICIAL_MESH", vtkReebGraph::ERR_NOT_A_SIMPLICIAL_MESH },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
