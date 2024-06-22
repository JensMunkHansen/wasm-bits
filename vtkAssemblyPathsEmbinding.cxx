// JavaScript wrapper for vtkAssemblyPaths with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkAssemblyPathsEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkAssemblyPaths.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAssemblyPath.h"
#include "vtkAssemblyPaths.h"

template<> void emscripten::internal::raw_destructor<vtkAssemblyPaths>(vtkAssemblyPaths * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAssemblyPaths_class) {
  emscripten::class_<vtkAssemblyPaths, emscripten::base<vtkCollection>>("vtkAssemblyPaths")
    .smart_ptr<vtkSmartPointer<vtkAssemblyPaths>>("vtkSmartPointer<vtkAssemblyPaths>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAssemblyPaths>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAssemblyPaths::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAssemblyPaths& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAssemblyPaths::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAssemblyPaths::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAssemblyPaths::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAssemblyPaths& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkAssemblyPaths&, vtkAssemblyPath*)>([](vtkAssemblyPaths& self, vtkAssemblyPath* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveItem", emscripten::select_overload<void(vtkAssemblyPaths&, vtkAssemblyPath*)>([](vtkAssemblyPaths& self, vtkAssemblyPath* arg_0) -> void { return self.RemoveItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("IsItemPresent", emscripten::select_overload<int(vtkAssemblyPaths&, vtkAssemblyPath*)>([](vtkAssemblyPaths& self, vtkAssemblyPath* arg_0) -> int { return self.IsItemPresent( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkAssemblyPaths::GetNextItem, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkAssemblyPaths::GetMTime);
}
