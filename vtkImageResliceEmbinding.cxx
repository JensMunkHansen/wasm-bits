// JavaScript wrapper for vtkImageReslice with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageResliceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageReslice.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"
#include "vtkAbstractTransform.h"
#include "vtkImageData.h"
#include "vtkAbstractImageInterpolator.h"
#include "vtkGarbageCollector.h"
#include "vtkImageStencilData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkImageReslice.h"

EMSCRIPTEN_BINDINGS(vtkImagingCore_vtkImageReslice_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_RESLICE_NEAREST", VTK_NEAREST_INTERPOLATION },
      { "VTK_RESLICE_LINEAR", VTK_LINEAR_INTERPOLATION },
      { "VTK_RESLICE_CUBIC", VTK_CUBIC_INTERPOLATION },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkImageReslice>(vtkImageReslice * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageReslice_class) {
  emscripten::class_<vtkImageReslice, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageReslice")
    .smart_ptr<vtkSmartPointer<vtkImageReslice>>("vtkSmartPointer<vtkImageReslice>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageReslice>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageReslice::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageReslice& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageReslice::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageReslice::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageReslice::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageReslice& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetResliceAxes", &vtkImageReslice::SetResliceAxes, emscripten::allow_raw_pointers())
    .function("GetResliceAxes", &vtkImageReslice::GetResliceAxes, emscripten::allow_raw_pointers())
    .function("SetResliceAxesDirectionCosines", emscripten::select_overload<void(vtkImageReslice&, double, double, double, double, double, double, double, double, double)>([](vtkImageReslice& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5, double arg_6, double arg_7, double arg_8) -> void { return self.SetResliceAxesDirectionCosines( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8); }))
    .function("SetResliceAxesOrigin", emscripten::select_overload<void(vtkImageReslice&, double, double, double)>([](vtkImageReslice& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetResliceAxesOrigin( arg_0, arg_1, arg_2); }))
    .function("SetResliceTransform", &vtkImageReslice::SetResliceTransform, emscripten::allow_raw_pointers())
    .function("GetResliceTransform", &vtkImageReslice::GetResliceTransform, emscripten::allow_raw_pointers())
    .function("SetInformationInput", &vtkImageReslice::SetInformationInput, emscripten::allow_raw_pointers())
    .function("GetInformationInput", &vtkImageReslice::GetInformationInput, emscripten::allow_raw_pointers())
    .function("SetTransformInputSampling", &vtkImageReslice::SetTransformInputSampling)
    .function("TransformInputSamplingOn", &vtkImageReslice::TransformInputSamplingOn)
    .function("TransformInputSamplingOff", &vtkImageReslice::TransformInputSamplingOff)
    .function("GetTransformInputSampling", &vtkImageReslice::GetTransformInputSampling)
    .function("SetAutoCropOutput", &vtkImageReslice::SetAutoCropOutput)
    .function("AutoCropOutputOn", &vtkImageReslice::AutoCropOutputOn)
    .function("AutoCropOutputOff", &vtkImageReslice::AutoCropOutputOff)
    .function("GetAutoCropOutput", &vtkImageReslice::GetAutoCropOutput)
    .function("SetWrap", &vtkImageReslice::SetWrap)
    .function("GetWrap", &vtkImageReslice::GetWrap)
    .function("WrapOn", &vtkImageReslice::WrapOn)
    .function("WrapOff", &vtkImageReslice::WrapOff)
    .function("SetMirror", &vtkImageReslice::SetMirror)
    .function("GetMirror", &vtkImageReslice::GetMirror)
    .function("MirrorOn", &vtkImageReslice::MirrorOn)
    .function("MirrorOff", &vtkImageReslice::MirrorOff)
    .function("SetBorder", &vtkImageReslice::SetBorder)
    .function("GetBorder", &vtkImageReslice::GetBorder)
    .function("BorderOn", &vtkImageReslice::BorderOn)
    .function("BorderOff", &vtkImageReslice::BorderOff)
    .function("SetBorderThickness", &vtkImageReslice::SetBorderThickness)
    .function("GetBorderThickness", &vtkImageReslice::GetBorderThickness)
    .function("SetInterpolationMode", &vtkImageReslice::SetInterpolationMode)
    .function("GetInterpolationModeMinValue", &vtkImageReslice::GetInterpolationModeMinValue)
    .function("GetInterpolationModeMaxValue", &vtkImageReslice::GetInterpolationModeMaxValue)
    .function("GetInterpolationMode", &vtkImageReslice::GetInterpolationMode)
    .function("SetInterpolationModeToNearestNeighbor", &vtkImageReslice::SetInterpolationModeToNearestNeighbor)
    .function("SetInterpolationModeToLinear", &vtkImageReslice::SetInterpolationModeToLinear)
    .function("SetInterpolationModeToCubic", &vtkImageReslice::SetInterpolationModeToCubic)
    .function("GetInterpolationModeAsString", emscripten::optional_override([](vtkImageReslice& self) -> std::string {  return self.GetInterpolationModeAsString();}))
    .function("SetInterpolator", &vtkImageReslice::SetInterpolator, emscripten::allow_raw_pointers())
    .function("GetInterpolator", &vtkImageReslice::GetInterpolator, emscripten::allow_raw_pointers())
    .function("SetSlabMode", &vtkImageReslice::SetSlabMode)
    .function("GetSlabModeMinValue", &vtkImageReslice::GetSlabModeMinValue)
    .function("GetSlabModeMaxValue", &vtkImageReslice::GetSlabModeMaxValue)
    .function("GetSlabMode", &vtkImageReslice::GetSlabMode)
    .function("SetSlabModeToMin", &vtkImageReslice::SetSlabModeToMin)
    .function("SetSlabModeToMax", &vtkImageReslice::SetSlabModeToMax)
    .function("SetSlabModeToMean", &vtkImageReslice::SetSlabModeToMean)
    .function("SetSlabModeToSum", &vtkImageReslice::SetSlabModeToSum)
    .function("GetSlabModeAsString", emscripten::optional_override([](vtkImageReslice& self) -> std::string {  return self.GetSlabModeAsString();}))
    .function("SetSlabNumberOfSlices", &vtkImageReslice::SetSlabNumberOfSlices)
    .function("GetSlabNumberOfSlices", &vtkImageReslice::GetSlabNumberOfSlices)
    .function("SetSlabTrapezoidIntegration", &vtkImageReslice::SetSlabTrapezoidIntegration)
    .function("SlabTrapezoidIntegrationOn", &vtkImageReslice::SlabTrapezoidIntegrationOn)
    .function("SlabTrapezoidIntegrationOff", &vtkImageReslice::SlabTrapezoidIntegrationOff)
    .function("GetSlabTrapezoidIntegration", &vtkImageReslice::GetSlabTrapezoidIntegration)
    .function("SetSlabSliceSpacingFraction", &vtkImageReslice::SetSlabSliceSpacingFraction)
    .function("GetSlabSliceSpacingFraction", &vtkImageReslice::GetSlabSliceSpacingFraction)
    .function("SetOptimization", &vtkImageReslice::SetOptimization)
    .function("GetOptimization", &vtkImageReslice::GetOptimization)
    .function("OptimizationOn", &vtkImageReslice::OptimizationOn)
    .function("OptimizationOff", &vtkImageReslice::OptimizationOff)
    .function("SetScalarShift", &vtkImageReslice::SetScalarShift)
    .function("GetScalarShift", &vtkImageReslice::GetScalarShift)
    .function("SetScalarScale", &vtkImageReslice::SetScalarScale)
    .function("GetScalarScale", &vtkImageReslice::GetScalarScale)
    .function("SetOutputScalarType", &vtkImageReslice::SetOutputScalarType)
    .function("GetOutputScalarType", &vtkImageReslice::GetOutputScalarType)
    .function("SetBackgroundColor", emscripten::select_overload<void(vtkImageReslice&, double, double, double, double)>([](vtkImageReslice& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetBackgroundColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetBackgroundLevel", &vtkImageReslice::SetBackgroundLevel)
    .function("GetBackgroundLevel", &vtkImageReslice::GetBackgroundLevel)
    .function("SetOutputSpacing", emscripten::select_overload<void(vtkImageReslice&, double, double, double)>([](vtkImageReslice& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOutputSpacing( arg_0, arg_1, arg_2); }))
    .function("SetOutputSpacingToDefault", &vtkImageReslice::SetOutputSpacingToDefault)
    .function("SetOutputDirection", emscripten::select_overload<void(vtkImageReslice&, double, double, double, double, double, double, double, double, double)>([](vtkImageReslice& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5, double arg_6, double arg_7, double arg_8) -> void { return self.SetOutputDirection( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8); }))
    .function("SetOutputDirectionToDefault", &vtkImageReslice::SetOutputDirectionToDefault)
    .function("SetOutputOrigin", emscripten::select_overload<void(vtkImageReslice&, double, double, double)>([](vtkImageReslice& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOutputOrigin( arg_0, arg_1, arg_2); }))
    .function("SetOutputOriginToDefault", &vtkImageReslice::SetOutputOriginToDefault)
    .function("SetOutputExtent", emscripten::select_overload<void(vtkImageReslice&, int, int, int, int, int, int)>([](vtkImageReslice& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetOutputExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetOutputExtentToDefault", &vtkImageReslice::SetOutputExtentToDefault)
    .function("SetOutputDimensionality", &vtkImageReslice::SetOutputDimensionality)
    .function("GetOutputDimensionality", &vtkImageReslice::GetOutputDimensionality)
    .function("GetMTime", &vtkImageReslice::GetMTime)
    .function("ReportReferences", &vtkImageReslice::ReportReferences, emscripten::allow_raw_pointers())
    .function("SetInterpolate", &vtkImageReslice::SetInterpolate)
    .function("InterpolateOn", &vtkImageReslice::InterpolateOn)
    .function("InterpolateOff", &vtkImageReslice::InterpolateOff)
    .function("GetInterpolate", &vtkImageReslice::GetInterpolate)
    .function("SetStencilData", &vtkImageReslice::SetStencilData, emscripten::allow_raw_pointers())
    .function("GetStencil", &vtkImageReslice::GetStencil, emscripten::allow_raw_pointers())
    .function("SetGenerateStencilOutput", &vtkImageReslice::SetGenerateStencilOutput)
    .function("GetGenerateStencilOutput", &vtkImageReslice::GetGenerateStencilOutput)
    .function("GenerateStencilOutputOn", &vtkImageReslice::GenerateStencilOutputOn)
    .function("GenerateStencilOutputOff", &vtkImageReslice::GenerateStencilOutputOff)
    .function("GetStencilOutputPort", &vtkImageReslice::GetStencilOutputPort, emscripten::allow_raw_pointers())
    .function("GetStencilOutput", &vtkImageReslice::GetStencilOutput, emscripten::allow_raw_pointers())
    .function("SetStencilOutput", &vtkImageReslice::SetStencilOutput, emscripten::allow_raw_pointers());
}
