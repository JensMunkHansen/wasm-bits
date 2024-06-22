// JavaScript wrapper for vtkWebGPUComputeRenderBuffer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkRenderingWebGPU.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkWebGPUComputeRenderBufferEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/WebGPU/vtkWebGPUComputeRenderBuffer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWebGPUComputeRenderBuffer.h"

template<> void emscripten::internal::raw_destructor<vtkWebGPUComputeRenderBuffer>(vtkWebGPUComputeRenderBuffer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebGPUComputeRenderBuffer_class) {
  emscripten::class_<vtkWebGPUComputeRenderBuffer, emscripten::base<vtkWebGPUComputeBuffer>>("vtkWebGPUComputeRenderBuffer")
    .smart_ptr<vtkSmartPointer<vtkWebGPUComputeRenderBuffer>>("vtkSmartPointer<vtkWebGPUComputeRenderBuffer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWebGPUComputeRenderBuffer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUComputeRenderBuffer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebGPUComputeRenderBuffer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebGPUComputeRenderBuffer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebGPUComputeRenderBuffer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUComputeRenderBuffer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebGPUComputeRenderBuffer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
