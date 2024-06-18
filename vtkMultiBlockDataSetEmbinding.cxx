// JavaScript wrapper for vtkMultiBlockDataSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkMultiBlockDataSetEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkMultiBlockDataSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkCompositeDataIterator.h"
#include "vtkMultiBlockDataSet.h"

template<> void emscripten::internal::raw_destructor<vtkMultiBlockDataSet>(vtkMultiBlockDataSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMultiBlockDataSet_class) {
  emscripten::class_<vtkMultiBlockDataSet, emscripten::base<vtkDataObjectTree>>("vtkMultiBlockDataSet")
    .smart_ptr<vtkSmartPointer<vtkMultiBlockDataSet>>("vtkSmartPointer<vtkMultiBlockDataSet>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMultiBlockDataSet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiBlockDataSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMultiBlockDataSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMultiBlockDataSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMultiBlockDataSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiBlockDataSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMultiBlockDataSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkMultiBlockDataSet::GetDataObjectType)
    .function("SetNumberOfBlocks", &vtkMultiBlockDataSet::SetNumberOfBlocks)
    .function("GetNumberOfBlocks", &vtkMultiBlockDataSet::GetNumberOfBlocks)
    .function("GetBlock", &vtkMultiBlockDataSet::GetBlock, emscripten::allow_raw_pointers())
    .function("SetBlock", &vtkMultiBlockDataSet::SetBlock, emscripten::allow_raw_pointers())
    .function("RemoveBlock", &vtkMultiBlockDataSet::RemoveBlock)
    .function("HasMetaData", emscripten::select_overload<int(vtkMultiBlockDataSet&, unsigned int)>([](vtkMultiBlockDataSet& self, unsigned int arg_0) -> int { return self.HasMetaData( arg_0); }))
    .function("HasMetaData", emscripten::select_overload<int(vtkMultiBlockDataSet&, vtkCompositeDataIterator*)>([](vtkMultiBlockDataSet& self, vtkCompositeDataIterator* arg_0) -> int { return self.HasMetaData( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetMetaData", emscripten::select_overload<vtkInformation*(vtkMultiBlockDataSet&, unsigned int)>([](vtkMultiBlockDataSet& self, unsigned int arg_0) -> vtkInformation* { return self.GetMetaData( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetMetaData", emscripten::select_overload<vtkInformation*(vtkMultiBlockDataSet&, vtkCompositeDataIterator*)>([](vtkMultiBlockDataSet& self, vtkCompositeDataIterator* arg_0) -> vtkInformation* { return self.GetMetaData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkMultiBlockDataSet*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkMultiBlockDataSet* { return vtkMultiBlockDataSet::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkMultiBlockDataSet*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkMultiBlockDataSet* { return vtkMultiBlockDataSet::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
