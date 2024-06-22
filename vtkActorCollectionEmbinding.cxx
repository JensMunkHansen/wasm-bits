// JavaScript wrapper for vtkActorCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkActorCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkActorCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkActor.h"
#include "vtkProperty.h"
#include "vtkActorCollection.h"

template<> void emscripten::internal::raw_destructor<vtkActorCollection>(vtkActorCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkActorCollection_class) {
  emscripten::class_<vtkActorCollection, emscripten::base<vtkPropCollection>>("vtkActorCollection")
    .smart_ptr<vtkSmartPointer<vtkActorCollection>>("vtkSmartPointer<vtkActorCollection>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkActorCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkActorCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkActorCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkActorCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkActorCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkActorCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkActorCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkActorCollection&, vtkActor*)>([](vtkActorCollection& self, vtkActor* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextActor", emscripten::select_overload<vtkActor*(vtkActorCollection&)>([](vtkActorCollection& self) -> vtkActor* { return self.GetNextActor(); }), emscripten::allow_raw_pointers())
    .function("GetLastActor", &vtkActorCollection::GetLastActor, emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkActorCollection::GetNextItem, emscripten::allow_raw_pointers())
    .function("GetLastItem", &vtkActorCollection::GetLastItem, emscripten::allow_raw_pointers())
    .function("ApplyProperties", &vtkActorCollection::ApplyProperties, emscripten::allow_raw_pointers());
}
