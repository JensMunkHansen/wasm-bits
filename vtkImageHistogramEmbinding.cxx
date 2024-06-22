// JavaScript wrapper for vtkImageHistogram with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStatistics.js/vtkImagingStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStatistics.js/vtkImageHistogramEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Statistics/vtkImageHistogram.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageStencilData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkIdTypeArray.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkImageData.h"
#include "vtkImageHistogram.h"

template<> void emscripten::internal::raw_destructor<vtkImageHistogram>(vtkImageHistogram * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageHistogram_class) {
  emscripten::class_<vtkImageHistogram, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageHistogram")
    .smart_ptr<vtkSmartPointer<vtkImageHistogram>>("vtkSmartPointer<vtkImageHistogram>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageHistogram>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageHistogram::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageHistogram& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageHistogram::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageHistogram::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageHistogram::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageHistogram& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetActiveComponent", &vtkImageHistogram::SetActiveComponent)
    .function("GetActiveComponent", &vtkImageHistogram::GetActiveComponent)
    .function("SetAutomaticBinning", &vtkImageHistogram::SetAutomaticBinning)
    .function("AutomaticBinningOn", &vtkImageHistogram::AutomaticBinningOn)
    .function("AutomaticBinningOff", &vtkImageHistogram::AutomaticBinningOff)
    .function("GetAutomaticBinning", &vtkImageHistogram::GetAutomaticBinning)
    .function("SetMaximumNumberOfBins", &vtkImageHistogram::SetMaximumNumberOfBins)
    .function("GetMaximumNumberOfBins", &vtkImageHistogram::GetMaximumNumberOfBins)
    .function("SetNumberOfBins", &vtkImageHistogram::SetNumberOfBins)
    .function("GetNumberOfBins", &vtkImageHistogram::GetNumberOfBins)
    .function("SetBinOrigin", &vtkImageHistogram::SetBinOrigin)
    .function("GetBinOrigin", &vtkImageHistogram::GetBinOrigin)
    .function("SetBinSpacing", &vtkImageHistogram::SetBinSpacing)
    .function("GetBinSpacing", &vtkImageHistogram::GetBinSpacing)
    .function("SetStencilData", &vtkImageHistogram::SetStencilData, emscripten::allow_raw_pointers())
    .function("GetStencil", &vtkImageHistogram::GetStencil, emscripten::allow_raw_pointers())
    .function("SetStencilConnection", &vtkImageHistogram::SetStencilConnection, emscripten::allow_raw_pointers())
    .function("SetGenerateHistogramImage", &vtkImageHistogram::SetGenerateHistogramImage)
    .function("GenerateHistogramImageOn", &vtkImageHistogram::GenerateHistogramImageOn)
    .function("GenerateHistogramImageOff", &vtkImageHistogram::GenerateHistogramImageOff)
    .function("GetGenerateHistogramImage", &vtkImageHistogram::GetGenerateHistogramImage)
    .function("SetHistogramImageSize", emscripten::select_overload<void(vtkImageHistogram&, int, int)>([](vtkImageHistogram& self, int arg_0, int arg_1) -> void { return self.SetHistogramImageSize( arg_0, arg_1); }))
    .function("SetHistogramImageScale", &vtkImageHistogram::SetHistogramImageScale)
    .function("GetHistogramImageScaleMinValue", &vtkImageHistogram::GetHistogramImageScaleMinValue)
    .function("GetHistogramImageScaleMaxValue", &vtkImageHistogram::GetHistogramImageScaleMaxValue)
    .function("SetHistogramImageScaleToLinear", &vtkImageHistogram::SetHistogramImageScaleToLinear)
    .function("SetHistogramImageScaleToLog", &vtkImageHistogram::SetHistogramImageScaleToLog)
    .function("SetHistogramImageScaleToSqrt", &vtkImageHistogram::SetHistogramImageScaleToSqrt)
    .function("GetHistogramImageScale", &vtkImageHistogram::GetHistogramImageScale)
    .function("GetHistogramImageScaleAsString", emscripten::optional_override([](vtkImageHistogram& self) -> std::string {  return self.GetHistogramImageScaleAsString();}))
    .function("GetHistogram", &vtkImageHistogram::GetHistogram, emscripten::allow_raw_pointers())
    .function("GetTotal", &vtkImageHistogram::GetTotal);
}
EMSCRIPTEN_BINDINGS(vtkImagingStatistics_vtkImageHistogram_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkImageHistogram_Linear", vtkImageHistogram::Linear },
      { "vtkImageHistogram_Log", vtkImageHistogram::Log },
      { "vtkImageHistogram_Sqrt", vtkImageHistogram::Sqrt },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
