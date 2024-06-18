// JavaScript wrapper for vtkDataSetCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDataSetCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDataSetCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkDataSetCollection.h"

template<> void emscripten::internal::raw_destructor<vtkDataSetCollection>(vtkDataSetCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataSetCollection_class) {
  emscripten::class_<vtkDataSetCollection, emscripten::base<vtkCollection>>("vtkDataSetCollection")
    .smart_ptr<vtkSmartPointer<vtkDataSetCollection>>("vtkSmartPointer<vtkDataSetCollection>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDataSetCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataSetCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataSetCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataSetCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataSetCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkDataSetCollection&, vtkDataSet*)>([](vtkDataSetCollection& self, vtkDataSet* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkDataSetCollection::GetNextItem, emscripten::allow_raw_pointers())
    .function("GetNextDataSet", emscripten::select_overload<vtkDataSet*(vtkDataSetCollection&)>([](vtkDataSetCollection& self) -> vtkDataSet* { return self.GetNextDataSet(); }), emscripten::allow_raw_pointers())
    .function("GetItem", &vtkDataSetCollection::GetItem, emscripten::allow_raw_pointers())
    .function("GetDataSet", &vtkDataSetCollection::GetDataSet, emscripten::allow_raw_pointers());
}
