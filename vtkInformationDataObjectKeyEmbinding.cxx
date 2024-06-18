// JavaScript wrapper for vtkInformationDataObjectKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationDataObjectKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationDataObjectKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkGarbageCollector.h"
#include "vtkInformationDataObjectKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationDataObjectKey>(vtkInformationDataObjectKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationDataObjectKey_class) {
  emscripten::class_<vtkInformationDataObjectKey, emscripten::base<vtkInformationKey>>("vtkInformationDataObjectKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationDataObjectKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationDataObjectKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationDataObjectKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationDataObjectKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationDataObjectKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationDataObjectKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> vtkInformationDataObjectKey* {  return vtkInformationDataObjectKey::MakeKey( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("Set", &vtkInformationDataObjectKey::Set, emscripten::allow_raw_pointers())
    .function("Get", &vtkInformationDataObjectKey::Get, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationDataObjectKey::ShallowCopy, emscripten::allow_raw_pointers())
    .function("Report", &vtkInformationDataObjectKey::Report, emscripten::allow_raw_pointers());
}
