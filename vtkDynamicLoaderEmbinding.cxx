// JavaScript wrapper for vtkDynamicLoader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkDynamicLoaderEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkDynamicLoader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDynamicLoader.h"

template<> void emscripten::internal::raw_destructor<vtkDynamicLoader>(vtkDynamicLoader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDynamicLoader_class) {
  emscripten::class_<vtkDynamicLoader, emscripten::base<vtkObject>>("vtkDynamicLoader")
    .smart_ptr<vtkSmartPointer<vtkDynamicLoader>>("vtkSmartPointer<vtkDynamicLoader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDynamicLoader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDynamicLoader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDynamicLoader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDynamicLoader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDynamicLoader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDynamicLoader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDynamicLoader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("LibPrefix", emscripten::optional_override([]() -> std::string {  return vtkDynamicLoader::LibPrefix();}))
    .class_function("LibExtension", emscripten::optional_override([]() -> std::string {  return vtkDynamicLoader::LibExtension();}))
    .class_function("LastError", emscripten::optional_override([]() -> std::string {  return vtkDynamicLoader::LastError();}));
}
