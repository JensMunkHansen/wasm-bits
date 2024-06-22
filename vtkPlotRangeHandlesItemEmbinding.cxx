// JavaScript wrapper for vtkPlotRangeHandlesItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkPlotRangeHandlesItemEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkPlotRangeHandlesItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkBrush.h"
#include "vtkPlotRangeHandlesItem.h"

EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkPlotRangeHandlesItem_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPlotRangeHandlesItem>(vtkPlotRangeHandlesItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlotRangeHandlesItem_class) {
  using Handle=vtkPlotRangeHandlesItem::Handle;
  using Orientation=vtkPlotRangeHandlesItem::Orientation;
  emscripten::class_<vtkPlotRangeHandlesItem, emscripten::base<vtkPlot>>("vtkPlotRangeHandlesItem")
    .smart_ptr<vtkSmartPointer<vtkPlotRangeHandlesItem>>("vtkSmartPointer<vtkPlotRangeHandlesItem>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlotRangeHandlesItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotRangeHandlesItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlotRangeHandlesItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlotRangeHandlesItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlotRangeHandlesItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlotRangeHandlesItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlotRangeHandlesItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Paint", &vtkPlotRangeHandlesItem::Paint, emscripten::allow_raw_pointers())
    .function("SetHandleWidth", &vtkPlotRangeHandlesItem::SetHandleWidth)
    .function("GetHandleWidth", &vtkPlotRangeHandlesItem::GetHandleWidth)
    .function("SetHandleOrientation", &vtkPlotRangeHandlesItem::SetHandleOrientation)
    .function("GetHandleOrientationMinValue", &vtkPlotRangeHandlesItem::GetHandleOrientationMinValue)
    .function("GetHandleOrientationMaxValue", &vtkPlotRangeHandlesItem::GetHandleOrientationMaxValue)
    .function("GetHandleOrientation", &vtkPlotRangeHandlesItem::GetHandleOrientation)
    .function("SetHandleOrientationToVertical", &vtkPlotRangeHandlesItem::SetHandleOrientationToVertical)
    .function("SetHandleOrientationToHorizontal", &vtkPlotRangeHandlesItem::SetHandleOrientationToHorizontal)
    .function("SetExtent", emscripten::select_overload<void(vtkPlotRangeHandlesItem&, double, double, double, double)>([](vtkPlotRangeHandlesItem& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetExtentToAxisRange", &vtkPlotRangeHandlesItem::SetExtentToAxisRange)
    .function("GetExtentToAxisRange", &vtkPlotRangeHandlesItem::GetExtentToAxisRange)
    .function("ExtentToAxisRangeOn", &vtkPlotRangeHandlesItem::ExtentToAxisRangeOn)
    .function("ExtentToAxisRangeOff", &vtkPlotRangeHandlesItem::ExtentToAxisRangeOff)
    .function("SetSynchronizeRangeHandles", &vtkPlotRangeHandlesItem::SetSynchronizeRangeHandles)
    .function("GetSynchronizeRangeHandles", &vtkPlotRangeHandlesItem::GetSynchronizeRangeHandles)
    .function("SynchronizeRangeHandlesOn", &vtkPlotRangeHandlesItem::SynchronizeRangeHandlesOn)
    .function("SynchronizeRangeHandlesOff", &vtkPlotRangeHandlesItem::SynchronizeRangeHandlesOff)
    .function("SetLockTooltipToMouse", &vtkPlotRangeHandlesItem::SetLockTooltipToMouse)
    .function("GetLockTooltipToMouse", &vtkPlotRangeHandlesItem::GetLockTooltipToMouse)
    .function("LockTooltipToMouseOn", &vtkPlotRangeHandlesItem::LockTooltipToMouseOn)
    .function("LockTooltipToMouseOff", &vtkPlotRangeHandlesItem::LockTooltipToMouseOff)
    .function("GetHighlightBrush", &vtkPlotRangeHandlesItem::GetHighlightBrush, emscripten::allow_raw_pointers())
    .function("ComputeHandlesDrawRange", &vtkPlotRangeHandlesItem::ComputeHandlesDrawRange);
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkPlotRangeHandlesItem_0_2_constants) {
    typedef vtkPlotRangeHandlesItem::Handle cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkPlotRangeHandlesItem_Handle_NO_HANDLE", vtkPlotRangeHandlesItem::NO_HANDLE },
      { "vtkPlotRangeHandlesItem_Handle_LEFT_HANDLE", vtkPlotRangeHandlesItem::LEFT_HANDLE },
      { "vtkPlotRangeHandlesItem_Handle_RIGHT_HANDLE", vtkPlotRangeHandlesItem::RIGHT_HANDLE },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkPlotRangeHandlesItem_1_2_constants) {
    typedef vtkPlotRangeHandlesItem::Orientation cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkPlotRangeHandlesItem_Orientation_VERTICAL", vtkPlotRangeHandlesItem::VERTICAL },
      { "vtkPlotRangeHandlesItem_Orientation_HORIZONTAL", vtkPlotRangeHandlesItem::HORIZONTAL },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
