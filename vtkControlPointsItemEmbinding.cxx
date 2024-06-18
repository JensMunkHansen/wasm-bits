// JavaScript wrapper for vtkControlPointsItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkControlPointsItemEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkControlPointsItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkVector.h"
#include "vtkIdTypeArray.h"
#include "vtkPen.h"
#include "vtkBrush.h"
#include "vtkPlot.h"
#include "vtkContextMouseEvent.h"
#include "vtkContextKeyEvent.h"
#include "vtkControlPointsItem.h"

template<> void emscripten::internal::raw_destructor<vtkControlPointsItem>(vtkControlPointsItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkControlPointsItem_class) {
  emscripten::class_<vtkControlPointsItem, emscripten::base<vtkPlot>>("vtkControlPointsItem")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkControlPointsItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkControlPointsItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkControlPointsItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkControlPointsItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkControlPointsItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkControlPointsItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetUserBounds", emscripten::select_overload<void(vtkControlPointsItem&, double, double, double, double)>([](vtkControlPointsItem& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetUserBounds( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetValidBounds", emscripten::select_overload<void(vtkControlPointsItem&, double, double, double, double)>([](vtkControlPointsItem& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetValidBounds( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetScreenPointRadius", &vtkControlPointsItem::GetScreenPointRadius)
    .function("SetScreenPointRadius", &vtkControlPointsItem::SetScreenPointRadius)
    .function("GetDrawPoints", &vtkControlPointsItem::GetDrawPoints)
    .function("SetDrawPoints", &vtkControlPointsItem::SetDrawPoints)
    .function("DrawPointsOn", &vtkControlPointsItem::DrawPointsOn)
    .function("DrawPointsOff", &vtkControlPointsItem::DrawPointsOff)
    .function("Paint", &vtkControlPointsItem::Paint, emscripten::allow_raw_pointers())
    .function("SelectPoint", emscripten::select_overload<void(vtkControlPointsItem&, int)>([](vtkControlPointsItem& self, int arg_0) -> void { return self.SelectPoint( arg_0); }))
    .function("SelectPoint", emscripten::select_overload<void(vtkControlPointsItem&, std::uintptr_t)>([](vtkControlPointsItem& self, std::uintptr_t arg_0) -> void { return self.SelectPoint(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SelectAllPoints", &vtkControlPointsItem::SelectAllPoints)
    .function("DeselectPoint", emscripten::select_overload<void(vtkControlPointsItem&, int)>([](vtkControlPointsItem& self, int arg_0) -> void { return self.DeselectPoint( arg_0); }))
    .function("DeselectPoint", emscripten::select_overload<void(vtkControlPointsItem&, std::uintptr_t)>([](vtkControlPointsItem& self, std::uintptr_t arg_0) -> void { return self.DeselectPoint(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("DeselectAllPoints", &vtkControlPointsItem::DeselectAllPoints)
    .function("ToggleSelectPoint", emscripten::select_overload<void(vtkControlPointsItem&, int)>([](vtkControlPointsItem& self, int arg_0) -> void { return self.ToggleSelectPoint( arg_0); }))
    .function("ToggleSelectPoint", emscripten::select_overload<void(vtkControlPointsItem&, std::uintptr_t)>([](vtkControlPointsItem& self, std::uintptr_t arg_0) -> void { return self.ToggleSelectPoint(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SelectPoints", &vtkControlPointsItem::SelectPoints)
    .function("GetNumberOfSelectedPoints", &vtkControlPointsItem::GetNumberOfSelectedPoints)
    .function("FindPoint", emscripten::optional_override([](vtkControlPointsItem& self, std::uintptr_t arg_0) -> int {  return self.FindPoint(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("IsOverPoint", emscripten::optional_override([](vtkControlPointsItem& self, std::uintptr_t arg_0, int arg_1) -> bool {  return self.IsOverPoint(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1);}))
    .function("GetControlPointId", emscripten::optional_override([](vtkControlPointsItem& self, std::uintptr_t arg_0) -> int {  return self.GetControlPointId(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("GetControlPointsIds", &vtkControlPointsItem::GetControlPointsIds, emscripten::allow_raw_pointers())
    .function("SetStrokeMode", &vtkControlPointsItem::SetStrokeMode)
    .function("GetStrokeMode", &vtkControlPointsItem::GetStrokeMode)
    .function("SetSwitchPointsMode", &vtkControlPointsItem::SetSwitchPointsMode)
    .function("GetSwitchPointsMode", &vtkControlPointsItem::GetSwitchPointsMode)
    .function("SetEndPointsXMovable", &vtkControlPointsItem::SetEndPointsXMovable)
    .function("GetEndPointsXMovable", &vtkControlPointsItem::GetEndPointsXMovable)
    .function("SetEndPointsYMovable", &vtkControlPointsItem::SetEndPointsYMovable)
    .function("GetEndPointsYMovable", &vtkControlPointsItem::GetEndPointsYMovable)
    .function("GetEndPointsMovable", &vtkControlPointsItem::GetEndPointsMovable)
    .function("SetEndPointsRemovable", &vtkControlPointsItem::SetEndPointsRemovable)
    .function("GetEndPointsRemovable", &vtkControlPointsItem::GetEndPointsRemovable)
    .function("SetShowLabels", &vtkControlPointsItem::SetShowLabels)
    .function("GetShowLabels", &vtkControlPointsItem::GetShowLabels)
    .function("SetLabelFormat", emscripten::optional_override([](vtkControlPointsItem& self, const std::string & arg_0) -> void {  return self.SetLabelFormat( arg_0.c_str());}))
    .function("GetLabelFormat", emscripten::optional_override([](vtkControlPointsItem& self) -> std::string {  return self.GetLabelFormat();}))
    .function("RemovePoint", emscripten::select_overload<int(vtkControlPointsItem&, int)>([](vtkControlPointsItem& self, int arg_0) -> int { return self.RemovePoint( arg_0); }))
    .function("RemoveCurrentPoint", &vtkControlPointsItem::RemoveCurrentPoint)
    .function("MovePoints", emscripten::select_overload<void(vtkControlPointsItem&, const vtkVector2f&, vtkIdTypeArray*)>([](vtkControlPointsItem& self, const vtkVector2f& arg_0, vtkIdTypeArray* arg_1) -> void { return self.MovePoints( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("MovePoints", emscripten::select_overload<void(vtkControlPointsItem&, const vtkVector2f&, bool)>([](vtkControlPointsItem& self, const vtkVector2f& arg_0, bool arg_1) -> void { return self.MovePoints( arg_0, arg_1); }))
    .function("SpreadPoints", emscripten::select_overload<void(vtkControlPointsItem&, float, vtkIdTypeArray*)>([](vtkControlPointsItem& self, float arg_0, vtkIdTypeArray* arg_1) -> void { return self.SpreadPoints( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SpreadPoints", emscripten::select_overload<void(vtkControlPointsItem&, float, bool)>([](vtkControlPointsItem& self, float arg_0, bool arg_1) -> void { return self.SpreadPoints( arg_0, arg_1); }))
    .function("GetCurrentPoint", &vtkControlPointsItem::GetCurrentPoint)
    .function("SetCurrentPoint", &vtkControlPointsItem::SetCurrentPoint)
    .function("GetSelectedPointPen", &vtkControlPointsItem::GetSelectedPointPen, emscripten::allow_raw_pointers())
    .function("GetSelectedPointBrush", &vtkControlPointsItem::GetSelectedPointBrush, emscripten::allow_raw_pointers())
    .function("GetUseAddPointItem", &vtkControlPointsItem::GetUseAddPointItem)
    .function("SetUseAddPointItem", &vtkControlPointsItem::SetUseAddPointItem)
    .function("UseAddPointItemOn", &vtkControlPointsItem::UseAddPointItemOn)
    .function("UseAddPointItemOff", &vtkControlPointsItem::UseAddPointItemOff)
    .function("GetAddPointItem", &vtkControlPointsItem::GetAddPointItem, emscripten::allow_raw_pointers())
    .function("ResetBounds", &vtkControlPointsItem::ResetBounds)
    .function("MouseButtonPressEvent", &vtkControlPointsItem::MouseButtonPressEvent)
    .function("MouseDoubleClickEvent", &vtkControlPointsItem::MouseDoubleClickEvent)
    .function("MouseButtonReleaseEvent", &vtkControlPointsItem::MouseButtonReleaseEvent)
    .function("MouseMoveEvent", &vtkControlPointsItem::MouseMoveEvent)
    .function("KeyPressEvent", &vtkControlPointsItem::KeyPressEvent)
    .function("KeyReleaseEvent", &vtkControlPointsItem::KeyReleaseEvent);
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkControlPointsItem_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkControlPointsItem_CurrentPointChangedEvent", vtkControlPointsItem::CurrentPointChangedEvent },
      { "vtkControlPointsItem_CurrentPointEditEvent", vtkControlPointsItem::CurrentPointEditEvent },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
