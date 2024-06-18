// JavaScript wrapper for vtkDirectory with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonSystem.js/vtkCommonSystem.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonSystem.js/vtkDirectoryEmbinding.cxx \
 /home/jmh/github/vtk/Common/System/vtkDirectory.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStringArray.h"
#include "vtkDirectory.h"

template<> void emscripten::internal::raw_destructor<vtkDirectory>(vtkDirectory * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDirectory_class) {
  emscripten::class_<vtkDirectory, emscripten::base<vtkObject>>("vtkDirectory")
    .smart_ptr<vtkSmartPointer<vtkDirectory>>("vtkSmartPointer<vtkDirectory>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDirectory>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDirectory::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDirectory& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDirectory::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDirectory::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDirectory::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDirectory& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Open", emscripten::optional_override([](vtkDirectory& self, const std::string & arg_0) -> int {  return self.Open( arg_0.c_str());}))
    .function("GetNumberOfFiles", &vtkDirectory::GetNumberOfFiles)
    .function("GetFile", emscripten::optional_override([](vtkDirectory& self, int arg_0) -> std::string {  return self.GetFile( arg_0);}))
    .function("FileIsDirectory", emscripten::optional_override([](vtkDirectory& self, const std::string & arg_0) -> int {  return self.FileIsDirectory( arg_0.c_str());}))
    .function("GetFiles", &vtkDirectory::GetFiles, emscripten::allow_raw_pointers())
    .class_function("GetCurrentWorkingDirectory", emscripten::optional_override([]( std::uintptr_t arg_0, unsigned int arg_1) -> std::string {  return vtkDirectory::GetCurrentWorkingDirectory(reinterpret_cast<char*>(arg_0 * sizeof(char)), arg_1);}))
    .class_function("MakeDirectory", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDirectory::MakeDirectory( arg_0.c_str());}))
    .class_function("DeleteDirectory", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDirectory::DeleteDirectory( arg_0.c_str());}))
    .class_function("Rename", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> int {  return vtkDirectory::Rename( arg_0.c_str(), arg_1.c_str());}));
}
