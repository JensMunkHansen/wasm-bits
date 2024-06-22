// JavaScript wrapper for vtkImageGaussianSmooth with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageGaussianSmoothEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageGaussianSmooth.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageGaussianSmooth.h"

template<> void emscripten::internal::raw_destructor<vtkImageGaussianSmooth>(vtkImageGaussianSmooth * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageGaussianSmooth_class) {
  emscripten::class_<vtkImageGaussianSmooth, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageGaussianSmooth")
    .smart_ptr<vtkSmartPointer<vtkImageGaussianSmooth>>("vtkSmartPointer<vtkImageGaussianSmooth>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageGaussianSmooth>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageGaussianSmooth::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageGaussianSmooth& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageGaussianSmooth::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageGaussianSmooth::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageGaussianSmooth::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageGaussianSmooth& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetStandardDeviations", emscripten::select_overload<void(vtkImageGaussianSmooth&, double, double, double)>([](vtkImageGaussianSmooth& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetStandardDeviations( arg_0, arg_1, arg_2); }))
    .function("SetStandardDeviations", emscripten::select_overload<void(vtkImageGaussianSmooth&, double, double)>([](vtkImageGaussianSmooth& self, double arg_0, double arg_1) -> void { return self.SetStandardDeviations( arg_0, arg_1); }))
    .function("SetStandardDeviation", emscripten::select_overload<void(vtkImageGaussianSmooth&, double)>([](vtkImageGaussianSmooth& self, double arg_0) -> void { return self.SetStandardDeviation( arg_0); }))
    .function("SetStandardDeviation", emscripten::select_overload<void(vtkImageGaussianSmooth&, double, double)>([](vtkImageGaussianSmooth& self, double arg_0, double arg_1) -> void { return self.SetStandardDeviation( arg_0, arg_1); }))
    .function("SetStandardDeviation", emscripten::select_overload<void(vtkImageGaussianSmooth&, double, double, double)>([](vtkImageGaussianSmooth& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetStandardDeviation( arg_0, arg_1, arg_2); }))
    .function("SetRadiusFactors", emscripten::select_overload<void(vtkImageGaussianSmooth&, double, double, double)>([](vtkImageGaussianSmooth& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetRadiusFactors( arg_0, arg_1, arg_2); }))
    .function("SetRadiusFactors", emscripten::select_overload<void(vtkImageGaussianSmooth&, double, double)>([](vtkImageGaussianSmooth& self, double arg_0, double arg_1) -> void { return self.SetRadiusFactors( arg_0, arg_1); }))
    .function("SetRadiusFactor", &vtkImageGaussianSmooth::SetRadiusFactor)
    .function("SetDimensionality", &vtkImageGaussianSmooth::SetDimensionality)
    .function("GetDimensionality", &vtkImageGaussianSmooth::GetDimensionality);
}
