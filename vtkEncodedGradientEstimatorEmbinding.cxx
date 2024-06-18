// JavaScript wrapper for vtkEncodedGradientEstimator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkEncodedGradientEstimatorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkEncodedGradientEstimator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkDirectionEncoder.h"
#include "vtkEncodedGradientEstimator.h"

template<> void emscripten::internal::raw_destructor<vtkEncodedGradientEstimator>(vtkEncodedGradientEstimator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEncodedGradientEstimator_class) {
  emscripten::class_<vtkEncodedGradientEstimator, emscripten::base<vtkObject>>("vtkEncodedGradientEstimator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEncodedGradientEstimator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEncodedGradientEstimator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEncodedGradientEstimator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEncodedGradientEstimator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEncodedGradientEstimator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEncodedGradientEstimator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkEncodedGradientEstimator::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInputData", &vtkEncodedGradientEstimator::GetInputData, emscripten::allow_raw_pointers())
    .function("SetGradientMagnitudeScale", &vtkEncodedGradientEstimator::SetGradientMagnitudeScale)
    .function("GetGradientMagnitudeScale", &vtkEncodedGradientEstimator::GetGradientMagnitudeScale)
    .function("SetGradientMagnitudeBias", &vtkEncodedGradientEstimator::SetGradientMagnitudeBias)
    .function("GetGradientMagnitudeBias", &vtkEncodedGradientEstimator::GetGradientMagnitudeBias)
    .function("SetBoundsClip", &vtkEncodedGradientEstimator::SetBoundsClip)
    .function("GetBoundsClipMinValue", &vtkEncodedGradientEstimator::GetBoundsClipMinValue)
    .function("GetBoundsClipMaxValue", &vtkEncodedGradientEstimator::GetBoundsClipMaxValue)
    .function("GetBoundsClip", &vtkEncodedGradientEstimator::GetBoundsClip)
    .function("BoundsClipOn", &vtkEncodedGradientEstimator::BoundsClipOn)
    .function("BoundsClipOff", &vtkEncodedGradientEstimator::BoundsClipOff)
    .function("SetBounds", emscripten::select_overload<void(vtkEncodedGradientEstimator&, int, int, int, int, int, int)>([](vtkEncodedGradientEstimator& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("Update", &vtkEncodedGradientEstimator::Update)
    .function("GetEncodedNormals", emscripten::optional_override([](vtkEncodedGradientEstimator& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetEncodedNormals()) / sizeof(unsigned short);}))
    .function("GetEncodedNormalIndex", emscripten::select_overload<int(vtkEncodedGradientEstimator&, int)>([](vtkEncodedGradientEstimator& self, int arg_0) -> int { return self.GetEncodedNormalIndex( arg_0); }))
    .function("GetEncodedNormalIndex", emscripten::select_overload<int(vtkEncodedGradientEstimator&, int, int, int)>([](vtkEncodedGradientEstimator& self, int arg_0, int arg_1, int arg_2) -> int { return self.GetEncodedNormalIndex( arg_0, arg_1, arg_2); }))
    .function("GetGradientMagnitudes", emscripten::optional_override([](vtkEncodedGradientEstimator& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGradientMagnitudes()) / sizeof(unsigned char);}))
    .function("SetNumberOfThreads", &vtkEncodedGradientEstimator::SetNumberOfThreads)
    .function("GetNumberOfThreadsMinValue", &vtkEncodedGradientEstimator::GetNumberOfThreadsMinValue)
    .function("GetNumberOfThreadsMaxValue", &vtkEncodedGradientEstimator::GetNumberOfThreadsMaxValue)
    .function("GetNumberOfThreads", &vtkEncodedGradientEstimator::GetNumberOfThreads)
    .function("SetDirectionEncoder", &vtkEncodedGradientEstimator::SetDirectionEncoder, emscripten::allow_raw_pointers())
    .function("GetDirectionEncoder", &vtkEncodedGradientEstimator::GetDirectionEncoder, emscripten::allow_raw_pointers())
    .function("SetComputeGradientMagnitudes", &vtkEncodedGradientEstimator::SetComputeGradientMagnitudes)
    .function("GetComputeGradientMagnitudes", &vtkEncodedGradientEstimator::GetComputeGradientMagnitudes)
    .function("ComputeGradientMagnitudesOn", &vtkEncodedGradientEstimator::ComputeGradientMagnitudesOn)
    .function("ComputeGradientMagnitudesOff", &vtkEncodedGradientEstimator::ComputeGradientMagnitudesOff)
    .function("SetCylinderClip", &vtkEncodedGradientEstimator::SetCylinderClip)
    .function("GetCylinderClip", &vtkEncodedGradientEstimator::GetCylinderClip)
    .function("CylinderClipOn", &vtkEncodedGradientEstimator::CylinderClipOn)
    .function("CylinderClipOff", &vtkEncodedGradientEstimator::CylinderClipOff)
    .function("GetLastUpdateTimeInSeconds", &vtkEncodedGradientEstimator::GetLastUpdateTimeInSeconds)
    .function("GetLastUpdateTimeInCPUSeconds", &vtkEncodedGradientEstimator::GetLastUpdateTimeInCPUSeconds)
    .function("GetUseCylinderClip", &vtkEncodedGradientEstimator::GetUseCylinderClip)
    .function("GetCircleLimits", emscripten::optional_override([](vtkEncodedGradientEstimator& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetCircleLimits()) / sizeof(int);}))
    .function("SetZeroNormalThreshold", &vtkEncodedGradientEstimator::SetZeroNormalThreshold)
    .function("GetZeroNormalThreshold", &vtkEncodedGradientEstimator::GetZeroNormalThreshold)
    .function("SetZeroPad", &vtkEncodedGradientEstimator::SetZeroPad)
    .function("GetZeroPadMinValue", &vtkEncodedGradientEstimator::GetZeroPadMinValue)
    .function("GetZeroPadMaxValue", &vtkEncodedGradientEstimator::GetZeroPadMaxValue)
    .function("GetZeroPad", &vtkEncodedGradientEstimator::GetZeroPad)
    .function("ZeroPadOn", &vtkEncodedGradientEstimator::ZeroPadOn)
    .function("ZeroPadOff", &vtkEncodedGradientEstimator::ZeroPadOff);
}
