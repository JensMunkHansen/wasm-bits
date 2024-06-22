// JavaScript wrapper for vtkPropCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkPropCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkPropCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"

template<> void emscripten::internal::raw_destructor<vtkPropCollection>(vtkPropCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPropCollection_class) {
  emscripten::class_<vtkPropCollection, emscripten::base<vtkCollection>>("vtkPropCollection")
    .smart_ptr<vtkSmartPointer<vtkPropCollection>>("vtkSmartPointer<vtkPropCollection>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPropCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPropCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPropCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPropCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPropCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPropCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPropCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkPropCollection&, vtkProp*)>([](vtkPropCollection& self, vtkProp* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextProp", emscripten::select_overload<vtkProp*(vtkPropCollection&)>([](vtkPropCollection& self) -> vtkProp* { return self.GetNextProp(); }), emscripten::allow_raw_pointers())
    .function("GetLastProp", &vtkPropCollection::GetLastProp, emscripten::allow_raw_pointers())
    .function("GetNumberOfPaths", &vtkPropCollection::GetNumberOfPaths);
}
