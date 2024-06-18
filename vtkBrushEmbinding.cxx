// JavaScript wrapper for vtkBrush with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkBrushEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkBrush.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkColor.h"
#include "vtkImageData.h"
#include "vtkBrush.h"

EMSCRIPTEN_BINDINGS(vtkRenderingContext2D_vtkBrush_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkBrush>(vtkBrush * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBrush_class) {
  using TextureProperty=vtkBrush::TextureProperty;
  emscripten::class_<vtkBrush, emscripten::base<vtkObject>>("vtkBrush")
    .smart_ptr<vtkSmartPointer<vtkBrush>>("vtkSmartPointer<vtkBrush>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBrush>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBrush::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBrush& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBrush::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBrush::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBrush::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBrush& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetColorF", emscripten::select_overload<void(vtkBrush&, double, double, double)>([](vtkBrush& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetColorF( arg_0, arg_1, arg_2); }))
    .function("SetColorF", emscripten::select_overload<void(vtkBrush&, double, double, double, double)>([](vtkBrush& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetColorF( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetOpacityF", &vtkBrush::SetOpacityF)
    .function("GetOpacityF", &vtkBrush::GetOpacityF)
    .function("SetColor", emscripten::select_overload<void(vtkBrush&, unsigned char, unsigned char, unsigned char)>([](vtkBrush& self, unsigned char arg_0, unsigned char arg_1, unsigned char arg_2) -> void { return self.SetColor( arg_0, arg_1, arg_2); }))
    .function("SetColor", emscripten::select_overload<void(vtkBrush&, unsigned char, unsigned char, unsigned char, unsigned char)>([](vtkBrush& self, unsigned char arg_0, unsigned char arg_1, unsigned char arg_2, unsigned char arg_3) -> void { return self.SetColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetColor", emscripten::select_overload<void(vtkBrush&, const vtkColor4ub&)>([](vtkBrush& self, const vtkColor4ub& arg_0) -> void { return self.SetColor( arg_0); }))
    .function("SetOpacity", &vtkBrush::SetOpacity)
    .function("GetOpacity", &vtkBrush::GetOpacity)
    .function("GetColor", emscripten::select_overload<std::uintptr_t(vtkBrush&)>([](vtkBrush& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetColor()); }))
    .function("GetColorObject", &vtkBrush::GetColorObject)
    .function("SetTexture", &vtkBrush::SetTexture, emscripten::allow_raw_pointers())
    .function("GetTexture", &vtkBrush::GetTexture, emscripten::allow_raw_pointers())
    .function("SetTextureProperties", &vtkBrush::SetTextureProperties)
    .function("GetTextureProperties", &vtkBrush::GetTextureProperties)
    .function("DeepCopy", &vtkBrush::DeepCopy, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingContext2D_vtkBrush_0_2_constants) {
    typedef vtkBrush::TextureProperty cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkBrush_TextureProperty_Nearest", vtkBrush::Nearest },
      { "vtkBrush_TextureProperty_Linear", vtkBrush::Linear },
      { "vtkBrush_TextureProperty_Stretch", vtkBrush::Stretch },
      { "vtkBrush_TextureProperty_Repeat", vtkBrush::Repeat },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
