// JavaScript wrapper for vtkInformationStringKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationStringKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationStringKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationStringKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationStringKey>(vtkInformationStringKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationStringKey_class) {
  emscripten::class_<vtkInformationStringKey, emscripten::base<vtkInformationKey>>("vtkInformationStringKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationStringKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationStringKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationStringKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationStringKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationStringKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationStringKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> vtkInformationStringKey* {  return vtkInformationStringKey::MakeKey( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("Set", emscripten::select_overload<void(vtkInformationStringKey&, vtkInformation*, const std::string &)>([](vtkInformationStringKey& self, vtkInformation* arg_0, const std::string & arg_1) -> void { return self.Set( arg_0, arg_1.c_str()); }), emscripten::allow_raw_pointers())
    .function("Set", emscripten::select_overload<void(vtkInformationStringKey&, vtkInformation*, const std::string&)>([](vtkInformationStringKey& self, vtkInformation* arg_0, const std::string& arg_1) -> void { return self.Set( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Get", emscripten::optional_override([](vtkInformationStringKey& self, vtkInformation* arg_0) -> std::string {  return self.Get( arg_0);}), emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationStringKey::ShallowCopy, emscripten::allow_raw_pointers());
}
