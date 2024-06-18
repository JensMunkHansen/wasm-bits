// JavaScript wrapper for vtkPolyDataCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPolyDataCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPolyDataCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkPolyDataCollection.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataCollection>(vtkPolyDataCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataCollection_class) {
  emscripten::class_<vtkPolyDataCollection, emscripten::base<vtkCollection>>("vtkPolyDataCollection")
    .smart_ptr<vtkSmartPointer<vtkPolyDataCollection>>("vtkSmartPointer<vtkPolyDataCollection>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolyDataCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkPolyDataCollection&, vtkPolyData*)>([](vtkPolyDataCollection& self, vtkPolyData* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkPolyDataCollection::GetNextItem, emscripten::allow_raw_pointers());
}
