// JavaScript wrapper for vtkLightNode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkRenderingSceneGraph.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkLightNodeEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/SceneGraph/vtkLightNode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLightNode.h"

template<> void emscripten::internal::raw_destructor<vtkLightNode>(vtkLightNode * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLightNode_class) {
  emscripten::class_<vtkLightNode, emscripten::base<vtkViewNode>>("vtkLightNode")
    .smart_ptr<vtkSmartPointer<vtkLightNode>>("vtkSmartPointer<vtkLightNode>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLightNode>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightNode::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLightNode& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLightNode::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLightNode::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightNode::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLightNode& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
