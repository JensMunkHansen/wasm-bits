// JavaScript wrapper for vtkTableFFT with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkTableFFTEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkTableFFT.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTableFFT.h"

template<> void emscripten::internal::raw_destructor<vtkTableFFT>(vtkTableFFT * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTableFFT_class) {
  emscripten::class_<vtkTableFFT, emscripten::base<vtkTableAlgorithm>>("vtkTableFFT")
    .smart_ptr<vtkSmartPointer<vtkTableFFT>>("vtkSmartPointer<vtkTableFFT>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTableFFT>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableFFT::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTableFFT& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTableFFT::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTableFFT::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableFFT::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTableFFT& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCreateFrequencyColumn", &vtkTableFFT::GetCreateFrequencyColumn)
    .function("SetCreateFrequencyColumn", &vtkTableFFT::SetCreateFrequencyColumn)
    .function("CreateFrequencyColumnOn", &vtkTableFFT::CreateFrequencyColumnOn)
    .function("CreateFrequencyColumnOff", &vtkTableFFT::CreateFrequencyColumnOff)
    .function("GetDefaultSampleRate", &vtkTableFFT::GetDefaultSampleRate)
    .function("SetDefaultSampleRate", &vtkTableFFT::SetDefaultSampleRate)
    .function("GetWindowingFunction", &vtkTableFFT::GetWindowingFunction)
    .function("SetWindowingFunction", &vtkTableFFT::SetWindowingFunction)
    .function("GetReturnOnesided", &vtkTableFFT::GetReturnOnesided)
    .function("SetReturnOnesided", &vtkTableFFT::SetReturnOnesided)
    .function("ReturnOnesidedOn", &vtkTableFFT::ReturnOnesidedOn)
    .function("ReturnOnesidedOff", &vtkTableFFT::ReturnOnesidedOff)
    .function("GetAverageFft", &vtkTableFFT::GetAverageFft)
    .function("SetAverageFft", &vtkTableFFT::SetAverageFft)
    .function("AverageFftOn", &vtkTableFFT::AverageFftOn)
    .function("AverageFftOff", &vtkTableFFT::AverageFftOff)
    .function("GetNormalize", &vtkTableFFT::GetNormalize)
    .function("SetNormalize", &vtkTableFFT::SetNormalize)
    .function("NormalizeOn", &vtkTableFFT::NormalizeOn)
    .function("NormalizeOff", &vtkTableFFT::NormalizeOff)
    .function("GetBlockSize", &vtkTableFFT::GetBlockSize)
    .function("SetBlockSize", &vtkTableFFT::SetBlockSize)
    .function("GetBlockOverlap", &vtkTableFFT::GetBlockOverlap)
    .function("SetBlockOverlap", &vtkTableFFT::SetBlockOverlap)
    .function("GetScalingMethod", &vtkTableFFT::GetScalingMethod)
    .function("SetScalingMethod", &vtkTableFFT::SetScalingMethod)
    .function("GetScalingMethodMinValue", &vtkTableFFT::GetScalingMethodMinValue)
    .function("GetScalingMethodMaxValue", &vtkTableFFT::GetScalingMethodMaxValue)
    .function("GetDetrend", &vtkTableFFT::GetDetrend)
    .function("SetDetrend", &vtkTableFFT::SetDetrend)
    .function("DetrendOn", &vtkTableFFT::DetrendOn)
    .function("DetrendOff", &vtkTableFFT::DetrendOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkTableFFT_0_2_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "vtkTableFFT_HANNING", vtkTableFFT::HANNING },
      { "vtkTableFFT_BARTLETT", vtkTableFFT::BARTLETT },
      { "vtkTableFFT_SINE", vtkTableFFT::SINE },
      { "vtkTableFFT_BLACKMAN", vtkTableFFT::BLACKMAN },
      { "vtkTableFFT_RECTANGULAR", vtkTableFFT::RECTANGULAR },
      { "vtkTableFFT_MAX_WINDOWING_FUNCTION", vtkTableFFT::MAX_WINDOWING_FUNCTION },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
