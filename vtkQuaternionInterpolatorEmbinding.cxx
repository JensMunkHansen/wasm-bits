// JavaScript wrapper for vtkQuaternionInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkCommonMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkQuaternionInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/Math/vtkQuaternionInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkQuaternion.h"
#include "vtkQuaternionInterpolator.h"

EMSCRIPTEN_BINDINGS(vtkCommonMath_vtkQuaternionInterpolator_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkQuaternionInterpolator>(vtkQuaternionInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuaternionInterpolator_class) {
  using vtkQuaternionInterpolationSearchMethod=vtkQuaternionInterpolator::vtkQuaternionInterpolationSearchMethod;
  emscripten::class_<vtkQuaternionInterpolator, emscripten::base<vtkObject>>("vtkQuaternionInterpolator")
    .smart_ptr<vtkSmartPointer<vtkQuaternionInterpolator>>("vtkSmartPointer<vtkQuaternionInterpolator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuaternionInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuaternionInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuaternionInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuaternionInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuaternionInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuaternionInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuaternionInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfQuaternions", &vtkQuaternionInterpolator::GetNumberOfQuaternions)
    .function("GetMinimumT", &vtkQuaternionInterpolator::GetMinimumT)
    .function("GetMaximumT", &vtkQuaternionInterpolator::GetMaximumT)
    .function("Initialize", &vtkQuaternionInterpolator::Initialize)
    .function("AddQuaternion", emscripten::select_overload<void(vtkQuaternionInterpolator&, double, const vtkQuaterniond&)>([](vtkQuaternionInterpolator& self, double arg_0, const vtkQuaterniond& arg_1) -> void { return self.AddQuaternion( arg_0, arg_1); }))
    .function("RemoveQuaternion", &vtkQuaternionInterpolator::RemoveQuaternion)
    .function("GetSearchMethod", &vtkQuaternionInterpolator::GetSearchMethod)
    .function("SetSearchMethod", &vtkQuaternionInterpolator::SetSearchMethod)
    .function("SetInterpolationType", &vtkQuaternionInterpolator::SetInterpolationType)
    .function("GetInterpolationTypeMinValue", &vtkQuaternionInterpolator::GetInterpolationTypeMinValue)
    .function("GetInterpolationTypeMaxValue", &vtkQuaternionInterpolator::GetInterpolationTypeMaxValue)
    .function("GetInterpolationType", &vtkQuaternionInterpolator::GetInterpolationType)
    .function("SetInterpolationTypeToLinear", &vtkQuaternionInterpolator::SetInterpolationTypeToLinear)
    .function("SetInterpolationTypeToSpline", &vtkQuaternionInterpolator::SetInterpolationTypeToSpline);
}
EMSCRIPTEN_BINDINGS(vtkCommonMath_vtkQuaternionInterpolator_0_2_constants) {
    typedef vtkQuaternionInterpolator::vtkQuaternionInterpolationSearchMethod cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkQuaternionInterpolator_vtkQuaternionInterpolationSearchMethod_BinarySearch", vtkQuaternionInterpolator::BinarySearch },
      { "vtkQuaternionInterpolator_vtkQuaternionInterpolationSearchMethod_LinearSearch", vtkQuaternionInterpolator::LinearSearch },
      { "vtkQuaternionInterpolator_vtkQuaternionInterpolationSearchMethod_MaxEnum", vtkQuaternionInterpolator::MaxEnum },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonMath_vtkQuaternionInterpolator_1_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkQuaternionInterpolator_INTERPOLATION_TYPE_LINEAR", vtkQuaternionInterpolator::INTERPOLATION_TYPE_LINEAR },
      { "vtkQuaternionInterpolator_INTERPOLATION_TYPE_SPLINE", vtkQuaternionInterpolator::INTERPOLATION_TYPE_SPLINE },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
