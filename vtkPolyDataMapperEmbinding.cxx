// JavaScript wrapper for vtkPolyDataMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkPolyDataMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkPolyDataMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkPolyData.h"
#include "vtkInformationVector.h"
#include "vtkInformation.h"
#include "vtkAbstractMapper.h"
#include "vtkPolyDataMapper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkPolyDataMapper_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPolyDataMapper>(vtkPolyDataMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataMapper_class) {
  using ShiftScaleMethodType=vtkPolyDataMapper::ShiftScaleMethodType;
  emscripten::class_<vtkPolyDataMapper, emscripten::base<vtkMapper>>("vtkPolyDataMapper")
    .smart_ptr<vtkSmartPointer<vtkPolyDataMapper>>("vtkSmartPointer<vtkPolyDataMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolyDataMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderPiece", &vtkPolyDataMapper::RenderPiece, emscripten::allow_raw_pointers())
    .function("Render", &vtkPolyDataMapper::Render, emscripten::allow_raw_pointers())
    .function("SetInputData", &vtkPolyDataMapper::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkPolyDataMapper::GetInput, emscripten::allow_raw_pointers())
    .function("Update", emscripten::select_overload<void(vtkPolyDataMapper&, int)>([](vtkPolyDataMapper& self, int arg_0) -> void { return self.Update( arg_0); }))
    .function("Update", emscripten::select_overload<int(vtkPolyDataMapper&, vtkInformation*)>([](vtkPolyDataMapper& self, vtkInformation* arg_0) -> int { return self.Update( arg_0); }), emscripten::allow_raw_pointers())
    .function("Update", emscripten::select_overload<void(vtkPolyDataMapper&)>([](vtkPolyDataMapper& self) -> void { return self.Update(); }))
    .function("Update", emscripten::select_overload<int(vtkPolyDataMapper&, int, vtkInformationVector*)>([](vtkPolyDataMapper& self, int arg_0, vtkInformationVector* arg_1) -> int { return self.Update( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetPiece", &vtkPolyDataMapper::SetPiece)
    .function("GetPiece", &vtkPolyDataMapper::GetPiece)
    .function("SetNumberOfPieces", &vtkPolyDataMapper::SetNumberOfPieces)
    .function("GetNumberOfPieces", &vtkPolyDataMapper::GetNumberOfPieces)
    .function("SetNumberOfSubPieces", &vtkPolyDataMapper::SetNumberOfSubPieces)
    .function("GetNumberOfSubPieces", &vtkPolyDataMapper::GetNumberOfSubPieces)
    .function("SetGhostLevel", &vtkPolyDataMapper::SetGhostLevel)
    .function("GetGhostLevel", &vtkPolyDataMapper::GetGhostLevel)
    .function("SetSeamlessU", &vtkPolyDataMapper::SetSeamlessU)
    .function("GetSeamlessU", &vtkPolyDataMapper::GetSeamlessU)
    .function("SeamlessUOn", &vtkPolyDataMapper::SeamlessUOn)
    .function("SeamlessUOff", &vtkPolyDataMapper::SeamlessUOff)
    .function("SetSeamlessV", &vtkPolyDataMapper::SetSeamlessV)
    .function("GetSeamlessV", &vtkPolyDataMapper::GetSeamlessV)
    .function("SeamlessVOn", &vtkPolyDataMapper::SeamlessVOn)
    .function("SeamlessVOff", &vtkPolyDataMapper::SeamlessVOff)
    .function("ShallowCopy", &vtkPolyDataMapper::ShallowCopy, emscripten::allow_raw_pointers())
    .function("MapDataArrayToVertexAttribute", emscripten::optional_override([](vtkPolyDataMapper& self, const std::string & arg_0, const std::string & arg_1, int arg_2, int arg_3) -> void {  return self.MapDataArrayToVertexAttribute( arg_0.c_str(), arg_1.c_str(), arg_2, arg_3);}))
    .function("MapDataArrayToMultiTextureAttribute", emscripten::optional_override([](vtkPolyDataMapper& self, const std::string & arg_0, const std::string & arg_1, int arg_2, int arg_3) -> void {  return self.MapDataArrayToMultiTextureAttribute( arg_0.c_str(), arg_1.c_str(), arg_2, arg_3);}))
    .function("RemoveVertexAttributeMapping", emscripten::optional_override([](vtkPolyDataMapper& self, const std::string & arg_0) -> void {  return self.RemoveVertexAttributeMapping( arg_0.c_str());}))
    .function("RemoveAllVertexAttributeMappings", &vtkPolyDataMapper::RemoveAllVertexAttributeMappings)
    .function("SetVBOShiftScaleMethod", &vtkPolyDataMapper::SetVBOShiftScaleMethod)
    .function("GetVBOShiftScaleMethod", &vtkPolyDataMapper::GetVBOShiftScaleMethod)
    .function("SetPauseShiftScale", &vtkPolyDataMapper::SetPauseShiftScale)
    .function("GetPauseShiftScale", &vtkPolyDataMapper::GetPauseShiftScale)
    .function("PauseShiftScaleOn", &vtkPolyDataMapper::PauseShiftScaleOn)
    .function("PauseShiftScaleOff", &vtkPolyDataMapper::PauseShiftScaleOff);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkPolyDataMapper_0_2_constants) {
    typedef vtkPolyDataMapper::ShiftScaleMethodType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkPolyDataMapper_ShiftScaleMethodType_DISABLE_SHIFT_SCALE", vtkPolyDataMapper::DISABLE_SHIFT_SCALE },
      { "vtkPolyDataMapper_ShiftScaleMethodType_AUTO_SHIFT_SCALE", vtkPolyDataMapper::AUTO_SHIFT_SCALE },
      { "vtkPolyDataMapper_ShiftScaleMethodType_ALWAYS_AUTO_SHIFT_SCALE", vtkPolyDataMapper::ALWAYS_AUTO_SHIFT_SCALE },
      { "vtkPolyDataMapper_ShiftScaleMethodType_MANUAL_SHIFT_SCALE", vtkPolyDataMapper::MANUAL_SHIFT_SCALE },
      { "vtkPolyDataMapper_ShiftScaleMethodType_AUTO_SHIFT", vtkPolyDataMapper::AUTO_SHIFT },
      { "vtkPolyDataMapper_ShiftScaleMethodType_NEAR_PLANE_SHIFT_SCALE", vtkPolyDataMapper::NEAR_PLANE_SHIFT_SCALE },
      { "vtkPolyDataMapper_ShiftScaleMethodType_FOCAL_POINT_SHIFT_SCALE", vtkPolyDataMapper::FOCAL_POINT_SHIFT_SCALE },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
