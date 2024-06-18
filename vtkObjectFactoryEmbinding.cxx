// JavaScript wrapper for vtkObjectFactory with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkObjectFactoryEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkObjectFactory.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObject.h"
#include "vtkCollection.h"
#include "vtkObjectFactoryCollection.h"
#include "vtkOverrideInformationCollection.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkObjectFactory.h"

template<> void emscripten::internal::raw_destructor<vtkObjectFactory>(vtkObjectFactory * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkObjectFactory_class) {
  emscripten::class_<vtkObjectFactory, emscripten::base<vtkObject>>("vtkObjectFactory")
    .class_function("CreateInstance", emscripten::optional_override([]( const std::string & arg_0, bool arg_1) -> vtkObject* {  return vtkObjectFactory::CreateInstance( arg_0.c_str(), arg_1);}), emscripten::allow_raw_pointers())
    .class_function("CreateAllInstance", emscripten::optional_override([]( const std::string & arg_0, vtkCollection* arg_1) -> void {  return vtkObjectFactory::CreateAllInstance( arg_0.c_str(), arg_1);}), emscripten::allow_raw_pointers())
    .class_function("ReHash", &vtkObjectFactory::ReHash)
    .class_function("RegisterFactory", &vtkObjectFactory::RegisterFactory, emscripten::allow_raw_pointers())
    .class_function("UnRegisterFactory", &vtkObjectFactory::UnRegisterFactory, emscripten::allow_raw_pointers())
    .class_function("UnRegisterAllFactories", &vtkObjectFactory::UnRegisterAllFactories)
    .class_function("GetRegisteredFactories", &vtkObjectFactory::GetRegisteredFactories, emscripten::allow_raw_pointers())
    .class_function("HasOverrideAny", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkObjectFactory::HasOverrideAny( arg_0.c_str());}))
    .class_function("GetOverrideInformation", emscripten::optional_override([]( const std::string & arg_0, vtkOverrideInformationCollection* arg_1) -> void {  return vtkObjectFactory::GetOverrideInformation( arg_0.c_str(), arg_1);}), emscripten::allow_raw_pointers())
    .class_function("SetAllEnableFlags", emscripten::select_overload<void( int, const std::string &)>([]( int arg_0, const std::string & arg_1) -> void { return vtkObjectFactory::SetAllEnableFlags( arg_0, arg_1.c_str()); }))
    .class_function("SetAllEnableFlags", emscripten::select_overload<void( int, const std::string &, const std::string &)>([]( int arg_0, const std::string & arg_1, const std::string & arg_2) -> void { return vtkObjectFactory::SetAllEnableFlags( arg_0, arg_1.c_str(), arg_2.c_str()); }))
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkObjectFactory::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkObjectFactory& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkObjectFactory::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkObjectFactory::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkObjectFactory::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkObjectFactory& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfOverrides", &vtkObjectFactory::GetNumberOfOverrides)
    .function("GetClassOverrideName", emscripten::optional_override([](vtkObjectFactory& self, int arg_0) -> std::string {  return self.GetClassOverrideName( arg_0);}))
    .function("GetClassOverrideWithName", emscripten::optional_override([](vtkObjectFactory& self, int arg_0) -> std::string {  return self.GetClassOverrideWithName( arg_0);}))
    .function("GetEnableFlag", emscripten::select_overload<int(vtkObjectFactory&, int)>([](vtkObjectFactory& self, int arg_0) -> int { return self.GetEnableFlag( arg_0); }))
    .function("GetEnableFlag", emscripten::select_overload<int(vtkObjectFactory&, const std::string &, const std::string &)>([](vtkObjectFactory& self, const std::string & arg_0, const std::string & arg_1) -> int { return self.GetEnableFlag( arg_0.c_str(), arg_1.c_str()); }))
    .function("GetOverrideDescription", emscripten::optional_override([](vtkObjectFactory& self, int arg_0) -> std::string {  return self.GetOverrideDescription( arg_0);}))
    .function("SetEnableFlag", emscripten::optional_override([](vtkObjectFactory& self, int arg_0, const std::string & arg_1, const std::string & arg_2) -> void {  return self.SetEnableFlag( arg_0, arg_1.c_str(), arg_2.c_str());}))
    .function("HasOverride", emscripten::select_overload<int(vtkObjectFactory&, const std::string &)>([](vtkObjectFactory& self, const std::string & arg_0) -> int { return self.HasOverride( arg_0.c_str()); }))
    .function("HasOverride", emscripten::select_overload<int(vtkObjectFactory&, const std::string &, const std::string &)>([](vtkObjectFactory& self, const std::string & arg_0, const std::string & arg_1) -> int { return self.HasOverride( arg_0.c_str(), arg_1.c_str()); }))
    .function("Disable", emscripten::optional_override([](vtkObjectFactory& self, const std::string & arg_0) -> void {  return self.Disable( arg_0.c_str());}))
    .function("GetLibraryPath", emscripten::optional_override([](vtkObjectFactory& self) -> std::string {  return self.GetLibraryPath();}));
}

EMSCRIPTEN_BINDINGS(vtkObjectFactoryRegistryCleanup_class) {
  emscripten::class_<vtkObjectFactoryRegistryCleanup>("vtkObjectFactoryRegistryCleanup")
    .smart_ptr<std::shared_ptr<vtkObjectFactoryRegistryCleanup>>("std::shared_ptr<vtkObjectFactoryRegistryCleanup>")
    .constructor(&std::make_shared<vtkObjectFactoryRegistryCleanup>);
}
