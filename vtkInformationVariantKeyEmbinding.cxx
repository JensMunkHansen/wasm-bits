// JavaScript wrapper for vtkInformationVariantKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationVariantKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationVariantKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVariantKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationVariantKey>(vtkInformationVariantKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationVariantKey_class) {
  emscripten::class_<vtkInformationVariantKey, emscripten::base<vtkInformationKey>>("vtkInformationVariantKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationVariantKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationVariantKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationVariantKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationVariantKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationVariantKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationVariantKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> vtkInformationVariantKey* {  return vtkInformationVariantKey::MakeKey( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("Set", &vtkInformationVariantKey::Set, emscripten::allow_raw_pointers())
    .function("Get", &vtkInformationVariantKey::Get, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationVariantKey::ShallowCopy, emscripten::allow_raw_pointers());
}
