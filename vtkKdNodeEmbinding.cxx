// JavaScript wrapper for vtkKdNode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkKdNodeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkKdNode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlanesIntersection.h"
#include "vtkCell.h"
#include "vtkKdNode.h"

template<> void emscripten::internal::raw_destructor<vtkKdNode>(vtkKdNode * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkKdNode_class) {
  emscripten::class_<vtkKdNode, emscripten::base<vtkObject>>("vtkKdNode")
    .smart_ptr<vtkSmartPointer<vtkKdNode>>("vtkSmartPointer<vtkKdNode>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkKdNode>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKdNode::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkKdNode& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkKdNode::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkKdNode::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKdNode::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkKdNode& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDim", &vtkKdNode::SetDim)
    .function("GetDim", &vtkKdNode::GetDim)
    .function("GetDivisionPosition", &vtkKdNode::GetDivisionPosition)
    .function("SetNumberOfPoints", &vtkKdNode::SetNumberOfPoints)
    .function("GetNumberOfPoints", &vtkKdNode::GetNumberOfPoints)
    .function("SetBounds", emscripten::select_overload<void(vtkKdNode&, double, double, double, double, double, double)>([](vtkKdNode& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetBounds", emscripten::optional_override([](vtkKdNode& self, std::uintptr_t arg_0) -> void {  return self.GetBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetDataBounds", emscripten::select_overload<void(vtkKdNode&, double, double, double, double, double, double)>([](vtkKdNode& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetDataBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetDataBounds", emscripten::select_overload<void(vtkKdNode&, std::uintptr_t)>([](vtkKdNode& self, std::uintptr_t arg_0) -> void { return self.SetDataBounds(reinterpret_cast<float*>(arg_0 * sizeof(float))); }))
    .function("GetDataBounds", emscripten::optional_override([](vtkKdNode& self, std::uintptr_t arg_0) -> void {  return self.GetDataBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetMinBounds", emscripten::optional_override([](vtkKdNode& self, std::uintptr_t arg_0) -> void {  return self.SetMinBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetMaxBounds", emscripten::optional_override([](vtkKdNode& self, std::uintptr_t arg_0) -> void {  return self.SetMaxBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetMinDataBounds", emscripten::optional_override([](vtkKdNode& self, std::uintptr_t arg_0) -> void {  return self.SetMinDataBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetMaxDataBounds", emscripten::optional_override([](vtkKdNode& self, std::uintptr_t arg_0) -> void {  return self.SetMaxDataBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetID", &vtkKdNode::SetID)
    .function("GetID", &vtkKdNode::GetID)
    .function("GetMinID", &vtkKdNode::GetMinID)
    .function("GetMaxID", &vtkKdNode::GetMaxID)
    .function("SetMinID", &vtkKdNode::SetMinID)
    .function("SetMaxID", &vtkKdNode::SetMaxID)
    .function("AddChildNodes", &vtkKdNode::AddChildNodes, emscripten::allow_raw_pointers())
    .function("DeleteChildNodes", &vtkKdNode::DeleteChildNodes)
    .function("GetLeft", &vtkKdNode::GetLeft, emscripten::allow_raw_pointers())
    .function("SetLeft", &vtkKdNode::SetLeft, emscripten::allow_raw_pointers())
    .function("GetRight", &vtkKdNode::GetRight, emscripten::allow_raw_pointers())
    .function("SetRight", &vtkKdNode::SetRight, emscripten::allow_raw_pointers())
    .function("GetUp", &vtkKdNode::GetUp, emscripten::allow_raw_pointers())
    .function("SetUp", &vtkKdNode::SetUp, emscripten::allow_raw_pointers())
    .function("IntersectsBox", &vtkKdNode::IntersectsBox)
    .function("IntersectsSphere2", &vtkKdNode::IntersectsSphere2)
    .function("IntersectsRegion", &vtkKdNode::IntersectsRegion, emscripten::allow_raw_pointers())
    .function("IntersectsCell", emscripten::optional_override([](vtkKdNode& self, vtkCell* arg_0, int arg_1, int arg_2, std::uintptr_t arg_3) -> int {  return self.IntersectsCell( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)));}), emscripten::allow_raw_pointers())
    .function("ContainsBox", &vtkKdNode::ContainsBox)
    .function("ContainsPoint", &vtkKdNode::ContainsPoint)
    .function("GetDistance2ToBoundary", emscripten::select_overload<double(vtkKdNode&, double, double, double, int)>([](vtkKdNode& self, double arg_0, double arg_1, double arg_2, int arg_3) -> double { return self.GetDistance2ToBoundary( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetDistance2ToBoundary", emscripten::select_overload<double(vtkKdNode&, double, double, double, std::uintptr_t, int)>([](vtkKdNode& self, double arg_0, double arg_1, double arg_2, std::uintptr_t arg_3, int arg_4) -> double { return self.GetDistance2ToBoundary( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)), arg_4); }))
    .function("GetDistance2ToInnerBoundary", &vtkKdNode::GetDistance2ToInnerBoundary)
    .function("PrintNode", &vtkKdNode::PrintNode)
    .function("PrintVerboseNode", &vtkKdNode::PrintVerboseNode);
}
