// JavaScript wrapper for vtkPlaneCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPlaneCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPlaneCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlane.h"
#include "vtkPlaneCollection.h"

template<> void emscripten::internal::raw_destructor<vtkPlaneCollection>(vtkPlaneCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlaneCollection_class) {
  emscripten::class_<vtkPlaneCollection, emscripten::base<vtkCollection>>("vtkPlaneCollection")
    .smart_ptr<vtkSmartPointer<vtkPlaneCollection>>("vtkSmartPointer<vtkPlaneCollection>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPlaneCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlaneCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlaneCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlaneCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlaneCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlaneCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlaneCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkPlaneCollection&, vtkPlane*)>([](vtkPlaneCollection& self, vtkPlane* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkPlaneCollection::GetNextItem, emscripten::allow_raw_pointers())
    .function("GetItem", &vtkPlaneCollection::GetItem, emscripten::allow_raw_pointers());
}
