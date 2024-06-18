// JavaScript wrapper for vtkResourceFileLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMisc.js/vtkCommonMisc.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMisc.js/vtkResourceFileLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/Misc/vtkResourceFileLocator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkResourceFileLocator.h"

template<> void emscripten::internal::raw_destructor<vtkResourceFileLocator>(vtkResourceFileLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkResourceFileLocator_class) {
  emscripten::class_<vtkResourceFileLocator, emscripten::base<vtkObject>>("vtkResourceFileLocator")
    .smart_ptr<vtkSmartPointer<vtkResourceFileLocator>>("vtkSmartPointer<vtkResourceFileLocator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkResourceFileLocator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResourceFileLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkResourceFileLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkResourceFileLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkResourceFileLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResourceFileLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkResourceFileLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLogVerbosity", &vtkResourceFileLocator::SetLogVerbosity)
    .function("GetLogVerbosity", &vtkResourceFileLocator::GetLogVerbosity)
    .function("Locate", emscripten::select_overload<std::string(vtkResourceFileLocator&, const std::string&, const std::string&, const std::string&)>([](vtkResourceFileLocator& self, const std::string& arg_0, const std::string& arg_1, const std::string& arg_2) -> std::string { return self.Locate( arg_0, arg_1, arg_2); }))
    .function("Locate", emscripten::select_overload<std::string(vtkResourceFileLocator&, const std::string&, const std::vector<std::string>&, const std::string&, const std::string&)>([](vtkResourceFileLocator& self, const std::string& arg_0, const std::vector<std::string>& arg_1, const std::string& arg_2, const std::string& arg_3) -> std::string { return self.Locate( arg_0, arg_1, arg_2, arg_3); }))
    .class_function("GetLibraryPathForSymbolUnix", emscripten::optional_override([]( const std::string & arg_0) -> std::string {  return vtkResourceFileLocator::GetLibraryPathForSymbolUnix( arg_0.c_str());}))
    .class_function("GetLibraryPathForSymbolWin32", emscripten::optional_override([]( std::uintptr_t arg_0) -> std::string {  return vtkResourceFileLocator::GetLibraryPathForSymbolWin32(reinterpret_cast<void*>(arg_0));}));
}
