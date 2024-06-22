// JavaScript wrapper for vtkOpenGLFXAAFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLFXAAFilterEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLFXAAFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOpenGLRenderer.h"
#include "vtkFXAAOptions.h"
#include "vtkOpenGLFXAAFilter.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLFXAAFilter>(vtkOpenGLFXAAFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLFXAAFilter_class) {
  emscripten::class_<vtkOpenGLFXAAFilter, emscripten::base<vtkObject>>("vtkOpenGLFXAAFilter")
    .smart_ptr<vtkSmartPointer<vtkOpenGLFXAAFilter>>("vtkSmartPointer<vtkOpenGLFXAAFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLFXAAFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLFXAAFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLFXAAFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLFXAAFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLFXAAFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLFXAAFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLFXAAFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Execute", &vtkOpenGLFXAAFilter::Execute, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLFXAAFilter::ReleaseGraphicsResources)
    .function("UpdateConfiguration", &vtkOpenGLFXAAFilter::UpdateConfiguration, emscripten::allow_raw_pointers())
    .function("SetRelativeContrastThreshold", &vtkOpenGLFXAAFilter::SetRelativeContrastThreshold)
    .function("GetRelativeContrastThresholdMinValue", &vtkOpenGLFXAAFilter::GetRelativeContrastThresholdMinValue)
    .function("GetRelativeContrastThresholdMaxValue", &vtkOpenGLFXAAFilter::GetRelativeContrastThresholdMaxValue)
    .function("GetRelativeContrastThreshold", &vtkOpenGLFXAAFilter::GetRelativeContrastThreshold)
    .function("SetHardContrastThreshold", &vtkOpenGLFXAAFilter::SetHardContrastThreshold)
    .function("GetHardContrastThresholdMinValue", &vtkOpenGLFXAAFilter::GetHardContrastThresholdMinValue)
    .function("GetHardContrastThresholdMaxValue", &vtkOpenGLFXAAFilter::GetHardContrastThresholdMaxValue)
    .function("GetHardContrastThreshold", &vtkOpenGLFXAAFilter::GetHardContrastThreshold)
    .function("SetSubpixelBlendLimit", &vtkOpenGLFXAAFilter::SetSubpixelBlendLimit)
    .function("GetSubpixelBlendLimitMinValue", &vtkOpenGLFXAAFilter::GetSubpixelBlendLimitMinValue)
    .function("GetSubpixelBlendLimitMaxValue", &vtkOpenGLFXAAFilter::GetSubpixelBlendLimitMaxValue)
    .function("GetSubpixelBlendLimit", &vtkOpenGLFXAAFilter::GetSubpixelBlendLimit)
    .function("SetSubpixelContrastThreshold", &vtkOpenGLFXAAFilter::SetSubpixelContrastThreshold)
    .function("GetSubpixelContrastThresholdMinValue", &vtkOpenGLFXAAFilter::GetSubpixelContrastThresholdMinValue)
    .function("GetSubpixelContrastThresholdMaxValue", &vtkOpenGLFXAAFilter::GetSubpixelContrastThresholdMaxValue)
    .function("GetSubpixelContrastThreshold", &vtkOpenGLFXAAFilter::GetSubpixelContrastThreshold)
    .function("SetUseHighQualityEndpoints", &vtkOpenGLFXAAFilter::SetUseHighQualityEndpoints)
    .function("GetUseHighQualityEndpoints", &vtkOpenGLFXAAFilter::GetUseHighQualityEndpoints)
    .function("UseHighQualityEndpointsOn", &vtkOpenGLFXAAFilter::UseHighQualityEndpointsOn)
    .function("UseHighQualityEndpointsOff", &vtkOpenGLFXAAFilter::UseHighQualityEndpointsOff)
    .function("SetEndpointSearchIterations", &vtkOpenGLFXAAFilter::SetEndpointSearchIterations)
    .function("GetEndpointSearchIterationsMinValue", &vtkOpenGLFXAAFilter::GetEndpointSearchIterationsMinValue)
    .function("GetEndpointSearchIterationsMaxValue", &vtkOpenGLFXAAFilter::GetEndpointSearchIterationsMaxValue)
    .function("GetEndpointSearchIterations", &vtkOpenGLFXAAFilter::GetEndpointSearchIterations)
    .function("SetDebugOptionValue", &vtkOpenGLFXAAFilter::SetDebugOptionValue)
    .function("GetDebugOptionValue", &vtkOpenGLFXAAFilter::GetDebugOptionValue);
}
