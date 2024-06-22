// JavaScript wrapper for vtkObjectFactoryCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkObjectFactoryCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkObjectFactoryCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkObjectFactory.h"
#include "vtkObjectFactoryCollection.h"

template<> void emscripten::internal::raw_destructor<vtkObjectFactoryCollection>(vtkObjectFactoryCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkObjectFactoryCollection_class) {
  emscripten::class_<vtkObjectFactoryCollection, emscripten::base<vtkCollection>>("vtkObjectFactoryCollection")
    .smart_ptr<vtkSmartPointer<vtkObjectFactoryCollection>>("vtkSmartPointer<vtkObjectFactoryCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkObjectFactoryCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkObjectFactoryCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkObjectFactoryCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkObjectFactoryCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkObjectFactoryCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkObjectFactoryCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkObjectFactoryCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkObjectFactoryCollection&, vtkObjectFactory*)>([](vtkObjectFactoryCollection& self, vtkObjectFactory* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkObjectFactoryCollection::GetNextItem, emscripten::allow_raw_pointers());
}
