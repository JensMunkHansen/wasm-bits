// JavaScript wrapper for vtkTree with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkTreeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkTree.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAdjacentVertexIterator.h"
#include "vtkGraph.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkIdTypeArray.h"
#include "vtkTree.h"

template<> void emscripten::internal::raw_destructor<vtkTree>(vtkTree * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTree_class) {
  emscripten::class_<vtkTree, emscripten::base<vtkDirectedAcyclicGraph>>("vtkTree")
    .smart_ptr<vtkSmartPointer<vtkTree>>("vtkSmartPointer<vtkTree>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTree>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTree::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTree& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTree::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTree::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTree::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTree& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkTree::GetDataObjectType)
    .function("GetRoot", &vtkTree::GetRoot)
    .function("GetNumberOfChildren", &vtkTree::GetNumberOfChildren)
    .function("GetChild", &vtkTree::GetChild)
    .function("GetChildren", &vtkTree::GetChildren, emscripten::allow_raw_pointers())
    .function("GetParent", &vtkTree::GetParent)
    .function("GetParentEdge", &vtkTree::GetParentEdge)
    .function("GetLevel", &vtkTree::GetLevel)
    .function("IsLeaf", &vtkTree::IsLeaf)
    .class_function("GetData", emscripten::select_overload<vtkTree*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkTree* { return vtkTree::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkTree*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkTree* { return vtkTree::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ReorderChildren", &vtkTree::ReorderChildren, emscripten::allow_raw_pointers());
}
