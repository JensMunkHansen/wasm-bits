// JavaScript wrapper for vtkMath with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkMathEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkMath.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkMath.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkMath_0_1_constants) {
  const struct { const char *name; double value; }
    constants[2] = {
      { "VTK_DBL_MIN", 2.2250738585072014e-308 },
      { "VTK_DBL_EPSILON", 2.2204460492503131e-16 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkMath_class_enums) {
  emscripten::enum_<vtkMath::ConvolutionMode>("vtkMath_ConvolutionMode")
    .value("FULL", vtkMath::ConvolutionMode::FULL)
    .value("SAME", vtkMath::ConvolutionMode::SAME)
    .value("VALID", vtkMath::ConvolutionMode::VALID);
}
template<> void emscripten::internal::raw_destructor<vtkMath>(vtkMath * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMath_class) {
  using ConvolutionMode=vtkMath::ConvolutionMode;
  emscripten::class_<vtkMath, emscripten::base<vtkObject>>("vtkMath")
    .smart_ptr<vtkSmartPointer<vtkMath>>("vtkSmartPointer<vtkMath>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMath>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMath::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMath& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMath::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMath::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMath::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMath& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("DYNAMIC_VECTOR_SIZE", &vtkMath::DYNAMIC_VECTOR_SIZE)
    .class_function("Pi", &vtkMath::Pi)
    .class_function("RadiansFromDegrees", emscripten::select_overload<float( float)>([]( float arg_0) -> float { return vtkMath::RadiansFromDegrees( arg_0); }))
    .class_function("RadiansFromDegrees", emscripten::select_overload<double( double)>([]( double arg_0) -> double { return vtkMath::RadiansFromDegrees( arg_0); }))
    .class_function("DegreesFromRadians", emscripten::select_overload<float( float)>([]( float arg_0) -> float { return vtkMath::DegreesFromRadians( arg_0); }))
    .class_function("DegreesFromRadians", emscripten::select_overload<double( double)>([]( double arg_0) -> double { return vtkMath::DegreesFromRadians( arg_0); }))
    .class_function("Round", emscripten::select_overload<int( float)>([]( float arg_0) -> int { return vtkMath::Round( arg_0); }))
    .class_function("Round", emscripten::select_overload<int( double)>([]( double arg_0) -> int { return vtkMath::Round( arg_0); }))
    .class_function("Floor", &vtkMath::Floor)
    .class_function("Ceil", &vtkMath::Ceil)
    .class_function("CeilLog2", &vtkMath::CeilLog2)
    .class_function("IsPowerOfTwo", &vtkMath::IsPowerOfTwo)
    .class_function("NearestPowerOfTwo", &vtkMath::NearestPowerOfTwo)
    .class_function("Factorial", &vtkMath::Factorial)
    .class_function("Binomial", &vtkMath::Binomial)
    .class_function("BeginCombination", emscripten::optional_override([]( int arg_0, int arg_1) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkMath::BeginCombination( arg_0, arg_1)) / sizeof(int);}))
    .class_function("NextCombination", emscripten::optional_override([]( int arg_0, int arg_1, std::uintptr_t arg_2) -> int {  return vtkMath::NextCombination( arg_0, arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int)));}))
    .class_function("FreeCombination", emscripten::optional_override([]( std::uintptr_t arg_0) -> void {  return vtkMath::FreeCombination(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .class_function("RandomSeed", &vtkMath::RandomSeed)
    .class_function("GetSeed", &vtkMath::GetSeed)
    .class_function("Random", emscripten::select_overload<double()>([]() -> double { return vtkMath::Random(); }))
    .class_function("Random", emscripten::select_overload<double( double, double)>([]( double arg_0, double arg_1) -> double { return vtkMath::Random( arg_0, arg_1); }))
    .class_function("Gaussian", emscripten::select_overload<double()>([]() -> double { return vtkMath::Gaussian(); }))
    .class_function("Gaussian", emscripten::select_overload<double( double, double)>([]( double arg_0, double arg_1) -> double { return vtkMath::Gaussian( arg_0, arg_1); }))
    .class_function("Norm", emscripten::select_overload<float( std::uintptr_t, int)>([]( std::uintptr_t arg_0, int arg_1) -> float { return vtkMath::Norm(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1); }))
    .class_function("Norm", emscripten::select_overload<double( std::uintptr_t, int)>([]( std::uintptr_t arg_0, int arg_1) -> double { return vtkMath::Norm(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1); }))
    .class_function("GaussianAmplitude", emscripten::select_overload<double( double, double)>([]( double arg_0, double arg_1) -> double { return vtkMath::GaussianAmplitude( arg_0, arg_1); }))
    .class_function("GaussianAmplitude", emscripten::select_overload<double( double, double, double)>([]( double arg_0, double arg_1, double arg_2) -> double { return vtkMath::GaussianAmplitude( arg_0, arg_1, arg_2); }))
    .class_function("GaussianWeight", emscripten::select_overload<double( double, double)>([]( double arg_0, double arg_1) -> double { return vtkMath::GaussianWeight( arg_0, arg_1); }))
    .class_function("GaussianWeight", emscripten::select_overload<double( double, double, double)>([]( double arg_0, double arg_1, double arg_2) -> double { return vtkMath::GaussianWeight( arg_0, arg_1, arg_2); }))
    .class_function("Determinant2x2", emscripten::select_overload<double( double, double, double, double)>([]( double arg_0, double arg_1, double arg_2, double arg_3) -> double { return vtkMath::Determinant2x2( arg_0, arg_1, arg_2, arg_3); }))
    .class_function("Determinant3x3", emscripten::select_overload<double( double, double, double, double, double, double, double, double, double)>([]( double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5, double arg_6, double arg_7, double arg_8) -> double { return vtkMath::Determinant3x3( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8); }))
    .class_function("RGBToHSV", emscripten::select_overload<void( float, float, float, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([]( float arg_0, float arg_1, float arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5) -> void { return vtkMath::RGBToHSV( arg_0, arg_1, arg_2,reinterpret_cast<float*>(arg_3 * sizeof(float)),reinterpret_cast<float*>(arg_4 * sizeof(float)),reinterpret_cast<float*>(arg_5 * sizeof(float))); }))
    .class_function("RGBToHSV", emscripten::select_overload<void( double, double, double, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([]( double arg_0, double arg_1, double arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5) -> void { return vtkMath::RGBToHSV( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)),reinterpret_cast<double*>(arg_4 * sizeof(double)),reinterpret_cast<double*>(arg_5 * sizeof(double))); }))
    .class_function("HSVToRGB", emscripten::select_overload<void( float, float, float, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([]( float arg_0, float arg_1, float arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5) -> void { return vtkMath::HSVToRGB( arg_0, arg_1, arg_2,reinterpret_cast<float*>(arg_3 * sizeof(float)),reinterpret_cast<float*>(arg_4 * sizeof(float)),reinterpret_cast<float*>(arg_5 * sizeof(float))); }))
    .class_function("HSVToRGB", emscripten::select_overload<void( double, double, double, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([]( double arg_0, double arg_1, double arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5) -> void { return vtkMath::HSVToRGB( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)),reinterpret_cast<double*>(arg_4 * sizeof(double)),reinterpret_cast<double*>(arg_5 * sizeof(double))); }))
    .class_function("LabToXYZ", emscripten::select_overload<void( double, double, double, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([]( double arg_0, double arg_1, double arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5) -> void { return vtkMath::LabToXYZ( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)),reinterpret_cast<double*>(arg_4 * sizeof(double)),reinterpret_cast<double*>(arg_5 * sizeof(double))); }))
    .class_function("XYZToLab", emscripten::select_overload<void( double, double, double, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([]( double arg_0, double arg_1, double arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5) -> void { return vtkMath::XYZToLab( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)),reinterpret_cast<double*>(arg_4 * sizeof(double)),reinterpret_cast<double*>(arg_5 * sizeof(double))); }))
    .class_function("XYZToRGB", emscripten::select_overload<void( double, double, double, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([]( double arg_0, double arg_1, double arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5) -> void { return vtkMath::XYZToRGB( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)),reinterpret_cast<double*>(arg_4 * sizeof(double)),reinterpret_cast<double*>(arg_5 * sizeof(double))); }))
    .class_function("RGBToXYZ", emscripten::select_overload<void( double, double, double, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([]( double arg_0, double arg_1, double arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5) -> void { return vtkMath::RGBToXYZ( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)),reinterpret_cast<double*>(arg_4 * sizeof(double)),reinterpret_cast<double*>(arg_5 * sizeof(double))); }))
    .class_function("RGBToLab", emscripten::select_overload<void( double, double, double, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([]( double arg_0, double arg_1, double arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5) -> void { return vtkMath::RGBToLab( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)),reinterpret_cast<double*>(arg_4 * sizeof(double)),reinterpret_cast<double*>(arg_5 * sizeof(double))); }))
    .class_function("LabToRGB", emscripten::select_overload<void( double, double, double, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([]( double arg_0, double arg_1, double arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5) -> void { return vtkMath::LabToRGB( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)),reinterpret_cast<double*>(arg_4 * sizeof(double)),reinterpret_cast<double*>(arg_5 * sizeof(double))); }))
    .class_function("GetScalarTypeFittingRange", &vtkMath::GetScalarTypeFittingRange)
    .class_function("Inf", &vtkMath::Inf)
    .class_function("NegInf", &vtkMath::NegInf)
    .class_function("Nan", &vtkMath::Nan)
    .class_function("IsInf", &vtkMath::IsInf)
    .class_function("IsNan", &vtkMath::IsNan)
    .class_function("IsFinite", &vtkMath::IsFinite)
    .class_function("QuadraticRoot", emscripten::optional_override([]( double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, std::uintptr_t arg_5) -> int {  return vtkMath::QuadraticRoot( arg_0, arg_1, arg_2, arg_3, arg_4,reinterpret_cast<double*>(arg_5 * sizeof(double)));}))
    .class_function("ComputeGCD", &vtkMath::ComputeGCD);
}
