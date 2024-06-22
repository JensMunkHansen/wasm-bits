// JavaScript wrapper for vtkImageSliceCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingImage.js/vtkRenderingImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingImage.js/vtkImageSliceCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Image/vtkImageSliceCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageSlice.h"
#include "vtkImageSliceCollection.h"

template<> void emscripten::internal::raw_destructor<vtkImageSliceCollection>(vtkImageSliceCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageSliceCollection_class) {
  emscripten::class_<vtkImageSliceCollection, emscripten::base<vtkPropCollection>>("vtkImageSliceCollection")
    .smart_ptr<vtkSmartPointer<vtkImageSliceCollection>>("vtkSmartPointer<vtkImageSliceCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageSliceCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSliceCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageSliceCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageSliceCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageSliceCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSliceCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageSliceCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Sort", &vtkImageSliceCollection::Sort)
    .function("AddItem", emscripten::select_overload<void(vtkImageSliceCollection&, vtkImageSlice*)>([](vtkImageSliceCollection& self, vtkImageSlice* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextImage", emscripten::select_overload<vtkImageSlice*(vtkImageSliceCollection&)>([](vtkImageSliceCollection& self) -> vtkImageSlice* { return self.GetNextImage(); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkImageSliceCollection::GetNextItem, emscripten::allow_raw_pointers());
}
