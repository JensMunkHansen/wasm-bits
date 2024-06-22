// JavaScript wrapper for vtkTransformFeedback with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkTransformFeedbackEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkTransformFeedback.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkShaderProgram.h"
#include "vtkOpenGLBufferObject.h"
#include "vtkTransformFeedback.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkTransformFeedback_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkTransformFeedback>(vtkTransformFeedback * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransformFeedback_class) {
  using VaryingRole=vtkTransformFeedback::VaryingRole;
  emscripten::class_<vtkTransformFeedback, emscripten::base<vtkObject>>("vtkTransformFeedback")
    .smart_ptr<vtkSmartPointer<vtkTransformFeedback>>("vtkSmartPointer<vtkTransformFeedback>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTransformFeedback>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformFeedback::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransformFeedback& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransformFeedback::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransformFeedback::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformFeedback::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransformFeedback& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ClearVaryings", &vtkTransformFeedback::ClearVaryings)
    .function("AddVarying", &vtkTransformFeedback::AddVarying)
    .class_function("GetBytesPerVertex", emscripten::select_overload<size_t( VaryingRole)>([]( VaryingRole arg_0) -> size_t { return vtkTransformFeedback::GetBytesPerVertex( arg_0); }))
    .function("GetBytesPerVertex", emscripten::select_overload<size_t(vtkTransformFeedback&)>([](vtkTransformFeedback& self) -> size_t { return self.GetBytesPerVertex(); }))
    .function("SetNumberOfVertices", emscripten::select_overload<void(vtkTransformFeedback&, size_t)>([](vtkTransformFeedback& self, size_t arg_0) -> void { return self.SetNumberOfVertices( arg_0); }))
    .function("SetNumberOfVertices", emscripten::select_overload<void(vtkTransformFeedback&, int, size_t)>([](vtkTransformFeedback& self, int arg_0, size_t arg_1) -> void { return self.SetNumberOfVertices( arg_0, arg_1); }))
    .function("GetNumberOfVertices", &vtkTransformFeedback::GetNumberOfVertices)
    .function("GetBufferSize", &vtkTransformFeedback::GetBufferSize)
    .function("BindVaryings", &vtkTransformFeedback::BindVaryings, emscripten::allow_raw_pointers())
    .function("GetBuffer", &vtkTransformFeedback::GetBuffer, emscripten::allow_raw_pointers())
    .function("GetBufferHandle", &vtkTransformFeedback::GetBufferHandle)
    .function("SetPrimitiveMode", &vtkTransformFeedback::SetPrimitiveMode)
    .function("GetPrimitiveMode", &vtkTransformFeedback::GetPrimitiveMode)
    .function("Allocate", &vtkTransformFeedback::Allocate)
    .function("BindBuffer", &vtkTransformFeedback::BindBuffer)
    .function("ReadBuffer", &vtkTransformFeedback::ReadBuffer)
    .function("GetBufferData", emscripten::optional_override([](vtkTransformFeedback& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetBufferData());}))
    .function("ReleaseGraphicsResources", &vtkTransformFeedback::ReleaseGraphicsResources)
    .function("ReleaseBufferData", &vtkTransformFeedback::ReleaseBufferData);
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkTransformFeedback_0_2_constants) {
    typedef vtkTransformFeedback::VaryingRole cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkTransformFeedback_VaryingRole_Vertex_ClipCoordinate_F", vtkTransformFeedback::Vertex_ClipCoordinate_F },
      { "vtkTransformFeedback_VaryingRole_Color_RGBA_F", vtkTransformFeedback::Color_RGBA_F },
      { "vtkTransformFeedback_VaryingRole_Normal_F", vtkTransformFeedback::Normal_F },
      { "vtkTransformFeedback_VaryingRole_Next_Buffer", vtkTransformFeedback::Next_Buffer },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
