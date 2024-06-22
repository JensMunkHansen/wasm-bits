// JavaScript wrapper for vtkImplicitFunctionCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkImplicitFunctionCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkImplicitFunctionCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkImplicitFunctionCollection.h"

template<> void emscripten::internal::raw_destructor<vtkImplicitFunctionCollection>(vtkImplicitFunctionCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitFunctionCollection_class) {
  emscripten::class_<vtkImplicitFunctionCollection, emscripten::base<vtkCollection>>("vtkImplicitFunctionCollection")
    .smart_ptr<vtkSmartPointer<vtkImplicitFunctionCollection>>("vtkSmartPointer<vtkImplicitFunctionCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImplicitFunctionCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitFunctionCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitFunctionCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitFunctionCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitFunctionCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitFunctionCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitFunctionCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkImplicitFunctionCollection&, vtkImplicitFunction*)>([](vtkImplicitFunctionCollection& self, vtkImplicitFunction* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkImplicitFunctionCollection::GetNextItem, emscripten::allow_raw_pointers());
}
