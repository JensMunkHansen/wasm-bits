// JavaScript wrapper for vtkHeatmapItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkHeatmapItemEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkHeatmapItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTable.h"
#include "vtkStringArray.h"
#include "vtkStdString.h"
#include "vtkVector.h"
#include "vtkContext2D.h"
#include "vtkContextMouseEvent.h"
#include "vtkHeatmapItem.h"

template<> void emscripten::internal::raw_destructor<vtkHeatmapItem>(vtkHeatmapItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHeatmapItem_class) {
  emscripten::class_<vtkHeatmapItem, emscripten::base<vtkContextItem>>("vtkHeatmapItem")
    .smart_ptr<vtkSmartPointer<vtkHeatmapItem>>("vtkSmartPointer<vtkHeatmapItem>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHeatmapItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHeatmapItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHeatmapItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHeatmapItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHeatmapItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHeatmapItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHeatmapItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTable", &vtkHeatmapItem::SetTable, emscripten::allow_raw_pointers())
    .function("GetTable", &vtkHeatmapItem::GetTable, emscripten::allow_raw_pointers())
    .function("GetRowNames", &vtkHeatmapItem::GetRowNames, emscripten::allow_raw_pointers())
    .function("GetNameColumn", &vtkHeatmapItem::GetNameColumn)
    .function("SetNameColumn", &vtkHeatmapItem::SetNameColumn)
    .function("SetOrientation", &vtkHeatmapItem::SetOrientation)
    .function("GetOrientation", &vtkHeatmapItem::GetOrientation)
    .function("GetTextAngleForOrientation", &vtkHeatmapItem::GetTextAngleForOrientation)
    .function("SetPosition", emscripten::select_overload<void(vtkHeatmapItem&, float, float)>([](vtkHeatmapItem& self, float arg_0, float arg_1) -> void { return self.SetPosition( arg_0, arg_1); }))
    .function("SetPosition", emscripten::select_overload<void(vtkHeatmapItem&, const vtkVector2f&)>([](vtkHeatmapItem& self, const vtkVector2f& arg_0) -> void { return self.SetPosition( arg_0); }))
    .function("GetPositionVector", &vtkHeatmapItem::GetPositionVector)
    .function("GetCellHeight", &vtkHeatmapItem::GetCellHeight)
    .function("SetCellHeight", &vtkHeatmapItem::SetCellHeight)
    .function("GetCellWidth", &vtkHeatmapItem::GetCellWidth)
    .function("SetCellWidth", &vtkHeatmapItem::SetCellWidth)
    .function("MarkRowAsBlank", &vtkHeatmapItem::MarkRowAsBlank)
    .function("Paint", &vtkHeatmapItem::Paint, emscripten::allow_raw_pointers())
    .function("GetRowLabelWidth", &vtkHeatmapItem::GetRowLabelWidth)
    .function("GetColumnLabelWidth", &vtkHeatmapItem::GetColumnLabelWidth)
    .function("Hit", &vtkHeatmapItem::Hit)
    .function("MouseMoveEvent", &vtkHeatmapItem::MouseMoveEvent)
    .function("MouseDoubleClickEvent", &vtkHeatmapItem::MouseDoubleClickEvent);
}
EMSCRIPTEN_BINDINGS(vtkViewsInfovis_vtkHeatmapItem_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkHeatmapItem_LEFT_TO_RIGHT", vtkHeatmapItem::LEFT_TO_RIGHT },
      { "vtkHeatmapItem_UP_TO_DOWN", vtkHeatmapItem::UP_TO_DOWN },
      { "vtkHeatmapItem_RIGHT_TO_LEFT", vtkHeatmapItem::RIGHT_TO_LEFT },
      { "vtkHeatmapItem_DOWN_TO_UP", vtkHeatmapItem::DOWN_TO_UP },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
