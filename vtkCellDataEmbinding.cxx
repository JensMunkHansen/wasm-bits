// JavaScript wrapper for vtkCellData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellDataEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellData.h"

template<> void emscripten::internal::raw_destructor<vtkCellData>(vtkCellData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellData_class) {
  emscripten::class_<vtkCellData, emscripten::base<vtkDataSetAttributes>>("vtkCellData")
    .smart_ptr<vtkSmartPointer<vtkCellData>>("vtkSmartPointer<vtkCellData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellData>)
    .class_function("ExtendedNew", &vtkCellData::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
