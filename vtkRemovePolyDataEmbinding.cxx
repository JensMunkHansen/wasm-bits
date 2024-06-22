// JavaScript wrapper for vtkRemovePolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkRemovePolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkRemovePolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkIdTypeArray.h"
#include "vtkRemovePolyData.h"

template<> void emscripten::internal::raw_destructor<vtkRemovePolyData>(vtkRemovePolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRemovePolyData_class) {
  emscripten::class_<vtkRemovePolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkRemovePolyData")
    .smart_ptr<vtkSmartPointer<vtkRemovePolyData>>("vtkSmartPointer<vtkRemovePolyData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRemovePolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRemovePolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRemovePolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRemovePolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRemovePolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRemovePolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRemovePolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RemoveInputData", &vtkRemovePolyData::RemoveInputData, emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkRemovePolyData&, int)>([](vtkRemovePolyData& self, int arg_0) -> vtkPolyData* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkRemovePolyData&)>([](vtkRemovePolyData& self) -> vtkPolyData* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("SetCellIds", &vtkRemovePolyData::SetCellIds, emscripten::allow_raw_pointers())
    .function("GetCellIds", &vtkRemovePolyData::GetCellIds, emscripten::allow_raw_pointers())
    .function("SetPointIds", &vtkRemovePolyData::SetPointIds, emscripten::allow_raw_pointers())
    .function("GetPointIds", &vtkRemovePolyData::GetPointIds, emscripten::allow_raw_pointers())
    .function("SetExactMatch", &vtkRemovePolyData::SetExactMatch)
    .function("GetExactMatch", &vtkRemovePolyData::GetExactMatch)
    .function("ExactMatchOn", &vtkRemovePolyData::ExactMatchOn)
    .function("ExactMatchOff", &vtkRemovePolyData::ExactMatchOff);
}
