// JavaScript wrapper for vtkAssemblyPath with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkAssemblyPathEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkAssemblyPath.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp.h"
#include "vtkMatrix4x4.h"
#include "vtkAssemblyNode.h"
#include "vtkAssemblyPath.h"

template<> void emscripten::internal::raw_destructor<vtkAssemblyPath>(vtkAssemblyPath * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAssemblyPath_class) {
  emscripten::class_<vtkAssemblyPath, emscripten::base<vtkCollection>>("vtkAssemblyPath")
    .smart_ptr<vtkSmartPointer<vtkAssemblyPath>>("vtkSmartPointer<vtkAssemblyPath>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAssemblyPath>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAssemblyPath::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAssemblyPath& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAssemblyPath::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAssemblyPath::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAssemblyPath::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAssemblyPath& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddNode", emscripten::select_overload<void(vtkAssemblyPath&, vtkProp*, vtkMatrix4x4*)>([](vtkAssemblyPath& self, vtkProp* arg_0, vtkMatrix4x4* arg_1) -> void { return self.AddNode( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetNextNode", emscripten::select_overload<vtkAssemblyNode*(vtkAssemblyPath&)>([](vtkAssemblyPath& self) -> vtkAssemblyNode* { return self.GetNextNode(); }), emscripten::allow_raw_pointers())
    .function("GetFirstNode", &vtkAssemblyPath::GetFirstNode, emscripten::allow_raw_pointers())
    .function("GetLastNode", &vtkAssemblyPath::GetLastNode, emscripten::allow_raw_pointers())
    .function("DeleteLastNode", &vtkAssemblyPath::DeleteLastNode)
    .function("ShallowCopy", &vtkAssemblyPath::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkAssemblyPath::GetMTime);
}
