// JavaScript wrapper for vtkHardwareSelector with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkHardwareSelectorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkHardwareSelector.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkSelection.h"
#include "vtkProp.h"
#include "vtkHardwareSelector.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkHardwareSelector_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkHardwareSelector>(vtkHardwareSelector * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHardwareSelector_class) {
  using PassTypes=vtkHardwareSelector::PassTypes;
  emscripten::class_<vtkHardwareSelector, emscripten::base<vtkObject>>("vtkHardwareSelector")
    .smart_ptr<vtkSmartPointer<vtkHardwareSelector>>("vtkSmartPointer<vtkHardwareSelector>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHardwareSelector>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHardwareSelector::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHardwareSelector& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHardwareSelector::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHardwareSelector::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHardwareSelector::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHardwareSelector& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRenderer", &vtkHardwareSelector::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetRenderer", &vtkHardwareSelector::GetRenderer, emscripten::allow_raw_pointers())
    .function("SetArea", emscripten::select_overload<void(vtkHardwareSelector&, unsigned int, unsigned int, unsigned int, unsigned int)>([](vtkHardwareSelector& self, unsigned int arg_0, unsigned int arg_1, unsigned int arg_2, unsigned int arg_3) -> void { return self.SetArea( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetFieldAssociation", &vtkHardwareSelector::SetFieldAssociation)
    .function("GetFieldAssociation", &vtkHardwareSelector::GetFieldAssociation)
    .function("SetUseProcessIdFromData", &vtkHardwareSelector::SetUseProcessIdFromData)
    .function("GetUseProcessIdFromData", &vtkHardwareSelector::GetUseProcessIdFromData)
    .function("Select", &vtkHardwareSelector::Select, emscripten::allow_raw_pointers())
    .function("CaptureBuffers", &vtkHardwareSelector::CaptureBuffers)
    .function("ClearBuffers", &vtkHardwareSelector::ClearBuffers)
    .function("GetRawPixelBuffer", emscripten::optional_override([](vtkHardwareSelector& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetRawPixelBuffer( arg_0)) / sizeof(unsigned char);}))
    .function("GetPixelBuffer", emscripten::optional_override([](vtkHardwareSelector& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPixelBuffer( arg_0)) / sizeof(unsigned char);}))
    .function("RenderCompositeIndex", &vtkHardwareSelector::RenderCompositeIndex)
    .function("UpdateMaximumCellId", &vtkHardwareSelector::UpdateMaximumCellId)
    .function("UpdateMaximumPointId", &vtkHardwareSelector::UpdateMaximumPointId)
    .function("RenderProcessId", &vtkHardwareSelector::RenderProcessId)
    .function("GetActorPassOnly", &vtkHardwareSelector::GetActorPassOnly)
    .function("SetActorPassOnly", &vtkHardwareSelector::SetActorPassOnly)
    .function("GetCaptureZValues", &vtkHardwareSelector::GetCaptureZValues)
    .function("SetCaptureZValues", &vtkHardwareSelector::SetCaptureZValues)
    .function("BeginRenderProp", emscripten::select_overload<void(vtkHardwareSelector&)>([](vtkHardwareSelector& self) -> void { return self.BeginRenderProp(); }))
    .function("EndRenderProp", emscripten::select_overload<void(vtkHardwareSelector&)>([](vtkHardwareSelector& self) -> void { return self.EndRenderProp(); }))
    .function("SetProcessID", &vtkHardwareSelector::SetProcessID)
    .function("GetProcessID", &vtkHardwareSelector::GetProcessID)
    .function("SetPropColorValue", emscripten::select_overload<void(vtkHardwareSelector&, float, float, float)>([](vtkHardwareSelector& self, float arg_0, float arg_1, float arg_2) -> void { return self.SetPropColorValue( arg_0, arg_1, arg_2); }))
    .function("SetPropColorValue", emscripten::select_overload<void(vtkHardwareSelector&, int)>([](vtkHardwareSelector& self, int arg_0) -> void { return self.SetPropColorValue( arg_0); }))
    .function("GetCurrentPass", &vtkHardwareSelector::GetCurrentPass)
    .function("GenerateSelection", emscripten::select_overload<vtkSelection*(vtkHardwareSelector&)>([](vtkHardwareSelector& self) -> vtkSelection* { return self.GenerateSelection(); }), emscripten::allow_raw_pointers())
    .function("GenerateSelection", emscripten::select_overload<vtkSelection*(vtkHardwareSelector&, unsigned int, unsigned int, unsigned int, unsigned int)>([](vtkHardwareSelector& self, unsigned int arg_0, unsigned int arg_1, unsigned int arg_2, unsigned int arg_3) -> vtkSelection* { return self.GenerateSelection( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("GeneratePolygonSelection", emscripten::optional_override([](vtkHardwareSelector& self, std::uintptr_t arg_0, int arg_1) -> vtkSelection* {  return self.GeneratePolygonSelection(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1);}), emscripten::allow_raw_pointers())
    .function("GetPropFromID", &vtkHardwareSelector::GetPropFromID, emscripten::allow_raw_pointers())
    .function("PassTypeToString", &vtkHardwareSelector::PassTypeToString)
    .function("SavePixelBuffer", &vtkHardwareSelector::SavePixelBuffer)
    .function("HasHighCellIds", &vtkHardwareSelector::HasHighCellIds)
    .function("HasHighPointIds", &vtkHardwareSelector::HasHighPointIds);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkHardwareSelector_0_2_constants) {
    typedef vtkHardwareSelector::PassTypes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[9] = {
      { "vtkHardwareSelector_PassTypes_ACTOR_PASS", vtkHardwareSelector::ACTOR_PASS },
      { "vtkHardwareSelector_PassTypes_COMPOSITE_INDEX_PASS", vtkHardwareSelector::COMPOSITE_INDEX_PASS },
      { "vtkHardwareSelector_PassTypes_POINT_ID_LOW24", vtkHardwareSelector::POINT_ID_LOW24 },
      { "vtkHardwareSelector_PassTypes_POINT_ID_HIGH24", vtkHardwareSelector::POINT_ID_HIGH24 },
      { "vtkHardwareSelector_PassTypes_PROCESS_PASS", vtkHardwareSelector::PROCESS_PASS },
      { "vtkHardwareSelector_PassTypes_CELL_ID_LOW24", vtkHardwareSelector::CELL_ID_LOW24 },
      { "vtkHardwareSelector_PassTypes_CELL_ID_HIGH24", vtkHardwareSelector::CELL_ID_HIGH24 },
      { "vtkHardwareSelector_PassTypes_MAX_KNOWN_PASS", vtkHardwareSelector::MAX_KNOWN_PASS },
      { "vtkHardwareSelector_PassTypes_MIN_KNOWN_PASS", vtkHardwareSelector::MIN_KNOWN_PASS },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
