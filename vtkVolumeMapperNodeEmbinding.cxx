// JavaScript wrapper for vtkVolumeMapperNode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkRenderingSceneGraph.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkVolumeMapperNodeEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/SceneGraph/vtkVolumeMapperNode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolumeMapperNode.h"

template<> void emscripten::internal::raw_destructor<vtkVolumeMapperNode>(vtkVolumeMapperNode * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVolumeMapperNode_class) {
  emscripten::class_<vtkVolumeMapperNode, emscripten::base<vtkMapperNode>>("vtkVolumeMapperNode")
    .smart_ptr<vtkSmartPointer<vtkVolumeMapperNode>>("vtkSmartPointer<vtkVolumeMapperNode>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVolumeMapperNode>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeMapperNode::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVolumeMapperNode& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVolumeMapperNode::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVolumeMapperNode::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeMapperNode::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVolumeMapperNode& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
