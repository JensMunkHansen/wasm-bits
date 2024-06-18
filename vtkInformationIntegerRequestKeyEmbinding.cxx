// JavaScript wrapper for vtkInformationIntegerRequestKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkInformationIntegerRequestKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkInformationIntegerRequestKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationIntegerRequestKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationIntegerRequestKey>(vtkInformationIntegerRequestKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationIntegerRequestKey_class) {
  emscripten::class_<vtkInformationIntegerRequestKey, emscripten::base<vtkInformationIntegerKey>>("vtkInformationIntegerRequestKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationIntegerRequestKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationIntegerRequestKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationIntegerRequestKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationIntegerRequestKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationIntegerRequestKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationIntegerRequestKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> vtkInformationIntegerRequestKey* {  return vtkInformationIntegerRequestKey::MakeKey( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("NeedToExecute", &vtkInformationIntegerRequestKey::NeedToExecute, emscripten::allow_raw_pointers())
    .function("StoreMetaData", &vtkInformationIntegerRequestKey::StoreMetaData, emscripten::allow_raw_pointers())
    .function("CopyDefaultInformation", &vtkInformationIntegerRequestKey::CopyDefaultInformation, emscripten::allow_raw_pointers());
}
