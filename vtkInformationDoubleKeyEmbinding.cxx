// JavaScript wrapper for vtkInformationDoubleKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationDoubleKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationDoubleKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationDoubleKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationDoubleKey>(vtkInformationDoubleKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationDoubleKey_class) {
  emscripten::class_<vtkInformationDoubleKey, emscripten::base<vtkInformationKey>>("vtkInformationDoubleKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationDoubleKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationDoubleKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationDoubleKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationDoubleKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationDoubleKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationDoubleKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> vtkInformationDoubleKey* {  return vtkInformationDoubleKey::MakeKey( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("Set", &vtkInformationDoubleKey::Set, emscripten::allow_raw_pointers())
    .function("Get", &vtkInformationDoubleKey::Get, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationDoubleKey::ShallowCopy, emscripten::allow_raw_pointers());
}
