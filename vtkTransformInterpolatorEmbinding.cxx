// JavaScript wrapper for vtkTransformInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkTransformInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkTransformInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTransform.h"
#include "vtkMatrix4x4.h"
#include "vtkProp3D.h"
#include "vtkTupleInterpolator.h"
#include "vtkQuaternionInterpolator.h"
#include "vtkTransformInterpolator.h"

template<> void emscripten::internal::raw_destructor<vtkTransformInterpolator>(vtkTransformInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransformInterpolator_class) {
  emscripten::class_<vtkTransformInterpolator, emscripten::base<vtkObject>>("vtkTransformInterpolator")
    .smart_ptr<vtkSmartPointer<vtkTransformInterpolator>>("vtkSmartPointer<vtkTransformInterpolator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTransformInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransformInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransformInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransformInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransformInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfTransforms", &vtkTransformInterpolator::GetNumberOfTransforms)
    .function("GetMinimumT", &vtkTransformInterpolator::GetMinimumT)
    .function("GetMaximumT", &vtkTransformInterpolator::GetMaximumT)
    .function("Initialize", &vtkTransformInterpolator::Initialize)
    .function("AddTransform", emscripten::select_overload<void(vtkTransformInterpolator&, double, vtkTransform*)>([](vtkTransformInterpolator& self, double arg_0, vtkTransform* arg_1) -> void { return self.AddTransform( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddTransform", emscripten::select_overload<void(vtkTransformInterpolator&, double, vtkMatrix4x4*)>([](vtkTransformInterpolator& self, double arg_0, vtkMatrix4x4* arg_1) -> void { return self.AddTransform( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddTransform", emscripten::select_overload<void(vtkTransformInterpolator&, double, vtkProp3D*)>([](vtkTransformInterpolator& self, double arg_0, vtkProp3D* arg_1) -> void { return self.AddTransform( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("RemoveTransform", &vtkTransformInterpolator::RemoveTransform)
    .function("InterpolateTransform", &vtkTransformInterpolator::InterpolateTransform, emscripten::allow_raw_pointers())
    .function("SetInterpolationType", &vtkTransformInterpolator::SetInterpolationType)
    .function("GetInterpolationTypeMinValue", &vtkTransformInterpolator::GetInterpolationTypeMinValue)
    .function("GetInterpolationTypeMaxValue", &vtkTransformInterpolator::GetInterpolationTypeMaxValue)
    .function("GetInterpolationType", &vtkTransformInterpolator::GetInterpolationType)
    .function("SetInterpolationTypeToLinear", &vtkTransformInterpolator::SetInterpolationTypeToLinear)
    .function("SetInterpolationTypeToSpline", &vtkTransformInterpolator::SetInterpolationTypeToSpline)
    .function("SetInterpolationTypeToManual", &vtkTransformInterpolator::SetInterpolationTypeToManual)
    .function("SetPositionInterpolator", &vtkTransformInterpolator::SetPositionInterpolator, emscripten::allow_raw_pointers())
    .function("GetPositionInterpolator", &vtkTransformInterpolator::GetPositionInterpolator, emscripten::allow_raw_pointers())
    .function("SetScaleInterpolator", &vtkTransformInterpolator::SetScaleInterpolator, emscripten::allow_raw_pointers())
    .function("GetScaleInterpolator", &vtkTransformInterpolator::GetScaleInterpolator, emscripten::allow_raw_pointers())
    .function("SetRotationInterpolator", &vtkTransformInterpolator::SetRotationInterpolator, emscripten::allow_raw_pointers())
    .function("GetRotationInterpolator", &vtkTransformInterpolator::GetRotationInterpolator, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkTransformInterpolator::GetMTime);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkTransformInterpolator_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkTransformInterpolator_INTERPOLATION_TYPE_LINEAR", vtkTransformInterpolator::INTERPOLATION_TYPE_LINEAR },
      { "vtkTransformInterpolator_INTERPOLATION_TYPE_SPLINE", vtkTransformInterpolator::INTERPOLATION_TYPE_SPLINE },
      { "vtkTransformInterpolator_INTERPOLATION_TYPE_MANUAL", vtkTransformInterpolator::INTERPOLATION_TYPE_MANUAL },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
