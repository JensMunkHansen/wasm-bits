// JavaScript wrapper for vtkOverrideInformationCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkOverrideInformationCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkOverrideInformationCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOverrideInformation.h"
#include "vtkOverrideInformationCollection.h"

template<> void emscripten::internal::raw_destructor<vtkOverrideInformationCollection>(vtkOverrideInformationCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOverrideInformationCollection_class) {
  emscripten::class_<vtkOverrideInformationCollection, emscripten::base<vtkCollection>>("vtkOverrideInformationCollection")
    .smart_ptr<vtkSmartPointer<vtkOverrideInformationCollection>>("vtkSmartPointer<vtkOverrideInformationCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOverrideInformationCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOverrideInformationCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOverrideInformationCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOverrideInformationCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOverrideInformationCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOverrideInformationCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOverrideInformationCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkOverrideInformationCollection&, vtkOverrideInformation*)>([](vtkOverrideInformationCollection& self, vtkOverrideInformation* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkOverrideInformationCollection::GetNextItem, emscripten::allow_raw_pointers());
}
