// JavaScript wrapper for vtkWebGPUProperty with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkRenderingWebGPU.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkWebGPUPropertyEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/WebGPU/vtkWebGPUProperty.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkActor.h"
#include "vtkRenderer.h"
#include "vtkWindow.h"
#include "vtkWebGPUProperty.h"

template<> void emscripten::internal::raw_destructor<vtkWebGPUProperty>(vtkWebGPUProperty * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebGPUProperty_class) {
  emscripten::class_<vtkWebGPUProperty, emscripten::base<vtkProperty>>("vtkWebGPUProperty")
    .smart_ptr<vtkSmartPointer<vtkWebGPUProperty>>("vtkSmartPointer<vtkWebGPUProperty>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkWebGPUProperty>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUProperty::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebGPUProperty& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebGPUProperty::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebGPUProperty::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUProperty::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebGPUProperty& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkWebGPUProperty::Render, emscripten::allow_raw_pointers())
    .function("BackfaceRender", &vtkWebGPUProperty::BackfaceRender, emscripten::allow_raw_pointers())
    .function("PostRender", &vtkWebGPUProperty::PostRender, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkWebGPUProperty::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
