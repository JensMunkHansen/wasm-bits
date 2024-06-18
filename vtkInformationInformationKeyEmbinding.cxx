// JavaScript wrapper for vtkInformationInformationKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationInformationKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationInformationKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationInformationKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationInformationKey>(vtkInformationInformationKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationInformationKey_class) {
  emscripten::class_<vtkInformationInformationKey, emscripten::base<vtkInformationKey>>("vtkInformationInformationKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationInformationKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationInformationKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationInformationKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationInformationKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationInformationKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationInformationKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> vtkInformationInformationKey* {  return vtkInformationInformationKey::MakeKey( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("Set", &vtkInformationInformationKey::Set, emscripten::allow_raw_pointers())
    .function("Get", &vtkInformationInformationKey::Get, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationInformationKey::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkInformationInformationKey::DeepCopy, emscripten::allow_raw_pointers());
}
