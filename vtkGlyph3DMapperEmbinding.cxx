// JavaScript wrapper for vtkGlyph3DMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkGlyph3DMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkGlyph3DMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkPolyData.h"
#include "vtkDataObjectTree.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkCompositeDataDisplayAttributes.h"
#include "vtkGlyph3DMapper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkGlyph3DMapper_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkGlyph3DMapper>(vtkGlyph3DMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGlyph3DMapper_class) {
  using ArrayIndexes=vtkGlyph3DMapper::ArrayIndexes;
  using ScaleModes=vtkGlyph3DMapper::ScaleModes;
  using OrientationModes=vtkGlyph3DMapper::OrientationModes;
  emscripten::class_<vtkGlyph3DMapper, emscripten::base<vtkMapper>>("vtkGlyph3DMapper")
    .smart_ptr<vtkSmartPointer<vtkGlyph3DMapper>>("vtkSmartPointer<vtkGlyph3DMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGlyph3DMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGlyph3DMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGlyph3DMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGlyph3DMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGlyph3DMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGlyph3DMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGlyph3DMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceConnection", emscripten::select_overload<void(vtkGlyph3DMapper&, int, vtkAlgorithmOutput*)>([](vtkGlyph3DMapper& self, int arg_0, vtkAlgorithmOutput* arg_1) -> void { return self.SetSourceConnection( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetSourceConnection", emscripten::select_overload<void(vtkGlyph3DMapper&, vtkAlgorithmOutput*)>([](vtkGlyph3DMapper& self, vtkAlgorithmOutput* arg_0) -> void { return self.SetSourceConnection( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", &vtkGlyph3DMapper::SetInputData, emscripten::allow_raw_pointers())
    .function("SetSourceData", emscripten::select_overload<void(vtkGlyph3DMapper&, int, vtkPolyData*)>([](vtkGlyph3DMapper& self, int arg_0, vtkPolyData* arg_1) -> void { return self.SetSourceData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetSourceData", emscripten::select_overload<void(vtkGlyph3DMapper&, vtkPolyData*)>([](vtkGlyph3DMapper& self, vtkPolyData* arg_0) -> void { return self.SetSourceData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetSourceTableTree", &vtkGlyph3DMapper::SetSourceTableTree, emscripten::allow_raw_pointers())
    .function("GetSource", emscripten::select_overload<vtkPolyData*(vtkGlyph3DMapper&, int)>([](vtkGlyph3DMapper& self, int arg_0) -> vtkPolyData* { return self.GetSource( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetSourceTableTree", &vtkGlyph3DMapper::GetSourceTableTree, emscripten::allow_raw_pointers())
    .function("SetScaling", &vtkGlyph3DMapper::SetScaling)
    .function("ScalingOn", &vtkGlyph3DMapper::ScalingOn)
    .function("ScalingOff", &vtkGlyph3DMapper::ScalingOff)
    .function("GetScaling", &vtkGlyph3DMapper::GetScaling)
    .function("SetScaleMode", &vtkGlyph3DMapper::SetScaleMode)
    .function("GetScaleMode", &vtkGlyph3DMapper::GetScaleMode)
    .function("SetScaleFactor", &vtkGlyph3DMapper::SetScaleFactor)
    .function("GetScaleFactor", &vtkGlyph3DMapper::GetScaleFactor)
    .function("SetScaleModeToScaleByMagnitude", &vtkGlyph3DMapper::SetScaleModeToScaleByMagnitude)
    .function("SetScaleModeToScaleByVectorComponents", &vtkGlyph3DMapper::SetScaleModeToScaleByVectorComponents)
    .function("SetScaleModeToNoDataScaling", &vtkGlyph3DMapper::SetScaleModeToNoDataScaling)
    .function("GetScaleModeAsString", emscripten::optional_override([](vtkGlyph3DMapper& self) -> std::string {  return self.GetScaleModeAsString();}))
    .function("SetRange", emscripten::select_overload<void(vtkGlyph3DMapper&, double, double)>([](vtkGlyph3DMapper& self, double arg_0, double arg_1) -> void { return self.SetRange( arg_0, arg_1); }))
    .function("SetOrient", &vtkGlyph3DMapper::SetOrient)
    .function("GetOrient", &vtkGlyph3DMapper::GetOrient)
    .function("OrientOn", &vtkGlyph3DMapper::OrientOn)
    .function("OrientOff", &vtkGlyph3DMapper::OrientOff)
    .function("SetOrientationMode", &vtkGlyph3DMapper::SetOrientationMode)
    .function("GetOrientationModeMinValue", &vtkGlyph3DMapper::GetOrientationModeMinValue)
    .function("GetOrientationModeMaxValue", &vtkGlyph3DMapper::GetOrientationModeMaxValue)
    .function("GetOrientationMode", &vtkGlyph3DMapper::GetOrientationMode)
    .function("SetOrientationModeToDirection", &vtkGlyph3DMapper::SetOrientationModeToDirection)
    .function("SetOrientationModeToRotation", &vtkGlyph3DMapper::SetOrientationModeToRotation)
    .function("SetOrientationModeToQuaternion", &vtkGlyph3DMapper::SetOrientationModeToQuaternion)
    .function("GetOrientationModeAsString", emscripten::optional_override([](vtkGlyph3DMapper& self) -> std::string {  return self.GetOrientationModeAsString();}))
    .function("SetClamping", &vtkGlyph3DMapper::SetClamping)
    .function("GetClamping", &vtkGlyph3DMapper::GetClamping)
    .function("ClampingOn", &vtkGlyph3DMapper::ClampingOn)
    .function("ClampingOff", &vtkGlyph3DMapper::ClampingOff)
    .function("SetSourceIndexing", &vtkGlyph3DMapper::SetSourceIndexing)
    .function("GetSourceIndexing", &vtkGlyph3DMapper::GetSourceIndexing)
    .function("SourceIndexingOn", &vtkGlyph3DMapper::SourceIndexingOn)
    .function("SourceIndexingOff", &vtkGlyph3DMapper::SourceIndexingOff)
    .function("SetUseSourceTableTree", &vtkGlyph3DMapper::SetUseSourceTableTree)
    .function("GetUseSourceTableTree", &vtkGlyph3DMapper::GetUseSourceTableTree)
    .function("UseSourceTableTreeOn", &vtkGlyph3DMapper::UseSourceTableTreeOn)
    .function("UseSourceTableTreeOff", &vtkGlyph3DMapper::UseSourceTableTreeOff)
    .function("SetUseSelectionIds", &vtkGlyph3DMapper::SetUseSelectionIds)
    .function("UseSelectionIdsOn", &vtkGlyph3DMapper::UseSelectionIdsOn)
    .function("UseSelectionIdsOff", &vtkGlyph3DMapper::UseSelectionIdsOff)
    .function("GetUseSelectionIds", &vtkGlyph3DMapper::GetUseSelectionIds)
    .function("Render", &vtkGlyph3DMapper::Render, emscripten::allow_raw_pointers())
    .function("SetMasking", &vtkGlyph3DMapper::SetMasking)
    .function("GetMasking", &vtkGlyph3DMapper::GetMasking)
    .function("MaskingOn", &vtkGlyph3DMapper::MaskingOn)
    .function("MaskingOff", &vtkGlyph3DMapper::MaskingOff)
    .function("SetMaskArray", emscripten::select_overload<void(vtkGlyph3DMapper&, const std::string &)>([](vtkGlyph3DMapper& self, const std::string & arg_0) -> void { return self.SetMaskArray( arg_0.c_str()); }))
    .function("SetMaskArray", emscripten::select_overload<void(vtkGlyph3DMapper&, int)>([](vtkGlyph3DMapper& self, int arg_0) -> void { return self.SetMaskArray( arg_0); }))
    .function("SetOrientationArray", emscripten::select_overload<void(vtkGlyph3DMapper&, const std::string &)>([](vtkGlyph3DMapper& self, const std::string & arg_0) -> void { return self.SetOrientationArray( arg_0.c_str()); }))
    .function("SetOrientationArray", emscripten::select_overload<void(vtkGlyph3DMapper&, int)>([](vtkGlyph3DMapper& self, int arg_0) -> void { return self.SetOrientationArray( arg_0); }))
    .function("SetScaleArray", emscripten::select_overload<void(vtkGlyph3DMapper&, const std::string &)>([](vtkGlyph3DMapper& self, const std::string & arg_0) -> void { return self.SetScaleArray( arg_0.c_str()); }))
    .function("SetScaleArray", emscripten::select_overload<void(vtkGlyph3DMapper&, int)>([](vtkGlyph3DMapper& self, int arg_0) -> void { return self.SetScaleArray( arg_0); }))
    .function("SetSourceIndexArray", emscripten::select_overload<void(vtkGlyph3DMapper&, const std::string &)>([](vtkGlyph3DMapper& self, const std::string & arg_0) -> void { return self.SetSourceIndexArray( arg_0.c_str()); }))
    .function("SetSourceIndexArray", emscripten::select_overload<void(vtkGlyph3DMapper&, int)>([](vtkGlyph3DMapper& self, int arg_0) -> void { return self.SetSourceIndexArray( arg_0); }))
    .function("SetSelectionIdArray", emscripten::select_overload<void(vtkGlyph3DMapper&, const std::string &)>([](vtkGlyph3DMapper& self, const std::string & arg_0) -> void { return self.SetSelectionIdArray( arg_0.c_str()); }))
    .function("SetSelectionIdArray", emscripten::select_overload<void(vtkGlyph3DMapper&, int)>([](vtkGlyph3DMapper& self, int arg_0) -> void { return self.SetSelectionIdArray( arg_0); }))
    .function("SetSelectionColorId", &vtkGlyph3DMapper::SetSelectionColorId)
    .function("GetSelectionColorId", &vtkGlyph3DMapper::GetSelectionColorId)
    .function("SetBlockAttributes", &vtkGlyph3DMapper::SetBlockAttributes, emscripten::allow_raw_pointers())
    .function("GetBlockAttributes", &vtkGlyph3DMapper::GetBlockAttributes, emscripten::allow_raw_pointers())
    .function("SetCullingAndLOD", &vtkGlyph3DMapper::SetCullingAndLOD)
    .function("GetCullingAndLOD", &vtkGlyph3DMapper::GetCullingAndLOD)
    .function("GetMaxNumberOfLOD", &vtkGlyph3DMapper::GetMaxNumberOfLOD)
    .function("SetNumberOfLOD", &vtkGlyph3DMapper::SetNumberOfLOD)
    .function("SetLODDistanceAndTargetReduction", &vtkGlyph3DMapper::SetLODDistanceAndTargetReduction)
    .function("SetLODColoring", &vtkGlyph3DMapper::SetLODColoring)
    .function("GetLODColoring", &vtkGlyph3DMapper::GetLODColoring)
    .function("GetSupportsSelection", &vtkGlyph3DMapper::GetSupportsSelection);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkGlyph3DMapper_0_2_constants) {
    typedef vtkGlyph3DMapper::ArrayIndexes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkGlyph3DMapper_ArrayIndexes_SCALE", vtkGlyph3DMapper::SCALE },
      { "vtkGlyph3DMapper_ArrayIndexes_SOURCE_INDEX", vtkGlyph3DMapper::SOURCE_INDEX },
      { "vtkGlyph3DMapper_ArrayIndexes_MASK", vtkGlyph3DMapper::MASK },
      { "vtkGlyph3DMapper_ArrayIndexes_ORIENTATION", vtkGlyph3DMapper::ORIENTATION },
      { "vtkGlyph3DMapper_ArrayIndexes_SELECTIONID", vtkGlyph3DMapper::SELECTIONID },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkGlyph3DMapper_1_2_constants) {
    typedef vtkGlyph3DMapper::ScaleModes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkGlyph3DMapper_ScaleModes_NO_DATA_SCALING", vtkGlyph3DMapper::NO_DATA_SCALING },
      { "vtkGlyph3DMapper_ScaleModes_SCALE_BY_MAGNITUDE", vtkGlyph3DMapper::SCALE_BY_MAGNITUDE },
      { "vtkGlyph3DMapper_ScaleModes_SCALE_BY_COMPONENTS", vtkGlyph3DMapper::SCALE_BY_COMPONENTS },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkGlyph3DMapper_2_2_constants) {
    typedef vtkGlyph3DMapper::OrientationModes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkGlyph3DMapper_OrientationModes_DIRECTION", vtkGlyph3DMapper::DIRECTION },
      { "vtkGlyph3DMapper_OrientationModes_ROTATION", vtkGlyph3DMapper::ROTATION },
      { "vtkGlyph3DMapper_OrientationModes_QUATERNION", vtkGlyph3DMapper::QUATERNION },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
