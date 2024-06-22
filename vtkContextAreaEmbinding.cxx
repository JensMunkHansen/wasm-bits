// JavaScript wrapper for vtkContextArea with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkContextAreaEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkContextArea.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAxis.h"
#include "vtkAbstractContextItem.h"
#include "vtkContext2D.h"
#include "vtkRect.h"
#include "vtkTuple.h"
#include "vtkContextArea.h"

EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkContextArea_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkContextArea>(vtkContextArea * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContextArea_class) {
  using DrawAreaResizeBehaviorType=vtkContextArea::DrawAreaResizeBehaviorType;
  emscripten::class_<vtkContextArea, emscripten::base<vtkAbstractContextItem>>("vtkContextArea")
    .smart_ptr<vtkSmartPointer<vtkContextArea>>("vtkSmartPointer<vtkContextArea>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContextArea>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextArea::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContextArea& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContextArea::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContextArea::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextArea::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContextArea& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetAxis", &vtkContextArea::GetAxis, emscripten::allow_raw_pointers())
    .function("GetDrawAreaItem", &vtkContextArea::GetDrawAreaItem, emscripten::allow_raw_pointers())
    .function("Paint", &vtkContextArea::Paint, emscripten::allow_raw_pointers())
    .function("GetGeometry", &vtkContextArea::GetGeometry)
    .function("SetGeometry", &vtkContextArea::SetGeometry)
    .function("GetDrawAreaBounds", &vtkContextArea::GetDrawAreaBounds)
    .function("SetDrawAreaBounds", &vtkContextArea::SetDrawAreaBounds)
    .function("GetDrawAreaResizeBehavior", &vtkContextArea::GetDrawAreaResizeBehavior)
    .function("SetDrawAreaResizeBehavior", &vtkContextArea::SetDrawAreaResizeBehavior)
    .function("GetFixedAspect", &vtkContextArea::GetFixedAspect)
    .function("SetFixedAspect", &vtkContextArea::SetFixedAspect)
    .function("GetFixedRect", &vtkContextArea::GetFixedRect)
    .function("SetFixedRect", emscripten::select_overload<void(vtkContextArea&, vtkRecti)>([](vtkContextArea& self, vtkRecti arg_0) -> void { return self.SetFixedRect( arg_0); }))
    .function("SetFixedRect", emscripten::select_overload<void(vtkContextArea&, int, int, int, int)>([](vtkContextArea& self, int arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetFixedRect( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetFixedMargins", &vtkContextArea::GetFixedMargins)
    .function("GetFixedMarginsArray", emscripten::select_overload<std::uintptr_t(vtkContextArea&)>([](vtkContextArea& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetFixedMarginsArray()); }))
    .function("SetFixedMargins", emscripten::select_overload<void(vtkContextArea&, vtkTuple<int, 4>)>([](vtkContextArea& self, vtkTuple<int, 4> arg_0) -> void { return self.SetFixedMargins( arg_0); }))
    .function("SetFixedMargins", emscripten::select_overload<void(vtkContextArea&, int, int, int, int)>([](vtkContextArea& self, int arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetFixedMargins( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetFillViewport", &vtkContextArea::GetFillViewport)
    .function("SetFillViewport", &vtkContextArea::SetFillViewport)
    .function("FillViewportOn", &vtkContextArea::FillViewportOn)
    .function("FillViewportOff", &vtkContextArea::FillViewportOff)
    .function("SetShowGrid", &vtkContextArea::SetShowGrid)
    .function("GetShowGrid", &vtkContextArea::GetShowGrid)
    .function("ShowGridOn", &vtkContextArea::ShowGridOn)
    .function("ShowGridOff", &vtkContextArea::ShowGridOff);
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkContextArea_0_2_constants) {
    typedef vtkContextArea::DrawAreaResizeBehaviorType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkContextArea_DrawAreaResizeBehaviorType_DARB_Expand", vtkContextArea::DARB_Expand },
      { "vtkContextArea_DrawAreaResizeBehaviorType_DARB_FixedAspect", vtkContextArea::DARB_FixedAspect },
      { "vtkContextArea_DrawAreaResizeBehaviorType_DARB_FixedRect", vtkContextArea::DARB_FixedRect },
      { "vtkContextArea_DrawAreaResizeBehaviorType_DARB_FixedMargins", vtkContextArea::DARB_FixedMargins },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
