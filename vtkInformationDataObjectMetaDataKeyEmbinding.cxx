// JavaScript wrapper for vtkInformationDataObjectMetaDataKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkInformationDataObjectMetaDataKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkInformationDataObjectMetaDataKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationDataObjectMetaDataKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationDataObjectMetaDataKey>(vtkInformationDataObjectMetaDataKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationDataObjectMetaDataKey_class) {
  emscripten::class_<vtkInformationDataObjectMetaDataKey, emscripten::base<vtkInformationDataObjectKey>>("vtkInformationDataObjectMetaDataKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationDataObjectMetaDataKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationDataObjectMetaDataKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationDataObjectMetaDataKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationDataObjectMetaDataKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationDataObjectMetaDataKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationDataObjectMetaDataKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> vtkInformationDataObjectMetaDataKey* {  return vtkInformationDataObjectMetaDataKey::MakeKey( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("CopyDefaultInformation", &vtkInformationDataObjectMetaDataKey::CopyDefaultInformation, emscripten::allow_raw_pointers());
}
