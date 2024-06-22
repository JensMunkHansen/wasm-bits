// JavaScript wrapper for vtkCompositeControlPointsItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkCompositeControlPointsItemEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkCompositeControlPointsItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkColorTransferFunction.h"
#include "vtkPiecewiseFunction.h"
#include "vtkContextMouseEvent.h"
#include "vtkCompositeControlPointsItem.h"

EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkCompositeControlPointsItem_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCompositeControlPointsItem>(vtkCompositeControlPointsItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeControlPointsItem_class) {
  using PointsFunctionType=vtkCompositeControlPointsItem::PointsFunctionType;
  emscripten::class_<vtkCompositeControlPointsItem, emscripten::base<vtkColorTransferControlPointsItem>>("vtkCompositeControlPointsItem")
    .smart_ptr<vtkSmartPointer<vtkCompositeControlPointsItem>>("vtkSmartPointer<vtkCompositeControlPointsItem>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCompositeControlPointsItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeControlPointsItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeControlPointsItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeControlPointsItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeControlPointsItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeControlPointsItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeControlPointsItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetColorTransferFunction", &vtkCompositeControlPointsItem::SetColorTransferFunction, emscripten::allow_raw_pointers())
    .function("SetOpacityFunction", &vtkCompositeControlPointsItem::SetOpacityFunction, emscripten::allow_raw_pointers())
    .function("GetOpacityFunction", &vtkCompositeControlPointsItem::GetOpacityFunction, emscripten::allow_raw_pointers())
    .function("SetPointsFunction", &vtkCompositeControlPointsItem::SetPointsFunction)
    .function("GetPointsFunction", &vtkCompositeControlPointsItem::GetPointsFunction)
    .function("AddPoint", emscripten::optional_override([](vtkCompositeControlPointsItem& self, std::uintptr_t arg_0) -> int {  return self.AddPoint(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("RemovePoint", emscripten::select_overload<int(vtkCompositeControlPointsItem&, std::uintptr_t)>([](vtkCompositeControlPointsItem& self, std::uintptr_t arg_0) -> int { return self.RemovePoint(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("RemovePoint", emscripten::select_overload<int(vtkCompositeControlPointsItem&, int)>([](vtkCompositeControlPointsItem& self, int arg_0) -> int { return self.RemovePoint( arg_0); }))
    .function("SetUseOpacityPointHandles", &vtkCompositeControlPointsItem::SetUseOpacityPointHandles)
    .function("GetUseOpacityPointHandles", &vtkCompositeControlPointsItem::GetUseOpacityPointHandles)
    .function("MouseMoveEvent", &vtkCompositeControlPointsItem::MouseMoveEvent)
    .function("MouseDoubleClickEvent", &vtkCompositeControlPointsItem::MouseDoubleClickEvent)
    .function("MouseButtonPressEvent", &vtkCompositeControlPointsItem::MouseButtonPressEvent)
    .function("GetNumberOfPoints", &vtkCompositeControlPointsItem::GetNumberOfPoints)
    .function("SetControlPoint", emscripten::optional_override([](vtkCompositeControlPointsItem& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.SetControlPoint( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}));
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkCompositeControlPointsItem_0_2_constants) {
    typedef vtkCompositeControlPointsItem::PointsFunctionType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkCompositeControlPointsItem_PointsFunctionType_ColorPointsFunction", vtkCompositeControlPointsItem::ColorPointsFunction },
      { "vtkCompositeControlPointsItem_PointsFunctionType_OpacityPointsFunction", vtkCompositeControlPointsItem::OpacityPointsFunction },
      { "vtkCompositeControlPointsItem_PointsFunctionType_ColorAndOpacityPointsFunction", vtkCompositeControlPointsItem::ColorAndOpacityPointsFunction },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
