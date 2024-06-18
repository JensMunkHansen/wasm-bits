// JavaScript wrapper for vtkInformationUnsignedLongKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationUnsignedLongKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationUnsignedLongKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationUnsignedLongKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationUnsignedLongKey>(vtkInformationUnsignedLongKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationUnsignedLongKey_class) {
  emscripten::class_<vtkInformationUnsignedLongKey, emscripten::base<vtkInformationKey>>("vtkInformationUnsignedLongKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationUnsignedLongKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationUnsignedLongKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationUnsignedLongKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationUnsignedLongKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationUnsignedLongKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationUnsignedLongKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> vtkInformationUnsignedLongKey* {  return vtkInformationUnsignedLongKey::MakeKey( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("Set", &vtkInformationUnsignedLongKey::Set, emscripten::allow_raw_pointers())
    .function("Get", &vtkInformationUnsignedLongKey::Get, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationUnsignedLongKey::ShallowCopy, emscripten::allow_raw_pointers());
}
