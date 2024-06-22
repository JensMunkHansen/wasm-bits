// JavaScript wrapper for vtkRenderPassCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderPassCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkRenderPassCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderPass.h"
#include "vtkRenderPassCollection.h"

template<> void emscripten::internal::raw_destructor<vtkRenderPassCollection>(vtkRenderPassCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderPassCollection_class) {
  emscripten::class_<vtkRenderPassCollection, emscripten::base<vtkCollection>>("vtkRenderPassCollection")
    .smart_ptr<vtkSmartPointer<vtkRenderPassCollection>>("vtkSmartPointer<vtkRenderPassCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRenderPassCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderPassCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderPassCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderPassCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderPassCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderPassCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderPassCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkRenderPassCollection&, vtkRenderPass*)>([](vtkRenderPassCollection& self, vtkRenderPass* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextRenderPass", emscripten::select_overload<vtkRenderPass*(vtkRenderPassCollection&)>([](vtkRenderPassCollection& self) -> vtkRenderPass* { return self.GetNextRenderPass(); }), emscripten::allow_raw_pointers())
    .function("GetLastRenderPass", &vtkRenderPassCollection::GetLastRenderPass, emscripten::allow_raw_pointers());
}
