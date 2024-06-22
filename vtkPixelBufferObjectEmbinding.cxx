// JavaScript wrapper for vtkPixelBufferObject with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkPixelBufferObjectEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkPixelBufferObject.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindow.h"
#include "vtkPixelBufferObject.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkPixelBufferObject_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPixelBufferObject>(vtkPixelBufferObject * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPixelBufferObject_class) {
  using BufferType=vtkPixelBufferObject::BufferType;
  emscripten::class_<vtkPixelBufferObject, emscripten::base<vtkObject>>("vtkPixelBufferObject")
    .smart_ptr<vtkSmartPointer<vtkPixelBufferObject>>("vtkSmartPointer<vtkPixelBufferObject>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPixelBufferObject>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPixelBufferObject::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPixelBufferObject& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPixelBufferObject::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPixelBufferObject::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPixelBufferObject::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPixelBufferObject& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetContext", &vtkPixelBufferObject::SetContext, emscripten::allow_raw_pointers())
    .function("GetContext", &vtkPixelBufferObject::GetContext, emscripten::allow_raw_pointers())
    .function("GetUsage", &vtkPixelBufferObject::GetUsage)
    .function("SetUsage", &vtkPixelBufferObject::SetUsage)
    .function("Upload1D", emscripten::optional_override([](vtkPixelBufferObject& self, int arg_0, std::uintptr_t arg_1, unsigned int arg_2, int arg_3, int arg_4) -> bool {  return self.Upload1D( arg_0,reinterpret_cast<void*>(arg_1), arg_2, arg_3, arg_4);}))
    .function("GetType", &vtkPixelBufferObject::GetType)
    .function("SetType", &vtkPixelBufferObject::SetType)
    .function("GetComponents", &vtkPixelBufferObject::GetComponents)
    .function("SetComponents", &vtkPixelBufferObject::SetComponents)
    .function("GetSize", &vtkPixelBufferObject::GetSize)
    .function("SetSize", emscripten::select_overload<void(vtkPixelBufferObject&, unsigned int)>([](vtkPixelBufferObject& self, unsigned int arg_0) -> void { return self.SetSize( arg_0); }))
    .function("SetSize", emscripten::select_overload<void(vtkPixelBufferObject&, unsigned int, int)>([](vtkPixelBufferObject& self, unsigned int arg_0, int arg_1) -> void { return self.SetSize( arg_0, arg_1); }))
    .function("GetHandle", &vtkPixelBufferObject::GetHandle)
    .function("Download1D", emscripten::optional_override([](vtkPixelBufferObject& self, int arg_0, std::uintptr_t arg_1, unsigned int arg_2, int arg_3, int arg_4) -> bool {  return self.Download1D( arg_0,reinterpret_cast<void*>(arg_1), arg_2, arg_3, arg_4);}))
    .function("BindToPackedBuffer", &vtkPixelBufferObject::BindToPackedBuffer)
    .function("BindToUnPackedBuffer", &vtkPixelBufferObject::BindToUnPackedBuffer)
    .function("UnBind", &vtkPixelBufferObject::UnBind)
    .function("MapPackedBuffer", emscripten::select_overload<std::uintptr_t(vtkPixelBufferObject&)>([](vtkPixelBufferObject& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.MapPackedBuffer()); }))
    .function("MapPackedBuffer", emscripten::select_overload<std::uintptr_t(vtkPixelBufferObject&, int, unsigned int, int)>([](vtkPixelBufferObject& self, int arg_0, unsigned int arg_1, int arg_2) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.MapPackedBuffer( arg_0, arg_1, arg_2)); }))
    .function("MapPackedBuffer", emscripten::select_overload<std::uintptr_t(vtkPixelBufferObject&, unsigned int)>([](vtkPixelBufferObject& self, unsigned int arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.MapPackedBuffer( arg_0)); }))
    .function("MapUnpackedBuffer", emscripten::select_overload<std::uintptr_t(vtkPixelBufferObject&)>([](vtkPixelBufferObject& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.MapUnpackedBuffer()); }))
    .function("MapUnpackedBuffer", emscripten::select_overload<std::uintptr_t(vtkPixelBufferObject&, int, unsigned int, int)>([](vtkPixelBufferObject& self, int arg_0, unsigned int arg_1, int arg_2) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.MapUnpackedBuffer( arg_0, arg_1, arg_2)); }))
    .function("MapUnpackedBuffer", emscripten::select_overload<std::uintptr_t(vtkPixelBufferObject&, unsigned int)>([](vtkPixelBufferObject& self, unsigned int arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.MapUnpackedBuffer( arg_0)); }))
    .function("UnmapUnpackedBuffer", &vtkPixelBufferObject::UnmapUnpackedBuffer)
    .function("UnmapPackedBuffer", &vtkPixelBufferObject::UnmapPackedBuffer)
    .function("Bind", &vtkPixelBufferObject::Bind)
    .function("MapBuffer", emscripten::select_overload<std::uintptr_t(vtkPixelBufferObject&, int, unsigned int, int, BufferType)>([](vtkPixelBufferObject& self, int arg_0, unsigned int arg_1, int arg_2, BufferType arg_3) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.MapBuffer( arg_0, arg_1, arg_2, arg_3)); }))
    .function("MapBuffer", emscripten::select_overload<std::uintptr_t(vtkPixelBufferObject&, unsigned int, BufferType)>([](vtkPixelBufferObject& self, unsigned int arg_0, BufferType arg_1) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.MapBuffer( arg_0, arg_1)); }))
    .function("MapBuffer", emscripten::select_overload<std::uintptr_t(vtkPixelBufferObject&, BufferType)>([](vtkPixelBufferObject& self, BufferType arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.MapBuffer( arg_0)); }))
    .function("UnmapBuffer", &vtkPixelBufferObject::UnmapBuffer)
    .function("Allocate", emscripten::select_overload<void(vtkPixelBufferObject&, int, unsigned int, int, BufferType)>([](vtkPixelBufferObject& self, int arg_0, unsigned int arg_1, int arg_2, BufferType arg_3) -> void { return self.Allocate( arg_0, arg_1, arg_2, arg_3); }))
    .function("Allocate", emscripten::select_overload<void(vtkPixelBufferObject&, unsigned int, BufferType)>([](vtkPixelBufferObject& self, unsigned int arg_0, BufferType arg_1) -> void { return self.Allocate( arg_0, arg_1); }))
    .function("ReleaseMemory", &vtkPixelBufferObject::ReleaseMemory)
    .class_function("IsSupported", &vtkPixelBufferObject::IsSupported, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkPixelBufferObject_0_2_constants) {
  const struct { const char *name; int value; }
    constants[10] = {
      { "vtkPixelBufferObject_StreamDraw", vtkPixelBufferObject::StreamDraw },
      { "vtkPixelBufferObject_StreamRead", vtkPixelBufferObject::StreamRead },
      { "vtkPixelBufferObject_StreamCopy", vtkPixelBufferObject::StreamCopy },
      { "vtkPixelBufferObject_StaticDraw", vtkPixelBufferObject::StaticDraw },
      { "vtkPixelBufferObject_StaticRead", vtkPixelBufferObject::StaticRead },
      { "vtkPixelBufferObject_StaticCopy", vtkPixelBufferObject::StaticCopy },
      { "vtkPixelBufferObject_DynamicDraw", vtkPixelBufferObject::DynamicDraw },
      { "vtkPixelBufferObject_DynamicRead", vtkPixelBufferObject::DynamicRead },
      { "vtkPixelBufferObject_DynamicCopy", vtkPixelBufferObject::DynamicCopy },
      { "vtkPixelBufferObject_NumberOfUsages", vtkPixelBufferObject::NumberOfUsages },
  };
  for (int c = 0; c < 10; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkPixelBufferObject_1_2_constants) {
    typedef vtkPixelBufferObject::BufferType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkPixelBufferObject_BufferType_UNPACKED_BUFFER", vtkPixelBufferObject::UNPACKED_BUFFER },
      { "vtkPixelBufferObject_BufferType_PACKED_BUFFER", vtkPixelBufferObject::PACKED_BUFFER },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
