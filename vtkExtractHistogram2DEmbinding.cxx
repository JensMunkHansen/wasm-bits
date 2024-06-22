// JavaScript wrapper for vtkExtractHistogram2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersImaging.js/vtkFiltersImaging.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersImaging.js/vtkExtractHistogram2DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Imaging/vtkExtractHistogram2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkDataArray.h"
#include "vtkDataObjectCollection.h"
#include "vtkMultiBlockDataSet.h"
#include "vtkExtractHistogram2D.h"

EMSCRIPTEN_BINDINGS(vtkFiltersImaging_vtkExtractHistogram2D_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkExtractHistogram2D>(vtkExtractHistogram2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractHistogram2D_class) {
  using OutputIndices=vtkExtractHistogram2D::OutputIndices;
  emscripten::class_<vtkExtractHistogram2D, emscripten::base<vtkStatisticsAlgorithm>>("vtkExtractHistogram2D")
    .smart_ptr<vtkSmartPointer<vtkExtractHistogram2D>>("vtkSmartPointer<vtkExtractHistogram2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractHistogram2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractHistogram2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractHistogram2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractHistogram2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractHistogram2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractHistogram2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractHistogram2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfBins", emscripten::select_overload<void(vtkExtractHistogram2D&, int, int)>([](vtkExtractHistogram2D& self, int arg_0, int arg_1) -> void { return self.SetNumberOfBins( arg_0, arg_1); }))
    .function("SetComponentsToProcess", emscripten::select_overload<void(vtkExtractHistogram2D&, int, int)>([](vtkExtractHistogram2D& self, int arg_0, int arg_1) -> void { return self.SetComponentsToProcess( arg_0, arg_1); }))
    .function("SetCustomHistogramExtents", emscripten::select_overload<void(vtkExtractHistogram2D&, double, double, double, double)>([](vtkExtractHistogram2D& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetCustomHistogramExtents( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetUseCustomHistogramExtents", &vtkExtractHistogram2D::SetUseCustomHistogramExtents)
    .function("GetUseCustomHistogramExtents", &vtkExtractHistogram2D::GetUseCustomHistogramExtents)
    .function("UseCustomHistogramExtentsOn", &vtkExtractHistogram2D::UseCustomHistogramExtentsOn)
    .function("UseCustomHistogramExtentsOff", &vtkExtractHistogram2D::UseCustomHistogramExtentsOff)
    .function("SetScalarType", &vtkExtractHistogram2D::SetScalarType)
    .function("SetScalarTypeToUnsignedInt", &vtkExtractHistogram2D::SetScalarTypeToUnsignedInt)
    .function("SetScalarTypeToUnsignedLong", &vtkExtractHistogram2D::SetScalarTypeToUnsignedLong)
    .function("SetScalarTypeToUnsignedShort", &vtkExtractHistogram2D::SetScalarTypeToUnsignedShort)
    .function("SetScalarTypeToUnsignedChar", &vtkExtractHistogram2D::SetScalarTypeToUnsignedChar)
    .function("SetScalarTypeToFloat", &vtkExtractHistogram2D::SetScalarTypeToFloat)
    .function("SetScalarTypeToDouble", &vtkExtractHistogram2D::SetScalarTypeToDouble)
    .function("GetScalarType", &vtkExtractHistogram2D::GetScalarType)
    .function("GetMaximumBinCount", &vtkExtractHistogram2D::GetMaximumBinCount)
    .function("GetOutputHistogramImage", &vtkExtractHistogram2D::GetOutputHistogramImage, emscripten::allow_raw_pointers())
    .function("GetHistogramExtents", emscripten::optional_override([](vtkExtractHistogram2D& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetHistogramExtents()) / sizeof(double);}))
    .function("SetSwapColumns", &vtkExtractHistogram2D::SetSwapColumns)
    .function("GetSwapColumns", &vtkExtractHistogram2D::GetSwapColumns)
    .function("SwapColumnsOn", &vtkExtractHistogram2D::SwapColumnsOn)
    .function("SwapColumnsOff", &vtkExtractHistogram2D::SwapColumnsOff)
    .function("SetRowMask", &vtkExtractHistogram2D::SetRowMask, emscripten::allow_raw_pointers())
    .function("GetRowMask", &vtkExtractHistogram2D::GetRowMask, emscripten::allow_raw_pointers())
    .function("Aggregate", &vtkExtractHistogram2D::Aggregate, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersImaging_vtkExtractHistogram2D_0_2_constants) {
  emscripten::constant("HISTOGRAM_IMAGE", static_cast<int>(3));
}
