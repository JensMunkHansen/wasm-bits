// JavaScript wrapper for vtkInformationIntegerVectorKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationIntegerVectorKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationIntegerVectorKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationIntegerVectorKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationIntegerVectorKey>(vtkInformationIntegerVectorKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationIntegerVectorKey_class) {
  emscripten::class_<vtkInformationIntegerVectorKey, emscripten::base<vtkInformationKey>>("vtkInformationIntegerVectorKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationIntegerVectorKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationIntegerVectorKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationIntegerVectorKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationIntegerVectorKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationIntegerVectorKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationIntegerVectorKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1, int arg_2) -> vtkInformationIntegerVectorKey* {  return vtkInformationIntegerVectorKey::MakeKey( arg_0.c_str(), arg_1.c_str(), arg_2);}), emscripten::allow_raw_pointers())
    .function("Append", &vtkInformationIntegerVectorKey::Append, emscripten::allow_raw_pointers())
    .function("Set", emscripten::select_overload<void(vtkInformationIntegerVectorKey&, vtkInformation*, std::uintptr_t, int)>([](vtkInformationIntegerVectorKey& self, vtkInformation* arg_0, std::uintptr_t arg_1, int arg_2) -> void { return self.Set( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2); }), emscripten::allow_raw_pointers())
    .function("Set", emscripten::select_overload<void(vtkInformationIntegerVectorKey&, vtkInformation*)>([](vtkInformationIntegerVectorKey& self, vtkInformation* arg_0) -> void { return self.Set( arg_0); }), emscripten::allow_raw_pointers())
    .function("Get", emscripten::select_overload<std::uintptr_t(vtkInformationIntegerVectorKey&, vtkInformation*)>([](vtkInformationIntegerVectorKey& self, vtkInformation* arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.Get( arg_0)); }), emscripten::allow_raw_pointers())
    .function("Get", emscripten::select_overload<int(vtkInformationIntegerVectorKey&, vtkInformation*, int)>([](vtkInformationIntegerVectorKey& self, vtkInformation* arg_0, int arg_1) -> int { return self.Get( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Get", emscripten::select_overload<void(vtkInformationIntegerVectorKey&, vtkInformation*, std::uintptr_t)>([](vtkInformationIntegerVectorKey& self, vtkInformation* arg_0, std::uintptr_t arg_1) -> void { return self.Get( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int))); }), emscripten::allow_raw_pointers())
    .function("Length", &vtkInformationIntegerVectorKey::Length, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationIntegerVectorKey::ShallowCopy, emscripten::allow_raw_pointers());
}
