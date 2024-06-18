// JavaScript wrapper for vtkBlockItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkBlockItemEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkBlockItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkContextMouseEvent.h"
#include "vtkStdString.h"
#include "vtkPen.h"
#include "vtkBrush.h"
#include "vtkTextProperty.h"
#include "vtkBlockItem.h"

template<> void emscripten::internal::raw_destructor<vtkBlockItem>(vtkBlockItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBlockItem_class) {
  emscripten::class_<vtkBlockItem, emscripten::base<vtkContextItem>>("vtkBlockItem")
    .smart_ptr<vtkSmartPointer<vtkBlockItem>>("vtkSmartPointer<vtkBlockItem>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBlockItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBlockItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBlockItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBlockItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBlockItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBlockItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBlockItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkBlockItem::Paint, emscripten::allow_raw_pointers())
    .function("Hit", &vtkBlockItem::Hit)
    .function("MouseEnterEvent", &vtkBlockItem::MouseEnterEvent)
    .function("MouseMoveEvent", &vtkBlockItem::MouseMoveEvent)
    .function("MouseLeaveEvent", &vtkBlockItem::MouseLeaveEvent)
    .function("MouseButtonPressEvent", &vtkBlockItem::MouseButtonPressEvent)
    .function("MouseButtonReleaseEvent", &vtkBlockItem::MouseButtonReleaseEvent)
    .function("SetLabel", &vtkBlockItem::SetLabel)
    .function("GetLabel", &vtkBlockItem::GetLabel)
    .function("SetDimensions", emscripten::select_overload<void(vtkBlockItem&, float, float, float, float)>([](vtkBlockItem& self, float arg_0, float arg_1, float arg_2, float arg_3) -> void { return self.SetDimensions( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetAutoComputeDimensions", &vtkBlockItem::SetAutoComputeDimensions)
    .function("GetAutoComputeDimensions", &vtkBlockItem::GetAutoComputeDimensions)
    .function("AutoComputeDimensionsOn", &vtkBlockItem::AutoComputeDimensionsOn)
    .function("AutoComputeDimensionsOff", &vtkBlockItem::AutoComputeDimensionsOff)
    .function("SetHorizontalAlignment", &vtkBlockItem::SetHorizontalAlignment)
    .function("GetHorizontalAlignment", &vtkBlockItem::GetHorizontalAlignment)
    .function("SetVerticalAlignment", &vtkBlockItem::SetVerticalAlignment)
    .function("GetVerticalAlignment", &vtkBlockItem::GetVerticalAlignment)
    .function("SetPadding", emscripten::select_overload<void(vtkBlockItem&, int, int)>([](vtkBlockItem& self, int arg_0, int arg_1) -> void { return self.SetPadding( arg_0, arg_1); }))
    .function("SetMargins", emscripten::select_overload<void(vtkBlockItem&, int, int)>([](vtkBlockItem& self, int arg_0, int arg_1) -> void { return self.SetMargins( arg_0, arg_1); }))
    .function("GetPen", &vtkBlockItem::GetPen, emscripten::allow_raw_pointers())
    .function("GetBrush", &vtkBlockItem::GetBrush, emscripten::allow_raw_pointers())
    .function("GetMouseOverBrush", &vtkBlockItem::GetMouseOverBrush, emscripten::allow_raw_pointers())
    .function("SetLabelProperties", &vtkBlockItem::SetLabelProperties, emscripten::allow_raw_pointers())
    .function("GetLabelProperties", &vtkBlockItem::GetLabelProperties, emscripten::allow_raw_pointers())
    .function("SetScalarFunctor", emscripten::optional_override([](vtkBlockItem& self, emscripten::val arg_0) -> void {  return self.SetScalarFunctor( reinterpret_cast<double(*)( double, double)>(emscripten::val::module_property("addFunction")(arg_0, std::string("ddd")).as<int>()));}));
}
EMSCRIPTEN_BINDINGS(vtkRenderingContext2D_vtkBlockItem_0_2_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "vtkBlockItem_LEFT", vtkBlockItem::LEFT },
      { "vtkBlockItem_CENTER", vtkBlockItem::CENTER },
      { "vtkBlockItem_RIGHT", vtkBlockItem::RIGHT },
      { "vtkBlockItem_TOP", vtkBlockItem::TOP },
      { "vtkBlockItem_BOTTOM", vtkBlockItem::BOTTOM },
      { "vtkBlockItem_CUSTOM", vtkBlockItem::CUSTOM },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
