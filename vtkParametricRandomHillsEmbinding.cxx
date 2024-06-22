// JavaScript wrapper for vtkParametricRandomHills with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricRandomHillsEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricRandomHills.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricRandomHills.h"

template<> void emscripten::internal::raw_destructor<vtkParametricRandomHills>(vtkParametricRandomHills * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricRandomHills_class) {
  emscripten::class_<vtkParametricRandomHills, emscripten::base<vtkParametricFunction>>("vtkParametricRandomHills")
    .smart_ptr<vtkSmartPointer<vtkParametricRandomHills>>("vtkSmartPointer<vtkParametricRandomHills>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkParametricRandomHills>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricRandomHills::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricRandomHills& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricRandomHills::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricRandomHills::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricRandomHills::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricRandomHills& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkParametricRandomHills::GetDimension)
    .function("SetNumberOfHills", &vtkParametricRandomHills::SetNumberOfHills)
    .function("GetNumberOfHills", &vtkParametricRandomHills::GetNumberOfHills)
    .function("SetHillXVariance", &vtkParametricRandomHills::SetHillXVariance)
    .function("GetHillXVariance", &vtkParametricRandomHills::GetHillXVariance)
    .function("SetHillYVariance", &vtkParametricRandomHills::SetHillYVariance)
    .function("GetHillYVariance", &vtkParametricRandomHills::GetHillYVariance)
    .function("SetHillAmplitude", &vtkParametricRandomHills::SetHillAmplitude)
    .function("GetHillAmplitude", &vtkParametricRandomHills::GetHillAmplitude)
    .function("SetRandomSeed", &vtkParametricRandomHills::SetRandomSeed)
    .function("GetRandomSeed", &vtkParametricRandomHills::GetRandomSeed)
    .function("SetAllowRandomGeneration", &vtkParametricRandomHills::SetAllowRandomGeneration)
    .function("GetAllowRandomGenerationMinValue", &vtkParametricRandomHills::GetAllowRandomGenerationMinValue)
    .function("GetAllowRandomGenerationMaxValue", &vtkParametricRandomHills::GetAllowRandomGenerationMaxValue)
    .function("GetAllowRandomGeneration", &vtkParametricRandomHills::GetAllowRandomGeneration)
    .function("AllowRandomGenerationOn", &vtkParametricRandomHills::AllowRandomGenerationOn)
    .function("AllowRandomGenerationOff", &vtkParametricRandomHills::AllowRandomGenerationOff)
    .function("SetXVarianceScaleFactor", &vtkParametricRandomHills::SetXVarianceScaleFactor)
    .function("GetXVarianceScaleFactor", &vtkParametricRandomHills::GetXVarianceScaleFactor)
    .function("SetYVarianceScaleFactor", &vtkParametricRandomHills::SetYVarianceScaleFactor)
    .function("GetYVarianceScaleFactor", &vtkParametricRandomHills::GetYVarianceScaleFactor)
    .function("SetAmplitudeScaleFactor", &vtkParametricRandomHills::SetAmplitudeScaleFactor)
    .function("GetAmplitudeScaleFactor", &vtkParametricRandomHills::GetAmplitudeScaleFactor);
}
