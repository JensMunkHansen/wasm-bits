// JavaScript wrapper for vtkViewNode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkRenderingSceneGraph.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkViewNodeEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/SceneGraph/vtkViewNode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkObject.h"
#include "vtkViewNodeFactory.h"
#include "vtkViewNode.h"

EMSCRIPTEN_BINDINGS(vtkRenderingSceneGraph_vtkViewNode_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkViewNode>(vtkViewNode * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkViewNode_class) {
  using operation_type=vtkViewNode::operation_type;
  emscripten::class_<vtkViewNode, emscripten::base<vtkObject>>("vtkViewNode")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkViewNode::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkViewNode& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkViewNode::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkViewNode::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkViewNode::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkViewNode& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetRenderable", &vtkViewNode::GetRenderable, emscripten::allow_raw_pointers())
    .function("Build", &vtkViewNode::Build)
    .function("Synchronize", &vtkViewNode::Synchronize)
    .function("Render", &vtkViewNode::Render)
    .function("Invalidate", &vtkViewNode::Invalidate)
    .function("SetParent", &vtkViewNode::SetParent, emscripten::allow_raw_pointers())
    .function("GetParent", &vtkViewNode::GetParent, emscripten::allow_raw_pointers())
    .function("SetMyFactory", &vtkViewNode::SetMyFactory, emscripten::allow_raw_pointers())
    .function("GetMyFactory", &vtkViewNode::GetMyFactory, emscripten::allow_raw_pointers())
    .function("GetViewNodeFor", &vtkViewNode::GetViewNodeFor, emscripten::allow_raw_pointers())
    .function("GetFirstAncestorOfType", emscripten::optional_override([](vtkViewNode& self, const std::string & arg_0) -> vtkViewNode* {  return self.GetFirstAncestorOfType( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .function("GetFirstChildOfType", emscripten::optional_override([](vtkViewNode& self, const std::string & arg_0) -> vtkViewNode* {  return self.GetFirstChildOfType( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .function("SetRenderable", &vtkViewNode::SetRenderable, emscripten::allow_raw_pointers())
    .function("Traverse", &vtkViewNode::Traverse)
    .function("TraverseAllPasses", &vtkViewNode::TraverseAllPasses);
}
EMSCRIPTEN_BINDINGS(vtkRenderingSceneGraph_vtkViewNode_0_2_constants) {
    typedef vtkViewNode::operation_type cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkViewNode_operation_type_noop", vtkViewNode::noop },
      { "vtkViewNode_operation_type_build", vtkViewNode::build },
      { "vtkViewNode_operation_type_synchronize", vtkViewNode::synchronize },
      { "vtkViewNode_operation_type_render", vtkViewNode::render },
      { "vtkViewNode_operation_type_invalidate", vtkViewNode::invalidate },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
