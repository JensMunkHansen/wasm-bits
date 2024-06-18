// JavaScript wrapper for vtkVtkJSViewNodeFactory with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVtkJS.js/vtkRenderingVtkJS.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVtkJS.js/vtkVtkJSViewNodeFactoryEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/VtkJS/vtkVtkJSViewNodeFactory.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVtkJSSceneGraphSerializer.h"
#include "vtkVtkJSViewNodeFactory.h"

template<> void emscripten::internal::raw_destructor<vtkVtkJSViewNodeFactory>(vtkVtkJSViewNodeFactory * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVtkJSViewNodeFactory_class) {
  emscripten::class_<vtkVtkJSViewNodeFactory, emscripten::base<vtkViewNodeFactory>>("vtkVtkJSViewNodeFactory")
    .smart_ptr<vtkSmartPointer<vtkVtkJSViewNodeFactory>>("vtkSmartPointer<vtkVtkJSViewNodeFactory>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVtkJSViewNodeFactory>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVtkJSViewNodeFactory::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVtkJSViewNodeFactory& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVtkJSViewNodeFactory::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVtkJSViewNodeFactory::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVtkJSViewNodeFactory::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVtkJSViewNodeFactory& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSerializer", &vtkVtkJSViewNodeFactory::SetSerializer, emscripten::allow_raw_pointers())
    .function("GetSerializer", &vtkVtkJSViewNodeFactory::GetSerializer, emscripten::allow_raw_pointers());
}
