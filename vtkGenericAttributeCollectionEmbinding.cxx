// JavaScript wrapper for vtkGenericAttributeCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkGenericAttributeCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkGenericAttributeCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericAttribute.h"
#include "vtkGenericAttributeCollection.h"

template<> void emscripten::internal::raw_destructor<vtkGenericAttributeCollection>(vtkGenericAttributeCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericAttributeCollection_class) {
  emscripten::class_<vtkGenericAttributeCollection, emscripten::base<vtkObject>>("vtkGenericAttributeCollection")
    .smart_ptr<vtkSmartPointer<vtkGenericAttributeCollection>>("vtkSmartPointer<vtkGenericAttributeCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGenericAttributeCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericAttributeCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericAttributeCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericAttributeCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericAttributeCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericAttributeCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericAttributeCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfAttributes", &vtkGenericAttributeCollection::GetNumberOfAttributes)
    .function("GetNumberOfComponents", &vtkGenericAttributeCollection::GetNumberOfComponents)
    .function("GetNumberOfPointCenteredComponents", &vtkGenericAttributeCollection::GetNumberOfPointCenteredComponents)
    .function("GetMaxNumberOfComponents", &vtkGenericAttributeCollection::GetMaxNumberOfComponents)
    .function("GetActualMemorySize", &vtkGenericAttributeCollection::GetActualMemorySize)
    .function("IsEmpty", &vtkGenericAttributeCollection::IsEmpty)
    .function("GetAttribute", &vtkGenericAttributeCollection::GetAttribute, emscripten::allow_raw_pointers())
    .function("FindAttribute", emscripten::optional_override([](vtkGenericAttributeCollection& self, const std::string & arg_0) -> int {  return self.FindAttribute( arg_0.c_str());}))
    .function("GetAttributeIndex", &vtkGenericAttributeCollection::GetAttributeIndex)
    .function("InsertNextAttribute", &vtkGenericAttributeCollection::InsertNextAttribute, emscripten::allow_raw_pointers())
    .function("InsertAttribute", &vtkGenericAttributeCollection::InsertAttribute, emscripten::allow_raw_pointers())
    .function("RemoveAttribute", &vtkGenericAttributeCollection::RemoveAttribute)
    .function("Reset", &vtkGenericAttributeCollection::Reset)
    .function("DeepCopy", &vtkGenericAttributeCollection::DeepCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkGenericAttributeCollection::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkGenericAttributeCollection::GetMTime)
    .function("GetActiveAttribute", &vtkGenericAttributeCollection::GetActiveAttribute)
    .function("GetActiveComponent", &vtkGenericAttributeCollection::GetActiveComponent)
    .function("SetActiveAttribute", &vtkGenericAttributeCollection::SetActiveAttribute)
    .function("GetNumberOfAttributesToInterpolate", &vtkGenericAttributeCollection::GetNumberOfAttributesToInterpolate)
    .function("SetAttributesToInterpolateToAll", &vtkGenericAttributeCollection::SetAttributesToInterpolateToAll);
}
