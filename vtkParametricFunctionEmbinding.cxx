// JavaScript wrapper for vtkParametricFunction with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricFunctionEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricFunction.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricFunction.h"

template<> void emscripten::internal::raw_destructor<vtkParametricFunction>(vtkParametricFunction * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricFunction_class) {
  emscripten::class_<vtkParametricFunction, emscripten::base<vtkObject>>("vtkParametricFunction")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricFunction::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricFunction& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricFunction::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricFunction::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricFunction::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricFunction& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMinimumU", &vtkParametricFunction::SetMinimumU)
    .function("GetMinimumU", &vtkParametricFunction::GetMinimumU)
    .function("SetMaximumU", &vtkParametricFunction::SetMaximumU)
    .function("GetMaximumU", &vtkParametricFunction::GetMaximumU)
    .function("SetMinimumV", &vtkParametricFunction::SetMinimumV)
    .function("GetMinimumV", &vtkParametricFunction::GetMinimumV)
    .function("SetMaximumV", &vtkParametricFunction::SetMaximumV)
    .function("GetMaximumV", &vtkParametricFunction::GetMaximumV)
    .function("SetMinimumW", &vtkParametricFunction::SetMinimumW)
    .function("GetMinimumW", &vtkParametricFunction::GetMinimumW)
    .function("SetMaximumW", &vtkParametricFunction::SetMaximumW)
    .function("GetMaximumW", &vtkParametricFunction::GetMaximumW)
    .function("SetJoinU", &vtkParametricFunction::SetJoinU)
    .function("GetJoinUMinValue", &vtkParametricFunction::GetJoinUMinValue)
    .function("GetJoinUMaxValue", &vtkParametricFunction::GetJoinUMaxValue)
    .function("GetJoinU", &vtkParametricFunction::GetJoinU)
    .function("JoinUOn", &vtkParametricFunction::JoinUOn)
    .function("JoinUOff", &vtkParametricFunction::JoinUOff)
    .function("SetJoinV", &vtkParametricFunction::SetJoinV)
    .function("GetJoinVMinValue", &vtkParametricFunction::GetJoinVMinValue)
    .function("GetJoinVMaxValue", &vtkParametricFunction::GetJoinVMaxValue)
    .function("GetJoinV", &vtkParametricFunction::GetJoinV)
    .function("JoinVOn", &vtkParametricFunction::JoinVOn)
    .function("JoinVOff", &vtkParametricFunction::JoinVOff)
    .function("SetJoinW", &vtkParametricFunction::SetJoinW)
    .function("GetJoinWMinValue", &vtkParametricFunction::GetJoinWMinValue)
    .function("GetJoinWMaxValue", &vtkParametricFunction::GetJoinWMaxValue)
    .function("GetJoinW", &vtkParametricFunction::GetJoinW)
    .function("JoinWOn", &vtkParametricFunction::JoinWOn)
    .function("JoinWOff", &vtkParametricFunction::JoinWOff)
    .function("SetTwistU", &vtkParametricFunction::SetTwistU)
    .function("GetTwistUMinValue", &vtkParametricFunction::GetTwistUMinValue)
    .function("GetTwistUMaxValue", &vtkParametricFunction::GetTwistUMaxValue)
    .function("GetTwistU", &vtkParametricFunction::GetTwistU)
    .function("TwistUOn", &vtkParametricFunction::TwistUOn)
    .function("TwistUOff", &vtkParametricFunction::TwistUOff)
    .function("SetTwistV", &vtkParametricFunction::SetTwistV)
    .function("GetTwistVMinValue", &vtkParametricFunction::GetTwistVMinValue)
    .function("GetTwistVMaxValue", &vtkParametricFunction::GetTwistVMaxValue)
    .function("GetTwistV", &vtkParametricFunction::GetTwistV)
    .function("TwistVOn", &vtkParametricFunction::TwistVOn)
    .function("TwistVOff", &vtkParametricFunction::TwistVOff)
    .function("SetTwistW", &vtkParametricFunction::SetTwistW)
    .function("GetTwistWMinValue", &vtkParametricFunction::GetTwistWMinValue)
    .function("GetTwistWMaxValue", &vtkParametricFunction::GetTwistWMaxValue)
    .function("GetTwistW", &vtkParametricFunction::GetTwistW)
    .function("TwistWOn", &vtkParametricFunction::TwistWOn)
    .function("TwistWOff", &vtkParametricFunction::TwistWOff)
    .function("SetClockwiseOrdering", &vtkParametricFunction::SetClockwiseOrdering)
    .function("GetClockwiseOrderingMinValue", &vtkParametricFunction::GetClockwiseOrderingMinValue)
    .function("GetClockwiseOrderingMaxValue", &vtkParametricFunction::GetClockwiseOrderingMaxValue)
    .function("GetClockwiseOrdering", &vtkParametricFunction::GetClockwiseOrdering)
    .function("ClockwiseOrderingOn", &vtkParametricFunction::ClockwiseOrderingOn)
    .function("ClockwiseOrderingOff", &vtkParametricFunction::ClockwiseOrderingOff)
    .function("SetDerivativesAvailable", &vtkParametricFunction::SetDerivativesAvailable)
    .function("GetDerivativesAvailableMinValue", &vtkParametricFunction::GetDerivativesAvailableMinValue)
    .function("GetDerivativesAvailableMaxValue", &vtkParametricFunction::GetDerivativesAvailableMaxValue)
    .function("GetDerivativesAvailable", &vtkParametricFunction::GetDerivativesAvailable)
    .function("DerivativesAvailableOn", &vtkParametricFunction::DerivativesAvailableOn)
    .function("DerivativesAvailableOff", &vtkParametricFunction::DerivativesAvailableOff);
}
