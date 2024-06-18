// JavaScript wrapper for vtkInformationExecutivePortKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkInformationExecutivePortKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkInformationExecutivePortKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkExecutive.h"
#include "vtkGarbageCollector.h"
#include "vtkInformationExecutivePortKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationExecutivePortKey>(vtkInformationExecutivePortKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationExecutivePortKey_class) {
  emscripten::class_<vtkInformationExecutivePortKey, emscripten::base<vtkInformationKey>>("vtkInformationExecutivePortKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationExecutivePortKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationExecutivePortKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationExecutivePortKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationExecutivePortKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationExecutivePortKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationExecutivePortKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> vtkInformationExecutivePortKey* {  return vtkInformationExecutivePortKey::MakeKey( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("Set", &vtkInformationExecutivePortKey::Set, emscripten::allow_raw_pointers())
    .function("GetExecutive", &vtkInformationExecutivePortKey::GetExecutive, emscripten::allow_raw_pointers())
    .function("GetPort", &vtkInformationExecutivePortKey::GetPort, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationExecutivePortKey::ShallowCopy, emscripten::allow_raw_pointers())
    .function("Report", &vtkInformationExecutivePortKey::Report, emscripten::allow_raw_pointers());
}
