// JavaScript wrapper for vtkPolyDataItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkPolyDataItemEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkPolyDataItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkPolyData.h"
#include "vtkUnsignedCharArray.h"
#include "vtkPolyDataItem.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataItem>(vtkPolyDataItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataItem_class) {
  emscripten::class_<vtkPolyDataItem, emscripten::base<vtkContextItem>>("vtkPolyDataItem")
    .smart_ptr<vtkSmartPointer<vtkPolyDataItem>>("vtkSmartPointer<vtkPolyDataItem>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolyDataItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkPolyDataItem::Paint, emscripten::allow_raw_pointers())
    .function("SetPolyData", &vtkPolyDataItem::SetPolyData, emscripten::allow_raw_pointers())
    .function("SetMappedColors", &vtkPolyDataItem::SetMappedColors, emscripten::allow_raw_pointers())
    .function("GetPolyData", &vtkPolyDataItem::GetPolyData, emscripten::allow_raw_pointers())
    .function("SetPosition", emscripten::select_overload<void(vtkPolyDataItem&, float, float)>([](vtkPolyDataItem& self, float arg_0, float arg_1) -> void { return self.SetPosition( arg_0, arg_1); }))
    .function("SetScalarMode", &vtkPolyDataItem::SetScalarMode);
}
