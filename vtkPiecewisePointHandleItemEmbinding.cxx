// JavaScript wrapper for vtkPiecewisePointHandleItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPiecewisePointHandleItemEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPiecewisePointHandleItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkObject.h"
#include "vtkAbstractContextItem.h"
#include "vtkContext2D.h"
#include "vtkPiecewiseFunction.h"
#include "vtkWeakPointer.h"
#include "vtkContextMouseEvent.h"
#include "vtkPiecewisePointHandleItem.h"

template<> void emscripten::internal::raw_destructor<vtkPiecewisePointHandleItem>(vtkPiecewisePointHandleItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPiecewisePointHandleItem_class) {
  emscripten::class_<vtkPiecewisePointHandleItem, emscripten::base<vtkContextItem>>("vtkPiecewisePointHandleItem")
    .smart_ptr<vtkSmartPointer<vtkPiecewisePointHandleItem>>("vtkSmartPointer<vtkPiecewisePointHandleItem>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPiecewisePointHandleItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPiecewisePointHandleItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPiecewisePointHandleItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPiecewisePointHandleItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPiecewisePointHandleItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPiecewisePointHandleItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPiecewisePointHandleItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("CallRedraw", emscripten::optional_override([]( vtkObject* arg_0, unsigned long arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> void {  return vtkPiecewisePointHandleItem::CallRedraw( arg_0, arg_1,reinterpret_cast<void*>(arg_2),reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("SetParent", &vtkPiecewisePointHandleItem::SetParent, emscripten::allow_raw_pointers())
    .function("Paint", &vtkPiecewisePointHandleItem::Paint, emscripten::allow_raw_pointers())
    .function("SetCurrentPointIndex", &vtkPiecewisePointHandleItem::SetCurrentPointIndex)
    .function("GetCurrentPointIndex", &vtkPiecewisePointHandleItem::GetCurrentPointIndex)
    .function("SetPiecewiseFunction", &vtkPiecewisePointHandleItem::SetPiecewiseFunction, emscripten::allow_raw_pointers())
    .function("GetPiecewiseFunction", &vtkPiecewisePointHandleItem::GetPiecewiseFunction)
    .function("IsOverHandle", emscripten::optional_override([](vtkPiecewisePointHandleItem& self, std::uintptr_t arg_0) -> int {  return self.IsOverHandle(reinterpret_cast<float*>(arg_0 * sizeof(float)));}))
    .function("Hit", &vtkPiecewisePointHandleItem::Hit)
    .function("MouseMoveEvent", &vtkPiecewisePointHandleItem::MouseMoveEvent)
    .function("MouseButtonPressEvent", &vtkPiecewisePointHandleItem::MouseButtonPressEvent)
    .function("MouseButtonReleaseEvent", &vtkPiecewisePointHandleItem::MouseButtonReleaseEvent);
}
