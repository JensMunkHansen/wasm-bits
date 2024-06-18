// JavaScript wrapper for vtkInformationVariantVectorKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationVariantVectorKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationVariantVectorKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVariantVectorKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationVariantVectorKey>(vtkInformationVariantVectorKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationVariantVectorKey_class) {
  emscripten::class_<vtkInformationVariantVectorKey, emscripten::base<vtkInformationKey>>("vtkInformationVariantVectorKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationVariantVectorKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationVariantVectorKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationVariantVectorKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationVariantVectorKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationVariantVectorKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationVariantVectorKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1, int arg_2) -> vtkInformationVariantVectorKey* {  return vtkInformationVariantVectorKey::MakeKey( arg_0.c_str(), arg_1.c_str(), arg_2);}), emscripten::allow_raw_pointers())
    .function("Append", &vtkInformationVariantVectorKey::Append, emscripten::allow_raw_pointers())
    .function("Get", emscripten::select_overload<vtkVariant(vtkInformationVariantVectorKey&, vtkInformation*, int)>([](vtkInformationVariantVectorKey& self, vtkInformation* arg_0, int arg_1) -> vtkVariant { return self.Get( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Length", &vtkInformationVariantVectorKey::Length, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationVariantVectorKey::ShallowCopy, emscripten::allow_raw_pointers());
}
