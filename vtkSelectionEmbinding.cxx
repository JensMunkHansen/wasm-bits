// JavaScript wrapper for vtkSelection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkSelectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkSelection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSelectionNode.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkSmartPointer.h"
#include "vtkSignedCharArray.h"
#include "vtkSelection.h"

template<> void emscripten::internal::raw_destructor<vtkSelection>(vtkSelection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSelection_class) {
  emscripten::class_<vtkSelection, emscripten::base<vtkDataObject>>("vtkSelection")
    .smart_ptr<vtkSmartPointer<vtkSelection>>("vtkSmartPointer<vtkSelection>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSelection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSelection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSelection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSelection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSelection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkSelection::Initialize)
    .function("GetDataObjectType", &vtkSelection::GetDataObjectType)
    .function("GetNumberOfNodes", &vtkSelection::GetNumberOfNodes)
    .function("GetNode", emscripten::select_overload<vtkSelectionNode*(vtkSelection&, unsigned int)>([](vtkSelection& self, unsigned int arg_0) -> vtkSelectionNode* { return self.GetNode( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNode", emscripten::select_overload<vtkSelectionNode*(vtkSelection&, const std::string&)>([](vtkSelection& self, const std::string& arg_0) -> vtkSelectionNode* { return self.GetNode( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddNode", &vtkSelection::AddNode, emscripten::allow_raw_pointers())
    .function("SetNode", &vtkSelection::SetNode, emscripten::allow_raw_pointers())
    .function("GetNodeNameAtIndex", &vtkSelection::GetNodeNameAtIndex)
    .function("RemoveNode", emscripten::select_overload<void(vtkSelection&, unsigned int)>([](vtkSelection& self, unsigned int arg_0) -> void { return self.RemoveNode( arg_0); }))
    .function("RemoveNode", emscripten::select_overload<void(vtkSelection&, const std::string&)>([](vtkSelection& self, const std::string& arg_0) -> void { return self.RemoveNode( arg_0); }))
    .function("RemoveNode", emscripten::select_overload<void(vtkSelection&, vtkSelectionNode*)>([](vtkSelection& self, vtkSelectionNode* arg_0) -> void { return self.RemoveNode( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveAllNodes", &vtkSelection::RemoveAllNodes)
    .function("SetExpression", &vtkSelection::SetExpression)
    .function("GetExpression", &vtkSelection::GetExpression)
    .function("DeepCopy", &vtkSelection::DeepCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkSelection::ShallowCopy, emscripten::allow_raw_pointers())
    .function("Union", emscripten::select_overload<void(vtkSelection&, vtkSelection*)>([](vtkSelection& self, vtkSelection* arg_0) -> void { return self.Union( arg_0); }), emscripten::allow_raw_pointers())
    .function("Union", emscripten::select_overload<void(vtkSelection&, vtkSelectionNode*)>([](vtkSelection& self, vtkSelectionNode* arg_0) -> void { return self.Union( arg_0); }), emscripten::allow_raw_pointers())
    .function("Subtract", emscripten::select_overload<void(vtkSelection&, vtkSelection*)>([](vtkSelection& self, vtkSelection* arg_0) -> void { return self.Subtract( arg_0); }), emscripten::allow_raw_pointers())
    .function("Subtract", emscripten::select_overload<void(vtkSelection&, vtkSelectionNode*)>([](vtkSelection& self, vtkSelectionNode* arg_0) -> void { return self.Subtract( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkSelection::GetMTime)
    .function("Dump", emscripten::select_overload<void(vtkSelection&)>([](vtkSelection& self) -> void { return self.Dump(); }))
    .class_function("GetData", emscripten::select_overload<vtkSelection*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkSelection* { return vtkSelection::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkSelection*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkSelection* { return vtkSelection::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
