// JavaScript wrapper for vtkDataAssembly with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDataAssemblyEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDataAssembly.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataAssemblyVisitor.h"
#include "vtkDataAssembly.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkDataAssembly_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkDataAssembly>(vtkDataAssembly * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataAssembly_class) {
  using TraversalOrder=vtkDataAssembly::TraversalOrder;
  emscripten::class_<vtkDataAssembly, emscripten::base<vtkObject>>("vtkDataAssembly")
    .smart_ptr<vtkSmartPointer<vtkDataAssembly>>("vtkSmartPointer<vtkDataAssembly>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataAssembly>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataAssembly::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataAssembly& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataAssembly::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataAssembly::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataAssembly::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataAssembly& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkDataAssembly::Initialize)
    .function("InitializeFromXML", emscripten::optional_override([](vtkDataAssembly& self, const std::string & arg_0) -> bool {  return self.InitializeFromXML( arg_0.c_str());}))
    .function("SerializeToXML", &vtkDataAssembly::SerializeToXML)
    .class_function("GetRootNode", &vtkDataAssembly::GetRootNode)
    .function("SetRootNodeName", emscripten::optional_override([](vtkDataAssembly& self, const std::string & arg_0) -> void {  return self.SetRootNodeName( arg_0.c_str());}))
    .function("GetRootNodeName", emscripten::optional_override([](vtkDataAssembly& self) -> std::string {  return self.GetRootNodeName();}))
    .function("AddNode", emscripten::optional_override([](vtkDataAssembly& self, const std::string & arg_0, int arg_1) -> int {  return self.AddNode( arg_0.c_str(), arg_1);}))
    .function("AddNodes", &vtkDataAssembly::AddNodes)
    .function("AddSubtree", &vtkDataAssembly::AddSubtree, emscripten::allow_raw_pointers())
    .function("RemoveNode", &vtkDataAssembly::RemoveNode)
    .function("SetNodeName", emscripten::optional_override([](vtkDataAssembly& self, int arg_0, const std::string & arg_1) -> void {  return self.SetNodeName( arg_0, arg_1.c_str());}))
    .function("GetNodeName", emscripten::optional_override([](vtkDataAssembly& self, int arg_0) -> std::string {  return self.GetNodeName( arg_0);}))
    .function("GetNodePath", &vtkDataAssembly::GetNodePath)
    .function("GetFirstNodeByPath", emscripten::optional_override([](vtkDataAssembly& self, const std::string & arg_0) -> int {  return self.GetFirstNodeByPath( arg_0.c_str());}))
    .function("AddDataSetIndex", &vtkDataAssembly::AddDataSetIndex)
    .function("AddDataSetIndices", &vtkDataAssembly::AddDataSetIndices)
    .function("AddDataSetIndexRange", &vtkDataAssembly::AddDataSetIndexRange)
    .function("RemoveDataSetIndex", &vtkDataAssembly::RemoveDataSetIndex)
    .function("RemoveAllDataSetIndices", &vtkDataAssembly::RemoveAllDataSetIndices)
    .function("FindFirstNodeWithName", emscripten::optional_override([](vtkDataAssembly& self, const std::string & arg_0, int arg_1) -> int {  return self.FindFirstNodeWithName( arg_0.c_str(), arg_1);}))
    .function("FindNodesWithName", emscripten::optional_override([](vtkDataAssembly& self, const std::string & arg_0, int arg_1) -> std::vector<int> {  return self.FindNodesWithName( arg_0.c_str(), arg_1);}))
    .function("GetChildNodes", &vtkDataAssembly::GetChildNodes)
    .function("GetNumberOfChildren", &vtkDataAssembly::GetNumberOfChildren)
    .function("GetChild", &vtkDataAssembly::GetChild)
    .function("GetChildIndex", &vtkDataAssembly::GetChildIndex)
    .function("GetParent", &vtkDataAssembly::GetParent)
    .function("HasAttribute", emscripten::optional_override([](vtkDataAssembly& self, int arg_0, const std::string & arg_1) -> bool {  return self.HasAttribute( arg_0, arg_1.c_str());}))
    .function("SetAttribute", emscripten::select_overload<void(vtkDataAssembly&, int, const std::string &, const std::string &)>([](vtkDataAssembly& self, int arg_0, const std::string & arg_1, const std::string & arg_2) -> void { return self.SetAttribute( arg_0, arg_1.c_str(), arg_2.c_str()); }))
    .function("SetAttribute", emscripten::select_overload<void(vtkDataAssembly&, int, const std::string &, int)>([](vtkDataAssembly& self, int arg_0, const std::string & arg_1, int arg_2) -> void { return self.SetAttribute( arg_0, arg_1.c_str(), arg_2); }))
    .function("SetAttribute", emscripten::select_overload<void(vtkDataAssembly&, int, const std::string &, unsigned int)>([](vtkDataAssembly& self, int arg_0, const std::string & arg_1, unsigned int arg_2) -> void { return self.SetAttribute( arg_0, arg_1.c_str(), arg_2); }))
    .function("GetAttributeOrDefault", emscripten::select_overload<std::string(vtkDataAssembly&, int, const std::string &, const std::string &)>([](vtkDataAssembly& self, int arg_0, const std::string & arg_1, const std::string & arg_2) -> std::string { return self.GetAttributeOrDefault( arg_0, arg_1.c_str(), arg_2.c_str()); }))
    .function("GetAttributeOrDefault", emscripten::select_overload<int(vtkDataAssembly&, int, const std::string &, int)>([](vtkDataAssembly& self, int arg_0, const std::string & arg_1, int arg_2) -> int { return self.GetAttributeOrDefault( arg_0, arg_1.c_str(), arg_2); }))
    .function("GetAttributeOrDefault", emscripten::select_overload<unsigned int(vtkDataAssembly&, int, const std::string &, unsigned int)>([](vtkDataAssembly& self, int arg_0, const std::string & arg_1, unsigned int arg_2) -> unsigned int { return self.GetAttributeOrDefault( arg_0, arg_1.c_str(), arg_2); }))
    .function("Visit", emscripten::select_overload<void(vtkDataAssembly&, vtkDataAssemblyVisitor*, int)>([](vtkDataAssembly& self, vtkDataAssemblyVisitor* arg_0, int arg_1) -> void { return self.Visit( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Visit", emscripten::select_overload<void(vtkDataAssembly&, int, vtkDataAssemblyVisitor*, int)>([](vtkDataAssembly& self, int arg_0, vtkDataAssemblyVisitor* arg_1, int arg_2) -> void { return self.Visit( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetDataSetIndices", emscripten::select_overload<std::vector<unsigned int>(vtkDataAssembly&, int, bool, int)>([](vtkDataAssembly& self, int arg_0, bool arg_1, int arg_2) -> std::vector<unsigned int> { return self.GetDataSetIndices( arg_0, arg_1, arg_2); }))
    .function("GetDataSetIndices", emscripten::select_overload<std::vector<unsigned int>(vtkDataAssembly&, const std::vector<int>&, bool, int)>([](vtkDataAssembly& self, const std::vector<int>& arg_0, bool arg_1, int arg_2) -> std::vector<unsigned int> { return self.GetDataSetIndices( arg_0, arg_1, arg_2); }))
    .function("SelectNodes", &vtkDataAssembly::SelectNodes)
    .function("SubsetCopy", &vtkDataAssembly::SubsetCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkDataAssembly::DeepCopy, emscripten::allow_raw_pointers())
    .class_function("IsNodeNameValid", emscripten::optional_override([]( const std::string & arg_0) -> bool {  return vtkDataAssembly::IsNodeNameValid( arg_0.c_str());}))
    .class_function("MakeValidNodeName", emscripten::optional_override([]( const std::string & arg_0) -> std::string {  return vtkDataAssembly::MakeValidNodeName( arg_0.c_str());}))
    .class_function("IsNodeNameReserved", emscripten::optional_override([]( const std::string & arg_0) -> bool {  return vtkDataAssembly::IsNodeNameReserved( arg_0.c_str());}));
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkDataAssembly_0_2_constants) {
    typedef vtkDataAssembly::TraversalOrder cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkDataAssembly_TraversalOrder_DepthFirst", vtkDataAssembly::DepthFirst },
      { "vtkDataAssembly_TraversalOrder_BreadthFirst", vtkDataAssembly::BreadthFirst },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
