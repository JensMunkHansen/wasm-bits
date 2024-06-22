// JavaScript wrapper for vtkPolyDataMapperNode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkRenderingSceneGraph.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkPolyDataMapperNodeEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/SceneGraph/vtkPolyDataMapperNode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyDataMapperNode.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataMapperNode>(vtkPolyDataMapperNode * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataMapperNode_class) {
  emscripten::class_<vtkPolyDataMapperNode, emscripten::base<vtkMapperNode>>("vtkPolyDataMapperNode")
    .smart_ptr<vtkSmartPointer<vtkPolyDataMapperNode>>("vtkSmartPointer<vtkPolyDataMapperNode>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolyDataMapperNode>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataMapperNode::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataMapperNode& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataMapperNode::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataMapperNode::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataMapperNode::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataMapperNode& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
