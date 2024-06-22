// JavaScript wrapper for vtkOpenGLBufferObject with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLBufferObjectEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLBufferObject.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOpenGLBufferObject.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLBufferObject_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkOpenGLBufferObject>(vtkOpenGLBufferObject * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLBufferObject_class) {
  using ObjectType=vtkOpenGLBufferObject::ObjectType;
  using ObjectUsage=vtkOpenGLBufferObject::ObjectUsage;
  emscripten::class_<vtkOpenGLBufferObject, emscripten::base<vtkObject>>("vtkOpenGLBufferObject")
    .smart_ptr<vtkSmartPointer<vtkOpenGLBufferObject>>("vtkSmartPointer<vtkOpenGLBufferObject>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLBufferObject>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLBufferObject::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLBufferObject& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLBufferObject::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLBufferObject::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLBufferObject::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLBufferObject& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetType", &vtkOpenGLBufferObject::GetType)
    .function("SetType", &vtkOpenGLBufferObject::SetType)
    .function("GetUsage", &vtkOpenGLBufferObject::GetUsage)
    .function("SetUsage", &vtkOpenGLBufferObject::SetUsage)
    .function("GetHandle", &vtkOpenGLBufferObject::GetHandle)
    .function("IsReady", &vtkOpenGLBufferObject::IsReady)
    .function("FlagBufferAsDirty", &vtkOpenGLBufferObject::FlagBufferAsDirty)
    .function("GenerateBuffer", &vtkOpenGLBufferObject::GenerateBuffer)
    .function("Allocate", &vtkOpenGLBufferObject::Allocate)
    .function("GetSize", &vtkOpenGLBufferObject::GetSize)
    .function("Bind", &vtkOpenGLBufferObject::Bind)
    .function("BindShaderStorage", &vtkOpenGLBufferObject::BindShaderStorage)
    .function("Release", &vtkOpenGLBufferObject::Release)
    .function("ReleaseGraphicsResources", &vtkOpenGLBufferObject::ReleaseGraphicsResources)
    .function("GetError", &vtkOpenGLBufferObject::GetError);
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLBufferObject_0_2_constants) {
    typedef vtkOpenGLBufferObject::ObjectType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkOpenGLBufferObject_ObjectType_ArrayBuffer", vtkOpenGLBufferObject::ArrayBuffer },
      { "vtkOpenGLBufferObject_ObjectType_ElementArrayBuffer", vtkOpenGLBufferObject::ElementArrayBuffer },
      { "vtkOpenGLBufferObject_ObjectType_TextureBuffer", vtkOpenGLBufferObject::TextureBuffer },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLBufferObject_1_2_constants) {
    typedef vtkOpenGLBufferObject::ObjectUsage cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[9] = {
      { "vtkOpenGLBufferObject_ObjectUsage_StreamDraw", vtkOpenGLBufferObject::StreamDraw },
      { "vtkOpenGLBufferObject_ObjectUsage_StreamRead", vtkOpenGLBufferObject::StreamRead },
      { "vtkOpenGLBufferObject_ObjectUsage_StreamCopy", vtkOpenGLBufferObject::StreamCopy },
      { "vtkOpenGLBufferObject_ObjectUsage_StaticDraw", vtkOpenGLBufferObject::StaticDraw },
      { "vtkOpenGLBufferObject_ObjectUsage_StaticRead", vtkOpenGLBufferObject::StaticRead },
      { "vtkOpenGLBufferObject_ObjectUsage_StaticCopy", vtkOpenGLBufferObject::StaticCopy },
      { "vtkOpenGLBufferObject_ObjectUsage_DynamicDraw", vtkOpenGLBufferObject::DynamicDraw },
      { "vtkOpenGLBufferObject_ObjectUsage_DynamicRead", vtkOpenGLBufferObject::DynamicRead },
      { "vtkOpenGLBufferObject_ObjectUsage_DynamicCopy", vtkOpenGLBufferObject::DynamicCopy },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
