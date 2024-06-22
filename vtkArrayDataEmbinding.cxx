// JavaScript wrapper for vtkArrayData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkArrayDataEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkArrayData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkArray.h"
#include "vtkDataObject.h"
#include "vtkArrayData.h"

template<> void emscripten::internal::raw_destructor<vtkArrayData>(vtkArrayData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArrayData_class) {
  emscripten::class_<vtkArrayData, emscripten::base<vtkDataObject>>("vtkArrayData")
    .smart_ptr<vtkSmartPointer<vtkArrayData>>("vtkSmartPointer<vtkArrayData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkArrayData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArrayData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArrayData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArrayData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArrayData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("GetData", emscripten::select_overload<vtkArrayData*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkArrayData* { return vtkArrayData::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkArrayData*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkArrayData* { return vtkArrayData::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddArray", &vtkArrayData::AddArray, emscripten::allow_raw_pointers())
    .function("ClearArrays", &vtkArrayData::ClearArrays)
    .function("GetNumberOfArrays", &vtkArrayData::GetNumberOfArrays)
    .function("GetArray", &vtkArrayData::GetArray, emscripten::allow_raw_pointers())
    .function("GetArrayByName", emscripten::optional_override([](vtkArrayData& self, const std::string & arg_0) -> vtkArray* {  return self.GetArrayByName( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .function("GetDataObjectType", &vtkArrayData::GetDataObjectType)
    .function("ShallowCopy", &vtkArrayData::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkArrayData::DeepCopy, emscripten::allow_raw_pointers());
}
