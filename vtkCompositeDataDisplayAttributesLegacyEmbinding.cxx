// JavaScript wrapper for vtkCompositeDataDisplayAttributesLegacy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCompositeDataDisplayAttributesLegacyEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCompositeDataDisplayAttributesLegacy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkColor.h"
#include "vtkDataObject.h"
#include "vtkCompositeDataDisplayAttributesLegacy.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeDataDisplayAttributesLegacy>(vtkCompositeDataDisplayAttributesLegacy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeDataDisplayAttributesLegacy_class) {
  emscripten::class_<vtkCompositeDataDisplayAttributesLegacy, emscripten::base<vtkObject>>("vtkCompositeDataDisplayAttributesLegacy")
    .smart_ptr<vtkSmartPointer<vtkCompositeDataDisplayAttributesLegacy>>("vtkSmartPointer<vtkCompositeDataDisplayAttributesLegacy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCompositeDataDisplayAttributesLegacy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataDisplayAttributesLegacy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeDataDisplayAttributesLegacy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeDataDisplayAttributesLegacy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeDataDisplayAttributesLegacy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataDisplayAttributesLegacy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeDataDisplayAttributesLegacy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("HasBlockVisibilities", &vtkCompositeDataDisplayAttributesLegacy::HasBlockVisibilities)
    .function("SetBlockVisibility", &vtkCompositeDataDisplayAttributesLegacy::SetBlockVisibility)
    .function("GetBlockVisibility", &vtkCompositeDataDisplayAttributesLegacy::GetBlockVisibility)
    .function("HasBlockVisibility", &vtkCompositeDataDisplayAttributesLegacy::HasBlockVisibility)
    .function("RemoveBlockVisibility", &vtkCompositeDataDisplayAttributesLegacy::RemoveBlockVisibility)
    .function("RemoveBlockVisibilities", &vtkCompositeDataDisplayAttributesLegacy::RemoveBlockVisibilities)
    .function("HasBlockPickabilities", &vtkCompositeDataDisplayAttributesLegacy::HasBlockPickabilities)
    .function("SetBlockPickability", &vtkCompositeDataDisplayAttributesLegacy::SetBlockPickability)
    .function("GetBlockPickability", &vtkCompositeDataDisplayAttributesLegacy::GetBlockPickability)
    .function("HasBlockPickability", &vtkCompositeDataDisplayAttributesLegacy::HasBlockPickability)
    .function("RemoveBlockPickability", &vtkCompositeDataDisplayAttributesLegacy::RemoveBlockPickability)
    .function("RemoveBlockPickabilities", &vtkCompositeDataDisplayAttributesLegacy::RemoveBlockPickabilities)
    .function("GetBlockColor", emscripten::select_overload<vtkColor3d(vtkCompositeDataDisplayAttributesLegacy&, unsigned int)>([](vtkCompositeDataDisplayAttributesLegacy& self, unsigned int arg_0) -> vtkColor3d { return self.GetBlockColor( arg_0); }))
    .function("HasBlockColors", &vtkCompositeDataDisplayAttributesLegacy::HasBlockColors)
    .function("HasBlockColor", &vtkCompositeDataDisplayAttributesLegacy::HasBlockColor)
    .function("RemoveBlockColor", &vtkCompositeDataDisplayAttributesLegacy::RemoveBlockColor)
    .function("RemoveBlockColors", &vtkCompositeDataDisplayAttributesLegacy::RemoveBlockColors)
    .function("SetBlockOpacity", &vtkCompositeDataDisplayAttributesLegacy::SetBlockOpacity)
    .function("GetBlockOpacity", &vtkCompositeDataDisplayAttributesLegacy::GetBlockOpacity)
    .function("HasBlockOpacities", &vtkCompositeDataDisplayAttributesLegacy::HasBlockOpacities)
    .function("HasBlockOpacity", &vtkCompositeDataDisplayAttributesLegacy::HasBlockOpacity)
    .function("RemoveBlockOpacity", &vtkCompositeDataDisplayAttributesLegacy::RemoveBlockOpacity)
    .function("RemoveBlockOpacities", &vtkCompositeDataDisplayAttributesLegacy::RemoveBlockOpacities);
}
