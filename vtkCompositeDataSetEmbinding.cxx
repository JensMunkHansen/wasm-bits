// JavaScript wrapper for vtkCompositeDataSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCompositeDataSetEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCompositeDataSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositeDataIterator.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkInformationStringKey.h"
#include "vtkInformationIntegerKey.h"
#include "vtkCompositeDataSet.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeDataSet>(vtkCompositeDataSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeDataSet_class) {
  emscripten::class_<vtkCompositeDataSet, emscripten::base<vtkDataObject>>("vtkCompositeDataSet")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeDataSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeDataSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeDataSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeDataSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkCompositeDataSet::GetDataObjectType)
    .function("CopyStructure", &vtkCompositeDataSet::CopyStructure, emscripten::allow_raw_pointers())
    .function("GetDataSet", emscripten::select_overload<vtkDataObject*(vtkCompositeDataSet&, unsigned int)>([](vtkCompositeDataSet& self, unsigned int arg_0) -> vtkDataObject* { return self.GetDataSet( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetActualMemorySize", &vtkCompositeDataSet::GetActualMemorySize)
    .class_function("GetData", emscripten::select_overload<vtkCompositeDataSet*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkCompositeDataSet* { return vtkCompositeDataSet::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkCompositeDataSet*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkCompositeDataSet* { return vtkCompositeDataSet::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Initialize", &vtkCompositeDataSet::Initialize)
    .function("CompositeShallowCopy", &vtkCompositeDataSet::CompositeShallowCopy, emscripten::allow_raw_pointers())
    .function("GetNumberOfPoints", &vtkCompositeDataSet::GetNumberOfPoints)
    .function("GetNumberOfCells", &vtkCompositeDataSet::GetNumberOfCells)
    .function("GetNumberOfElements", &vtkCompositeDataSet::GetNumberOfElements)
    .class_function("NAME", &vtkCompositeDataSet::NAME, emscripten::allow_raw_pointers())
    .class_function("CURRENT_PROCESS_CAN_LOAD_BLOCK", &vtkCompositeDataSet::CURRENT_PROCESS_CAN_LOAD_BLOCK, emscripten::allow_raw_pointers())
    .function("SupportsGhostArray", &vtkCompositeDataSet::SupportsGhostArray);
}
