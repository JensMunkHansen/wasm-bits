// JavaScript wrapper for vtkFFT with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkCommonMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkFFTEmbinding.cxx \
 /home/jmh/github/vtk/Common/Math/vtkFFT.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFFT.h"

EMSCRIPTEN_BINDINGS(vtkCommonMath_vtkFFT_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkFFT>(vtkFFT * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFFT_class) {
  using Octave=vtkFFT::Octave;
  using OctaveSubdivision=vtkFFT::OctaveSubdivision;
  using Scaling=vtkFFT::Scaling;
  using SpectralMode=vtkFFT::SpectralMode;
  emscripten::class_<vtkFFT, emscripten::base<vtkObject>>("vtkFFT")
    .smart_ptr<vtkSmartPointer<vtkFFT>>("vtkSmartPointer<vtkFFT>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFFT>)
    .class_function("FftFreq", &vtkFFT::FftFreq)
    .class_function("RFftFreq", &vtkFFT::RFftFreq)
    .class_function("HanningGenerator", &vtkFFT::HanningGenerator)
    .class_function("BartlettGenerator", &vtkFFT::BartlettGenerator)
    .class_function("SineGenerator", &vtkFFT::SineGenerator)
    .class_function("BlackmanGenerator", &vtkFFT::BlackmanGenerator)
    .class_function("RectangularGenerator", &vtkFFT::RectangularGenerator)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFFT::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFFT& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFFT::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFFT::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFFT::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFFT& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
EMSCRIPTEN_BINDINGS(vtkCommonMath_vtkFFT_0_2_constants) {
    typedef vtkFFT::Octave cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[10] = {
      { "vtkFFT_Octave_Hz_31_5", vtkFFT::Hz_31_5 },
      { "vtkFFT_Octave_Hz_63", vtkFFT::Hz_63 },
      { "vtkFFT_Octave_Hz_125", vtkFFT::Hz_125 },
      { "vtkFFT_Octave_Hz_250", vtkFFT::Hz_250 },
      { "vtkFFT_Octave_Hz_500", vtkFFT::Hz_500 },
      { "vtkFFT_Octave_kHz_1", vtkFFT::kHz_1 },
      { "vtkFFT_Octave_kHz_2", vtkFFT::kHz_2 },
      { "vtkFFT_Octave_kHz_4", vtkFFT::kHz_4 },
      { "vtkFFT_Octave_kHz_8", vtkFFT::kHz_8 },
      { "vtkFFT_Octave_kHz_16", vtkFFT::kHz_16 },
  };
  for (int c = 0; c < 10; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonMath_vtkFFT_1_2_constants) {
    typedef vtkFFT::OctaveSubdivision cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[6] = {
      { "vtkFFT_OctaveSubdivision_Full", vtkFFT::Full },
      { "vtkFFT_OctaveSubdivision_FirstHalf", vtkFFT::FirstHalf },
      { "vtkFFT_OctaveSubdivision_SecondHalf", vtkFFT::SecondHalf },
      { "vtkFFT_OctaveSubdivision_FirstThird", vtkFFT::FirstThird },
      { "vtkFFT_OctaveSubdivision_SecondThird", vtkFFT::SecondThird },
      { "vtkFFT_OctaveSubdivision_ThirdThird", vtkFFT::ThirdThird },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonMath_vtkFFT_2_2_constants) {
    typedef vtkFFT::Scaling cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkFFT_Scaling_Density", vtkFFT::Density },
      { "vtkFFT_Scaling_Spectrum", vtkFFT::Spectrum },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonMath_vtkFFT_3_2_constants) {
    typedef vtkFFT::SpectralMode cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkFFT_SpectralMode_STFT", vtkFFT::STFT },
      { "vtkFFT_SpectralMode_PSD", vtkFFT::PSD },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
