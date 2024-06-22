// JavaScript wrapper for vtkSocketCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonSystem.js/vtkCommonSystem.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonSystem.js/vtkSocketCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/System/vtkSocketCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSocket.h"
#include "vtkObject.h"
#include "vtkSocketCollection.h"

template<> void emscripten::internal::raw_destructor<vtkSocketCollection>(vtkSocketCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSocketCollection_class) {
  emscripten::class_<vtkSocketCollection, emscripten::base<vtkCollection>>("vtkSocketCollection")
    .smart_ptr<vtkSmartPointer<vtkSocketCollection>>("vtkSmartPointer<vtkSocketCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSocketCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSocketCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSocketCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSocketCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSocketCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSocketCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSocketCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkSocketCollection&, vtkSocket*)>([](vtkSocketCollection& self, vtkSocket* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("SelectSockets", &vtkSocketCollection::SelectSockets)
    .function("GetLastSelectedSocket", &vtkSocketCollection::GetLastSelectedSocket, emscripten::allow_raw_pointers())
    .function("ReplaceItem", &vtkSocketCollection::ReplaceItem, emscripten::allow_raw_pointers())
    .function("RemoveItem", emscripten::select_overload<void(vtkSocketCollection&, int)>([](vtkSocketCollection& self, int arg_0) -> void { return self.RemoveItem( arg_0); }))
    .function("RemoveItem", emscripten::select_overload<void(vtkSocketCollection&, vtkObject*)>([](vtkSocketCollection& self, vtkObject* arg_0) -> void { return self.RemoveItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveAllItems", &vtkSocketCollection::RemoveAllItems);
}
