// JavaScript wrapper for vtkMapperCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkMapperCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkMapperCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMapper.h"
#include "vtkMapperCollection.h"

template<> void emscripten::internal::raw_destructor<vtkMapperCollection>(vtkMapperCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMapperCollection_class) {
  emscripten::class_<vtkMapperCollection, emscripten::base<vtkCollection>>("vtkMapperCollection")
    .smart_ptr<vtkSmartPointer<vtkMapperCollection>>("vtkSmartPointer<vtkMapperCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMapperCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMapperCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMapperCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMapperCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMapperCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMapperCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMapperCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkMapperCollection&, vtkMapper*)>([](vtkMapperCollection& self, vtkMapper* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkMapperCollection::GetNextItem, emscripten::allow_raw_pointers())
    .function("GetLastItem", &vtkMapperCollection::GetLastItem, emscripten::allow_raw_pointers());
}
