// JavaScript wrapper for vtkAppendSelection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkAppendSelectionEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkAppendSelection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSelection.h"
#include "vtkAlgorithmOutput.h"
#include "vtkAppendSelection.h"

template<> void emscripten::internal::raw_destructor<vtkAppendSelection>(vtkAppendSelection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAppendSelection_class) {
  emscripten::class_<vtkAppendSelection, emscripten::base<vtkSelectionAlgorithm>>("vtkAppendSelection")
    .smart_ptr<vtkSmartPointer<vtkAppendSelection>>("vtkSmartPointer<vtkAppendSelection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAppendSelection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendSelection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAppendSelection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAppendSelection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAppendSelection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendSelection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAppendSelection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetExpression", emscripten::optional_override([](vtkAppendSelection& self, const std::string & arg_0) -> void {  return self.SetExpression( arg_0.c_str());}))
    .function("GetExpression", emscripten::optional_override([](vtkAppendSelection& self) -> std::string {  return self.GetExpression();}))
    .function("SetInverse", &vtkAppendSelection::SetInverse)
    .function("InverseOn", &vtkAppendSelection::InverseOn)
    .function("InverseOff", &vtkAppendSelection::InverseOff)
    .function("GetInverse", &vtkAppendSelection::GetInverse)
    .function("SetInputName", emscripten::optional_override([](vtkAppendSelection& self, int arg_0, const std::string & arg_1) -> void {  return self.SetInputName( arg_0, arg_1.c_str());}))
    .function("GetInputName", emscripten::optional_override([](vtkAppendSelection& self, int arg_0) -> std::string {  return self.GetInputName( arg_0);}))
    .function("RemoveAllInputNames", &vtkAppendSelection::RemoveAllInputNames)
    .function("SetInputColor", &vtkAppendSelection::SetInputColor)
    .function("GetInputColor", emscripten::optional_override([](vtkAppendSelection& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetInputColor( arg_0)) / sizeof(double);}))
    .function("RemoveAllInputColors", &vtkAppendSelection::RemoveAllInputColors)
    .function("SetUserManagedInputs", &vtkAppendSelection::SetUserManagedInputs)
    .function("GetUserManagedInputs", &vtkAppendSelection::GetUserManagedInputs)
    .function("UserManagedInputsOn", &vtkAppendSelection::UserManagedInputsOn)
    .function("UserManagedInputsOff", &vtkAppendSelection::UserManagedInputsOff)
    .function("AddInputData", emscripten::select_overload<void(vtkAppendSelection&, vtkSelection*)>([](vtkAppendSelection& self, vtkSelection* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveInputData", &vtkAppendSelection::RemoveInputData, emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkSelection*(vtkAppendSelection&, int)>([](vtkAppendSelection& self, int arg_0) -> vtkSelection* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkSelection*(vtkAppendSelection&)>([](vtkAppendSelection& self) -> vtkSelection* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("SetNumberOfInputs", &vtkAppendSelection::SetNumberOfInputs)
    .function("SetInputConnectionByNumber", &vtkAppendSelection::SetInputConnectionByNumber, emscripten::allow_raw_pointers())
    .function("SetAppendByUnion", &vtkAppendSelection::SetAppendByUnion)
    .function("GetAppendByUnion", &vtkAppendSelection::GetAppendByUnion)
    .function("AppendByUnionOn", &vtkAppendSelection::AppendByUnionOn)
    .function("AppendByUnionOff", &vtkAppendSelection::AppendByUnionOff)
    .class_function("GetColorArrayName", emscripten::optional_override([]() -> std::string {  return vtkAppendSelection::GetColorArrayName();}));
}
