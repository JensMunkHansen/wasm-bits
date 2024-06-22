// JavaScript wrapper for vtkCameraNode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkRenderingSceneGraph.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkCameraNodeEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/SceneGraph/vtkCameraNode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCameraNode.h"

template<> void emscripten::internal::raw_destructor<vtkCameraNode>(vtkCameraNode * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCameraNode_class) {
  emscripten::class_<vtkCameraNode, emscripten::base<vtkViewNode>>("vtkCameraNode")
    .smart_ptr<vtkSmartPointer<vtkCameraNode>>("vtkSmartPointer<vtkCameraNode>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCameraNode>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraNode::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCameraNode& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCameraNode::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCameraNode::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraNode::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCameraNode& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
