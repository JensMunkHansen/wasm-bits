// JavaScript wrapper for vtkImageResliceMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingImage.js/vtkRenderingImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingImage.js/vtkImageResliceMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Image/vtkImageResliceMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlane.h"
#include "vtkAbstractImageInterpolator.h"
#include "vtkRenderer.h"
#include "vtkImageSlice.h"
#include "vtkWindow.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkImageResliceMapper.h"

template<> void emscripten::internal::raw_destructor<vtkImageResliceMapper>(vtkImageResliceMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageResliceMapper_class) {
  emscripten::class_<vtkImageResliceMapper, emscripten::base<vtkImageMapper3D>>("vtkImageResliceMapper")
    .smart_ptr<vtkSmartPointer<vtkImageResliceMapper>>("vtkSmartPointer<vtkImageResliceMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageResliceMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageResliceMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageResliceMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageResliceMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageResliceMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageResliceMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageResliceMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSlicePlane", &vtkImageResliceMapper::SetSlicePlane, emscripten::allow_raw_pointers())
    .function("SetJumpToNearestSlice", &vtkImageResliceMapper::SetJumpToNearestSlice)
    .function("JumpToNearestSliceOn", &vtkImageResliceMapper::JumpToNearestSliceOn)
    .function("JumpToNearestSliceOff", &vtkImageResliceMapper::JumpToNearestSliceOff)
    .function("GetJumpToNearestSlice", &vtkImageResliceMapper::GetJumpToNearestSlice)
    .function("SetSlabThickness", &vtkImageResliceMapper::SetSlabThickness)
    .function("GetSlabThickness", &vtkImageResliceMapper::GetSlabThickness)
    .function("SetSlabType", &vtkImageResliceMapper::SetSlabType)
    .function("GetSlabTypeMinValue", &vtkImageResliceMapper::GetSlabTypeMinValue)
    .function("GetSlabTypeMaxValue", &vtkImageResliceMapper::GetSlabTypeMaxValue)
    .function("GetSlabType", &vtkImageResliceMapper::GetSlabType)
    .function("SetSlabTypeToMin", &vtkImageResliceMapper::SetSlabTypeToMin)
    .function("SetSlabTypeToMax", &vtkImageResliceMapper::SetSlabTypeToMax)
    .function("SetSlabTypeToMean", &vtkImageResliceMapper::SetSlabTypeToMean)
    .function("SetSlabTypeToSum", &vtkImageResliceMapper::SetSlabTypeToSum)
    .function("GetSlabTypeAsString", emscripten::optional_override([](vtkImageResliceMapper& self) -> std::string {  return self.GetSlabTypeAsString();}))
    .function("SetSlabSampleFactor", &vtkImageResliceMapper::SetSlabSampleFactor)
    .function("GetSlabSampleFactorMinValue", &vtkImageResliceMapper::GetSlabSampleFactorMinValue)
    .function("GetSlabSampleFactorMaxValue", &vtkImageResliceMapper::GetSlabSampleFactorMaxValue)
    .function("GetSlabSampleFactor", &vtkImageResliceMapper::GetSlabSampleFactor)
    .function("SetImageSampleFactor", &vtkImageResliceMapper::SetImageSampleFactor)
    .function("GetImageSampleFactorMinValue", &vtkImageResliceMapper::GetImageSampleFactorMinValue)
    .function("GetImageSampleFactorMaxValue", &vtkImageResliceMapper::GetImageSampleFactorMaxValue)
    .function("GetImageSampleFactor", &vtkImageResliceMapper::GetImageSampleFactor)
    .function("SetAutoAdjustImageQuality", &vtkImageResliceMapper::SetAutoAdjustImageQuality)
    .function("AutoAdjustImageQualityOn", &vtkImageResliceMapper::AutoAdjustImageQualityOn)
    .function("AutoAdjustImageQualityOff", &vtkImageResliceMapper::AutoAdjustImageQualityOff)
    .function("GetAutoAdjustImageQuality", &vtkImageResliceMapper::GetAutoAdjustImageQuality)
    .function("SetResampleToScreenPixels", &vtkImageResliceMapper::SetResampleToScreenPixels)
    .function("ResampleToScreenPixelsOn", &vtkImageResliceMapper::ResampleToScreenPixelsOn)
    .function("ResampleToScreenPixelsOff", &vtkImageResliceMapper::ResampleToScreenPixelsOff)
    .function("GetResampleToScreenPixels", &vtkImageResliceMapper::GetResampleToScreenPixels)
    .function("SetSeparateWindowLevelOperation", &vtkImageResliceMapper::SetSeparateWindowLevelOperation)
    .function("SeparateWindowLevelOperationOn", &vtkImageResliceMapper::SeparateWindowLevelOperationOn)
    .function("SeparateWindowLevelOperationOff", &vtkImageResliceMapper::SeparateWindowLevelOperationOff)
    .function("GetSeparateWindowLevelOperation", &vtkImageResliceMapper::GetSeparateWindowLevelOperation)
    .function("SetInterpolator", &vtkImageResliceMapper::SetInterpolator, emscripten::allow_raw_pointers())
    .function("GetInterpolator", &vtkImageResliceMapper::GetInterpolator, emscripten::allow_raw_pointers())
    .function("Render", &vtkImageResliceMapper::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkImageResliceMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkImageResliceMapper::GetMTime);
}
