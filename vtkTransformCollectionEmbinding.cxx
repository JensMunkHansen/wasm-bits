// JavaScript wrapper for vtkTransformCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkTransformCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkTransformCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTransform.h"
#include "vtkTransformCollection.h"

template<> void emscripten::internal::raw_destructor<vtkTransformCollection>(vtkTransformCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransformCollection_class) {
  emscripten::class_<vtkTransformCollection, emscripten::base<vtkCollection>>("vtkTransformCollection")
    .smart_ptr<vtkSmartPointer<vtkTransformCollection>>("vtkSmartPointer<vtkTransformCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTransformCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransformCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransformCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransformCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransformCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkTransformCollection&, vtkTransform*)>([](vtkTransformCollection& self, vtkTransform* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkTransformCollection::GetNextItem, emscripten::allow_raw_pointers());
}
