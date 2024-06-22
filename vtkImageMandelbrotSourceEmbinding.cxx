// JavaScript wrapper for vtkImageMandelbrotSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingSources.js/vtkImagingSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingSources.js/vtkImageMandelbrotSourceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Sources/vtkImageMandelbrotSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageMandelbrotSource.h"

template<> void emscripten::internal::raw_destructor<vtkImageMandelbrotSource>(vtkImageMandelbrotSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageMandelbrotSource_class) {
  emscripten::class_<vtkImageMandelbrotSource, emscripten::base<vtkImageAlgorithm>>("vtkImageMandelbrotSource")
    .smart_ptr<vtkSmartPointer<vtkImageMandelbrotSource>>("vtkSmartPointer<vtkImageMandelbrotSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageMandelbrotSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMandelbrotSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageMandelbrotSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageMandelbrotSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageMandelbrotSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMandelbrotSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageMandelbrotSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWholeExtent", emscripten::select_overload<void(vtkImageMandelbrotSource&, int, int, int, int, int, int)>([](vtkImageMandelbrotSource& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetConstantSize", &vtkImageMandelbrotSource::SetConstantSize)
    .function("GetConstantSize", &vtkImageMandelbrotSource::GetConstantSize)
    .function("ConstantSizeOn", &vtkImageMandelbrotSource::ConstantSizeOn)
    .function("ConstantSizeOff", &vtkImageMandelbrotSource::ConstantSizeOff)
    .function("SetProjectionAxes", emscripten::select_overload<void(vtkImageMandelbrotSource&, int, int, int)>([](vtkImageMandelbrotSource& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetProjectionAxes( arg_0, arg_1, arg_2); }))
    .function("SetOriginCX", emscripten::select_overload<void(vtkImageMandelbrotSource&, double, double, double, double)>([](vtkImageMandelbrotSource& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetOriginCX( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetSampleCX", emscripten::select_overload<void(vtkImageMandelbrotSource&, double, double, double, double)>([](vtkImageMandelbrotSource& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetSampleCX( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetSizeCX", &vtkImageMandelbrotSource::SetSizeCX)
    .function("SetMaximumNumberOfIterations", &vtkImageMandelbrotSource::SetMaximumNumberOfIterations)
    .function("GetMaximumNumberOfIterationsMinValue", &vtkImageMandelbrotSource::GetMaximumNumberOfIterationsMinValue)
    .function("GetMaximumNumberOfIterationsMaxValue", &vtkImageMandelbrotSource::GetMaximumNumberOfIterationsMaxValue)
    .function("GetMaximumNumberOfIterations", &vtkImageMandelbrotSource::GetMaximumNumberOfIterations)
    .function("Zoom", &vtkImageMandelbrotSource::Zoom)
    .function("Pan", &vtkImageMandelbrotSource::Pan)
    .function("CopyOriginAndSample", &vtkImageMandelbrotSource::CopyOriginAndSample, emscripten::allow_raw_pointers())
    .function("SetSubsampleRate", &vtkImageMandelbrotSource::SetSubsampleRate)
    .function("GetSubsampleRateMinValue", &vtkImageMandelbrotSource::GetSubsampleRateMinValue)
    .function("GetSubsampleRateMaxValue", &vtkImageMandelbrotSource::GetSubsampleRateMaxValue)
    .function("GetSubsampleRate", &vtkImageMandelbrotSource::GetSubsampleRate);
}
