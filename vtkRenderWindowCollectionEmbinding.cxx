// JavaScript wrapper for vtkRenderWindowCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderWindowCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkRenderWindowCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindow.h"
#include "vtkRenderWindowCollection.h"

template<> void emscripten::internal::raw_destructor<vtkRenderWindowCollection>(vtkRenderWindowCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderWindowCollection_class) {
  emscripten::class_<vtkRenderWindowCollection, emscripten::base<vtkCollection>>("vtkRenderWindowCollection")
    .smart_ptr<vtkSmartPointer<vtkRenderWindowCollection>>("vtkSmartPointer<vtkRenderWindowCollection>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRenderWindowCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderWindowCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderWindowCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderWindowCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderWindowCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderWindowCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderWindowCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkRenderWindowCollection&, vtkRenderWindow*)>([](vtkRenderWindowCollection& self, vtkRenderWindow* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkRenderWindowCollection::GetNextItem, emscripten::allow_raw_pointers());
}
