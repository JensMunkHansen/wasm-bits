// JavaScript wrapper for vtkVolumeNode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkRenderingSceneGraph.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkVolumeNodeEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/SceneGraph/vtkVolumeNode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolumeNode.h"

template<> void emscripten::internal::raw_destructor<vtkVolumeNode>(vtkVolumeNode * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVolumeNode_class) {
  emscripten::class_<vtkVolumeNode, emscripten::base<vtkViewNode>>("vtkVolumeNode")
    .smart_ptr<vtkSmartPointer<vtkVolumeNode>>("vtkSmartPointer<vtkVolumeNode>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVolumeNode>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeNode::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVolumeNode& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVolumeNode::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVolumeNode::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeNode::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVolumeNode& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Build", &vtkVolumeNode::Build);
}
