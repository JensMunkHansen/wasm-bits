// JavaScript wrapper for vtkDataObjectCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDataObjectCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDataObjectCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkDataObjectCollection.h"

template<> void emscripten::internal::raw_destructor<vtkDataObjectCollection>(vtkDataObjectCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataObjectCollection_class) {
  emscripten::class_<vtkDataObjectCollection, emscripten::base<vtkCollection>>("vtkDataObjectCollection")
    .smart_ptr<vtkSmartPointer<vtkDataObjectCollection>>("vtkSmartPointer<vtkDataObjectCollection>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDataObjectCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataObjectCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataObjectCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataObjectCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataObjectCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkDataObjectCollection&, vtkDataObject*)>([](vtkDataObjectCollection& self, vtkDataObject* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkDataObjectCollection::GetNextItem, emscripten::allow_raw_pointers())
    .function("GetItem", &vtkDataObjectCollection::GetItem, emscripten::allow_raw_pointers());
}
