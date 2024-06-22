// JavaScript wrapper for vtkViewNodeFactory with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkRenderingSceneGraph.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingSceneGraph.js/vtkViewNodeFactoryEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/SceneGraph/vtkViewNodeFactory.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewNode.h"
#include "vtkObject.h"
#include "vtkViewNodeFactory.h"

template<> void emscripten::internal::raw_destructor<vtkViewNodeFactory>(vtkViewNodeFactory * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkViewNodeFactory_class) {
  emscripten::class_<vtkViewNodeFactory, emscripten::base<vtkObject>>("vtkViewNodeFactory")
    .smart_ptr<vtkSmartPointer<vtkViewNodeFactory>>("vtkSmartPointer<vtkViewNodeFactory>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkViewNodeFactory>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkViewNodeFactory::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkViewNodeFactory& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkViewNodeFactory::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkViewNodeFactory::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkViewNodeFactory::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkViewNodeFactory& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RegisterOverride", emscripten::optional_override([](vtkViewNodeFactory& self, const std::string & arg_0, emscripten::val arg_1) -> void {  return self.RegisterOverride( arg_0.c_str(), reinterpret_cast<vtkViewNode*(*)()>(emscripten::val::module_property("addFunction")(arg_1, std::string("i")).as<int>()));}))
    .function("CreateNode", &vtkViewNodeFactory::CreateNode, emscripten::allow_raw_pointers());
}
