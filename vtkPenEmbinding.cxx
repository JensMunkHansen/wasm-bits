// JavaScript wrapper for vtkPen with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkPenEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkPen.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkColor.h"
#include "vtkPen.h"

template<> void emscripten::internal::raw_destructor<vtkPen>(vtkPen * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPen_class) {
  emscripten::class_<vtkPen, emscripten::base<vtkObject>>("vtkPen")
    .smart_ptr<vtkSmartPointer<vtkPen>>("vtkSmartPointer<vtkPen>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPen>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPen::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPen& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPen::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPen::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPen::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPen& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLineType", &vtkPen::SetLineType)
    .function("GetLineType", &vtkPen::GetLineType)
    .function("SetColorF", emscripten::select_overload<void(vtkPen&, double, double, double)>([](vtkPen& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetColorF( arg_0, arg_1, arg_2); }))
    .function("SetColorF", emscripten::select_overload<void(vtkPen&, double, double, double, double)>([](vtkPen& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetColorF( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetOpacityF", &vtkPen::SetOpacityF)
    .function("SetColor", emscripten::select_overload<void(vtkPen&, unsigned char, unsigned char, unsigned char)>([](vtkPen& self, unsigned char arg_0, unsigned char arg_1, unsigned char arg_2) -> void { return self.SetColor( arg_0, arg_1, arg_2); }))
    .function("SetColor", emscripten::select_overload<void(vtkPen&, unsigned char, unsigned char, unsigned char, unsigned char)>([](vtkPen& self, unsigned char arg_0, unsigned char arg_1, unsigned char arg_2, unsigned char arg_3) -> void { return self.SetColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetColor", emscripten::select_overload<void(vtkPen&, const vtkColor4ub&)>([](vtkPen& self, const vtkColor4ub& arg_0) -> void { return self.SetColor( arg_0); }))
    .function("SetOpacity", &vtkPen::SetOpacity)
    .function("GetColorObject", &vtkPen::GetColorObject)
    .function("GetOpacity", &vtkPen::GetOpacity)
    .function("GetColor", emscripten::select_overload<std::uintptr_t(vtkPen&)>([](vtkPen& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetColor()); }))
    .function("SetWidth", &vtkPen::SetWidth)
    .function("GetWidth", &vtkPen::GetWidth)
    .function("DeepCopy", &vtkPen::DeepCopy, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingContext2D_vtkPen_0_2_constants) {
  const struct { const char *name; int value; }
    constants[7] = {
      { "vtkPen_NO_PEN", vtkPen::NO_PEN },
      { "vtkPen_SOLID_LINE", vtkPen::SOLID_LINE },
      { "vtkPen_DASH_LINE", vtkPen::DASH_LINE },
      { "vtkPen_DOT_LINE", vtkPen::DOT_LINE },
      { "vtkPen_DASH_DOT_LINE", vtkPen::DASH_DOT_LINE },
      { "vtkPen_DASH_DOT_DOT_LINE", vtkPen::DASH_DOT_DOT_LINE },
      { "vtkPen_DENSE_DOT_LINE", vtkPen::DENSE_DOT_LINE },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
