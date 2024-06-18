// JavaScript wrapper for vtkInformationDoubleVectorKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationDoubleVectorKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationDoubleVectorKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationDoubleVectorKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationDoubleVectorKey>(vtkInformationDoubleVectorKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationDoubleVectorKey_class) {
  emscripten::class_<vtkInformationDoubleVectorKey, emscripten::base<vtkInformationKey>>("vtkInformationDoubleVectorKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationDoubleVectorKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationDoubleVectorKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationDoubleVectorKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationDoubleVectorKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationDoubleVectorKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationDoubleVectorKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1, int arg_2) -> vtkInformationDoubleVectorKey* {  return vtkInformationDoubleVectorKey::MakeKey( arg_0.c_str(), arg_1.c_str(), arg_2);}), emscripten::allow_raw_pointers())
    .function("Append", &vtkInformationDoubleVectorKey::Append, emscripten::allow_raw_pointers())
    .function("Set", emscripten::optional_override([](vtkInformationDoubleVectorKey& self, vtkInformation* arg_0, std::uintptr_t arg_1, int arg_2) -> void {  return self.Set( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)), arg_2);}), emscripten::allow_raw_pointers())
    .function("Get", emscripten::select_overload<std::uintptr_t(vtkInformationDoubleVectorKey&, vtkInformation*)>([](vtkInformationDoubleVectorKey& self, vtkInformation* arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.Get( arg_0)); }), emscripten::allow_raw_pointers())
    .function("Get", emscripten::select_overload<double(vtkInformationDoubleVectorKey&, vtkInformation*, int)>([](vtkInformationDoubleVectorKey& self, vtkInformation* arg_0, int arg_1) -> double { return self.Get( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Get", emscripten::select_overload<void(vtkInformationDoubleVectorKey&, vtkInformation*, std::uintptr_t)>([](vtkInformationDoubleVectorKey& self, vtkInformation* arg_0, std::uintptr_t arg_1) -> void { return self.Get( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double))); }), emscripten::allow_raw_pointers())
    .function("Length", &vtkInformationDoubleVectorKey::Length, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationDoubleVectorKey::ShallowCopy, emscripten::allow_raw_pointers());
}
