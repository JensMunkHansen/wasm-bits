// JavaScript wrapper for vtkResliceCursorPolyDataAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkResliceCursorPolyDataAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkResliceCursorPolyDataAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkResliceCursor.h"
#include "vtkPolyData.h"
#include "vtkResliceCursorPolyDataAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkResliceCursorPolyDataAlgorithm>(vtkResliceCursorPolyDataAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkResliceCursorPolyDataAlgorithm_class) {
  emscripten::class_<vtkResliceCursorPolyDataAlgorithm, emscripten::base<vtkPolyDataAlgorithm>>("vtkResliceCursorPolyDataAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkResliceCursorPolyDataAlgorithm>>("vtkSmartPointer<vtkResliceCursorPolyDataAlgorithm>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkResliceCursorPolyDataAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursorPolyDataAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkResliceCursorPolyDataAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkResliceCursorPolyDataAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkResliceCursorPolyDataAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursorPolyDataAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkResliceCursorPolyDataAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetReslicePlaneNormal", &vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormal)
    .function("GetReslicePlaneNormal", &vtkResliceCursorPolyDataAlgorithm::GetReslicePlaneNormal)
    .function("SetReslicePlaneNormalToXAxis", &vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormalToXAxis)
    .function("SetReslicePlaneNormalToYAxis", &vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormalToYAxis)
    .function("SetReslicePlaneNormalToZAxis", &vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormalToZAxis)
    .function("SetResliceCursor", &vtkResliceCursorPolyDataAlgorithm::SetResliceCursor, emscripten::allow_raw_pointers())
    .function("GetResliceCursor", &vtkResliceCursorPolyDataAlgorithm::GetResliceCursor, emscripten::allow_raw_pointers())
    .function("SetSliceBounds", emscripten::select_overload<void(vtkResliceCursorPolyDataAlgorithm&, double, double, double, double, double, double)>([](vtkResliceCursorPolyDataAlgorithm& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetSliceBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetCenterlineAxis1", &vtkResliceCursorPolyDataAlgorithm::GetCenterlineAxis1, emscripten::allow_raw_pointers())
    .function("GetCenterlineAxis2", &vtkResliceCursorPolyDataAlgorithm::GetCenterlineAxis2, emscripten::allow_raw_pointers())
    .function("GetThickSlabAxis1", &vtkResliceCursorPolyDataAlgorithm::GetThickSlabAxis1, emscripten::allow_raw_pointers())
    .function("GetThickSlabAxis2", &vtkResliceCursorPolyDataAlgorithm::GetThickSlabAxis2, emscripten::allow_raw_pointers())
    .function("GetAxis1", &vtkResliceCursorPolyDataAlgorithm::GetAxis1)
    .function("GetAxis2", &vtkResliceCursorPolyDataAlgorithm::GetAxis2)
    .function("GetPlaneAxis1", &vtkResliceCursorPolyDataAlgorithm::GetPlaneAxis1)
    .function("GetPlaneAxis2", &vtkResliceCursorPolyDataAlgorithm::GetPlaneAxis2)
    .function("GetOtherPlaneForAxis", &vtkResliceCursorPolyDataAlgorithm::GetOtherPlaneForAxis)
    .function("GetMTime", &vtkResliceCursorPolyDataAlgorithm::GetMTime);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkResliceCursorPolyDataAlgorithm_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkResliceCursorPolyDataAlgorithm_XAxis", vtkResliceCursorPolyDataAlgorithm::XAxis },
      { "vtkResliceCursorPolyDataAlgorithm_YAxis", vtkResliceCursorPolyDataAlgorithm::YAxis },
      { "vtkResliceCursorPolyDataAlgorithm_ZAxis", vtkResliceCursorPolyDataAlgorithm::ZAxis },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
