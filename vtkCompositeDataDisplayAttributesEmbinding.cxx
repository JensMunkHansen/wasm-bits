// JavaScript wrapper for vtkCompositeDataDisplayAttributes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCompositeDataDisplayAttributesEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCompositeDataDisplayAttributes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkColor.h"
#include "vtkVector.h"
#include "vtkSmartPointer.h"
#include "vtkSerializer.h"
#include "vtkDeserializer.h"
#include "vtkCompositeDataDisplayAttributes.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeDataDisplayAttributes>(vtkCompositeDataDisplayAttributes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeDataDisplayAttributes_class) {
  emscripten::class_<vtkCompositeDataDisplayAttributes, emscripten::base<vtkObject>>("vtkCompositeDataDisplayAttributes")
    .smart_ptr<vtkSmartPointer<vtkCompositeDataDisplayAttributes>>("vtkSmartPointer<vtkCompositeDataDisplayAttributes>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCompositeDataDisplayAttributes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataDisplayAttributes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeDataDisplayAttributes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeDataDisplayAttributes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeDataDisplayAttributes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataDisplayAttributes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeDataDisplayAttributes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("HasBlockVisibilities", &vtkCompositeDataDisplayAttributes::HasBlockVisibilities)
    .function("SetBlockVisibility", &vtkCompositeDataDisplayAttributes::SetBlockVisibility, emscripten::allow_raw_pointers())
    .function("GetBlockVisibility", &vtkCompositeDataDisplayAttributes::GetBlockVisibility, emscripten::allow_raw_pointers())
    .function("HasBlockVisibility", &vtkCompositeDataDisplayAttributes::HasBlockVisibility, emscripten::allow_raw_pointers())
    .function("RemoveBlockVisibility", &vtkCompositeDataDisplayAttributes::RemoveBlockVisibility, emscripten::allow_raw_pointers())
    .function("RemoveBlockVisibilities", &vtkCompositeDataDisplayAttributes::RemoveBlockVisibilities)
    .function("HasBlockPickabilities", &vtkCompositeDataDisplayAttributes::HasBlockPickabilities)
    .function("SetBlockPickability", &vtkCompositeDataDisplayAttributes::SetBlockPickability, emscripten::allow_raw_pointers())
    .function("GetBlockPickability", &vtkCompositeDataDisplayAttributes::GetBlockPickability, emscripten::allow_raw_pointers())
    .function("HasBlockPickability", &vtkCompositeDataDisplayAttributes::HasBlockPickability, emscripten::allow_raw_pointers())
    .function("RemoveBlockPickability", &vtkCompositeDataDisplayAttributes::RemoveBlockPickability, emscripten::allow_raw_pointers())
    .function("RemoveBlockPickabilities", &vtkCompositeDataDisplayAttributes::RemoveBlockPickabilities)
    .function("SetBlockScalarVisibility", &vtkCompositeDataDisplayAttributes::SetBlockScalarVisibility, emscripten::allow_raw_pointers())
    .function("GetBlockScalarVisibility", &vtkCompositeDataDisplayAttributes::GetBlockScalarVisibility, emscripten::allow_raw_pointers())
    .function("HasBlockScalarVisibility", &vtkCompositeDataDisplayAttributes::HasBlockScalarVisibility, emscripten::allow_raw_pointers())
    .function("HasBlockScalarVisibilities", &vtkCompositeDataDisplayAttributes::HasBlockScalarVisibilities)
    .function("RemoveBlockScalarVisibility", &vtkCompositeDataDisplayAttributes::RemoveBlockScalarVisibility, emscripten::allow_raw_pointers())
    .function("RemoveBlockScalarVisibilities", &vtkCompositeDataDisplayAttributes::RemoveBlockScalarVisibilities)
    .function("SetBlockUseLookupTableScalarRange", &vtkCompositeDataDisplayAttributes::SetBlockUseLookupTableScalarRange, emscripten::allow_raw_pointers())
    .function("GetBlockUseLookupTableScalarRange", &vtkCompositeDataDisplayAttributes::GetBlockUseLookupTableScalarRange, emscripten::allow_raw_pointers())
    .function("HasBlockUseLookupTableScalarRange", &vtkCompositeDataDisplayAttributes::HasBlockUseLookupTableScalarRange, emscripten::allow_raw_pointers())
    .function("HasBlockUseLookupTableScalarRanges", &vtkCompositeDataDisplayAttributes::HasBlockUseLookupTableScalarRanges)
    .function("RemoveBlockUseLookupTableScalarRange", &vtkCompositeDataDisplayAttributes::RemoveBlockUseLookupTableScalarRange, emscripten::allow_raw_pointers())
    .function("RemoveBlockUseLookupTableScalarRanges", &vtkCompositeDataDisplayAttributes::RemoveBlockUseLookupTableScalarRanges)
    .function("SetBlockInterpolateScalarsBeforeMapping", &vtkCompositeDataDisplayAttributes::SetBlockInterpolateScalarsBeforeMapping, emscripten::allow_raw_pointers())
    .function("GetBlockInterpolateScalarsBeforeMapping", &vtkCompositeDataDisplayAttributes::GetBlockInterpolateScalarsBeforeMapping, emscripten::allow_raw_pointers())
    .function("HasBlockInterpolateScalarsBeforeMapping", &vtkCompositeDataDisplayAttributes::HasBlockInterpolateScalarsBeforeMapping, emscripten::allow_raw_pointers())
    .function("HasBlockInterpolateScalarsBeforeMappings", &vtkCompositeDataDisplayAttributes::HasBlockInterpolateScalarsBeforeMappings)
    .function("RemoveBlockInterpolateScalarsBeforeMapping", &vtkCompositeDataDisplayAttributes::RemoveBlockInterpolateScalarsBeforeMapping, emscripten::allow_raw_pointers())
    .function("RemoveBlockInterpolateScalarsBeforeMappings", &vtkCompositeDataDisplayAttributes::RemoveBlockInterpolateScalarsBeforeMappings)
    .function("GetBlockColor", emscripten::select_overload<vtkColor3d(vtkCompositeDataDisplayAttributes&, vtkDataObject*)>([](vtkCompositeDataDisplayAttributes& self, vtkDataObject* arg_0) -> vtkColor3d { return self.GetBlockColor( arg_0); }), emscripten::allow_raw_pointers())
    .function("HasBlockColors", &vtkCompositeDataDisplayAttributes::HasBlockColors)
    .function("HasBlockColor", &vtkCompositeDataDisplayAttributes::HasBlockColor, emscripten::allow_raw_pointers())
    .function("RemoveBlockColor", &vtkCompositeDataDisplayAttributes::RemoveBlockColor, emscripten::allow_raw_pointers())
    .function("RemoveBlockColors", &vtkCompositeDataDisplayAttributes::RemoveBlockColors)
    .function("SetBlockOpacity", &vtkCompositeDataDisplayAttributes::SetBlockOpacity, emscripten::allow_raw_pointers())
    .function("GetBlockOpacity", &vtkCompositeDataDisplayAttributes::GetBlockOpacity, emscripten::allow_raw_pointers())
    .function("HasBlockOpacities", &vtkCompositeDataDisplayAttributes::HasBlockOpacities)
    .function("HasBlockOpacity", &vtkCompositeDataDisplayAttributes::HasBlockOpacity, emscripten::allow_raw_pointers())
    .function("RemoveBlockOpacity", &vtkCompositeDataDisplayAttributes::RemoveBlockOpacity, emscripten::allow_raw_pointers())
    .function("RemoveBlockOpacities", &vtkCompositeDataDisplayAttributes::RemoveBlockOpacities)
    .function("SetBlockMaterial", &vtkCompositeDataDisplayAttributes::SetBlockMaterial, emscripten::allow_raw_pointers())
    .function("GetBlockMaterial", &vtkCompositeDataDisplayAttributes::GetBlockMaterial, emscripten::allow_raw_pointers())
    .function("HasBlockMaterials", &vtkCompositeDataDisplayAttributes::HasBlockMaterials)
    .function("HasBlockMaterial", &vtkCompositeDataDisplayAttributes::HasBlockMaterial, emscripten::allow_raw_pointers())
    .function("RemoveBlockMaterial", &vtkCompositeDataDisplayAttributes::RemoveBlockMaterial, emscripten::allow_raw_pointers())
    .function("RemoveBlockMaterials", &vtkCompositeDataDisplayAttributes::RemoveBlockMaterials)
    .function("SetBlockColorMode", &vtkCompositeDataDisplayAttributes::SetBlockColorMode, emscripten::allow_raw_pointers())
    .function("GetBlockColorMode", &vtkCompositeDataDisplayAttributes::GetBlockColorMode, emscripten::allow_raw_pointers())
    .function("HasBlockColorMode", &vtkCompositeDataDisplayAttributes::HasBlockColorMode, emscripten::allow_raw_pointers())
    .function("HasBlockColorModes", &vtkCompositeDataDisplayAttributes::HasBlockColorModes)
    .function("RemoveBlockColorMode", &vtkCompositeDataDisplayAttributes::RemoveBlockColorMode, emscripten::allow_raw_pointers())
    .function("RemoveBlockColorModes", &vtkCompositeDataDisplayAttributes::RemoveBlockColorModes)
    .function("SetBlockScalarMode", &vtkCompositeDataDisplayAttributes::SetBlockScalarMode, emscripten::allow_raw_pointers())
    .function("GetBlockScalarMode", &vtkCompositeDataDisplayAttributes::GetBlockScalarMode, emscripten::allow_raw_pointers())
    .function("HasBlockScalarMode", &vtkCompositeDataDisplayAttributes::HasBlockScalarMode, emscripten::allow_raw_pointers())
    .function("HasBlockScalarModes", &vtkCompositeDataDisplayAttributes::HasBlockScalarModes)
    .function("RemoveBlockScalarMode", &vtkCompositeDataDisplayAttributes::RemoveBlockScalarMode, emscripten::allow_raw_pointers())
    .function("RemoveBlockScalarModes", &vtkCompositeDataDisplayAttributes::RemoveBlockScalarModes)
    .function("SetBlockArrayAccessMode", &vtkCompositeDataDisplayAttributes::SetBlockArrayAccessMode, emscripten::allow_raw_pointers())
    .function("GetBlockArrayAccessMode", &vtkCompositeDataDisplayAttributes::GetBlockArrayAccessMode, emscripten::allow_raw_pointers())
    .function("HasBlockArrayAccessMode", &vtkCompositeDataDisplayAttributes::HasBlockArrayAccessMode, emscripten::allow_raw_pointers())
    .function("HasBlockArrayAccessModes", &vtkCompositeDataDisplayAttributes::HasBlockArrayAccessModes)
    .function("RemoveBlockArrayAccessMode", &vtkCompositeDataDisplayAttributes::RemoveBlockArrayAccessMode, emscripten::allow_raw_pointers())
    .function("RemoveBlockArrayAccessModes", &vtkCompositeDataDisplayAttributes::RemoveBlockArrayAccessModes)
    .function("SetBlockArrayComponent", &vtkCompositeDataDisplayAttributes::SetBlockArrayComponent, emscripten::allow_raw_pointers())
    .function("GetBlockArrayComponent", &vtkCompositeDataDisplayAttributes::GetBlockArrayComponent, emscripten::allow_raw_pointers())
    .function("HasBlockArrayComponent", &vtkCompositeDataDisplayAttributes::HasBlockArrayComponent, emscripten::allow_raw_pointers())
    .function("HasBlockArrayComponents", &vtkCompositeDataDisplayAttributes::HasBlockArrayComponents)
    .function("RemoveBlockArrayComponent", &vtkCompositeDataDisplayAttributes::RemoveBlockArrayComponent, emscripten::allow_raw_pointers())
    .function("RemoveBlockArrayComponents", &vtkCompositeDataDisplayAttributes::RemoveBlockArrayComponents)
    .function("SetBlockArrayId", &vtkCompositeDataDisplayAttributes::SetBlockArrayId, emscripten::allow_raw_pointers())
    .function("GetBlockArrayId", &vtkCompositeDataDisplayAttributes::GetBlockArrayId, emscripten::allow_raw_pointers())
    .function("HasBlockArrayId", &vtkCompositeDataDisplayAttributes::HasBlockArrayId, emscripten::allow_raw_pointers())
    .function("HasBlockArrayIds", &vtkCompositeDataDisplayAttributes::HasBlockArrayIds)
    .function("RemoveBlockArrayId", &vtkCompositeDataDisplayAttributes::RemoveBlockArrayId, emscripten::allow_raw_pointers())
    .function("RemoveBlockArrayIds", &vtkCompositeDataDisplayAttributes::RemoveBlockArrayIds)
    .function("SetBlockScalarRange", &vtkCompositeDataDisplayAttributes::SetBlockScalarRange, emscripten::allow_raw_pointers())
    .function("GetBlockScalarRange", &vtkCompositeDataDisplayAttributes::GetBlockScalarRange, emscripten::allow_raw_pointers())
    .function("HasBlockScalarRange", &vtkCompositeDataDisplayAttributes::HasBlockScalarRange, emscripten::allow_raw_pointers())
    .function("HasBlockScalarRanges", &vtkCompositeDataDisplayAttributes::HasBlockScalarRanges)
    .function("RemoveBlockScalarRange", &vtkCompositeDataDisplayAttributes::RemoveBlockScalarRange, emscripten::allow_raw_pointers())
    .function("RemoveBlockScalarRanges", &vtkCompositeDataDisplayAttributes::RemoveBlockScalarRanges)
    .function("SetBlockArrayName", &vtkCompositeDataDisplayAttributes::SetBlockArrayName, emscripten::allow_raw_pointers())
    .function("GetBlockArrayName", &vtkCompositeDataDisplayAttributes::GetBlockArrayName, emscripten::allow_raw_pointers())
    .function("HasBlockArrayName", &vtkCompositeDataDisplayAttributes::HasBlockArrayName, emscripten::allow_raw_pointers())
    .function("HasBlockArrayNames", &vtkCompositeDataDisplayAttributes::HasBlockArrayNames)
    .function("RemoveBlockArrayName", &vtkCompositeDataDisplayAttributes::RemoveBlockArrayName, emscripten::allow_raw_pointers())
    .function("RemoveBlockArrayNames", &vtkCompositeDataDisplayAttributes::RemoveBlockArrayNames)
    .function("SetBlockFieldDataTupleId", &vtkCompositeDataDisplayAttributes::SetBlockFieldDataTupleId, emscripten::allow_raw_pointers())
    .function("GetBlockFieldDataTupleId", &vtkCompositeDataDisplayAttributes::GetBlockFieldDataTupleId, emscripten::allow_raw_pointers())
    .function("HasBlockFieldDataTupleId", &vtkCompositeDataDisplayAttributes::HasBlockFieldDataTupleId, emscripten::allow_raw_pointers())
    .function("HasBlockFieldDataTupleIds", &vtkCompositeDataDisplayAttributes::HasBlockFieldDataTupleIds)
    .function("RemoveBlockFieldDataTupleId", &vtkCompositeDataDisplayAttributes::RemoveBlockFieldDataTupleId, emscripten::allow_raw_pointers())
    .function("RemoveBlockFieldDataTupleIds", &vtkCompositeDataDisplayAttributes::RemoveBlockFieldDataTupleIds)
    .function("SetBlockLookupTable", &vtkCompositeDataDisplayAttributes::SetBlockLookupTable, emscripten::allow_raw_pointers())
    .function("GetBlockLookupTable", &vtkCompositeDataDisplayAttributes::GetBlockLookupTable, emscripten::allow_raw_pointers())
    .function("HasBlockLookupTable", &vtkCompositeDataDisplayAttributes::HasBlockLookupTable, emscripten::allow_raw_pointers())
    .function("HasBlockLookupTables", &vtkCompositeDataDisplayAttributes::HasBlockLookupTables)
    .function("RemoveBlockLookupTable", &vtkCompositeDataDisplayAttributes::RemoveBlockLookupTable, emscripten::allow_raw_pointers())
    .function("RemoveBlockLookupTables", &vtkCompositeDataDisplayAttributes::RemoveBlockLookupTables)
    .class_function("DataObjectFromIndex", &vtkCompositeDataDisplayAttributes::DataObjectFromIndex, emscripten::allow_raw_pointers());
}
