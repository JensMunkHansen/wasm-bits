// JavaScript wrapper for vtkInformationKeyVectorKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationKeyVectorKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationKeyVectorKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationKey.h"
#include "vtkInformationKeyVectorKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationKeyVectorKey>(vtkInformationKeyVectorKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationKeyVectorKey_class) {
  emscripten::class_<vtkInformationKeyVectorKey, emscripten::base<vtkInformationKey>>("vtkInformationKeyVectorKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationKeyVectorKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationKeyVectorKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationKeyVectorKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationKeyVectorKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationKeyVectorKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationKeyVectorKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> vtkInformationKeyVectorKey* {  return vtkInformationKeyVectorKey::MakeKey( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("Append", &vtkInformationKeyVectorKey::Append, emscripten::allow_raw_pointers())
    .function("AppendUnique", &vtkInformationKeyVectorKey::AppendUnique, emscripten::allow_raw_pointers())
    .function("RemoveItem", &vtkInformationKeyVectorKey::RemoveItem, emscripten::allow_raw_pointers())
    .function("Get", emscripten::select_overload<vtkInformationKey*(vtkInformationKeyVectorKey&, vtkInformation*, int)>([](vtkInformationKeyVectorKey& self, vtkInformation* arg_0, int arg_1) -> vtkInformationKey* { return self.Get( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Length", &vtkInformationKeyVectorKey::Length, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationKeyVectorKey::ShallowCopy, emscripten::allow_raw_pointers());
}
