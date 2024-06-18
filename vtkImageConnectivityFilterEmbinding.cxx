// JavaScript wrapper for vtkImageConnectivityFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImagingMorphological.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImageConnectivityFilterEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Morphological/vtkImageConnectivityFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataSet.h"
#include "vtkImageStencilData.h"
#include "vtkIdTypeArray.h"
#include "vtkIntArray.h"
#include "vtkImageConnectivityFilter.h"

EMSCRIPTEN_BINDINGS(vtkImagingMorphological_vtkImageConnectivityFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkImageConnectivityFilter>(vtkImageConnectivityFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageConnectivityFilter_class) {
  using LabelModeEnum=vtkImageConnectivityFilter::LabelModeEnum;
  using ExtractionModeEnum=vtkImageConnectivityFilter::ExtractionModeEnum;
  emscripten::class_<vtkImageConnectivityFilter, emscripten::base<vtkImageAlgorithm>>("vtkImageConnectivityFilter")
    .smart_ptr<vtkSmartPointer<vtkImageConnectivityFilter>>("vtkSmartPointer<vtkImageConnectivityFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageConnectivityFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageConnectivityFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageConnectivityFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageConnectivityFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageConnectivityFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageConnectivityFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageConnectivityFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSeedConnection", &vtkImageConnectivityFilter::SetSeedConnection, emscripten::allow_raw_pointers())
    .function("GetSeedConnection", &vtkImageConnectivityFilter::GetSeedConnection, emscripten::allow_raw_pointers())
    .function("SetSeedData", &vtkImageConnectivityFilter::SetSeedData, emscripten::allow_raw_pointers())
    .function("SetStencilConnection", &vtkImageConnectivityFilter::SetStencilConnection, emscripten::allow_raw_pointers())
    .function("GetStencilConnection", &vtkImageConnectivityFilter::GetStencilConnection, emscripten::allow_raw_pointers())
    .function("SetStencilData", &vtkImageConnectivityFilter::SetStencilData, emscripten::allow_raw_pointers())
    .function("SetLabelScalarTypeToUnsignedChar", &vtkImageConnectivityFilter::SetLabelScalarTypeToUnsignedChar)
    .function("SetLabelScalarTypeToShort", &vtkImageConnectivityFilter::SetLabelScalarTypeToShort)
    .function("SetLabelScalarTypeToUnsignedShort", &vtkImageConnectivityFilter::SetLabelScalarTypeToUnsignedShort)
    .function("SetLabelScalarTypeToInt", &vtkImageConnectivityFilter::SetLabelScalarTypeToInt)
    .function("GetLabelScalarTypeAsString", emscripten::optional_override([](vtkImageConnectivityFilter& self) -> std::string {  return self.GetLabelScalarTypeAsString();}))
    .function("SetLabelScalarType", &vtkImageConnectivityFilter::SetLabelScalarType)
    .function("GetLabelScalarType", &vtkImageConnectivityFilter::GetLabelScalarType)
    .function("SetLabelModeToSeedScalar", &vtkImageConnectivityFilter::SetLabelModeToSeedScalar)
    .function("SetLabelModeToConstantValue", &vtkImageConnectivityFilter::SetLabelModeToConstantValue)
    .function("SetLabelModeToSizeRank", &vtkImageConnectivityFilter::SetLabelModeToSizeRank)
    .function("GetLabelModeAsString", emscripten::optional_override([](vtkImageConnectivityFilter& self) -> std::string {  return self.GetLabelModeAsString();}))
    .function("SetLabelMode", &vtkImageConnectivityFilter::SetLabelMode)
    .function("GetLabelMode", &vtkImageConnectivityFilter::GetLabelMode)
    .function("SetExtractionModeToSeededRegions", &vtkImageConnectivityFilter::SetExtractionModeToSeededRegions)
    .function("SetExtractionModeToAllRegions", &vtkImageConnectivityFilter::SetExtractionModeToAllRegions)
    .function("SetExtractionModeToLargestRegion", &vtkImageConnectivityFilter::SetExtractionModeToLargestRegion)
    .function("GetExtractionModeAsString", emscripten::optional_override([](vtkImageConnectivityFilter& self) -> std::string {  return self.GetExtractionModeAsString();}))
    .function("SetExtractionMode", &vtkImageConnectivityFilter::SetExtractionMode)
    .function("GetExtractionMode", &vtkImageConnectivityFilter::GetExtractionMode)
    .function("SetLabelConstantValue", &vtkImageConnectivityFilter::SetLabelConstantValue)
    .function("GetLabelConstantValue", &vtkImageConnectivityFilter::GetLabelConstantValue)
    .function("GetNumberOfExtractedRegions", &vtkImageConnectivityFilter::GetNumberOfExtractedRegions)
    .function("GetExtractedRegionLabels", &vtkImageConnectivityFilter::GetExtractedRegionLabels, emscripten::allow_raw_pointers())
    .function("GetExtractedRegionSizes", &vtkImageConnectivityFilter::GetExtractedRegionSizes, emscripten::allow_raw_pointers())
    .function("GetExtractedRegionSeedIds", &vtkImageConnectivityFilter::GetExtractedRegionSeedIds, emscripten::allow_raw_pointers())
    .function("GetExtractedRegionExtents", &vtkImageConnectivityFilter::GetExtractedRegionExtents, emscripten::allow_raw_pointers())
    .function("SetGenerateRegionExtents", &vtkImageConnectivityFilter::SetGenerateRegionExtents)
    .function("GenerateRegionExtentsOn", &vtkImageConnectivityFilter::GenerateRegionExtentsOn)
    .function("GenerateRegionExtentsOff", &vtkImageConnectivityFilter::GenerateRegionExtentsOff)
    .function("GetGenerateRegionExtents", &vtkImageConnectivityFilter::GetGenerateRegionExtents)
    .function("SetSizeRange", emscripten::select_overload<void(vtkImageConnectivityFilter&, int, int)>([](vtkImageConnectivityFilter& self, int arg_0, int arg_1) -> void { return self.SetSizeRange( arg_0, arg_1); }))
    .function("SetScalarRange", emscripten::select_overload<void(vtkImageConnectivityFilter&, double, double)>([](vtkImageConnectivityFilter& self, double arg_0, double arg_1) -> void { return self.SetScalarRange( arg_0, arg_1); }))
    .function("SetActiveComponent", &vtkImageConnectivityFilter::SetActiveComponent)
    .function("GetActiveComponent", &vtkImageConnectivityFilter::GetActiveComponent);
}
EMSCRIPTEN_BINDINGS(vtkImagingMorphological_vtkImageConnectivityFilter_0_2_constants) {
    typedef vtkImageConnectivityFilter::LabelModeEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkImageConnectivityFilter_LabelModeEnum_SeedScalar", vtkImageConnectivityFilter::SeedScalar },
      { "vtkImageConnectivityFilter_LabelModeEnum_ConstantValue", vtkImageConnectivityFilter::ConstantValue },
      { "vtkImageConnectivityFilter_LabelModeEnum_SizeRank", vtkImageConnectivityFilter::SizeRank },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkImagingMorphological_vtkImageConnectivityFilter_1_2_constants) {
    typedef vtkImageConnectivityFilter::ExtractionModeEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkImageConnectivityFilter_ExtractionModeEnum_SeededRegions", vtkImageConnectivityFilter::SeededRegions },
      { "vtkImageConnectivityFilter_ExtractionModeEnum_AllRegions", vtkImageConnectivityFilter::AllRegions },
      { "vtkImageConnectivityFilter_ExtractionModeEnum_LargestRegion", vtkImageConnectivityFilter::LargestRegion },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
