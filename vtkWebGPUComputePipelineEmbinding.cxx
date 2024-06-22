// JavaScript wrapper for vtkWebGPUComputePipeline with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkRenderingWebGPU.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkWebGPUComputePipelineEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/WebGPU/vtkWebGPUComputePipeline.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWebGPUComputeBuffer.h"
#include "vtkWebGPUComputeRenderBuffer.h"
#include "vtkWebGPUComputePipeline.h"

template<> void emscripten::internal::raw_destructor<vtkWebGPUComputePipeline>(vtkWebGPUComputePipeline * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebGPUComputePipeline_class) {
  emscripten::class_<vtkWebGPUComputePipeline, emscripten::base<vtkObject>>("vtkWebGPUComputePipeline")
    .smart_ptr<vtkSmartPointer<vtkWebGPUComputePipeline>>("vtkSmartPointer<vtkWebGPUComputePipeline>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWebGPUComputePipeline>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUComputePipeline::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebGPUComputePipeline& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebGPUComputePipeline::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebGPUComputePipeline::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUComputePipeline::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebGPUComputePipeline& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetShaderSource", &vtkWebGPUComputePipeline::GetShaderSource)
    .function("SetShaderSource", &vtkWebGPUComputePipeline::SetShaderSource)
    .function("SetShaderSourceFromPath", &vtkWebGPUComputePipeline::SetShaderSourceFromPath)
    .function("GetShaderEntryPoint", &vtkWebGPUComputePipeline::GetShaderEntryPoint)
    .function("SetShaderEntryPoint", &vtkWebGPUComputePipeline::SetShaderEntryPoint)
    .function("GetLabel", &vtkWebGPUComputePipeline::GetLabel)
    .function("SetLabel", &vtkWebGPUComputePipeline::SetLabel)
    .function("AddBuffer", &vtkWebGPUComputePipeline::AddBuffer, emscripten::allow_raw_pointers())
    .function("AddRenderBuffer", &vtkWebGPUComputePipeline::AddRenderBuffer, emscripten::allow_raw_pointers())
    .function("IsBufferValid", emscripten::optional_override([](vtkWebGPUComputePipeline& self, vtkWebGPUComputeBuffer* arg_0, const std::string & arg_1) -> bool {  return self.IsBufferValid( arg_0, arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("SetWorkgroups", &vtkWebGPUComputePipeline::SetWorkgroups)
    .function("Dispatch", &vtkWebGPUComputePipeline::Dispatch)
    .function("Update", &vtkWebGPUComputePipeline::Update);
}
