// JavaScript wrapper for vtkScalarsToColorsItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkScalarsToColorsItemEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkScalarsToColorsItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkPen.h"
#include "vtkTable.h"
#include "vtkVector.h"
#include "vtkStdString.h"
#include "vtkScalarsToColorsItem.h"

template<> void emscripten::internal::raw_destructor<vtkScalarsToColorsItem>(vtkScalarsToColorsItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkScalarsToColorsItem_class) {
  emscripten::class_<vtkScalarsToColorsItem, emscripten::base<vtkPlot>>("vtkScalarsToColorsItem")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScalarsToColorsItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkScalarsToColorsItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkScalarsToColorsItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkScalarsToColorsItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScalarsToColorsItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkScalarsToColorsItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetUserBounds", emscripten::select_overload<void(vtkScalarsToColorsItem&, double, double, double, double)>([](vtkScalarsToColorsItem& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetUserBounds( arg_0, arg_1, arg_2, arg_3); }))
    .function("Paint", &vtkScalarsToColorsItem::Paint, emscripten::allow_raw_pointers())
    .function("GetPolyLinePen", &vtkScalarsToColorsItem::GetPolyLinePen, emscripten::allow_raw_pointers())
    .function("SetHistogramTable", &vtkScalarsToColorsItem::SetHistogramTable, emscripten::allow_raw_pointers())
    .function("GetHistogramTable", &vtkScalarsToColorsItem::GetHistogramTable, emscripten::allow_raw_pointers())
    .function("SetMaskAboveCurve", &vtkScalarsToColorsItem::SetMaskAboveCurve)
    .function("GetMaskAboveCurve", &vtkScalarsToColorsItem::GetMaskAboveCurve)
    .function("GetTooltipLabel", &vtkScalarsToColorsItem::GetTooltipLabel);
}
