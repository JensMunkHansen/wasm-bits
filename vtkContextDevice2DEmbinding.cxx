// JavaScript wrapper for vtkContextDevice2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkContextDevice2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkContextDevice2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkUnsignedCharArray.h"
#include "vtkImageData.h"
#include "vtkStdString.h"
#include "vtkRect.h"
#include "vtkPolyData.h"
#include "vtkPen.h"
#include "vtkBrush.h"
#include "vtkTextProperty.h"
#include "vtkMatrix3x3.h"
#include "vtkViewport.h"
#include "vtkAbstractContextBufferId.h"
#include "vtkVector.h"
#include "vtkContextDevice2D.h"

EMSCRIPTEN_BINDINGS(vtkRenderingContext2D_vtkContextDevice2D_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkContextDevice2D>(vtkContextDevice2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContextDevice2D_class) {
  using TextureProperty=vtkContextDevice2D::TextureProperty;
  emscripten::class_<vtkContextDevice2D, emscripten::base<vtkObject>>("vtkContextDevice2D")
    .smart_ptr<vtkSmartPointer<vtkContextDevice2D>>("vtkSmartPointer<vtkContextDevice2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkContextDevice2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextDevice2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContextDevice2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContextDevice2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContextDevice2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextDevice2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContextDevice2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DrawMarkers", emscripten::select_overload<void(vtkContextDevice2D&, int, bool, std::uintptr_t, int, std::uintptr_t, int)>([](vtkContextDevice2D& self, int arg_0, bool arg_1, std::uintptr_t arg_2, int arg_3, std::uintptr_t arg_4, int arg_5) -> void { return self.DrawMarkers( arg_0, arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float)), arg_3,reinterpret_cast<unsigned char*>(arg_4 * sizeof(unsigned char)), arg_5); }))
    .function("DrawQuad", emscripten::optional_override([](vtkContextDevice2D& self, std::uintptr_t arg_0, int arg_1) -> void {  return self.DrawQuad(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1);}))
    .function("DrawQuadStrip", emscripten::optional_override([](vtkContextDevice2D& self, std::uintptr_t arg_0, int arg_1) -> void {  return self.DrawQuadStrip(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1);}))
    .function("DrawPolygon", emscripten::optional_override([](vtkContextDevice2D& self, std::uintptr_t arg_0, int arg_1) -> void {  return self.DrawPolygon(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1);}))
    .function("DrawColoredPolygon", emscripten::optional_override([](vtkContextDevice2D& self, std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, int arg_3) -> void {  return self.DrawColoredPolygon(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3);}))
    .function("MathTextIsSupported", &vtkContextDevice2D::MathTextIsSupported)
    .function("ApplyPen", &vtkContextDevice2D::ApplyPen, emscripten::allow_raw_pointers())
    .function("GetPen", &vtkContextDevice2D::GetPen, emscripten::allow_raw_pointers())
    .function("ApplyBrush", &vtkContextDevice2D::ApplyBrush, emscripten::allow_raw_pointers())
    .function("GetBrush", &vtkContextDevice2D::GetBrush, emscripten::allow_raw_pointers())
    .function("ApplyTextProp", &vtkContextDevice2D::ApplyTextProp, emscripten::allow_raw_pointers())
    .function("GetTextProp", &vtkContextDevice2D::GetTextProp, emscripten::allow_raw_pointers())
    .function("GetWidth", &vtkContextDevice2D::GetWidth)
    .function("GetHeight", &vtkContextDevice2D::GetHeight)
    .function("DisableClipping", &vtkContextDevice2D::DisableClipping)
    .function("Begin", &vtkContextDevice2D::Begin, emscripten::allow_raw_pointers())
    .function("End", &vtkContextDevice2D::End)
    .function("GetBufferIdMode", &vtkContextDevice2D::GetBufferIdMode)
    .function("BufferIdModeBegin", &vtkContextDevice2D::BufferIdModeBegin, emscripten::allow_raw_pointers())
    .function("BufferIdModeEnd", &vtkContextDevice2D::BufferIdModeEnd)
    .function("SetViewportSize", &vtkContextDevice2D::SetViewportSize)
    .function("GetViewportSize", &vtkContextDevice2D::GetViewportSize)
    .function("SetViewportRect", &vtkContextDevice2D::SetViewportRect)
    .function("GetViewportRect", &vtkContextDevice2D::GetViewportRect);
}
EMSCRIPTEN_BINDINGS(vtkRenderingContext2D_vtkContextDevice2D_0_2_constants) {
    typedef vtkContextDevice2D::TextureProperty cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkContextDevice2D_TextureProperty_Nearest", vtkContextDevice2D::Nearest },
      { "vtkContextDevice2D_TextureProperty_Linear", vtkContextDevice2D::Linear },
      { "vtkContextDevice2D_TextureProperty_Stretch", vtkContextDevice2D::Stretch },
      { "vtkContextDevice2D_TextureProperty_Repeat", vtkContextDevice2D::Repeat },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
