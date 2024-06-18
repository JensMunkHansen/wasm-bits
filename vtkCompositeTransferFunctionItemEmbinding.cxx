// JavaScript wrapper for vtkCompositeTransferFunctionItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkCompositeTransferFunctionItemEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkCompositeTransferFunctionItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPiecewiseFunction.h"
#include "vtkCompositeTransferFunctionItem.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeTransferFunctionItem>(vtkCompositeTransferFunctionItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeTransferFunctionItem_class) {
  emscripten::class_<vtkCompositeTransferFunctionItem, emscripten::base<vtkColorTransferFunctionItem>>("vtkCompositeTransferFunctionItem")
    .smart_ptr<vtkSmartPointer<vtkCompositeTransferFunctionItem>>("vtkSmartPointer<vtkCompositeTransferFunctionItem>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCompositeTransferFunctionItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeTransferFunctionItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeTransferFunctionItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeTransferFunctionItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeTransferFunctionItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeTransferFunctionItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeTransferFunctionItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOpacityFunction", &vtkCompositeTransferFunctionItem::SetOpacityFunction, emscripten::allow_raw_pointers())
    .function("GetOpacityFunction", &vtkCompositeTransferFunctionItem::GetOpacityFunction, emscripten::allow_raw_pointers());
}
