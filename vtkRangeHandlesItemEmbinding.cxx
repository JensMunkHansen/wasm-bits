// JavaScript wrapper for vtkRangeHandlesItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkRangeHandlesItemEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkRangeHandlesItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkColorTransferFunction.h"
#include "vtkRangeHandlesItem.h"

template<> void emscripten::internal::raw_destructor<vtkRangeHandlesItem>(vtkRangeHandlesItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRangeHandlesItem_class) {
  emscripten::class_<vtkRangeHandlesItem, emscripten::base<vtkPlotRangeHandlesItem>>("vtkRangeHandlesItem")
    .smart_ptr<vtkSmartPointer<vtkRangeHandlesItem>>("vtkSmartPointer<vtkRangeHandlesItem>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRangeHandlesItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRangeHandlesItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRangeHandlesItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRangeHandlesItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRangeHandlesItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRangeHandlesItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRangeHandlesItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkRangeHandlesItem::Paint, emscripten::allow_raw_pointers())
    .function("SetColorTransferFunction", &vtkRangeHandlesItem::SetColorTransferFunction, emscripten::allow_raw_pointers())
    .function("GetColorTransferFunction", &vtkRangeHandlesItem::GetColorTransferFunction, emscripten::allow_raw_pointers())
    .function("ComputeHandlesDrawRange", &vtkRangeHandlesItem::ComputeHandlesDrawRange)
    .function("SynchronizeRangeHandlesOn", &vtkRangeHandlesItem::SynchronizeRangeHandlesOn)
    .function("SetSynchronizeRangeHandles", &vtkRangeHandlesItem::SetSynchronizeRangeHandles)
    .function("SetHandleOrientation", &vtkRangeHandlesItem::SetHandleOrientation);
}
