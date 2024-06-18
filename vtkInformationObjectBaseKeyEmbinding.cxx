// JavaScript wrapper for vtkInformationObjectBaseKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationObjectBaseKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationObjectBaseKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkGarbageCollector.h"
#include "vtkInformationObjectBaseKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationObjectBaseKey>(vtkInformationObjectBaseKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationObjectBaseKey_class) {
  emscripten::class_<vtkInformationObjectBaseKey, emscripten::base<vtkInformationKey>>("vtkInformationObjectBaseKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationObjectBaseKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationObjectBaseKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationObjectBaseKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationObjectBaseKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationObjectBaseKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationObjectBaseKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1, const std::string & arg_2) -> vtkInformationObjectBaseKey* {  return vtkInformationObjectBaseKey::MakeKey( arg_0.c_str(), arg_1.c_str(), arg_2.c_str());}), emscripten::allow_raw_pointers())
    .function("Set", &vtkInformationObjectBaseKey::Set, emscripten::allow_raw_pointers())
    .function("Get", &vtkInformationObjectBaseKey::Get, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationObjectBaseKey::ShallowCopy, emscripten::allow_raw_pointers())
    .function("Report", &vtkInformationObjectBaseKey::Report, emscripten::allow_raw_pointers());
}
