// JavaScript wrapper for vtkAssemblyNode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkAssemblyNodeEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkAssemblyNode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp.h"
#include "vtkMatrix4x4.h"
#include "vtkAssemblyNode.h"

template<> void emscripten::internal::raw_destructor<vtkAssemblyNode>(vtkAssemblyNode * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAssemblyNode_class) {
  emscripten::class_<vtkAssemblyNode, emscripten::base<vtkObject>>("vtkAssemblyNode")
    .smart_ptr<vtkSmartPointer<vtkAssemblyNode>>("vtkSmartPointer<vtkAssemblyNode>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAssemblyNode>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAssemblyNode::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAssemblyNode& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAssemblyNode::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAssemblyNode::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAssemblyNode::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAssemblyNode& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetViewProp", &vtkAssemblyNode::SetViewProp, emscripten::allow_raw_pointers())
    .function("GetViewProp", &vtkAssemblyNode::GetViewProp, emscripten::allow_raw_pointers())
    .function("SetMatrix", &vtkAssemblyNode::SetMatrix, emscripten::allow_raw_pointers())
    .function("GetMatrix", &vtkAssemblyNode::GetMatrix, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkAssemblyNode::GetMTime);
}
