// JavaScript wrapper for vtkGenericDataSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkGenericDataSetEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkGenericDataSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellTypes.h"
#include "vtkGenericCellIterator.h"
#include "vtkGenericPointIterator.h"
#include "vtkGenericAttributeCollection.h"
#include "vtkDataSetAttributes.h"
#include "vtkGenericCellTessellator.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkGenericDataSet.h"

template<> void emscripten::internal::raw_destructor<vtkGenericDataSet>(vtkGenericDataSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericDataSet_class) {
  emscripten::class_<vtkGenericDataSet, emscripten::base<vtkDataObject>>("vtkGenericDataSet")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericDataSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericDataSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericDataSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericDataSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericDataSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericDataSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfElements", &vtkGenericDataSet::GetNumberOfElements)
    .function("GetCellTypes", &vtkGenericDataSet::GetCellTypes, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkGenericDataSet::GetMTime)
    .function("GetBounds", emscripten::select_overload<std::uintptr_t(vtkGenericDataSet&)>([](vtkGenericDataSet& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetBounds()); }))
    .function("GetCenter", emscripten::select_overload<std::uintptr_t(vtkGenericDataSet&)>([](vtkGenericDataSet& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetCenter()); }))
    .function("GetLength", &vtkGenericDataSet::GetLength)
    .function("GetAttributes", emscripten::select_overload<vtkGenericAttributeCollection*(vtkGenericDataSet&)>([](vtkGenericDataSet& self) -> vtkGenericAttributeCollection* { return self.GetAttributes(); }), emscripten::allow_raw_pointers())
    .function("GetAttributes", emscripten::select_overload<vtkDataSetAttributes*(vtkGenericDataSet&, int)>([](vtkGenericDataSet& self, int arg_0) -> vtkDataSetAttributes* { return self.GetAttributes( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetTessellator", &vtkGenericDataSet::SetTessellator, emscripten::allow_raw_pointers())
    .function("GetTessellator", &vtkGenericDataSet::GetTessellator, emscripten::allow_raw_pointers())
    .function("GetActualMemorySize", &vtkGenericDataSet::GetActualMemorySize)
    .function("GetDataObjectType", &vtkGenericDataSet::GetDataObjectType)
    .class_function("GetData", emscripten::select_overload<vtkGenericDataSet*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkGenericDataSet* { return vtkGenericDataSet::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkGenericDataSet*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkGenericDataSet* { return vtkGenericDataSet::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
