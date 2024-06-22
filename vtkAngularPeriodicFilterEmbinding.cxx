// JavaScript wrapper for vtkAngularPeriodicFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkAngularPeriodicFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkAngularPeriodicFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAngularPeriodicFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersParallel_vtkAngularPeriodicFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_ROTATION_MODE_DIRECT_ANGLE", 0 },
      { "VTK_ROTATION_MODE_ARRAY_VALUE", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkAngularPeriodicFilter>(vtkAngularPeriodicFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAngularPeriodicFilter_class) {
  emscripten::class_<vtkAngularPeriodicFilter, emscripten::base<vtkPeriodicFilter>>("vtkAngularPeriodicFilter")
    .smart_ptr<vtkSmartPointer<vtkAngularPeriodicFilter>>("vtkSmartPointer<vtkAngularPeriodicFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAngularPeriodicFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAngularPeriodicFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAngularPeriodicFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAngularPeriodicFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAngularPeriodicFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAngularPeriodicFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAngularPeriodicFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetComputeRotationsOnTheFly", &vtkAngularPeriodicFilter::SetComputeRotationsOnTheFly)
    .function("GetComputeRotationsOnTheFly", &vtkAngularPeriodicFilter::GetComputeRotationsOnTheFly)
    .function("ComputeRotationsOnTheFlyOn", &vtkAngularPeriodicFilter::ComputeRotationsOnTheFlyOn)
    .function("ComputeRotationsOnTheFlyOff", &vtkAngularPeriodicFilter::ComputeRotationsOnTheFlyOff)
    .function("SetRotationMode", &vtkAngularPeriodicFilter::SetRotationMode)
    .function("GetRotationModeMinValue", &vtkAngularPeriodicFilter::GetRotationModeMinValue)
    .function("GetRotationModeMaxValue", &vtkAngularPeriodicFilter::GetRotationModeMaxValue)
    .function("GetRotationMode", &vtkAngularPeriodicFilter::GetRotationMode)
    .function("SetRotationModeToDirectAngle", &vtkAngularPeriodicFilter::SetRotationModeToDirectAngle)
    .function("SetRotationModeToArrayValue", &vtkAngularPeriodicFilter::SetRotationModeToArrayValue)
    .function("SetRotationAngle", &vtkAngularPeriodicFilter::SetRotationAngle)
    .function("GetRotationAngle", &vtkAngularPeriodicFilter::GetRotationAngle)
    .function("SetRotationArrayName", emscripten::optional_override([](vtkAngularPeriodicFilter& self, const std::string & arg_0) -> void {  return self.SetRotationArrayName( arg_0.c_str());}))
    .function("GetRotationArrayName", emscripten::optional_override([](vtkAngularPeriodicFilter& self) -> std::string {  return self.GetRotationArrayName();}))
    .function("SetRotationAxis", &vtkAngularPeriodicFilter::SetRotationAxis)
    .function("GetRotationAxisMinValue", &vtkAngularPeriodicFilter::GetRotationAxisMinValue)
    .function("GetRotationAxisMaxValue", &vtkAngularPeriodicFilter::GetRotationAxisMaxValue)
    .function("GetRotationAxis", &vtkAngularPeriodicFilter::GetRotationAxis)
    .function("SetRotationAxisToX", &vtkAngularPeriodicFilter::SetRotationAxisToX)
    .function("SetRotationAxisToY", &vtkAngularPeriodicFilter::SetRotationAxisToY)
    .function("SetRotationAxisToZ", &vtkAngularPeriodicFilter::SetRotationAxisToZ)
    .function("SetCenter", emscripten::select_overload<void(vtkAngularPeriodicFilter&, double, double, double)>([](vtkAngularPeriodicFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }));
}
