// JavaScript wrapper for vtkEqualizerContextItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkEqualizerContextItemEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkEqualizerContextItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkContextMouseEvent.h"
#include "vtkEqualizerContextItem.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkEqualizerContextItem_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkEqualizerContextItem>(vtkEqualizerContextItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEqualizerContextItem_class) {
  emscripten::class_<vtkEqualizerContextItem, emscripten::base<vtkContextItem>>("vtkEqualizerContextItem")
    .smart_ptr<vtkSmartPointer<vtkEqualizerContextItem>>("vtkSmartPointer<vtkEqualizerContextItem>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkEqualizerContextItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEqualizerContextItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEqualizerContextItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEqualizerContextItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEqualizerContextItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEqualizerContextItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEqualizerContextItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkEqualizerContextItem::Paint, emscripten::allow_raw_pointers())
    .function("Hit", &vtkEqualizerContextItem::Hit)
    .function("MouseEnterEvent", &vtkEqualizerContextItem::MouseEnterEvent)
    .function("MouseMoveEvent", &vtkEqualizerContextItem::MouseMoveEvent)
    .function("MouseLeaveEvent", &vtkEqualizerContextItem::MouseLeaveEvent)
    .function("MouseButtonPressEvent", &vtkEqualizerContextItem::MouseButtonPressEvent)
    .function("MouseButtonReleaseEvent", &vtkEqualizerContextItem::MouseButtonReleaseEvent)
    .function("SetPoints", &vtkEqualizerContextItem::SetPoints)
    .function("GetPoints", &vtkEqualizerContextItem::GetPoints);
}
