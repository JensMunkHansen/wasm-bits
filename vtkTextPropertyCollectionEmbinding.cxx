// JavaScript wrapper for vtkTextPropertyCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkTextPropertyCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkTextPropertyCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextProperty.h"
#include "vtkTextPropertyCollection.h"

template<> void emscripten::internal::raw_destructor<vtkTextPropertyCollection>(vtkTextPropertyCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextPropertyCollection_class) {
  emscripten::class_<vtkTextPropertyCollection, emscripten::base<vtkCollection>>("vtkTextPropertyCollection")
    .smart_ptr<vtkSmartPointer<vtkTextPropertyCollection>>("vtkSmartPointer<vtkTextPropertyCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTextPropertyCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextPropertyCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextPropertyCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextPropertyCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextPropertyCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextPropertyCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextPropertyCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkTextPropertyCollection&, vtkTextProperty*)>([](vtkTextPropertyCollection& self, vtkTextProperty* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkTextPropertyCollection::GetNextItem, emscripten::allow_raw_pointers())
    .function("GetItem", &vtkTextPropertyCollection::GetItem, emscripten::allow_raw_pointers())
    .function("GetLastItem", &vtkTextPropertyCollection::GetLastItem, emscripten::allow_raw_pointers());
}
