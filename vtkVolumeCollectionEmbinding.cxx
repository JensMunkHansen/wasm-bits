// JavaScript wrapper for vtkVolumeCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkVolumeCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkVolumeCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolume.h"
#include "vtkVolumeCollection.h"

template<> void emscripten::internal::raw_destructor<vtkVolumeCollection>(vtkVolumeCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVolumeCollection_class) {
  emscripten::class_<vtkVolumeCollection, emscripten::base<vtkPropCollection>>("vtkVolumeCollection")
    .smart_ptr<vtkSmartPointer<vtkVolumeCollection>>("vtkSmartPointer<vtkVolumeCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVolumeCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVolumeCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVolumeCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVolumeCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVolumeCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkVolumeCollection&, vtkVolume*)>([](vtkVolumeCollection& self, vtkVolume* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextVolume", emscripten::select_overload<vtkVolume*(vtkVolumeCollection&)>([](vtkVolumeCollection& self) -> vtkVolume* { return self.GetNextVolume(); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkVolumeCollection::GetNextItem, emscripten::allow_raw_pointers());
}
