// JavaScript wrapper for vtkInformationIdTypeKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationIdTypeKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationIdTypeKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationIdTypeKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationIdTypeKey>(vtkInformationIdTypeKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationIdTypeKey_class) {
  emscripten::class_<vtkInformationIdTypeKey, emscripten::base<vtkInformationKey>>("vtkInformationIdTypeKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationIdTypeKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationIdTypeKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationIdTypeKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationIdTypeKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationIdTypeKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationIdTypeKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> vtkInformationIdTypeKey* {  return vtkInformationIdTypeKey::MakeKey( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("Set", &vtkInformationIdTypeKey::Set, emscripten::allow_raw_pointers())
    .function("Get", &vtkInformationIdTypeKey::Get, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationIdTypeKey::ShallowCopy, emscripten::allow_raw_pointers());
}
