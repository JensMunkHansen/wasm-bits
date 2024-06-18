// JavaScript wrapper for vtkAbstractContextItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkAbstractContextItemEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkAbstractContextItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkContextMouseEvent.h"
#include "vtkContextKeyEvent.h"
#include "vtkContextScene.h"
#include "vtkVector.h"
#include "vtkAbstractContextItem.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractContextItem>(vtkAbstractContextItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractContextItem_class) {
  emscripten::class_<vtkAbstractContextItem, emscripten::base<vtkObject>>("vtkAbstractContextItem")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractContextItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractContextItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractContextItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractContextItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractContextItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractContextItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", &vtkAbstractContextItem::Update)
    .function("Paint", &vtkAbstractContextItem::Paint, emscripten::allow_raw_pointers())
    .function("PaintChildren", &vtkAbstractContextItem::PaintChildren, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkAbstractContextItem::ReleaseGraphicsResources)
    .function("AddItem", &vtkAbstractContextItem::AddItem, emscripten::allow_raw_pointers())
    .function("RemoveItem", emscripten::select_overload<bool(vtkAbstractContextItem&, vtkAbstractContextItem*)>([](vtkAbstractContextItem& self, vtkAbstractContextItem* arg_0) -> bool { return self.RemoveItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveItem", emscripten::select_overload<bool(vtkAbstractContextItem&, int)>([](vtkAbstractContextItem& self, int arg_0) -> bool { return self.RemoveItem( arg_0); }))
    .function("GetItem", &vtkAbstractContextItem::GetItem, emscripten::allow_raw_pointers())
    .function("GetItemIndex", &vtkAbstractContextItem::GetItemIndex, emscripten::allow_raw_pointers())
    .function("GetNumberOfItems", &vtkAbstractContextItem::GetNumberOfItems)
    .function("ClearItems", &vtkAbstractContextItem::ClearItems)
    .function("Raise", &vtkAbstractContextItem::Raise)
    .function("StackAbove", &vtkAbstractContextItem::StackAbove)
    .function("Lower", &vtkAbstractContextItem::Lower)
    .function("StackUnder", &vtkAbstractContextItem::StackUnder)
    .function("Hit", &vtkAbstractContextItem::Hit)
    .function("GetPickedItem", &vtkAbstractContextItem::GetPickedItem, emscripten::allow_raw_pointers())
    .function("MouseEnterEvent", &vtkAbstractContextItem::MouseEnterEvent)
    .function("MouseMoveEvent", &vtkAbstractContextItem::MouseMoveEvent)
    .function("MouseLeaveEvent", &vtkAbstractContextItem::MouseLeaveEvent)
    .function("MouseButtonPressEvent", &vtkAbstractContextItem::MouseButtonPressEvent)
    .function("MouseButtonReleaseEvent", &vtkAbstractContextItem::MouseButtonReleaseEvent)
    .function("MouseDoubleClickEvent", &vtkAbstractContextItem::MouseDoubleClickEvent)
    .function("MouseWheelEvent", &vtkAbstractContextItem::MouseWheelEvent)
    .function("KeyPressEvent", &vtkAbstractContextItem::KeyPressEvent)
    .function("KeyReleaseEvent", &vtkAbstractContextItem::KeyReleaseEvent)
    .function("SetScene", &vtkAbstractContextItem::SetScene, emscripten::allow_raw_pointers())
    .function("GetScene", &vtkAbstractContextItem::GetScene, emscripten::allow_raw_pointers())
    .function("SetParent", &vtkAbstractContextItem::SetParent, emscripten::allow_raw_pointers())
    .function("GetParent", &vtkAbstractContextItem::GetParent, emscripten::allow_raw_pointers())
    .function("MapToParent", &vtkAbstractContextItem::MapToParent)
    .function("MapFromParent", &vtkAbstractContextItem::MapFromParent)
    .function("MapToScene", &vtkAbstractContextItem::MapToScene)
    .function("MapFromScene", &vtkAbstractContextItem::MapFromScene)
    .function("GetVisible", &vtkAbstractContextItem::GetVisible)
    .function("SetVisible", &vtkAbstractContextItem::SetVisible)
    .function("GetInteractive", &vtkAbstractContextItem::GetInteractive)
    .function("SetInteractive", &vtkAbstractContextItem::SetInteractive);
}
