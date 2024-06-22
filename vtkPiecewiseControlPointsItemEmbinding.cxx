// JavaScript wrapper for vtkPiecewiseControlPointsItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPiecewiseControlPointsItemEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPiecewiseControlPointsItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPiecewiseFunction.h"
#include "vtkPiecewiseControlPointsItem.h"

template<> void emscripten::internal::raw_destructor<vtkPiecewiseControlPointsItem>(vtkPiecewiseControlPointsItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPiecewiseControlPointsItem_class) {
  emscripten::class_<vtkPiecewiseControlPointsItem, emscripten::base<vtkControlPointsItem>>("vtkPiecewiseControlPointsItem")
    .smart_ptr<vtkSmartPointer<vtkPiecewiseControlPointsItem>>("vtkSmartPointer<vtkPiecewiseControlPointsItem>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPiecewiseControlPointsItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPiecewiseControlPointsItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPiecewiseControlPointsItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPiecewiseControlPointsItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPiecewiseControlPointsItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPiecewiseControlPointsItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPiecewiseControlPointsItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPiecewiseFunction", &vtkPiecewiseControlPointsItem::SetPiecewiseFunction, emscripten::allow_raw_pointers())
    .function("GetPiecewiseFunction", &vtkPiecewiseControlPointsItem::GetPiecewiseFunction, emscripten::allow_raw_pointers())
    .function("AddPoint", emscripten::optional_override([](vtkPiecewiseControlPointsItem& self, std::uintptr_t arg_0) -> int {  return self.AddPoint(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("RemovePoint", emscripten::optional_override([](vtkPiecewiseControlPointsItem& self, std::uintptr_t arg_0) -> int {  return self.RemovePoint(reinterpret_cast<double*>(arg_0 * sizeof(double)));}));
}
