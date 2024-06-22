// JavaScript wrapper for vtkUniformGridAMR with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkUniformGridAMREmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkUniformGridAMR.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositeDataIterator.h"
#include "vtkDataObject.h"
#include "vtkUniformGrid.h"
#include "vtkCompositeDataSet.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkUniformGridAMR.h"

template<> void emscripten::internal::raw_destructor<vtkUniformGridAMR>(vtkUniformGridAMR * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUniformGridAMR_class) {
  emscripten::class_<vtkUniformGridAMR, emscripten::base<vtkCompositeDataSet>>("vtkUniformGridAMR")
    .smart_ptr<vtkSmartPointer<vtkUniformGridAMR>>("vtkSmartPointer<vtkUniformGridAMR>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUniformGridAMR>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniformGridAMR::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUniformGridAMR& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUniformGridAMR::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUniformGridAMR::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniformGridAMR::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUniformGridAMR& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("NewIterator", &vtkUniformGridAMR::NewIterator, emscripten::allow_raw_pointers())
    .function("GetDataObjectType", &vtkUniformGridAMR::GetDataObjectType)
    .function("Initialize", emscripten::select_overload<void(vtkUniformGridAMR&)>([](vtkUniformGridAMR& self) -> void { return self.Initialize(); }))
    .function("Initialize", emscripten::select_overload<void(vtkUniformGridAMR&, int, std::uintptr_t)>([](vtkUniformGridAMR& self, int arg_0, std::uintptr_t arg_1) -> void { return self.Initialize( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int))); }))
    .function("SetGridDescription", &vtkUniformGridAMR::SetGridDescription)
    .function("GetGridDescription", &vtkUniformGridAMR::GetGridDescription)
    .function("GetNumberOfLevels", &vtkUniformGridAMR::GetNumberOfLevels)
    .function("GetTotalNumberOfBlocks", &vtkUniformGridAMR::GetTotalNumberOfBlocks)
    .function("GetNumberOfDataSets", &vtkUniformGridAMR::GetNumberOfDataSets)
    .function("GetBounds", emscripten::select_overload<std::uintptr_t(vtkUniformGridAMR&)>([](vtkUniformGridAMR& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetBounds()); }))
    .function("SetDataSet", emscripten::select_overload<void(vtkUniformGridAMR&, vtkCompositeDataIterator*, vtkDataObject*)>([](vtkUniformGridAMR& self, vtkCompositeDataIterator* arg_0, vtkDataObject* arg_1) -> void { return self.SetDataSet( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetDataSet", emscripten::select_overload<void(vtkUniformGridAMR&, unsigned int, unsigned int, vtkUniformGrid*)>([](vtkUniformGridAMR& self, unsigned int arg_0, unsigned int arg_1, vtkUniformGrid* arg_2) -> void { return self.SetDataSet( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetDataSet", emscripten::select_overload<vtkDataObject*(vtkUniformGridAMR&, vtkCompositeDataIterator*)>([](vtkUniformGridAMR& self, vtkCompositeDataIterator* arg_0) -> vtkDataObject* { return self.GetDataSet( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetDataSet", emscripten::select_overload<vtkDataObject*(vtkUniformGridAMR&, unsigned int)>([](vtkUniformGridAMR& self, unsigned int arg_0) -> vtkDataObject* { return self.GetDataSet( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetDataSet", emscripten::select_overload<vtkUniformGrid*(vtkUniformGridAMR&, unsigned int, unsigned int)>([](vtkUniformGridAMR& self, unsigned int arg_0, unsigned int arg_1) -> vtkUniformGrid* { return self.GetDataSet( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetCompositeIndex", &vtkUniformGridAMR::GetCompositeIndex)
    .function("CompositeShallowCopy", &vtkUniformGridAMR::CompositeShallowCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkUniformGridAMR::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkUniformGridAMR::DeepCopy, emscripten::allow_raw_pointers())
    .function("CopyStructure", &vtkUniformGridAMR::CopyStructure, emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkUniformGridAMR*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkUniformGridAMR* { return vtkUniformGridAMR::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkUniformGridAMR*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkUniformGridAMR* { return vtkUniformGridAMR::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
