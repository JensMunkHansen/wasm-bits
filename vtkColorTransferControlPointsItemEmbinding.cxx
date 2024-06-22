// JavaScript wrapper for vtkColorTransferControlPointsItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkColorTransferControlPointsItemEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkColorTransferControlPointsItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkColorTransferFunction.h"
#include "vtkColorTransferControlPointsItem.h"

template<> void emscripten::internal::raw_destructor<vtkColorTransferControlPointsItem>(vtkColorTransferControlPointsItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkColorTransferControlPointsItem_class) {
  emscripten::class_<vtkColorTransferControlPointsItem, emscripten::base<vtkControlPointsItem>>("vtkColorTransferControlPointsItem")
    .smart_ptr<vtkSmartPointer<vtkColorTransferControlPointsItem>>("vtkSmartPointer<vtkColorTransferControlPointsItem>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkColorTransferControlPointsItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkColorTransferControlPointsItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkColorTransferControlPointsItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkColorTransferControlPointsItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkColorTransferControlPointsItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkColorTransferControlPointsItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkColorTransferControlPointsItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetColorTransferFunction", &vtkColorTransferControlPointsItem::SetColorTransferFunction, emscripten::allow_raw_pointers())
    .function("GetColorTransferFunction", &vtkColorTransferControlPointsItem::GetColorTransferFunction, emscripten::allow_raw_pointers())
    .function("GetNumberOfPoints", &vtkColorTransferControlPointsItem::GetNumberOfPoints)
    .function("GetControlPoint", emscripten::optional_override([](vtkColorTransferControlPointsItem& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.GetControlPoint( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("SetControlPoint", emscripten::optional_override([](vtkColorTransferControlPointsItem& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.SetControlPoint( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("AddPoint", emscripten::optional_override([](vtkColorTransferControlPointsItem& self, std::uintptr_t arg_0) -> int {  return self.AddPoint(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("RemovePoint", emscripten::select_overload<int(vtkColorTransferControlPointsItem&, std::uintptr_t)>([](vtkColorTransferControlPointsItem& self, std::uintptr_t arg_0) -> int { return self.RemovePoint(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("RemovePoint", emscripten::select_overload<int(vtkColorTransferControlPointsItem&, int)>([](vtkColorTransferControlPointsItem& self, int arg_0) -> int { return self.RemovePoint( arg_0); }))
    .function("SetColorFill", &vtkColorTransferControlPointsItem::SetColorFill)
    .function("GetColorFill", &vtkColorTransferControlPointsItem::GetColorFill);
}
