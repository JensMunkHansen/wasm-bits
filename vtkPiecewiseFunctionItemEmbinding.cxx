// JavaScript wrapper for vtkPiecewiseFunctionItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPiecewiseFunctionItemEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPiecewiseFunctionItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPiecewiseFunction.h"
#include "vtkPiecewiseFunctionItem.h"

template<> void emscripten::internal::raw_destructor<vtkPiecewiseFunctionItem>(vtkPiecewiseFunctionItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPiecewiseFunctionItem_class) {
  emscripten::class_<vtkPiecewiseFunctionItem, emscripten::base<vtkScalarsToColorsItem>>("vtkPiecewiseFunctionItem")
    .smart_ptr<vtkSmartPointer<vtkPiecewiseFunctionItem>>("vtkSmartPointer<vtkPiecewiseFunctionItem>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPiecewiseFunctionItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPiecewiseFunctionItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPiecewiseFunctionItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPiecewiseFunctionItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPiecewiseFunctionItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPiecewiseFunctionItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPiecewiseFunctionItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPiecewiseFunction", &vtkPiecewiseFunctionItem::SetPiecewiseFunction, emscripten::allow_raw_pointers())
    .function("GetPiecewiseFunction", &vtkPiecewiseFunctionItem::GetPiecewiseFunction, emscripten::allow_raw_pointers());
}
