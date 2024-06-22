// JavaScript wrapper for vtkDataArrayCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkDataArrayCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkDataArrayCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkDataArrayCollection.h"

template<> void emscripten::internal::raw_destructor<vtkDataArrayCollection>(vtkDataArrayCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataArrayCollection_class) {
  emscripten::class_<vtkDataArrayCollection, emscripten::base<vtkCollection>>("vtkDataArrayCollection")
    .smart_ptr<vtkSmartPointer<vtkDataArrayCollection>>("vtkSmartPointer<vtkDataArrayCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataArrayCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataArrayCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataArrayCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataArrayCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataArrayCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataArrayCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataArrayCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkDataArrayCollection&, vtkDataArray*)>([](vtkDataArrayCollection& self, vtkDataArray* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkDataArrayCollection::GetNextItem, emscripten::allow_raw_pointers())
    .function("GetItem", &vtkDataArrayCollection::GetItem, emscripten::allow_raw_pointers());
}
