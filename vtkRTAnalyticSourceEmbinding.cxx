// JavaScript wrapper for vtkRTAnalyticSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkRTAnalyticSourceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkRTAnalyticSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRTAnalyticSource.h"

template<> void emscripten::internal::raw_destructor<vtkRTAnalyticSource>(vtkRTAnalyticSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRTAnalyticSource_class) {
  emscripten::class_<vtkRTAnalyticSource, emscripten::base<vtkImageAlgorithm>>("vtkRTAnalyticSource")
    .smart_ptr<vtkSmartPointer<vtkRTAnalyticSource>>("vtkSmartPointer<vtkRTAnalyticSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRTAnalyticSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRTAnalyticSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRTAnalyticSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRTAnalyticSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRTAnalyticSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRTAnalyticSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRTAnalyticSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWholeExtent", &vtkRTAnalyticSource::SetWholeExtent)
    .function("SetCenter", emscripten::select_overload<void(vtkRTAnalyticSource&, double, double, double)>([](vtkRTAnalyticSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetMaximum", &vtkRTAnalyticSource::SetMaximum)
    .function("GetMaximum", &vtkRTAnalyticSource::GetMaximum)
    .function("SetStandardDeviation", &vtkRTAnalyticSource::SetStandardDeviation)
    .function("GetStandardDeviation", &vtkRTAnalyticSource::GetStandardDeviation)
    .function("SetXFreq", &vtkRTAnalyticSource::SetXFreq)
    .function("GetXFreq", &vtkRTAnalyticSource::GetXFreq)
    .function("SetYFreq", &vtkRTAnalyticSource::SetYFreq)
    .function("GetYFreq", &vtkRTAnalyticSource::GetYFreq)
    .function("SetZFreq", &vtkRTAnalyticSource::SetZFreq)
    .function("GetZFreq", &vtkRTAnalyticSource::GetZFreq)
    .function("SetXMag", &vtkRTAnalyticSource::SetXMag)
    .function("GetXMag", &vtkRTAnalyticSource::GetXMag)
    .function("SetYMag", &vtkRTAnalyticSource::SetYMag)
    .function("GetYMag", &vtkRTAnalyticSource::GetYMag)
    .function("SetZMag", &vtkRTAnalyticSource::SetZMag)
    .function("GetZMag", &vtkRTAnalyticSource::GetZMag)
    .function("SetSubsampleRate", &vtkRTAnalyticSource::SetSubsampleRate)
    .function("GetSubsampleRate", &vtkRTAnalyticSource::GetSubsampleRate);
}
