// JavaScript wrapper for vtkActor2DCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkActor2DCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkActor2DCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkActor2D.h"
#include "vtkViewport.h"
#include "vtkActor2DCollection.h"

template<> void emscripten::internal::raw_destructor<vtkActor2DCollection>(vtkActor2DCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkActor2DCollection_class) {
  emscripten::class_<vtkActor2DCollection, emscripten::base<vtkPropCollection>>("vtkActor2DCollection")
    .smart_ptr<vtkSmartPointer<vtkActor2DCollection>>("vtkSmartPointer<vtkActor2DCollection>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkActor2DCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkActor2DCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkActor2DCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkActor2DCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkActor2DCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkActor2DCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkActor2DCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Sort", &vtkActor2DCollection::Sort)
    .function("AddItem", emscripten::select_overload<void(vtkActor2DCollection&, vtkActor2D*)>([](vtkActor2DCollection& self, vtkActor2D* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("IsItemPresent", emscripten::select_overload<int(vtkActor2DCollection&, vtkActor2D*)>([](vtkActor2DCollection& self, vtkActor2D* arg_0) -> int { return self.IsItemPresent( arg_0); }), emscripten::allow_raw_pointers())
    .function("IndexOfFirstOccurence", emscripten::select_overload<int(vtkActor2DCollection&, vtkActor2D*)>([](vtkActor2DCollection& self, vtkActor2D* arg_0) -> int { return self.IndexOfFirstOccurence( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextActor2D", emscripten::select_overload<vtkActor2D*(vtkActor2DCollection&)>([](vtkActor2DCollection& self) -> vtkActor2D* { return self.GetNextActor2D(); }), emscripten::allow_raw_pointers())
    .function("GetLastActor2D", &vtkActor2DCollection::GetLastActor2D, emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkActor2DCollection::GetNextItem, emscripten::allow_raw_pointers())
    .function("GetLastItem", &vtkActor2DCollection::GetLastItem, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkActor2DCollection::RenderOverlay, emscripten::allow_raw_pointers());
}
