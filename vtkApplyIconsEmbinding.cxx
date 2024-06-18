// JavaScript wrapper for vtkApplyIcons with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkApplyIconsEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkApplyIcons.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkApplyIcons.h"

template<> void emscripten::internal::raw_destructor<vtkApplyIcons>(vtkApplyIcons * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkApplyIcons_class) {
  emscripten::class_<vtkApplyIcons, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkApplyIcons")
    .smart_ptr<vtkSmartPointer<vtkApplyIcons>>("vtkSmartPointer<vtkApplyIcons>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkApplyIcons>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkApplyIcons::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkApplyIcons& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkApplyIcons::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkApplyIcons::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkApplyIcons::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkApplyIcons& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetIconType", emscripten::select_overload<void(vtkApplyIcons&, vtkVariant, int)>([](vtkApplyIcons& self, vtkVariant arg_0, int arg_1) -> void { return self.SetIconType( arg_0, arg_1); }))
    .function("SetIconType", emscripten::select_overload<void(vtkApplyIcons&, double, int)>([](vtkApplyIcons& self, double arg_0, int arg_1) -> void { return self.SetIconType( arg_0, arg_1); }))
    .function("SetIconType", emscripten::select_overload<void(vtkApplyIcons&, const std::string &, int)>([](vtkApplyIcons& self, const std::string & arg_0, int arg_1) -> void { return self.SetIconType( arg_0.c_str(), arg_1); }))
    .function("ClearAllIconTypes", &vtkApplyIcons::ClearAllIconTypes)
    .function("SetUseLookupTable", &vtkApplyIcons::SetUseLookupTable)
    .function("GetUseLookupTable", &vtkApplyIcons::GetUseLookupTable)
    .function("UseLookupTableOn", &vtkApplyIcons::UseLookupTableOn)
    .function("UseLookupTableOff", &vtkApplyIcons::UseLookupTableOff)
    .function("SetDefaultIcon", &vtkApplyIcons::SetDefaultIcon)
    .function("GetDefaultIcon", &vtkApplyIcons::GetDefaultIcon)
    .function("SetSelectedIcon", &vtkApplyIcons::SetSelectedIcon)
    .function("GetSelectedIcon", &vtkApplyIcons::GetSelectedIcon)
    .function("SetIconOutputArrayName", emscripten::optional_override([](vtkApplyIcons& self, const std::string & arg_0) -> void {  return self.SetIconOutputArrayName( arg_0.c_str());}))
    .function("GetIconOutputArrayName", emscripten::optional_override([](vtkApplyIcons& self) -> std::string {  return self.GetIconOutputArrayName();}))
    .function("SetSelectionMode", &vtkApplyIcons::SetSelectionMode)
    .function("GetSelectionMode", &vtkApplyIcons::GetSelectionMode)
    .function("SetSelectionModeToSelectedIcon", &vtkApplyIcons::SetSelectionModeToSelectedIcon)
    .function("SetSelectionModeToSelectedOffset", &vtkApplyIcons::SetSelectionModeToSelectedOffset)
    .function("SetSelectionModeToAnnotationIcon", &vtkApplyIcons::SetSelectionModeToAnnotationIcon)
    .function("SetSelectionModeToIgnoreSelection", &vtkApplyIcons::SetSelectionModeToIgnoreSelection)
    .function("SetAttributeType", &vtkApplyIcons::SetAttributeType)
    .function("GetAttributeType", &vtkApplyIcons::GetAttributeType);
}
EMSCRIPTEN_BINDINGS(vtkViewsInfovis_vtkApplyIcons_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkApplyIcons_SELECTED_ICON", vtkApplyIcons::SELECTED_ICON },
      { "vtkApplyIcons_SELECTED_OFFSET", vtkApplyIcons::SELECTED_OFFSET },
      { "vtkApplyIcons_ANNOTATION_ICON", vtkApplyIcons::ANNOTATION_ICON },
      { "vtkApplyIcons_IGNORE_SELECTION", vtkApplyIcons::IGNORE_SELECTION },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
