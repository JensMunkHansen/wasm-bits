// JavaScript wrapper for vtkInformationQuadratureSchemeDefinitionVectorKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkInformationQuadratureSchemeDefinitionVectorKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkInformationQuadratureSchemeDefinitionVectorKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkQuadratureSchemeDefinition.h"
#include "vtkXMLDataElement.h"
#include "vtkInformationQuadratureSchemeDefinitionVectorKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationQuadratureSchemeDefinitionVectorKey>(vtkInformationQuadratureSchemeDefinitionVectorKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationQuadratureSchemeDefinitionVectorKey_class) {
  emscripten::class_<vtkInformationQuadratureSchemeDefinitionVectorKey, emscripten::base<vtkInformationKey>>("vtkInformationQuadratureSchemeDefinitionVectorKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationQuadratureSchemeDefinitionVectorKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationQuadratureSchemeDefinitionVectorKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationQuadratureSchemeDefinitionVectorKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationQuadratureSchemeDefinitionVectorKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationQuadratureSchemeDefinitionVectorKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationQuadratureSchemeDefinitionVectorKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Clear", &vtkInformationQuadratureSchemeDefinitionVectorKey::Clear, emscripten::allow_raw_pointers())
    .function("Resize", &vtkInformationQuadratureSchemeDefinitionVectorKey::Resize, emscripten::allow_raw_pointers())
    .function("Size", &vtkInformationQuadratureSchemeDefinitionVectorKey::Size, emscripten::allow_raw_pointers())
    .function("Length", &vtkInformationQuadratureSchemeDefinitionVectorKey::Length, emscripten::allow_raw_pointers())
    .function("Append", &vtkInformationQuadratureSchemeDefinitionVectorKey::Append, emscripten::allow_raw_pointers())
    .function("Set", &vtkInformationQuadratureSchemeDefinitionVectorKey::Set, emscripten::allow_raw_pointers())
    .function("Get", &vtkInformationQuadratureSchemeDefinitionVectorKey::Get, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationQuadratureSchemeDefinitionVectorKey::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkInformationQuadratureSchemeDefinitionVectorKey::DeepCopy, emscripten::allow_raw_pointers())
    .function("SaveState", &vtkInformationQuadratureSchemeDefinitionVectorKey::SaveState, emscripten::allow_raw_pointers())
    .function("RestoreState", &vtkInformationQuadratureSchemeDefinitionVectorKey::RestoreState, emscripten::allow_raw_pointers());
}
