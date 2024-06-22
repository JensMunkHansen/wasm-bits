// JavaScript wrapper for vtkOctreePointLocatorNode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkOctreePointLocatorNodeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkOctreePointLocatorNode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlanesIntersection.h"
#include "vtkOctreePointLocatorNode.h"

template<> void emscripten::internal::raw_destructor<vtkOctreePointLocatorNode>(vtkOctreePointLocatorNode * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOctreePointLocatorNode_class) {
  emscripten::class_<vtkOctreePointLocatorNode, emscripten::base<vtkObject>>("vtkOctreePointLocatorNode")
    .smart_ptr<vtkSmartPointer<vtkOctreePointLocatorNode>>("vtkSmartPointer<vtkOctreePointLocatorNode>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOctreePointLocatorNode>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOctreePointLocatorNode::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOctreePointLocatorNode& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOctreePointLocatorNode::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOctreePointLocatorNode::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOctreePointLocatorNode::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOctreePointLocatorNode& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfPoints", &vtkOctreePointLocatorNode::SetNumberOfPoints)
    .function("GetNumberOfPoints", &vtkOctreePointLocatorNode::GetNumberOfPoints)
    .function("SetBounds", emscripten::select_overload<void(vtkOctreePointLocatorNode&, double, double, double, double, double, double)>([](vtkOctreePointLocatorNode& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetBounds", emscripten::optional_override([](vtkOctreePointLocatorNode& self, std::uintptr_t arg_0) -> void {  return self.GetBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetDataBounds", &vtkOctreePointLocatorNode::SetDataBounds)
    .function("GetDataBounds", emscripten::optional_override([](vtkOctreePointLocatorNode& self, std::uintptr_t arg_0) -> void {  return self.GetDataBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("GetMinBounds", emscripten::optional_override([](vtkOctreePointLocatorNode& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetMinBounds()) / sizeof(double);}))
    .function("GetMaxBounds", emscripten::optional_override([](vtkOctreePointLocatorNode& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetMaxBounds()) / sizeof(double);}))
    .function("GetMinDataBounds", emscripten::optional_override([](vtkOctreePointLocatorNode& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetMinDataBounds()) / sizeof(double);}))
    .function("GetMaxDataBounds", emscripten::optional_override([](vtkOctreePointLocatorNode& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetMaxDataBounds()) / sizeof(double);}))
    .function("GetID", &vtkOctreePointLocatorNode::GetID)
    .function("GetMinID", &vtkOctreePointLocatorNode::GetMinID)
    .function("CreateChildNodes", &vtkOctreePointLocatorNode::CreateChildNodes)
    .function("DeleteChildNodes", &vtkOctreePointLocatorNode::DeleteChildNodes)
    .function("GetChild", &vtkOctreePointLocatorNode::GetChild, emscripten::allow_raw_pointers())
    .function("IntersectsRegion", &vtkOctreePointLocatorNode::IntersectsRegion, emscripten::allow_raw_pointers())
    .function("ContainsPoint", &vtkOctreePointLocatorNode::ContainsPoint)
    .function("GetDistance2ToBoundary", emscripten::select_overload<double(vtkOctreePointLocatorNode&, double, double, double, vtkOctreePointLocatorNode*, int)>([](vtkOctreePointLocatorNode& self, double arg_0, double arg_1, double arg_2, vtkOctreePointLocatorNode* arg_3, int arg_4) -> double { return self.GetDistance2ToBoundary( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("GetDistance2ToBoundary", emscripten::select_overload<double(vtkOctreePointLocatorNode&, double, double, double, std::uintptr_t, vtkOctreePointLocatorNode*, int)>([](vtkOctreePointLocatorNode& self, double arg_0, double arg_1, double arg_2, std::uintptr_t arg_3, vtkOctreePointLocatorNode* arg_4, int arg_5) -> double { return self.GetDistance2ToBoundary( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)), arg_4, arg_5); }), emscripten::allow_raw_pointers())
    .function("GetDistance2ToInnerBoundary", &vtkOctreePointLocatorNode::GetDistance2ToInnerBoundary, emscripten::allow_raw_pointers())
    .function("GetSubOctantIndex", emscripten::optional_override([](vtkOctreePointLocatorNode& self, std::uintptr_t arg_0, int arg_1) -> int {  return self.GetSubOctantIndex(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1);}));
}
