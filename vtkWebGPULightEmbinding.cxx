// JavaScript wrapper for vtkWebGPULight with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkRenderingWebGPU.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkWebGPULightEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/WebGPU/vtkWebGPULight.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkCamera.h"
#include "vtkWebGPULight.h"

template<> void emscripten::internal::raw_destructor<vtkWebGPULight>(vtkWebGPULight * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebGPULight_class) {
  emscripten::class_<vtkWebGPULight, emscripten::base<vtkLight>>("vtkWebGPULight")
    .smart_ptr<vtkSmartPointer<vtkWebGPULight>>("vtkSmartPointer<vtkWebGPULight>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkWebGPULight>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPULight::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebGPULight& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebGPULight::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebGPULight::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPULight::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebGPULight& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CacheLightInformation", &vtkWebGPULight::CacheLightInformation, emscripten::allow_raw_pointers())
    .function("GetCachedLightInformation", emscripten::optional_override([](vtkWebGPULight& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetCachedLightInformation());}))
    .class_function("GetCacheSizeBytes", &vtkWebGPULight::GetCacheSizeBytes)
    .function("Render", &vtkWebGPULight::Render, emscripten::allow_raw_pointers());
}
