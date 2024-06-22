// JavaScript wrapper for vtkIncrementalOctreeNode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkIncrementalOctreeNodeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkIncrementalOctreeNode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkPoints.h"
#include "vtkIncrementalOctreeNode.h"

template<> void emscripten::internal::raw_destructor<vtkIncrementalOctreeNode>(vtkIncrementalOctreeNode * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIncrementalOctreeNode_class) {
  emscripten::class_<vtkIncrementalOctreeNode, emscripten::base<vtkObject>>("vtkIncrementalOctreeNode")
    .smart_ptr<vtkSmartPointer<vtkIncrementalOctreeNode>>("vtkSmartPointer<vtkIncrementalOctreeNode>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkIncrementalOctreeNode>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIncrementalOctreeNode::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIncrementalOctreeNode& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIncrementalOctreeNode::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIncrementalOctreeNode::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIncrementalOctreeNode::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIncrementalOctreeNode& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfPoints", &vtkIncrementalOctreeNode::GetNumberOfPoints)
    .function("GetPointIdSet", &vtkIncrementalOctreeNode::GetPointIdSet, emscripten::allow_raw_pointers())
    .function("DeleteChildNodes", &vtkIncrementalOctreeNode::DeleteChildNodes)
    .function("SetBounds", &vtkIncrementalOctreeNode::SetBounds)
    .function("GetMinDataBounds", emscripten::optional_override([](vtkIncrementalOctreeNode& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetMinDataBounds()) / sizeof(double);}))
    .function("GetMaxDataBounds", emscripten::optional_override([](vtkIncrementalOctreeNode& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetMaxDataBounds()) / sizeof(double);}))
    .function("IsLeaf", &vtkIncrementalOctreeNode::IsLeaf)
    .function("GetChild", &vtkIncrementalOctreeNode::GetChild, emscripten::allow_raw_pointers())
    .function("ExportAllPointIdsByInsertion", &vtkIncrementalOctreeNode::ExportAllPointIdsByInsertion, emscripten::allow_raw_pointers())
    .function("ExportAllPointIdsByDirectSet", emscripten::optional_override([](vtkIncrementalOctreeNode& self, std::uintptr_t arg_0, vtkIdList* arg_1) -> void {  return self.ExportAllPointIdsByDirectSet(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1);}), emscripten::allow_raw_pointers())
    .function("GetNumberOfLevels", &vtkIncrementalOctreeNode::GetNumberOfLevels)
    .function("GetID", &vtkIncrementalOctreeNode::GetID)
    .function("GetPointIds", &vtkIncrementalOctreeNode::GetPointIds, emscripten::allow_raw_pointers());
}
