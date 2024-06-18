// JavaScript wrapper for vtkPointData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPointDataEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPointData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointData.h"

template<> void emscripten::internal::raw_destructor<vtkPointData>(vtkPointData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointData_class) {
  emscripten::class_<vtkPointData, emscripten::base<vtkDataSetAttributes>>("vtkPointData")
    .smart_ptr<vtkSmartPointer<vtkPointData>>("vtkSmartPointer<vtkPointData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPointData>)
    .class_function("ExtendedNew", &vtkPointData::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
