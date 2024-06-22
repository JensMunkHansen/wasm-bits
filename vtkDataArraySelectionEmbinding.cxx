// JavaScript wrapper for vtkDataArraySelection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkDataArraySelectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkDataArraySelection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArraySelection.h"

template<> void emscripten::internal::raw_destructor<vtkDataArraySelection>(vtkDataArraySelection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataArraySelection_class) {
  emscripten::class_<vtkDataArraySelection, emscripten::base<vtkObject>>("vtkDataArraySelection")
    .smart_ptr<vtkSmartPointer<vtkDataArraySelection>>("vtkSmartPointer<vtkDataArraySelection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataArraySelection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataArraySelection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataArraySelection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataArraySelection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataArraySelection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataArraySelection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataArraySelection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("EnableArray", emscripten::optional_override([](vtkDataArraySelection& self, const std::string & arg_0) -> void {  return self.EnableArray( arg_0.c_str());}))
    .function("DisableArray", emscripten::optional_override([](vtkDataArraySelection& self, const std::string & arg_0) -> void {  return self.DisableArray( arg_0.c_str());}))
    .function("ArrayIsEnabled", emscripten::optional_override([](vtkDataArraySelection& self, const std::string & arg_0) -> int {  return self.ArrayIsEnabled( arg_0.c_str());}))
    .function("ArrayExists", emscripten::optional_override([](vtkDataArraySelection& self, const std::string & arg_0) -> int {  return self.ArrayExists( arg_0.c_str());}))
    .function("EnableAllArrays", &vtkDataArraySelection::EnableAllArrays)
    .function("DisableAllArrays", &vtkDataArraySelection::DisableAllArrays)
    .function("GetNumberOfArrays", &vtkDataArraySelection::GetNumberOfArrays)
    .function("GetNumberOfArraysEnabled", &vtkDataArraySelection::GetNumberOfArraysEnabled)
    .function("GetArrayName", emscripten::optional_override([](vtkDataArraySelection& self, int arg_0) -> std::string {  return self.GetArrayName( arg_0);}))
    .function("GetArrayIndex", emscripten::optional_override([](vtkDataArraySelection& self, const std::string & arg_0) -> int {  return self.GetArrayIndex( arg_0.c_str());}))
    .function("GetEnabledArrayIndex", emscripten::optional_override([](vtkDataArraySelection& self, const std::string & arg_0) -> int {  return self.GetEnabledArrayIndex( arg_0.c_str());}))
    .function("GetArraySetting", emscripten::select_overload<int(vtkDataArraySelection&, int)>([](vtkDataArraySelection& self, int arg_0) -> int { return self.GetArraySetting( arg_0); }))
    .function("GetArraySetting", emscripten::select_overload<int(vtkDataArraySelection&, const std::string &)>([](vtkDataArraySelection& self, const std::string & arg_0) -> int { return self.GetArraySetting( arg_0.c_str()); }))
    .function("SetArraySetting", emscripten::optional_override([](vtkDataArraySelection& self, const std::string & arg_0, int arg_1) -> void {  return self.SetArraySetting( arg_0.c_str(), arg_1);}))
    .function("RemoveAllArrays", &vtkDataArraySelection::RemoveAllArrays)
    .function("AddArray", emscripten::optional_override([](vtkDataArraySelection& self, const std::string & arg_0, bool arg_1) -> int {  return self.AddArray( arg_0.c_str(), arg_1);}))
    .function("RemoveArrayByIndex", &vtkDataArraySelection::RemoveArrayByIndex)
    .function("RemoveArrayByName", emscripten::optional_override([](vtkDataArraySelection& self, const std::string & arg_0) -> void {  return self.RemoveArrayByName( arg_0.c_str());}))
    .function("CopySelections", &vtkDataArraySelection::CopySelections, emscripten::allow_raw_pointers())
    .function("Union", emscripten::select_overload<void(vtkDataArraySelection&, vtkDataArraySelection*)>([](vtkDataArraySelection& self, vtkDataArraySelection* arg_0) -> void { return self.Union( arg_0); }), emscripten::allow_raw_pointers())
    .function("Union", emscripten::select_overload<void(vtkDataArraySelection&, vtkDataArraySelection*, bool)>([](vtkDataArraySelection& self, vtkDataArraySelection* arg_0, bool arg_1) -> void { return self.Union( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetUnknownArraySetting", &vtkDataArraySelection::SetUnknownArraySetting)
    .function("GetUnknownArraySetting", &vtkDataArraySelection::GetUnknownArraySetting)
    .function("DeepCopy", &vtkDataArraySelection::DeepCopy, emscripten::allow_raw_pointers())
    .function("IsEqual", &vtkDataArraySelection::IsEqual, emscripten::allow_raw_pointers());
}
