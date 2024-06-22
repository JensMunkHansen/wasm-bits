// JavaScript wrapper for vtkTupleInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkTupleInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkTupleInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSpline.h"
#include "vtkTupleInterpolator.h"

template<> void emscripten::internal::raw_destructor<vtkTupleInterpolator>(vtkTupleInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTupleInterpolator_class) {
  emscripten::class_<vtkTupleInterpolator, emscripten::base<vtkObject>>("vtkTupleInterpolator")
    .smart_ptr<vtkSmartPointer<vtkTupleInterpolator>>("vtkSmartPointer<vtkTupleInterpolator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTupleInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTupleInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTupleInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTupleInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTupleInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTupleInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTupleInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfComponents", &vtkTupleInterpolator::SetNumberOfComponents)
    .function("GetNumberOfComponents", &vtkTupleInterpolator::GetNumberOfComponents)
    .function("GetNumberOfTuples", &vtkTupleInterpolator::GetNumberOfTuples)
    .function("GetMinimumT", &vtkTupleInterpolator::GetMinimumT)
    .function("GetMaximumT", &vtkTupleInterpolator::GetMaximumT)
    .function("Initialize", &vtkTupleInterpolator::Initialize)
    .function("AddTuple", emscripten::optional_override([](vtkTupleInterpolator& self, double arg_0, std::uintptr_t arg_1) -> void {  return self.AddTuple( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("RemoveTuple", &vtkTupleInterpolator::RemoveTuple)
    .function("InterpolateTuple", emscripten::optional_override([](vtkTupleInterpolator& self, double arg_0, std::uintptr_t arg_1) -> void {  return self.InterpolateTuple( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("SetInterpolationType", &vtkTupleInterpolator::SetInterpolationType)
    .function("GetInterpolationType", &vtkTupleInterpolator::GetInterpolationType)
    .function("SetInterpolationTypeToLinear", &vtkTupleInterpolator::SetInterpolationTypeToLinear)
    .function("SetInterpolationTypeToSpline", &vtkTupleInterpolator::SetInterpolationTypeToSpline)
    .function("SetInterpolatingSpline", &vtkTupleInterpolator::SetInterpolatingSpline, emscripten::allow_raw_pointers())
    .function("GetInterpolatingSpline", &vtkTupleInterpolator::GetInterpolatingSpline, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkTupleInterpolator_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkTupleInterpolator_INTERPOLATION_TYPE_LINEAR", vtkTupleInterpolator::INTERPOLATION_TYPE_LINEAR },
      { "vtkTupleInterpolator_INTERPOLATION_TYPE_SPLINE", vtkTupleInterpolator::INTERPOLATION_TYPE_SPLINE },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
