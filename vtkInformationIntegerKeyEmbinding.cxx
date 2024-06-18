// JavaScript wrapper for vtkInformationIntegerKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationIntegerKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationIntegerKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationIntegerKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationIntegerKey>(vtkInformationIntegerKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationIntegerKey_class) {
  emscripten::class_<vtkInformationIntegerKey, emscripten::base<vtkInformationKey>>("vtkInformationIntegerKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationIntegerKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationIntegerKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationIntegerKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationIntegerKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationIntegerKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationIntegerKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> vtkInformationIntegerKey* {  return vtkInformationIntegerKey::MakeKey( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("Set", &vtkInformationIntegerKey::Set, emscripten::allow_raw_pointers())
    .function("Get", &vtkInformationIntegerKey::Get, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationIntegerKey::ShallowCopy, emscripten::allow_raw_pointers());
}
