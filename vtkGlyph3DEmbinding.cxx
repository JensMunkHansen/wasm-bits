// JavaScript wrapper for vtkGlyph3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkGlyph3DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkGlyph3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataSet.h"
#include "vtkTransform.h"
#include "vtkGlyph3D.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkGlyph3D_0_1_constants) {
  const struct { const char *name; int value; }
    constants[14] = {
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
      { "VTK_FOLLOW_CAMERA_DIRECTION", 3 },
      { "VTK_INDEXING_OFF", 0 },
      { "VTK_INDEXING_BY_SCALAR", 1 },
      { "VTK_INDEXING_BY_VECTOR", 2 },
  };
  for (int c = 0; c < 14; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkGlyph3D>(vtkGlyph3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGlyph3D_class) {
  emscripten::class_<vtkGlyph3D, emscripten::base<vtkPolyDataAlgorithm>>("vtkGlyph3D")
    .smart_ptr<vtkSmartPointer<vtkGlyph3D>>("vtkSmartPointer<vtkGlyph3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGlyph3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGlyph3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGlyph3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGlyph3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGlyph3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGlyph3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGlyph3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceData", emscripten::select_overload<void(vtkGlyph3D&, vtkPolyData*)>([](vtkGlyph3D& self, vtkPolyData* arg_0) -> void { return self.SetSourceData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetSourceData", emscripten::select_overload<void(vtkGlyph3D&, int, vtkPolyData*)>([](vtkGlyph3D& self, int arg_0, vtkPolyData* arg_1) -> void { return self.SetSourceData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetSourceConnection", emscripten::select_overload<void(vtkGlyph3D&, int, vtkAlgorithmOutput*)>([](vtkGlyph3D& self, int arg_0, vtkAlgorithmOutput* arg_1) -> void { return self.SetSourceConnection( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetSourceConnection", emscripten::select_overload<void(vtkGlyph3D&, vtkAlgorithmOutput*)>([](vtkGlyph3D& self, vtkAlgorithmOutput* arg_0) -> void { return self.SetSourceConnection( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetSource", emscripten::select_overload<vtkPolyData*(vtkGlyph3D&, int)>([](vtkGlyph3D& self, int arg_0) -> vtkPolyData* { return self.GetSource( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetScaling", &vtkGlyph3D::SetScaling)
    .function("ScalingOn", &vtkGlyph3D::ScalingOn)
    .function("ScalingOff", &vtkGlyph3D::ScalingOff)
    .function("GetScaling", &vtkGlyph3D::GetScaling)
    .function("SetScaleMode", &vtkGlyph3D::SetScaleMode)
    .function("GetScaleMode", &vtkGlyph3D::GetScaleMode)
    .function("SetScaleModeToScaleByScalar", &vtkGlyph3D::SetScaleModeToScaleByScalar)
    .function("SetScaleModeToScaleByVector", &vtkGlyph3D::SetScaleModeToScaleByVector)
    .function("SetScaleModeToScaleByVectorComponents", &vtkGlyph3D::SetScaleModeToScaleByVectorComponents)
    .function("SetScaleModeToDataScalingOff", &vtkGlyph3D::SetScaleModeToDataScalingOff)
    .function("GetScaleModeAsString", emscripten::optional_override([](vtkGlyph3D& self) -> std::string {  return self.GetScaleModeAsString();}))
    .function("SetColorMode", &vtkGlyph3D::SetColorMode)
    .function("GetColorMode", &vtkGlyph3D::GetColorMode)
    .function("SetColorModeToColorByScale", &vtkGlyph3D::SetColorModeToColorByScale)
    .function("SetColorModeToColorByScalar", &vtkGlyph3D::SetColorModeToColorByScalar)
    .function("SetColorModeToColorByVector", &vtkGlyph3D::SetColorModeToColorByVector)
    .function("GetColorModeAsString", emscripten::optional_override([](vtkGlyph3D& self) -> std::string {  return self.GetColorModeAsString();}))
    .function("SetScaleFactor", &vtkGlyph3D::SetScaleFactor)
    .function("GetScaleFactor", &vtkGlyph3D::GetScaleFactor)
    .function("SetRange", emscripten::select_overload<void(vtkGlyph3D&, double, double)>([](vtkGlyph3D& self, double arg_0, double arg_1) -> void { return self.SetRange( arg_0, arg_1); }))
    .function("SetOrient", &vtkGlyph3D::SetOrient)
    .function("OrientOn", &vtkGlyph3D::OrientOn)
    .function("OrientOff", &vtkGlyph3D::OrientOff)
    .function("GetOrient", &vtkGlyph3D::GetOrient)
    .function("SetClamping", &vtkGlyph3D::SetClamping)
    .function("ClampingOn", &vtkGlyph3D::ClampingOn)
    .function("ClampingOff", &vtkGlyph3D::ClampingOff)
    .function("GetClamping", &vtkGlyph3D::GetClamping)
    .function("SetVectorMode", &vtkGlyph3D::SetVectorMode)
    .function("GetVectorMode", &vtkGlyph3D::GetVectorMode)
    .function("SetVectorModeToUseVector", &vtkGlyph3D::SetVectorModeToUseVector)
    .function("SetVectorModeToUseNormal", &vtkGlyph3D::SetVectorModeToUseNormal)
    .function("SetVectorModeToVectorRotationOff", &vtkGlyph3D::SetVectorModeToVectorRotationOff)
    .function("SetVectorModeToFollowCameraDirection", &vtkGlyph3D::SetVectorModeToFollowCameraDirection)
    .function("GetVectorModeAsString", emscripten::optional_override([](vtkGlyph3D& self) -> std::string {  return self.GetVectorModeAsString();}))
    .function("SetFollowedCameraPosition", emscripten::optional_override([](vtkGlyph3D& self, std::uintptr_t arg_0) -> void {  return self.SetFollowedCameraPosition(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetFollowedCameraViewUp", emscripten::optional_override([](vtkGlyph3D& self, std::uintptr_t arg_0) -> void {  return self.SetFollowedCameraViewUp(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetIndexMode", &vtkGlyph3D::SetIndexMode)
    .function("GetIndexMode", &vtkGlyph3D::GetIndexMode)
    .function("SetIndexModeToScalar", &vtkGlyph3D::SetIndexModeToScalar)
    .function("SetIndexModeToVector", &vtkGlyph3D::SetIndexModeToVector)
    .function("SetIndexModeToOff", &vtkGlyph3D::SetIndexModeToOff)
    .function("GetIndexModeAsString", emscripten::optional_override([](vtkGlyph3D& self) -> std::string {  return self.GetIndexModeAsString();}))
    .function("SetGeneratePointIds", &vtkGlyph3D::SetGeneratePointIds)
    .function("GetGeneratePointIds", &vtkGlyph3D::GetGeneratePointIds)
    .function("GeneratePointIdsOn", &vtkGlyph3D::GeneratePointIdsOn)
    .function("GeneratePointIdsOff", &vtkGlyph3D::GeneratePointIdsOff)
    .function("SetPointIdsName", emscripten::optional_override([](vtkGlyph3D& self, const std::string & arg_0) -> void {  return self.SetPointIdsName( arg_0.c_str());}))
    .function("GetPointIdsName", emscripten::optional_override([](vtkGlyph3D& self) -> std::string {  return self.GetPointIdsName();}))
    .function("SetFillCellData", &vtkGlyph3D::SetFillCellData)
    .function("GetFillCellData", &vtkGlyph3D::GetFillCellData)
    .function("FillCellDataOn", &vtkGlyph3D::FillCellDataOn)
    .function("FillCellDataOff", &vtkGlyph3D::FillCellDataOff)
    .function("IsPointVisible", &vtkGlyph3D::IsPointVisible, emscripten::allow_raw_pointers())
    .function("SetSourceTransform", &vtkGlyph3D::SetSourceTransform, emscripten::allow_raw_pointers())
    .function("GetSourceTransform", &vtkGlyph3D::GetSourceTransform, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkGlyph3D::GetMTime)
    .function("SetOutputPointsPrecision", &vtkGlyph3D::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkGlyph3D::GetOutputPointsPrecision);
}
