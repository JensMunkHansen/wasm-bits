// JavaScript wrapper for vtkCellTypes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellTypesEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellTypes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnsignedCharArray.h"
#include "vtkIdTypeArray.h"
#include "vtkCellTypes.h"

template<> void emscripten::internal::raw_destructor<vtkCellTypes>(vtkCellTypes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellTypes_class) {
  emscripten::class_<vtkCellTypes, emscripten::base<vtkObject>>("vtkCellTypes")
    .smart_ptr<vtkSmartPointer<vtkCellTypes>>("vtkSmartPointer<vtkCellTypes>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellTypes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellTypes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellTypes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellTypes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellTypes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellTypes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellTypes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Allocate", &vtkCellTypes::Allocate)
    .function("InsertCell", &vtkCellTypes::InsertCell)
    .function("InsertNextCell", &vtkCellTypes::InsertNextCell)
    .function("SetCellTypes", &vtkCellTypes::SetCellTypes, emscripten::allow_raw_pointers())
    .function("DeleteCell", &vtkCellTypes::DeleteCell)
    .function("GetNumberOfTypes", &vtkCellTypes::GetNumberOfTypes)
    .function("IsType", &vtkCellTypes::IsType)
    .function("InsertNextType", &vtkCellTypes::InsertNextType)
    .function("GetCellType", &vtkCellTypes::GetCellType)
    .function("Squeeze", &vtkCellTypes::Squeeze)
    .function("Reset", &vtkCellTypes::Reset)
    .function("GetActualMemorySize", &vtkCellTypes::GetActualMemorySize)
    .function("DeepCopy", &vtkCellTypes::DeepCopy, emscripten::allow_raw_pointers())
    .class_function("GetClassNameFromTypeId", emscripten::optional_override([]( int arg_0) -> std::string {  return vtkCellTypes::GetClassNameFromTypeId( arg_0);}))
    .class_function("GetTypeIdFromClassName", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellTypes::GetTypeIdFromClassName( arg_0.c_str());}))
    .class_function("IsLinear", &vtkCellTypes::IsLinear)
    .class_function("GetDimension", &vtkCellTypes::GetDimension)
    .function("GetCellTypesArray", &vtkCellTypes::GetCellTypesArray, emscripten::allow_raw_pointers())
    .function("GetCellLocationsArray", &vtkCellTypes::GetCellLocationsArray, emscripten::allow_raw_pointers());
}
