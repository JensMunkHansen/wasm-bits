// JavaScript wrapper for vtkHyperTree with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTree.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBitArray.h"
#include "vtkTypeInt64Array.h"
#include "vtkIdList.h"
#include "vtkHyperTree.h"


EMSCRIPTEN_BINDINGS(vtkHyperTreeData_class) {
  emscripten::class_<vtkHyperTreeData>("vtkHyperTreeData");
}
template<> void emscripten::internal::raw_destructor<vtkHyperTree>(vtkHyperTree * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTree_class) {
  emscripten::class_<vtkHyperTree, emscripten::base<vtkObject>>("vtkHyperTree")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTree::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTree& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTree::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTree::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTree::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTree& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkHyperTree::Initialize)
    .function("CopyStructure", &vtkHyperTree::CopyStructure, emscripten::allow_raw_pointers())
    .function("SetTreeIndex", &vtkHyperTree::SetTreeIndex)
    .function("GetTreeIndex", &vtkHyperTree::GetTreeIndex)
    .function("GetNumberOfLevels", &vtkHyperTree::GetNumberOfLevels)
    .function("GetNumberOfVertices", &vtkHyperTree::GetNumberOfVertices)
    .function("GetNumberOfNodes", &vtkHyperTree::GetNumberOfNodes)
    .function("GetNumberOfLeaves", &vtkHyperTree::GetNumberOfLeaves)
    .function("GetBranchFactor", &vtkHyperTree::GetBranchFactor)
    .function("GetDimension", &vtkHyperTree::GetDimension)
    .function("GetNumberOfChildren", &vtkHyperTree::GetNumberOfChildren)
    .function("GetScale", emscripten::select_overload<double(vtkHyperTree&, unsigned int)>([](vtkHyperTree& self, unsigned int arg_0) -> double { return self.GetScale( arg_0); }))
    .class_function("CreateInstance", &vtkHyperTree::CreateInstance, emscripten::allow_raw_pointers())
    .function("GetActualMemorySize", &vtkHyperTree::GetActualMemorySize)
    .function("GetGlobalIndexStart", &vtkHyperTree::GetGlobalIndexStart)
    .function("HasScales", &vtkHyperTree::HasScales);
}
