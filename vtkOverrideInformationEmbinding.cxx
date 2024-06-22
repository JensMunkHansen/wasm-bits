// JavaScript wrapper for vtkOverrideInformation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkOverrideInformationEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkOverrideInformation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkObjectFactory.h"
#include "vtkOverrideInformation.h"

template<> void emscripten::internal::raw_destructor<vtkOverrideInformation>(vtkOverrideInformation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOverrideInformation_class) {
  emscripten::class_<vtkOverrideInformation, emscripten::base<vtkObject>>("vtkOverrideInformation")
    .smart_ptr<vtkSmartPointer<vtkOverrideInformation>>("vtkSmartPointer<vtkOverrideInformation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOverrideInformation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOverrideInformation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOverrideInformation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOverrideInformation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOverrideInformation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOverrideInformation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOverrideInformation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetClassOverrideName", emscripten::optional_override([](vtkOverrideInformation& self) -> std::string {  return self.GetClassOverrideName();}))
    .function("GetClassOverrideWithName", emscripten::optional_override([](vtkOverrideInformation& self) -> std::string {  return self.GetClassOverrideWithName();}))
    .function("GetDescription", emscripten::optional_override([](vtkOverrideInformation& self) -> std::string {  return self.GetDescription();}))
    .function("GetObjectFactory", &vtkOverrideInformation::GetObjectFactory, emscripten::allow_raw_pointers())
    .function("SetClassOverrideName", emscripten::optional_override([](vtkOverrideInformation& self, const std::string & arg_0) -> void {  return self.SetClassOverrideName( arg_0.c_str());}))
    .function("SetClassOverrideWithName", emscripten::optional_override([](vtkOverrideInformation& self, const std::string & arg_0) -> void {  return self.SetClassOverrideWithName( arg_0.c_str());}))
    .function("SetDescription", emscripten::optional_override([](vtkOverrideInformation& self, const std::string & arg_0) -> void {  return self.SetDescription( arg_0.c_str());}));
}
