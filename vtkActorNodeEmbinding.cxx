// JavaScript wrapper for vtkActorNode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkRenderingSceneGraph.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkActorNodeEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/SceneGraph/vtkActorNode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkActorNode.h"

template<> void emscripten::internal::raw_destructor<vtkActorNode>(vtkActorNode * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkActorNode_class) {
  emscripten::class_<vtkActorNode, emscripten::base<vtkViewNode>>("vtkActorNode")
    .smart_ptr<vtkSmartPointer<vtkActorNode>>("vtkSmartPointer<vtkActorNode>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkActorNode>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkActorNode::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkActorNode& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkActorNode::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkActorNode::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkActorNode::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkActorNode& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Build", &vtkActorNode::Build);
}
