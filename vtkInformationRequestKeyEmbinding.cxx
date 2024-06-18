// JavaScript wrapper for vtkInformationRequestKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationRequestKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationRequestKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationRequestKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationRequestKey>(vtkInformationRequestKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationRequestKey_class) {
  emscripten::class_<vtkInformationRequestKey, emscripten::base<vtkInformationKey>>("vtkInformationRequestKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationRequestKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationRequestKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationRequestKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationRequestKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationRequestKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationRequestKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> vtkInformationRequestKey* {  return vtkInformationRequestKey::MakeKey( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("Set", &vtkInformationRequestKey::Set, emscripten::allow_raw_pointers())
    .function("Remove", &vtkInformationRequestKey::Remove, emscripten::allow_raw_pointers())
    .function("Has", &vtkInformationRequestKey::Has, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationRequestKey::ShallowCopy, emscripten::allow_raw_pointers());
}
