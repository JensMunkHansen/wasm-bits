// JavaScript wrapper for vtkImageReader2Collection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkImageReader2CollectionEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkImageReader2Collection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageReader2.h"
#include "vtkImageReader2Collection.h"

template<> void emscripten::internal::raw_destructor<vtkImageReader2Collection>(vtkImageReader2Collection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageReader2Collection_class) {
  emscripten::class_<vtkImageReader2Collection, emscripten::base<vtkCollection>>("vtkImageReader2Collection")
    .smart_ptr<vtkSmartPointer<vtkImageReader2Collection>>("vtkSmartPointer<vtkImageReader2Collection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageReader2Collection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageReader2Collection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageReader2Collection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageReader2Collection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageReader2Collection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageReader2Collection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageReader2Collection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkImageReader2Collection&, vtkImageReader2*)>([](vtkImageReader2Collection& self, vtkImageReader2* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkImageReader2Collection::GetNextItem, emscripten::allow_raw_pointers());
}
