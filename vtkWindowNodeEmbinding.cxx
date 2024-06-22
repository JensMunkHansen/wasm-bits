// JavaScript wrapper for vtkWindowNode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkRenderingSceneGraph.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkWindowNodeEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/SceneGraph/vtkWindowNode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnsignedCharArray.h"
#include "vtkFloatArray.h"
#include "vtkWindowNode.h"

template<> void emscripten::internal::raw_destructor<vtkWindowNode>(vtkWindowNode * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWindowNode_class) {
  emscripten::class_<vtkWindowNode, emscripten::base<vtkViewNode>>("vtkWindowNode")
    .smart_ptr<vtkSmartPointer<vtkWindowNode>>("vtkSmartPointer<vtkWindowNode>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkWindowNode>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWindowNode::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWindowNode& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWindowNode::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWindowNode::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWindowNode::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWindowNode& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Build", &vtkWindowNode::Build)
    .function("Synchronize", &vtkWindowNode::Synchronize)
    .function("GetSize", emscripten::optional_override([](vtkWindowNode& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetSize()) / sizeof(int);}))
    .function("GetColorBuffer", &vtkWindowNode::GetColorBuffer, emscripten::allow_raw_pointers())
    .function("GetZBuffer", &vtkWindowNode::GetZBuffer, emscripten::allow_raw_pointers());
}
