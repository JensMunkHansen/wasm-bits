// JavaScript wrapper for vtkInformationObjectBaseVectorKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationObjectBaseVectorKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationObjectBaseVectorKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationObjectBaseVectorKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationObjectBaseVectorKey>(vtkInformationObjectBaseVectorKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationObjectBaseVectorKey_class) {
  emscripten::class_<vtkInformationObjectBaseVectorKey, emscripten::base<vtkInformationKey>>("vtkInformationObjectBaseVectorKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationObjectBaseVectorKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationObjectBaseVectorKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationObjectBaseVectorKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationObjectBaseVectorKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationObjectBaseVectorKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationObjectBaseVectorKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1, const std::string & arg_2) -> vtkInformationObjectBaseVectorKey* {  return vtkInformationObjectBaseVectorKey::MakeKey( arg_0.c_str(), arg_1.c_str(), arg_2.c_str());}), emscripten::allow_raw_pointers())
    .function("Clear", &vtkInformationObjectBaseVectorKey::Clear, emscripten::allow_raw_pointers())
    .function("Resize", &vtkInformationObjectBaseVectorKey::Resize, emscripten::allow_raw_pointers())
    .function("Size", &vtkInformationObjectBaseVectorKey::Size, emscripten::allow_raw_pointers())
    .function("Length", &vtkInformationObjectBaseVectorKey::Length, emscripten::allow_raw_pointers())
    .function("Append", &vtkInformationObjectBaseVectorKey::Append, emscripten::allow_raw_pointers())
    .function("Set", &vtkInformationObjectBaseVectorKey::Set, emscripten::allow_raw_pointers())
    .function("Remove", emscripten::select_overload<void(vtkInformationObjectBaseVectorKey&, vtkInformation*, vtkObjectBase*)>([](vtkInformationObjectBaseVectorKey& self, vtkInformation* arg_0, vtkObjectBase* arg_1) -> void { return self.Remove( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Remove", emscripten::select_overload<void(vtkInformationObjectBaseVectorKey&, vtkInformation*, int)>([](vtkInformationObjectBaseVectorKey& self, vtkInformation* arg_0, int arg_1) -> void { return self.Remove( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Remove", emscripten::select_overload<void(vtkInformationObjectBaseVectorKey&, vtkInformation*)>([](vtkInformationObjectBaseVectorKey& self, vtkInformation* arg_0) -> void { return self.Remove( arg_0); }), emscripten::allow_raw_pointers())
    .function("Get", &vtkInformationObjectBaseVectorKey::Get, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationObjectBaseVectorKey::ShallowCopy, emscripten::allow_raw_pointers());
}
