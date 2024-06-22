// JavaScript wrapper for vtkColorTransferFunctionItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkColorTransferFunctionItemEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkColorTransferFunctionItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkColorTransferFunction.h"
#include "vtkColorTransferFunctionItem.h"

template<> void emscripten::internal::raw_destructor<vtkColorTransferFunctionItem>(vtkColorTransferFunctionItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkColorTransferFunctionItem_class) {
  emscripten::class_<vtkColorTransferFunctionItem, emscripten::base<vtkScalarsToColorsItem>>("vtkColorTransferFunctionItem")
    .smart_ptr<vtkSmartPointer<vtkColorTransferFunctionItem>>("vtkSmartPointer<vtkColorTransferFunctionItem>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkColorTransferFunctionItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkColorTransferFunctionItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkColorTransferFunctionItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkColorTransferFunctionItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkColorTransferFunctionItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkColorTransferFunctionItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkColorTransferFunctionItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetColorTransferFunction", &vtkColorTransferFunctionItem::SetColorTransferFunction, emscripten::allow_raw_pointers())
    .function("GetColorTransferFunction", &vtkColorTransferFunctionItem::GetColorTransferFunction, emscripten::allow_raw_pointers());
}
