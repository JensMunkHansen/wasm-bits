// JavaScript wrapper for vtkMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractMapper.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkWindow.h"
#include "vtkScalarsToColors.h"
#include "vtkDataSet.h"
#include "vtkUnsignedCharArray.h"
#include "vtkHardwareSelector.h"
#include "vtkProp.h"
#include "vtkDataObject.h"
#include "vtkFloatArray.h"
#include "vtkImageData.h"
#include "vtkSelection.h"
#include "vtkSmartPointer.h"
#include "vtkMapper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkMapper_0_1_constants) {
  const struct { const char *name; int value; }
    constants[9] = {
      { "VTK_RESOLVE_OFF", 0 },
      { "VTK_RESOLVE_POLYGON_OFFSET", 1 },
      { "VTK_RESOLVE_SHIFT_ZBUFFER", 2 },
      { "VTK_GET_ARRAY_BY_ID", 0 },
      { "VTK_GET_ARRAY_BY_NAME", 1 },
      { "VTK_MATERIALMODE_DEFAULT", 0 },
      { "VTK_MATERIALMODE_AMBIENT", 1 },
      { "VTK_MATERIALMODE_DIFFUSE", 2 },
      { "VTK_MATERIALMODE_AMBIENT_AND_DIFFUSE", 3 },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkMapper>(vtkMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMapper_class) {
  emscripten::class_<vtkMapper, emscripten::base<vtkAbstractMapper3D>>("vtkMapper")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ShallowCopy", &vtkMapper::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkMapper::GetMTime)
    .function("ReleaseGraphicsResources", &vtkMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetLookupTable", &vtkMapper::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkMapper::GetLookupTable, emscripten::allow_raw_pointers())
    .function("CreateDefaultLookupTable", &vtkMapper::CreateDefaultLookupTable)
    .function("SetScalarVisibility", &vtkMapper::SetScalarVisibility)
    .function("GetScalarVisibility", &vtkMapper::GetScalarVisibility)
    .function("ScalarVisibilityOn", &vtkMapper::ScalarVisibilityOn)
    .function("ScalarVisibilityOff", &vtkMapper::ScalarVisibilityOff)
    .function("SetStatic", &vtkMapper::SetStatic)
    .function("GetStatic", &vtkMapper::GetStatic)
    .function("StaticOn", &vtkMapper::StaticOn)
    .function("StaticOff", &vtkMapper::StaticOff)
    .function("SetColorMode", &vtkMapper::SetColorMode)
    .function("GetColorMode", &vtkMapper::GetColorMode)
    .function("SetColorModeToDefault", &vtkMapper::SetColorModeToDefault)
    .function("SetColorModeToMapScalars", &vtkMapper::SetColorModeToMapScalars)
    .function("SetColorModeToDirectScalars", &vtkMapper::SetColorModeToDirectScalars)
    .function("GetColorModeAsString", emscripten::optional_override([](vtkMapper& self) -> std::string {  return self.GetColorModeAsString();}))
    .function("SetInterpolateScalarsBeforeMapping", &vtkMapper::SetInterpolateScalarsBeforeMapping)
    .function("GetInterpolateScalarsBeforeMapping", &vtkMapper::GetInterpolateScalarsBeforeMapping)
    .function("InterpolateScalarsBeforeMappingOn", &vtkMapper::InterpolateScalarsBeforeMappingOn)
    .function("InterpolateScalarsBeforeMappingOff", &vtkMapper::InterpolateScalarsBeforeMappingOff)
    .function("SetUseLookupTableScalarRange", &vtkMapper::SetUseLookupTableScalarRange)
    .function("GetUseLookupTableScalarRange", &vtkMapper::GetUseLookupTableScalarRange)
    .function("UseLookupTableScalarRangeOn", &vtkMapper::UseLookupTableScalarRangeOn)
    .function("UseLookupTableScalarRangeOff", &vtkMapper::UseLookupTableScalarRangeOff)
    .function("SetScalarRange", emscripten::select_overload<void(vtkMapper&, double, double)>([](vtkMapper& self, double arg_0, double arg_1) -> void { return self.SetScalarRange( arg_0, arg_1); }))
    .function("SetScalarMode", &vtkMapper::SetScalarMode)
    .function("GetScalarMode", &vtkMapper::GetScalarMode)
    .function("SetScalarModeToDefault", &vtkMapper::SetScalarModeToDefault)
    .function("SetScalarModeToUsePointData", &vtkMapper::SetScalarModeToUsePointData)
    .function("SetScalarModeToUseCellData", &vtkMapper::SetScalarModeToUseCellData)
    .function("SetScalarModeToUsePointFieldData", &vtkMapper::SetScalarModeToUsePointFieldData)
    .function("SetScalarModeToUseCellFieldData", &vtkMapper::SetScalarModeToUseCellFieldData)
    .function("SetScalarModeToUseFieldData", &vtkMapper::SetScalarModeToUseFieldData)
    .function("SelectColorArray", emscripten::select_overload<void(vtkMapper&, int)>([](vtkMapper& self, int arg_0) -> void { return self.SelectColorArray( arg_0); }))
    .function("SelectColorArray", emscripten::select_overload<void(vtkMapper&, const std::string &)>([](vtkMapper& self, const std::string & arg_0) -> void { return self.SelectColorArray( arg_0.c_str()); }))
    .function("SetFieldDataTupleId", &vtkMapper::SetFieldDataTupleId)
    .function("GetFieldDataTupleId", &vtkMapper::GetFieldDataTupleId)
    .function("ColorByArrayComponent", emscripten::select_overload<void(vtkMapper&, int, int)>([](vtkMapper& self, int arg_0, int arg_1) -> void { return self.ColorByArrayComponent( arg_0, arg_1); }))
    .function("ColorByArrayComponent", emscripten::select_overload<void(vtkMapper&, const std::string &, int)>([](vtkMapper& self, const std::string & arg_0, int arg_1) -> void { return self.ColorByArrayComponent( arg_0.c_str(), arg_1); }))
    .function("GetArrayName", emscripten::optional_override([](vtkMapper& self) -> std::string {  return self.GetArrayName();}))
    .function("SetArrayName", emscripten::optional_override([](vtkMapper& self, const std::string & arg_0) -> void {  return self.SetArrayName( arg_0.c_str());}))
    .function("GetArrayId", &vtkMapper::GetArrayId)
    .function("SetArrayId", &vtkMapper::SetArrayId)
    .function("GetArrayAccessMode", &vtkMapper::GetArrayAccessMode)
    .function("SetArrayAccessMode", &vtkMapper::SetArrayAccessMode)
    .function("GetArrayComponent", &vtkMapper::GetArrayComponent)
    .function("SetArrayComponent", &vtkMapper::SetArrayComponent)
    .function("GetScalarModeAsString", emscripten::optional_override([](vtkMapper& self) -> std::string {  return self.GetScalarModeAsString();}))
    .class_function("SetResolveCoincidentTopology", &vtkMapper::SetResolveCoincidentTopology)
    .class_function("GetResolveCoincidentTopology", &vtkMapper::GetResolveCoincidentTopology)
    .class_function("SetResolveCoincidentTopologyToDefault", &vtkMapper::SetResolveCoincidentTopologyToDefault)
    .class_function("SetResolveCoincidentTopologyToOff", &vtkMapper::SetResolveCoincidentTopologyToOff)
    .class_function("SetResolveCoincidentTopologyToPolygonOffset", &vtkMapper::SetResolveCoincidentTopologyToPolygonOffset)
    .class_function("SetResolveCoincidentTopologyToShiftZBuffer", &vtkMapper::SetResolveCoincidentTopologyToShiftZBuffer)
    .class_function("SetResolveCoincidentTopologyPolygonOffsetParameters", &vtkMapper::SetResolveCoincidentTopologyPolygonOffsetParameters)
    .function("SetRelativeCoincidentTopologyPolygonOffsetParameters", &vtkMapper::SetRelativeCoincidentTopologyPolygonOffsetParameters)
    .class_function("SetResolveCoincidentTopologyLineOffsetParameters", &vtkMapper::SetResolveCoincidentTopologyLineOffsetParameters)
    .function("SetRelativeCoincidentTopologyLineOffsetParameters", &vtkMapper::SetRelativeCoincidentTopologyLineOffsetParameters)
    .class_function("SetResolveCoincidentTopologyPointOffsetParameter", &vtkMapper::SetResolveCoincidentTopologyPointOffsetParameter)
    .function("SetRelativeCoincidentTopologyPointOffsetParameter", &vtkMapper::SetRelativeCoincidentTopologyPointOffsetParameter)
    .class_function("SetResolveCoincidentTopologyPolygonOffsetFaces", &vtkMapper::SetResolveCoincidentTopologyPolygonOffsetFaces)
    .class_function("GetResolveCoincidentTopologyPolygonOffsetFaces", &vtkMapper::GetResolveCoincidentTopologyPolygonOffsetFaces)
    .class_function("SetResolveCoincidentTopologyZShift", &vtkMapper::SetResolveCoincidentTopologyZShift)
    .class_function("GetResolveCoincidentTopologyZShift", &vtkMapper::GetResolveCoincidentTopologyZShift)
    .function("SetRenderTime", &vtkMapper::SetRenderTime)
    .function("GetRenderTime", &vtkMapper::GetRenderTime)
    .function("GetInput", &vtkMapper::GetInput, emscripten::allow_raw_pointers())
    .function("GetInputAsDataSet", &vtkMapper::GetInputAsDataSet, emscripten::allow_raw_pointers())
    .function("MapScalars", emscripten::select_overload<vtkUnsignedCharArray*(vtkMapper&, double)>([](vtkMapper& self, double arg_0) -> vtkUnsignedCharArray* { return self.MapScalars( arg_0); }), emscripten::allow_raw_pointers())
    .function("MapScalars", emscripten::select_overload<vtkUnsignedCharArray*(vtkMapper&, vtkDataSet*, double)>([](vtkMapper& self, vtkDataSet* arg_0, double arg_1) -> vtkUnsignedCharArray* { return self.MapScalars( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("HasOpaqueGeometry", &vtkMapper::HasOpaqueGeometry)
    .function("HasTranslucentPolygonalGeometry", &vtkMapper::HasTranslucentPolygonalGeometry)
    .function("GetSupportsSelection", &vtkMapper::GetSupportsSelection)
    .function("ProcessSelectorPixelBuffers", emscripten::optional_override([](vtkMapper& self, vtkHardwareSelector* arg_0, std::vector<unsigned int>& arg_1, vtkProp* arg_2) -> void {  return self.ProcessSelectorPixelBuffers( arg_0, arg_1, arg_2);}), emscripten::allow_raw_pointers())
    .function("CanUseTextureMapForColoring", &vtkMapper::CanUseTextureMapForColoring, emscripten::allow_raw_pointers())
    .function("ClearColorArrays", &vtkMapper::ClearColorArrays)
    .function("GetColorMapColors", &vtkMapper::GetColorMapColors, emscripten::allow_raw_pointers())
    .function("GetColorCoordinates", &vtkMapper::GetColorCoordinates, emscripten::allow_raw_pointers())
    .function("GetColorTextureMap", &vtkMapper::GetColorTextureMap, emscripten::allow_raw_pointers())
    .function("GetSelection", &vtkMapper::GetSelection, emscripten::allow_raw_pointers())
    .function("SetSelection", &vtkMapper::SetSelection, emscripten::allow_raw_pointers())
    .class_function("BuildColorTextureImage", &vtkMapper::BuildColorTextureImage, emscripten::allow_raw_pointers());
}
