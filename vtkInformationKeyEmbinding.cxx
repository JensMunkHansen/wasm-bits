// JavaScript wrapper for vtkInformationKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkGarbageCollector.h"
#include "vtkInformationKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationKey>(vtkInformationKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationKey_class) {
  emscripten::class_<vtkInformationKey, emscripten::base<vtkObjectBase>>("vtkInformationKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetName", emscripten::optional_override([](vtkInformationKey& self) -> std::string {  return self.GetName();}))
    .function("GetLocation", emscripten::optional_override([](vtkInformationKey& self) -> std::string {  return self.GetLocation();}))
    .function("DeepCopy", &vtkInformationKey::DeepCopy, emscripten::allow_raw_pointers())
    .function("Has", &vtkInformationKey::Has, emscripten::allow_raw_pointers())
    .function("Remove", &vtkInformationKey::Remove, emscripten::allow_raw_pointers())
    .function("Report", &vtkInformationKey::Report, emscripten::allow_raw_pointers())
    .function("Print", emscripten::select_overload<void(vtkInformationKey&, vtkInformation*)>([](vtkInformationKey& self, vtkInformation* arg_0) -> void { return self.Print( arg_0); }), emscripten::allow_raw_pointers())
    .function("NeedToExecute", &vtkInformationKey::NeedToExecute, emscripten::allow_raw_pointers())
    .function("StoreMetaData", &vtkInformationKey::StoreMetaData, emscripten::allow_raw_pointers())
    .function("CopyDefaultInformation", &vtkInformationKey::CopyDefaultInformation, emscripten::allow_raw_pointers());
}
