// JavaScript wrapper for vtkWebGPUComputeBuffer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkRenderingWebGPU.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkWebGPUComputeBufferEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/WebGPU/vtkWebGPUComputeBuffer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkWebGPUComputeBuffer.h"

EMSCRIPTEN_BINDINGS(vtkRenderingWebGPU_vtkWebGPUComputeBuffer_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkWebGPUComputeBuffer>(vtkWebGPUComputeBuffer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebGPUComputeBuffer_class) {
  using BufferMode=vtkWebGPUComputeBuffer::BufferMode;
  using BufferDataType=vtkWebGPUComputeBuffer::BufferDataType;
  emscripten::class_<vtkWebGPUComputeBuffer, emscripten::base<vtkObject>>("vtkWebGPUComputeBuffer")
    .smart_ptr<vtkSmartPointer<vtkWebGPUComputeBuffer>>("vtkSmartPointer<vtkWebGPUComputeBuffer>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkWebGPUComputeBuffer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUComputeBuffer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebGPUComputeBuffer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebGPUComputeBuffer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebGPUComputeBuffer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUComputeBuffer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebGPUComputeBuffer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMode", &vtkWebGPUComputeBuffer::GetMode)
    .function("SetMode", &vtkWebGPUComputeBuffer::SetMode)
    .function("GetGroup", emscripten::select_overload<int(vtkWebGPUComputeBuffer&)>([](vtkWebGPUComputeBuffer& self) -> int { return self.GetGroup(); }))
    .function("SetGroup", &vtkWebGPUComputeBuffer::SetGroup)
    .function("GetBinding", emscripten::select_overload<int(vtkWebGPUComputeBuffer&)>([](vtkWebGPUComputeBuffer& self) -> int { return self.GetBinding(); }))
    .function("SetBinding", &vtkWebGPUComputeBuffer::SetBinding)
    .function("GetLabel", &vtkWebGPUComputeBuffer::GetLabel)
    .function("SetLabel", &vtkWebGPUComputeBuffer::SetLabel)
    .function("SetData", emscripten::select_overload<void(vtkWebGPUComputeBuffer&, vtkDataArray*)>([](vtkWebGPUComputeBuffer& self, vtkDataArray* arg_0) -> void { return self.SetData( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkWebGPUComputeBuffer::GetDataType)
    .function("SetDataType", &vtkWebGPUComputeBuffer::SetDataType)
    .function("GetDataPointer", emscripten::optional_override([](vtkWebGPUComputeBuffer& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetDataPointer());}))
    .function("GetDataArray", &vtkWebGPUComputeBuffer::GetDataArray, emscripten::allow_raw_pointers())
    .function("GetByteSize", &vtkWebGPUComputeBuffer::GetByteSize)
    .function("SetByteSize", &vtkWebGPUComputeBuffer::SetByteSize);
}
EMSCRIPTEN_BINDINGS(vtkRenderingWebGPU_vtkWebGPUComputeBuffer_0_2_constants) {
    typedef vtkWebGPUComputeBuffer::BufferMode cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkWebGPUComputeBuffer_BufferMode_UNINITIALIZED", vtkWebGPUComputeBuffer::UNINITIALIZED },
      { "vtkWebGPUComputeBuffer_BufferMode_READ_ONLY_COMPUTE_STORAGE", vtkWebGPUComputeBuffer::READ_ONLY_COMPUTE_STORAGE },
      { "vtkWebGPUComputeBuffer_BufferMode_READ_WRITE_COMPUTE_STORAGE", vtkWebGPUComputeBuffer::READ_WRITE_COMPUTE_STORAGE },
      { "vtkWebGPUComputeBuffer_BufferMode_READ_WRITE_MAP_COMPUTE_STORAGE", vtkWebGPUComputeBuffer::READ_WRITE_MAP_COMPUTE_STORAGE },
      { "vtkWebGPUComputeBuffer_BufferMode_UNIFORM_BUFFER", vtkWebGPUComputeBuffer::UNIFORM_BUFFER },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingWebGPU_vtkWebGPUComputeBuffer_1_2_constants) {
    typedef vtkWebGPUComputeBuffer::BufferDataType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkWebGPUComputeBuffer_BufferDataType_STD_VECTOR", vtkWebGPUComputeBuffer::STD_VECTOR },
      { "vtkWebGPUComputeBuffer_BufferDataType_VTK_DATA_ARRAY", vtkWebGPUComputeBuffer::VTK_DATA_ARRAY },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
