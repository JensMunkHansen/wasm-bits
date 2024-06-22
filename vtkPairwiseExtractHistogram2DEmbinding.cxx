// JavaScript wrapper for vtkPairwiseExtractHistogram2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersImaging.js/vtkFiltersImaging.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersImaging.js/vtkPairwiseExtractHistogram2DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Imaging/vtkPairwiseExtractHistogram2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkExtractHistogram2D.h"
#include "vtkDataObjectCollection.h"
#include "vtkMultiBlockDataSet.h"
#include "vtkPairwiseExtractHistogram2D.h"

EMSCRIPTEN_BINDINGS(vtkFiltersImaging_vtkPairwiseExtractHistogram2D_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPairwiseExtractHistogram2D>(vtkPairwiseExtractHistogram2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPairwiseExtractHistogram2D_class) {
  using OutputIndices=vtkPairwiseExtractHistogram2D::OutputIndices;
  emscripten::class_<vtkPairwiseExtractHistogram2D, emscripten::base<vtkStatisticsAlgorithm>>("vtkPairwiseExtractHistogram2D")
    .smart_ptr<vtkSmartPointer<vtkPairwiseExtractHistogram2D>>("vtkSmartPointer<vtkPairwiseExtractHistogram2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPairwiseExtractHistogram2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPairwiseExtractHistogram2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPairwiseExtractHistogram2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPairwiseExtractHistogram2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPairwiseExtractHistogram2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPairwiseExtractHistogram2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPairwiseExtractHistogram2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfBins", emscripten::select_overload<void(vtkPairwiseExtractHistogram2D&, int, int)>([](vtkPairwiseExtractHistogram2D& self, int arg_0, int arg_1) -> void { return self.SetNumberOfBins( arg_0, arg_1); }))
    .function("SetCustomColumnRangeIndex", &vtkPairwiseExtractHistogram2D::SetCustomColumnRangeIndex)
    .function("SetCustomColumnRangeByIndex", &vtkPairwiseExtractHistogram2D::SetCustomColumnRangeByIndex)
    .function("SetCustomColumnRange", emscripten::select_overload<void(vtkPairwiseExtractHistogram2D&, int, double, double)>([](vtkPairwiseExtractHistogram2D& self, int arg_0, double arg_1, double arg_2) -> void { return self.SetCustomColumnRange( arg_0, arg_1, arg_2); }))
    .function("SetScalarType", &vtkPairwiseExtractHistogram2D::SetScalarType)
    .function("SetScalarTypeToUnsignedInt", &vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedInt)
    .function("SetScalarTypeToUnsignedLong", &vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedLong)
    .function("SetScalarTypeToUnsignedShort", &vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedShort)
    .function("SetScalarTypeToUnsignedChar", &vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedChar)
    .function("GetScalarType", &vtkPairwiseExtractHistogram2D::GetScalarType)
    .function("GetMaximumBinCount", emscripten::select_overload<double(vtkPairwiseExtractHistogram2D&, int)>([](vtkPairwiseExtractHistogram2D& self, int arg_0) -> double { return self.GetMaximumBinCount( arg_0); }))
    .function("GetMaximumBinCount", emscripten::select_overload<double(vtkPairwiseExtractHistogram2D&)>([](vtkPairwiseExtractHistogram2D& self) -> double { return self.GetMaximumBinCount(); }))
    .function("GetHistogramExtents", emscripten::optional_override([](vtkPairwiseExtractHistogram2D& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetHistogramExtents( arg_0)) / sizeof(double);}))
    .function("GetOutputHistogramImage", &vtkPairwiseExtractHistogram2D::GetOutputHistogramImage, emscripten::allow_raw_pointers())
    .function("GetHistogramFilter", &vtkPairwiseExtractHistogram2D::GetHistogramFilter, emscripten::allow_raw_pointers())
    .function("Aggregate", &vtkPairwiseExtractHistogram2D::Aggregate, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersImaging_vtkPairwiseExtractHistogram2D_0_2_constants) {
  emscripten::constant("HISTOGRAM_IMAGE", static_cast<int>(3));
}
