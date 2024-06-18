// JavaScript wrapper for vtkDataObjectTree with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDataObjectTreeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDataObjectTree.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObjectTreeIterator.h"
#include "vtkCompositeDataIterator.h"
#include "vtkCompositeDataSet.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkDataObjectTree.h"

template<> void emscripten::internal::raw_destructor<vtkDataObjectTree>(vtkDataObjectTree * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataObjectTree_class) {
  emscripten::class_<vtkDataObjectTree, emscripten::base<vtkCompositeDataSet>>("vtkDataObjectTree")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectTree::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataObjectTree& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataObjectTree::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataObjectTree::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectTree::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataObjectTree& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("NewTreeIterator", &vtkDataObjectTree::NewTreeIterator, emscripten::allow_raw_pointers())
    .function("NewIterator", &vtkDataObjectTree::NewIterator, emscripten::allow_raw_pointers())
    .function("CopyStructure", &vtkDataObjectTree::CopyStructure, emscripten::allow_raw_pointers())
    .function("SetDataSet", &vtkDataObjectTree::SetDataSet, emscripten::allow_raw_pointers())
    .function("SetDataSetFrom", &vtkDataObjectTree::SetDataSetFrom, emscripten::allow_raw_pointers())
    .function("GetDataSet", emscripten::select_overload<vtkDataObject*(vtkDataObjectTree&, vtkCompositeDataIterator*)>([](vtkDataObjectTree& self, vtkCompositeDataIterator* arg_0) -> vtkDataObject* { return self.GetDataSet( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetDataSet", emscripten::select_overload<vtkDataObject*(vtkDataObjectTree&, unsigned int)>([](vtkDataObjectTree& self, unsigned int arg_0) -> vtkDataObject* { return self.GetDataSet( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetMetaData", &vtkDataObjectTree::GetMetaData, emscripten::allow_raw_pointers())
    .function("HasMetaData", &vtkDataObjectTree::HasMetaData, emscripten::allow_raw_pointers())
    .function("GetActualMemorySize", &vtkDataObjectTree::GetActualMemorySize)
    .function("Initialize", &vtkDataObjectTree::Initialize)
    .function("CompositeShallowCopy", &vtkDataObjectTree::CompositeShallowCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkDataObjectTree::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkDataObjectTree::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetNumberOfPoints", &vtkDataObjectTree::GetNumberOfPoints)
    .function("GetNumberOfCells", &vtkDataObjectTree::GetNumberOfCells)
    .function("GetNumberOfChildren", &vtkDataObjectTree::GetNumberOfChildren)
    .function("GetChild", &vtkDataObjectTree::GetChild, emscripten::allow_raw_pointers())
    .function("GetChildMetaData", &vtkDataObjectTree::GetChildMetaData, emscripten::allow_raw_pointers())
    .function("HasChildMetaData", &vtkDataObjectTree::HasChildMetaData)
    .class_function("GetData", emscripten::select_overload<vtkDataObjectTree*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkDataObjectTree* { return vtkDataObjectTree::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkDataObjectTree*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkDataObjectTree* { return vtkDataObjectTree::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetDataObjectType", &vtkDataObjectTree::GetDataObjectType);
}
