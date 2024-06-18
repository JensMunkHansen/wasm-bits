// JavaScript wrapper for vtkUnstructuredGridBase with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkUnstructuredGridBaseEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkUnstructuredGridBase.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkIdList.h"
#include "vtkCellArray.h"
#include "vtkIdTypeArray.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkUnstructuredGridBase.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridBase>(vtkUnstructuredGridBase * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridBase_class) {
  emscripten::class_<vtkUnstructuredGridBase, emscripten::base<vtkPointSet>>("vtkUnstructuredGridBase")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridBase::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridBase& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridBase::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridBase::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridBase::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridBase& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkUnstructuredGridBase::GetDataObjectType)
    .function("DeepCopy", &vtkUnstructuredGridBase::DeepCopy, emscripten::allow_raw_pointers())
    .function("InsertNextCell", emscripten::select_overload<int(vtkUnstructuredGridBase&, int, vtkIdList*)>([](vtkUnstructuredGridBase& self, int arg_0, vtkIdList* arg_1) -> int { return self.InsertNextCell( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkUnstructuredGridBase*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkUnstructuredGridBase* { return vtkUnstructuredGridBase::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkUnstructuredGridBase*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkUnstructuredGridBase* { return vtkUnstructuredGridBase::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
