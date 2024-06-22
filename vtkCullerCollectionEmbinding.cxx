// JavaScript wrapper for vtkCullerCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCullerCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCullerCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCuller.h"
#include "vtkCullerCollection.h"

template<> void emscripten::internal::raw_destructor<vtkCullerCollection>(vtkCullerCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCullerCollection_class) {
  emscripten::class_<vtkCullerCollection, emscripten::base<vtkCollection>>("vtkCullerCollection")
    .smart_ptr<vtkSmartPointer<vtkCullerCollection>>("vtkSmartPointer<vtkCullerCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCullerCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCullerCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCullerCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCullerCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCullerCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCullerCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCullerCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkCullerCollection&, vtkCuller*)>([](vtkCullerCollection& self, vtkCuller* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkCullerCollection::GetNextItem, emscripten::allow_raw_pointers())
    .function("GetLastItem", &vtkCullerCollection::GetLastItem, emscripten::allow_raw_pointers());
}
