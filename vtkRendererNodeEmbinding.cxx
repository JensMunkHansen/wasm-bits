// JavaScript wrapper for vtkRendererNode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkRenderingSceneGraph.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkRendererNodeEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/SceneGraph/vtkRendererNode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRendererNode.h"

template<> void emscripten::internal::raw_destructor<vtkRendererNode>(vtkRendererNode * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRendererNode_class) {
  emscripten::class_<vtkRendererNode, emscripten::base<vtkViewNode>>("vtkRendererNode")
    .smart_ptr<vtkSmartPointer<vtkRendererNode>>("vtkSmartPointer<vtkRendererNode>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRendererNode>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRendererNode::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRendererNode& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRendererNode::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRendererNode::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRendererNode::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRendererNode& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Build", &vtkRendererNode::Build)
    .function("SetSize", emscripten::select_overload<void(vtkRendererNode&, int, int)>([](vtkRendererNode& self, int arg_0, int arg_1) -> void { return self.SetSize( arg_0, arg_1); }))
    .function("SetViewport", emscripten::select_overload<void(vtkRendererNode&, double, double, double, double)>([](vtkRendererNode& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetViewport( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetScale", emscripten::select_overload<void(vtkRendererNode&, int, int)>([](vtkRendererNode& self, int arg_0, int arg_1) -> void { return self.SetScale( arg_0, arg_1); }));
}
