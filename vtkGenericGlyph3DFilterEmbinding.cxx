// JavaScript wrapper for vtkGenericGlyph3DFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkFiltersGeneric.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkGenericGlyph3DFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Generic/vtkGenericGlyph3DFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkGenericGlyph3DFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneric_vtkGenericGlyph3DFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[13] = {
      { "VTK_SCALE_BY_SCALAR", 0 },
      { "VTK_SCALE_BY_VECTOR", 1 },
      { "VTK_SCALE_BY_VECTORCOMPONENTS", 2 },
      { "VTK_DATA_SCALING_OFF", 3 },
      { "VTK_COLOR_BY_SCALE", 0 },
      { "VTK_COLOR_BY_SCALAR", 1 },
      { "VTK_COLOR_BY_VECTOR", 2 },
      { "VTK_USE_VECTOR", 0 },
      { "VTK_USE_NORMAL", 1 },
      { "VTK_VECTOR_ROTATION_OFF", 2 },
      { "VTK_INDEXING_OFF", 0 },
      { "VTK_INDEXING_BY_SCALAR", 1 },
      { "VTK_INDEXING_BY_VECTOR", 2 },
  };
  for (int c = 0; c < 13; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkGenericGlyph3DFilter>(vtkGenericGlyph3DFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericGlyph3DFilter_class) {
  emscripten::class_<vtkGenericGlyph3DFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkGenericGlyph3DFilter")
    .smart_ptr<vtkSmartPointer<vtkGenericGlyph3DFilter>>("vtkSmartPointer<vtkGenericGlyph3DFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGenericGlyph3DFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericGlyph3DFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericGlyph3DFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericGlyph3DFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericGlyph3DFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericGlyph3DFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericGlyph3DFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceData", emscripten::select_overload<void(vtkGenericGlyph3DFilter&, vtkPolyData*)>([](vtkGenericGlyph3DFilter& self, vtkPolyData* arg_0) -> void { return self.SetSourceData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetSourceData", emscripten::select_overload<void(vtkGenericGlyph3DFilter&, int, vtkPolyData*)>([](vtkGenericGlyph3DFilter& self, int arg_0, vtkPolyData* arg_1) -> void { return self.SetSourceData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetSource", &vtkGenericGlyph3DFilter::GetSource, emscripten::allow_raw_pointers())
    .function("SetScaling", &vtkGenericGlyph3DFilter::SetScaling)
    .function("ScalingOn", &vtkGenericGlyph3DFilter::ScalingOn)
    .function("ScalingOff", &vtkGenericGlyph3DFilter::ScalingOff)
    .function("GetScaling", &vtkGenericGlyph3DFilter::GetScaling)
    .function("SetScaleMode", &vtkGenericGlyph3DFilter::SetScaleMode)
    .function("GetScaleMode", &vtkGenericGlyph3DFilter::GetScaleMode)
    .function("SetScaleModeToScaleByScalar", &vtkGenericGlyph3DFilter::SetScaleModeToScaleByScalar)
    .function("SetScaleModeToScaleByVector", &vtkGenericGlyph3DFilter::SetScaleModeToScaleByVector)
    .function("SetScaleModeToScaleByVectorComponents", &vtkGenericGlyph3DFilter::SetScaleModeToScaleByVectorComponents)
    .function("SetScaleModeToDataScalingOff", &vtkGenericGlyph3DFilter::SetScaleModeToDataScalingOff)
    .function("GetScaleModeAsString", emscripten::optional_override([](vtkGenericGlyph3DFilter& self) -> std::string {  return self.GetScaleModeAsString();}))
    .function("SetColorMode", &vtkGenericGlyph3DFilter::SetColorMode)
    .function("GetColorMode", &vtkGenericGlyph3DFilter::GetColorMode)
    .function("SetColorModeToColorByScale", &vtkGenericGlyph3DFilter::SetColorModeToColorByScale)
    .function("SetColorModeToColorByScalar", &vtkGenericGlyph3DFilter::SetColorModeToColorByScalar)
    .function("SetColorModeToColorByVector", &vtkGenericGlyph3DFilter::SetColorModeToColorByVector)
    .function("GetColorModeAsString", emscripten::optional_override([](vtkGenericGlyph3DFilter& self) -> std::string {  return self.GetColorModeAsString();}))
    .function("SetScaleFactor", &vtkGenericGlyph3DFilter::SetScaleFactor)
    .function("GetScaleFactor", &vtkGenericGlyph3DFilter::GetScaleFactor)
    .function("SetRange", emscripten::select_overload<void(vtkGenericGlyph3DFilter&, double, double)>([](vtkGenericGlyph3DFilter& self, double arg_0, double arg_1) -> void { return self.SetRange( arg_0, arg_1); }))
    .function("SetOrient", &vtkGenericGlyph3DFilter::SetOrient)
    .function("OrientOn", &vtkGenericGlyph3DFilter::OrientOn)
    .function("OrientOff", &vtkGenericGlyph3DFilter::OrientOff)
    .function("GetOrient", &vtkGenericGlyph3DFilter::GetOrient)
    .function("SetClamping", &vtkGenericGlyph3DFilter::SetClamping)
    .function("ClampingOn", &vtkGenericGlyph3DFilter::ClampingOn)
    .function("ClampingOff", &vtkGenericGlyph3DFilter::ClampingOff)
    .function("GetClamping", &vtkGenericGlyph3DFilter::GetClamping)
    .function("SetVectorMode", &vtkGenericGlyph3DFilter::SetVectorMode)
    .function("GetVectorMode", &vtkGenericGlyph3DFilter::GetVectorMode)
    .function("SetVectorModeToUseVector", &vtkGenericGlyph3DFilter::SetVectorModeToUseVector)
    .function("SetVectorModeToUseNormal", &vtkGenericGlyph3DFilter::SetVectorModeToUseNormal)
    .function("SetVectorModeToVectorRotationOff", &vtkGenericGlyph3DFilter::SetVectorModeToVectorRotationOff)
    .function("GetVectorModeAsString", emscripten::optional_override([](vtkGenericGlyph3DFilter& self) -> std::string {  return self.GetVectorModeAsString();}))
    .function("SetIndexMode", &vtkGenericGlyph3DFilter::SetIndexMode)
    .function("GetIndexMode", &vtkGenericGlyph3DFilter::GetIndexMode)
    .function("SetIndexModeToScalar", &vtkGenericGlyph3DFilter::SetIndexModeToScalar)
    .function("SetIndexModeToVector", &vtkGenericGlyph3DFilter::SetIndexModeToVector)
    .function("SetIndexModeToOff", &vtkGenericGlyph3DFilter::SetIndexModeToOff)
    .function("GetIndexModeAsString", emscripten::optional_override([](vtkGenericGlyph3DFilter& self) -> std::string {  return self.GetIndexModeAsString();}))
    .function("SetGeneratePointIds", &vtkGenericGlyph3DFilter::SetGeneratePointIds)
    .function("GetGeneratePointIds", &vtkGenericGlyph3DFilter::GetGeneratePointIds)
    .function("GeneratePointIdsOn", &vtkGenericGlyph3DFilter::GeneratePointIdsOn)
    .function("GeneratePointIdsOff", &vtkGenericGlyph3DFilter::GeneratePointIdsOff)
    .function("SetPointIdsName", emscripten::optional_override([](vtkGenericGlyph3DFilter& self, const std::string & arg_0) -> void {  return self.SetPointIdsName( arg_0.c_str());}))
    .function("GetPointIdsName", emscripten::optional_override([](vtkGenericGlyph3DFilter& self) -> std::string {  return self.GetPointIdsName();}))
    .function("GetInputScalarsSelection", emscripten::optional_override([](vtkGenericGlyph3DFilter& self) -> std::string {  return self.GetInputScalarsSelection();}))
    .function("SelectInputScalars", emscripten::optional_override([](vtkGenericGlyph3DFilter& self, const std::string & arg_0) -> void {  return self.SelectInputScalars( arg_0.c_str());}))
    .function("GetInputVectorsSelection", emscripten::optional_override([](vtkGenericGlyph3DFilter& self) -> std::string {  return self.GetInputVectorsSelection();}))
    .function("SelectInputVectors", emscripten::optional_override([](vtkGenericGlyph3DFilter& self, const std::string & arg_0) -> void {  return self.SelectInputVectors( arg_0.c_str());}))
    .function("GetInputNormalsSelection", emscripten::optional_override([](vtkGenericGlyph3DFilter& self) -> std::string {  return self.GetInputNormalsSelection();}))
    .function("SelectInputNormals", emscripten::optional_override([](vtkGenericGlyph3DFilter& self, const std::string & arg_0) -> void {  return self.SelectInputNormals( arg_0.c_str());}));
}
