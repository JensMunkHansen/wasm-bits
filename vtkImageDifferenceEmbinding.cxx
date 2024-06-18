// JavaScript wrapper for vtkImageDifference with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageDifferenceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageDifference.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkImageData.h"
#include "vtkImageDifference.h"

template<> void emscripten::internal::raw_destructor<vtkImageDifference>(vtkImageDifference * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageDifference_class) {
  emscripten::class_<vtkImageDifference, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageDifference")
    .smart_ptr<vtkSmartPointer<vtkImageDifference>>("vtkSmartPointer<vtkImageDifference>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageDifference>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDifference::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageDifference& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageDifference::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageDifference::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDifference::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageDifference& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetImageConnection", &vtkImageDifference::SetImageConnection, emscripten::allow_raw_pointers())
    .function("SetImageData", &vtkImageDifference::SetImageData, emscripten::allow_raw_pointers())
    .function("GetImage", &vtkImageDifference::GetImage, emscripten::allow_raw_pointers())
    .function("GetError", emscripten::select_overload<double(vtkImageDifference&)>([](vtkImageDifference& self) -> double { return self.GetError(); }))
    .function("GetError", emscripten::select_overload<void(vtkImageDifference&, std::uintptr_t)>([](vtkImageDifference& self, std::uintptr_t arg_0) -> void { return self.GetError(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("GetThresholdedError", emscripten::select_overload<double(vtkImageDifference&)>([](vtkImageDifference& self) -> double { return self.GetThresholdedError(); }))
    .function("GetThresholdedError", emscripten::select_overload<void(vtkImageDifference&, std::uintptr_t)>([](vtkImageDifference& self, std::uintptr_t arg_0) -> void { return self.GetThresholdedError(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetThreshold", &vtkImageDifference::SetThreshold)
    .function("GetThreshold", &vtkImageDifference::GetThreshold)
    .function("SetAllowShift", &vtkImageDifference::SetAllowShift)
    .function("GetAllowShift", &vtkImageDifference::GetAllowShift)
    .function("AllowShiftOn", &vtkImageDifference::AllowShiftOn)
    .function("AllowShiftOff", &vtkImageDifference::AllowShiftOff)
    .function("SetAveraging", &vtkImageDifference::SetAveraging)
    .function("GetAveraging", &vtkImageDifference::GetAveraging)
    .function("AveragingOn", &vtkImageDifference::AveragingOn)
    .function("AveragingOff", &vtkImageDifference::AveragingOff)
    .function("SetAverageThresholdFactor", &vtkImageDifference::SetAverageThresholdFactor)
    .function("GetAverageThresholdFactor", &vtkImageDifference::GetAverageThresholdFactor);
}
