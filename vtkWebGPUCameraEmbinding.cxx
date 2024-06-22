// JavaScript wrapper for vtkWebGPUCamera with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkRenderingWebGPU.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkWebGPUCameraEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/WebGPU/vtkWebGPUCamera.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkWebGPUCamera.h"

template<> void emscripten::internal::raw_destructor<vtkWebGPUCamera>(vtkWebGPUCamera * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebGPUCamera_class) {
  emscripten::class_<vtkWebGPUCamera, emscripten::base<vtkCamera>>("vtkWebGPUCamera")
    .smart_ptr<vtkSmartPointer<vtkWebGPUCamera>>("vtkSmartPointer<vtkWebGPUCamera>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWebGPUCamera>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUCamera::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebGPUCamera& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebGPUCamera::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebGPUCamera::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUCamera::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebGPUCamera& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CacheSceneTransforms", &vtkWebGPUCamera::CacheSceneTransforms, emscripten::allow_raw_pointers())
    .function("GetCachedSceneTransforms", emscripten::optional_override([](vtkWebGPUCamera& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetCachedSceneTransforms());}))
    .class_function("GetCacheSizeBytes", &vtkWebGPUCamera::GetCacheSizeBytes)
    .function("Render", &vtkWebGPUCamera::Render, emscripten::allow_raw_pointers())
    .function("UpdateViewport", &vtkWebGPUCamera::UpdateViewport, emscripten::allow_raw_pointers());
}
