// JavaScript wrapper for vtkRendererCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRendererCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkRendererCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkRendererCollection.h"

template<> void emscripten::internal::raw_destructor<vtkRendererCollection>(vtkRendererCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRendererCollection_class) {
  emscripten::class_<vtkRendererCollection, emscripten::base<vtkCollection>>("vtkRendererCollection")
    .smart_ptr<vtkSmartPointer<vtkRendererCollection>>("vtkSmartPointer<vtkRendererCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRendererCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRendererCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRendererCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRendererCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRendererCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRendererCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRendererCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkRendererCollection&, vtkRenderer*)>([](vtkRendererCollection& self, vtkRenderer* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkRendererCollection::GetNextItem, emscripten::allow_raw_pointers())
    .function("Render", &vtkRendererCollection::Render)
    .function("GetFirstRenderer", &vtkRendererCollection::GetFirstRenderer, emscripten::allow_raw_pointers());
}
