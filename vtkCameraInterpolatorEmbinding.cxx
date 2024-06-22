// JavaScript wrapper for vtkCameraInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCameraInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCameraInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCamera.h"
#include "vtkTupleInterpolator.h"
#include "vtkCameraInterpolator.h"

template<> void emscripten::internal::raw_destructor<vtkCameraInterpolator>(vtkCameraInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCameraInterpolator_class) {
  emscripten::class_<vtkCameraInterpolator, emscripten::base<vtkObject>>("vtkCameraInterpolator")
    .smart_ptr<vtkSmartPointer<vtkCameraInterpolator>>("vtkSmartPointer<vtkCameraInterpolator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCameraInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCameraInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCameraInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCameraInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCameraInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfCameras", &vtkCameraInterpolator::GetNumberOfCameras)
    .function("GetMinimumT", &vtkCameraInterpolator::GetMinimumT)
    .function("GetMaximumT", &vtkCameraInterpolator::GetMaximumT)
    .function("Initialize", &vtkCameraInterpolator::Initialize)
    .function("AddCamera", &vtkCameraInterpolator::AddCamera, emscripten::allow_raw_pointers())
    .function("RemoveCamera", &vtkCameraInterpolator::RemoveCamera)
    .function("InterpolateCamera", &vtkCameraInterpolator::InterpolateCamera, emscripten::allow_raw_pointers())
    .function("SetInterpolationType", &vtkCameraInterpolator::SetInterpolationType)
    .function("GetInterpolationTypeMinValue", &vtkCameraInterpolator::GetInterpolationTypeMinValue)
    .function("GetInterpolationTypeMaxValue", &vtkCameraInterpolator::GetInterpolationTypeMaxValue)
    .function("GetInterpolationType", &vtkCameraInterpolator::GetInterpolationType)
    .function("SetInterpolationTypeToLinear", &vtkCameraInterpolator::SetInterpolationTypeToLinear)
    .function("SetInterpolationTypeToSpline", &vtkCameraInterpolator::SetInterpolationTypeToSpline)
    .function("SetInterpolationTypeToManual", &vtkCameraInterpolator::SetInterpolationTypeToManual)
    .function("SetPositionInterpolator", &vtkCameraInterpolator::SetPositionInterpolator, emscripten::allow_raw_pointers())
    .function("GetPositionInterpolator", &vtkCameraInterpolator::GetPositionInterpolator, emscripten::allow_raw_pointers())
    .function("SetFocalPointInterpolator", &vtkCameraInterpolator::SetFocalPointInterpolator, emscripten::allow_raw_pointers())
    .function("GetFocalPointInterpolator", &vtkCameraInterpolator::GetFocalPointInterpolator, emscripten::allow_raw_pointers())
    .function("SetViewUpInterpolator", &vtkCameraInterpolator::SetViewUpInterpolator, emscripten::allow_raw_pointers())
    .function("GetViewUpInterpolator", &vtkCameraInterpolator::GetViewUpInterpolator, emscripten::allow_raw_pointers())
    .function("SetViewAngleInterpolator", &vtkCameraInterpolator::SetViewAngleInterpolator, emscripten::allow_raw_pointers())
    .function("GetViewAngleInterpolator", &vtkCameraInterpolator::GetViewAngleInterpolator, emscripten::allow_raw_pointers())
    .function("SetParallelScaleInterpolator", &vtkCameraInterpolator::SetParallelScaleInterpolator, emscripten::allow_raw_pointers())
    .function("GetParallelScaleInterpolator", &vtkCameraInterpolator::GetParallelScaleInterpolator, emscripten::allow_raw_pointers())
    .function("SetClippingRangeInterpolator", &vtkCameraInterpolator::SetClippingRangeInterpolator, emscripten::allow_raw_pointers())
    .function("GetClippingRangeInterpolator", &vtkCameraInterpolator::GetClippingRangeInterpolator, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkCameraInterpolator::GetMTime);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkCameraInterpolator_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkCameraInterpolator_INTERPOLATION_TYPE_LINEAR", vtkCameraInterpolator::INTERPOLATION_TYPE_LINEAR },
      { "vtkCameraInterpolator_INTERPOLATION_TYPE_SPLINE", vtkCameraInterpolator::INTERPOLATION_TYPE_SPLINE },
      { "vtkCameraInterpolator_INTERPOLATION_TYPE_MANUAL", vtkCameraInterpolator::INTERPOLATION_TYPE_MANUAL },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
