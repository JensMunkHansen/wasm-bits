// JavaScript wrapper for vtkSortFieldData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkSortFieldDataEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkSortFieldData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFieldData.h"
#include "vtkSortFieldData.h"

template<> void emscripten::internal::raw_destructor<vtkSortFieldData>(vtkSortFieldData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSortFieldData_class) {
  emscripten::class_<vtkSortFieldData, emscripten::base<vtkSortDataArray>>("vtkSortFieldData")
    .smart_ptr<vtkSmartPointer<vtkSortFieldData>>("vtkSmartPointer<vtkSortFieldData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSortFieldData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSortFieldData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSortFieldData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSortFieldData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSortFieldData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSortFieldData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSortFieldData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("Sort", emscripten::select_overload<std::uintptr_t( vtkFieldData*, const std::string &, int, int)>([]( vtkFieldData* arg_0, const std::string & arg_1, int arg_2, int arg_3) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(vtkSortFieldData::Sort( arg_0, arg_1.c_str(), arg_2, arg_3)); }), emscripten::allow_raw_pointers())
    .class_function("Sort", emscripten::select_overload<std::uintptr_t( vtkFieldData*, const std::string &, int, int, int)>([]( vtkFieldData* arg_0, const std::string & arg_1, int arg_2, int arg_3, int arg_4) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(vtkSortFieldData::Sort( arg_0, arg_1.c_str(), arg_2, arg_3, arg_4)); }), emscripten::allow_raw_pointers());
}
