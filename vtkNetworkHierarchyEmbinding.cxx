// JavaScript wrapper for vtkNetworkHierarchy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkNetworkHierarchyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkNetworkHierarchy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkNetworkHierarchy.h"

template<> void emscripten::internal::raw_destructor<vtkNetworkHierarchy>(vtkNetworkHierarchy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNetworkHierarchy_class) {
  emscripten::class_<vtkNetworkHierarchy, emscripten::base<vtkTreeAlgorithm>>("vtkNetworkHierarchy")
    .smart_ptr<vtkSmartPointer<vtkNetworkHierarchy>>("vtkSmartPointer<vtkNetworkHierarchy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkNetworkHierarchy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetworkHierarchy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNetworkHierarchy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNetworkHierarchy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNetworkHierarchy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetworkHierarchy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNetworkHierarchy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetIPArrayName", emscripten::optional_override([](vtkNetworkHierarchy& self) -> std::string {  return self.GetIPArrayName();}))
    .function("SetIPArrayName", emscripten::optional_override([](vtkNetworkHierarchy& self, const std::string & arg_0) -> void {  return self.SetIPArrayName( arg_0.c_str());}));
}
