// JavaScript wrapper for vtkInformationStringVectorKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationStringVectorKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationStringVectorKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationStringVectorKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationStringVectorKey>(vtkInformationStringVectorKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationStringVectorKey_class) {
  emscripten::class_<vtkInformationStringVectorKey, emscripten::base<vtkInformationKey>>("vtkInformationStringVectorKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationStringVectorKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationStringVectorKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationStringVectorKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationStringVectorKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationStringVectorKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationStringVectorKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1, int arg_2) -> vtkInformationStringVectorKey* {  return vtkInformationStringVectorKey::MakeKey( arg_0.c_str(), arg_1.c_str(), arg_2);}), emscripten::allow_raw_pointers())
    .function("Append", emscripten::select_overload<void(vtkInformationStringVectorKey&, vtkInformation*, const std::string &)>([](vtkInformationStringVectorKey& self, vtkInformation* arg_0, const std::string & arg_1) -> void { return self.Append( arg_0, arg_1.c_str()); }), emscripten::allow_raw_pointers())
    .function("Append", emscripten::select_overload<void(vtkInformationStringVectorKey&, vtkInformation*, const std::string&)>([](vtkInformationStringVectorKey& self, vtkInformation* arg_0, const std::string& arg_1) -> void { return self.Append( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Set", emscripten::select_overload<void(vtkInformationStringVectorKey&, vtkInformation*, const std::string &, int)>([](vtkInformationStringVectorKey& self, vtkInformation* arg_0, const std::string & arg_1, int arg_2) -> void { return self.Set( arg_0, arg_1.c_str(), arg_2); }), emscripten::allow_raw_pointers())
    .function("Set", emscripten::select_overload<void(vtkInformationStringVectorKey&, vtkInformation*, const std::string&, int)>([](vtkInformationStringVectorKey& self, vtkInformation* arg_0, const std::string& arg_1, int arg_2) -> void { return self.Set( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Get", emscripten::optional_override([](vtkInformationStringVectorKey& self, vtkInformation* arg_0, int arg_1) -> std::string {  return self.Get( arg_0, arg_1);}), emscripten::allow_raw_pointers())
    .function("Length", &vtkInformationStringVectorKey::Length, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationStringVectorKey::ShallowCopy, emscripten::allow_raw_pointers());
}
