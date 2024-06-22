// JavaScript wrapper for vtkTooltipItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkTooltipItemEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkTooltipItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkStdString.h"
#include "vtkPen.h"
#include "vtkBrush.h"
#include "vtkTextProperty.h"
#include "vtkContext2D.h"
#include "vtkTooltipItem.h"

template<> void emscripten::internal::raw_destructor<vtkTooltipItem>(vtkTooltipItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTooltipItem_class) {
  emscripten::class_<vtkTooltipItem, emscripten::base<vtkContextItem>>("vtkTooltipItem")
    .smart_ptr<vtkSmartPointer<vtkTooltipItem>>("vtkSmartPointer<vtkTooltipItem>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTooltipItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTooltipItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTooltipItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTooltipItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTooltipItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTooltipItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTooltipItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPosition", emscripten::select_overload<void(vtkTooltipItem&, float, float)>([](vtkTooltipItem& self, float arg_0, float arg_1) -> void { return self.SetPosition( arg_0, arg_1); }))
    .function("SetPosition", emscripten::select_overload<void(vtkTooltipItem&, const vtkVector2f&)>([](vtkTooltipItem& self, const vtkVector2f& arg_0) -> void { return self.SetPosition( arg_0); }))
    .function("GetPositionVector", &vtkTooltipItem::GetPositionVector)
    .function("SetText", &vtkTooltipItem::SetText)
    .function("GetText", &vtkTooltipItem::GetText)
    .function("GetPen", &vtkTooltipItem::GetPen, emscripten::allow_raw_pointers())
    .function("GetBrush", &vtkTooltipItem::GetBrush, emscripten::allow_raw_pointers())
    .function("GetTextProperties", &vtkTooltipItem::GetTextProperties, emscripten::allow_raw_pointers())
    .function("Update", &vtkTooltipItem::Update)
    .function("Paint", &vtkTooltipItem::Paint, emscripten::allow_raw_pointers());
}
