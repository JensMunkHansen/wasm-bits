// JavaScript wrapper for vtkInformationIntegerPointerKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationIntegerPointerKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationIntegerPointerKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationIntegerPointerKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationIntegerPointerKey>(vtkInformationIntegerPointerKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationIntegerPointerKey_class) {
  emscripten::class_<vtkInformationIntegerPointerKey, emscripten::base<vtkInformationKey>>("vtkInformationIntegerPointerKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationIntegerPointerKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationIntegerPointerKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationIntegerPointerKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationIntegerPointerKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationIntegerPointerKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationIntegerPointerKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Set", emscripten::optional_override([](vtkInformationIntegerPointerKey& self, vtkInformation* arg_0, std::uintptr_t arg_1, int arg_2) -> void {  return self.Set( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2);}), emscripten::allow_raw_pointers())
    .function("Get", emscripten::select_overload<std::uintptr_t(vtkInformationIntegerPointerKey&, vtkInformation*)>([](vtkInformationIntegerPointerKey& self, vtkInformation* arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.Get( arg_0)); }), emscripten::allow_raw_pointers())
    .function("Get", emscripten::select_overload<void(vtkInformationIntegerPointerKey&, vtkInformation*, std::uintptr_t)>([](vtkInformationIntegerPointerKey& self, vtkInformation* arg_0, std::uintptr_t arg_1) -> void { return self.Get( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int))); }), emscripten::allow_raw_pointers())
    .function("Length", &vtkInformationIntegerPointerKey::Length, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationIntegerPointerKey::ShallowCopy, emscripten::allow_raw_pointers());
}
