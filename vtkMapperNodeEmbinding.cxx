// JavaScript wrapper for vtkMapperNode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkRenderingSceneGraph.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkMapperNodeEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/SceneGraph/vtkMapperNode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMapperNode.h"

template<> void emscripten::internal::raw_destructor<vtkMapperNode>(vtkMapperNode * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMapperNode_class) {
  emscripten::class_<vtkMapperNode, emscripten::base<vtkViewNode>>("vtkMapperNode")
    .smart_ptr<vtkSmartPointer<vtkMapperNode>>("vtkSmartPointer<vtkMapperNode>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMapperNode>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMapperNode::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMapperNode& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMapperNode::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMapperNode::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMapperNode::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMapperNode& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
