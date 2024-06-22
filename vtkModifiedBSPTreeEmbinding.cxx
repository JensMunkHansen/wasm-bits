// JavaScript wrapper for vtkModifiedBSPTree with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkModifiedBSPTreeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkModifiedBSPTree.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericCell.h"
#include "vtkPoints.h"
#include "vtkIdList.h"
#include "vtkIdListCollection.h"
#include "vtkPolyData.h"
#include "vtkAbstractCellLocator.h"
#include "vtkModifiedBSPTree.h"

template<> void emscripten::internal::raw_destructor<vtkModifiedBSPTree>(vtkModifiedBSPTree * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkModifiedBSPTree_class) {
  emscripten::class_<vtkModifiedBSPTree, emscripten::base<vtkAbstractCellLocator>>("vtkModifiedBSPTree")
    .smart_ptr<vtkSmartPointer<vtkModifiedBSPTree>>("vtkSmartPointer<vtkModifiedBSPTree>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkModifiedBSPTree>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkModifiedBSPTree::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkModifiedBSPTree& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkModifiedBSPTree::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkModifiedBSPTree::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkModifiedBSPTree::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkModifiedBSPTree& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetLeafNodeCellInformation", &vtkModifiedBSPTree::GetLeafNodeCellInformation, emscripten::allow_raw_pointers())
    .function("GenerateRepresentationLeafs", &vtkModifiedBSPTree::GenerateRepresentationLeafs, emscripten::allow_raw_pointers())
    .function("GenerateRepresentation", &vtkModifiedBSPTree::GenerateRepresentation, emscripten::allow_raw_pointers())
    .function("FreeSearchStructure", &vtkModifiedBSPTree::FreeSearchStructure)
    .function("BuildLocator", &vtkModifiedBSPTree::BuildLocator)
    .function("ForceBuildLocator", &vtkModifiedBSPTree::ForceBuildLocator)
    .function("ShallowCopy", &vtkModifiedBSPTree::ShallowCopy, emscripten::allow_raw_pointers());
}
