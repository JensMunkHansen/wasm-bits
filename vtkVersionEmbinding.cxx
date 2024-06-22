// JavaScript wrapper for vtkVersion with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkVersionEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkVersion.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVersion.h"

template<> void emscripten::internal::raw_destructor<vtkVersion>(vtkVersion * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVersion_class) {
  emscripten::class_<vtkVersion, emscripten::base<vtkObject>>("vtkVersion")
    .smart_ptr<vtkSmartPointer<vtkVersion>>("vtkSmartPointer<vtkVersion>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVersion>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVersion::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVersion& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVersion::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVersion::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVersion::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVersion& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("GetVTKVersion", emscripten::optional_override([]() -> std::string {  return vtkVersion::GetVTKVersion();}))
    .class_function("GetVTKVersionFull", emscripten::optional_override([]() -> std::string {  return vtkVersion::GetVTKVersionFull();}))
    .class_function("GetVTKMajorVersion", &vtkVersion::GetVTKMajorVersion)
    .class_function("GetVTKMinorVersion", &vtkVersion::GetVTKMinorVersion)
    .class_function("GetVTKBuildVersion", &vtkVersion::GetVTKBuildVersion)
    .class_function("GetVTKSourceVersion", emscripten::optional_override([]() -> std::string {  return vtkVersion::GetVTKSourceVersion();}));
}
