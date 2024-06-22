// JavaScript wrapper for vtkPlotBarRangeHandlesItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotBarRangeHandlesItemEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotBarRangeHandlesItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlotBar.h"
#include "vtkPlotBarRangeHandlesItem.h"

template<> void emscripten::internal::raw_destructor<vtkPlotBarRangeHandlesItem>(vtkPlotBarRangeHandlesItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotBarRangeHandlesItem_class) {
  emscripten::class_<vtkPlotBarRangeHandlesItem, emscripten::base<vtkPlotRangeHandlesItem>>("vtkPlotBarRangeHandlesItem")
    .smart_ptr<vtkSmartPointer<vtkPlotBarRangeHandlesItem>>("vtkSmartPointer<vtkPlotBarRangeHandlesItem>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPlotBarRangeHandlesItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotBarRangeHandlesItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotBarRangeHandlesItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotBarRangeHandlesItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotBarRangeHandlesItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotBarRangeHandlesItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotBarRangeHandlesItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPlotBar", &vtkPlotBarRangeHandlesItem::SetPlotBar, emscripten::allow_raw_pointers())
    .function("GetPlotBar", &vtkPlotBarRangeHandlesItem::GetPlotBar, emscripten::allow_raw_pointers());
}
