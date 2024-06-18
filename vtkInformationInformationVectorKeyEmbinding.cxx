// JavaScript wrapper for vtkInformationInformationVectorKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationInformationVectorKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationInformationVectorKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkGarbageCollector.h"
#include "vtkInformationInformationVectorKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationInformationVectorKey>(vtkInformationInformationVectorKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationInformationVectorKey_class) {
  emscripten::class_<vtkInformationInformationVectorKey, emscripten::base<vtkInformationKey>>("vtkInformationInformationVectorKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationInformationVectorKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationInformationVectorKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationInformationVectorKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationInformationVectorKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationInformationVectorKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationInformationVectorKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Set", &vtkInformationInformationVectorKey::Set, emscripten::allow_raw_pointers())
    .function("Get", &vtkInformationInformationVectorKey::Get, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationInformationVectorKey::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkInformationInformationVectorKey::DeepCopy, emscripten::allow_raw_pointers())
    .function("Report", &vtkInformationInformationVectorKey::Report, emscripten::allow_raw_pointers());
}
