// JavaScript wrapper for vtkStructuredPointsCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkStructuredPointsCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkStructuredPointsCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStructuredPoints.h"
#include "vtkStructuredPointsCollection.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredPointsCollection>(vtkStructuredPointsCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredPointsCollection_class) {
  emscripten::class_<vtkStructuredPointsCollection, emscripten::base<vtkCollection>>("vtkStructuredPointsCollection")
    .smart_ptr<vtkSmartPointer<vtkStructuredPointsCollection>>("vtkSmartPointer<vtkStructuredPointsCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStructuredPointsCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredPointsCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredPointsCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredPointsCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredPointsCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredPointsCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredPointsCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkStructuredPointsCollection&, vtkStructuredPoints*)>([](vtkStructuredPointsCollection& self, vtkStructuredPoints* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkStructuredPointsCollection::GetNextItem, emscripten::allow_raw_pointers());
}
