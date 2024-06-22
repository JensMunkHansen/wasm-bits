// JavaScript wrapper for vtkDataSetRegionSurfaceFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkDataSetRegionSurfaceFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkDataSetRegionSurfaceFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkPolyData.h"
#include "vtkDataSetSurfaceFilter.h"
#include "vtkDataSetRegionSurfaceFilter.h"

template<> void emscripten::internal::raw_destructor<vtkDataSetRegionSurfaceFilter>(vtkDataSetRegionSurfaceFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataSetRegionSurfaceFilter_class) {
  emscripten::class_<vtkDataSetRegionSurfaceFilter, emscripten::base<vtkDataSetSurfaceFilter>>("vtkDataSetRegionSurfaceFilter")
    .smart_ptr<vtkSmartPointer<vtkDataSetRegionSurfaceFilter>>("vtkSmartPointer<vtkDataSetRegionSurfaceFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDataSetRegionSurfaceFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetRegionSurfaceFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataSetRegionSurfaceFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataSetRegionSurfaceFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataSetRegionSurfaceFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetRegionSurfaceFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataSetRegionSurfaceFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRegionArrayName", emscripten::optional_override([](vtkDataSetRegionSurfaceFilter& self, const std::string & arg_0) -> void {  return self.SetRegionArrayName( arg_0.c_str());}))
    .function("GetRegionArrayName", emscripten::optional_override([](vtkDataSetRegionSurfaceFilter& self) -> std::string {  return self.GetRegionArrayName();}))
    .function("UnstructuredGridExecute", &vtkDataSetRegionSurfaceFilter::UnstructuredGridExecute, emscripten::allow_raw_pointers())
    .function("SetSingleSided", &vtkDataSetRegionSurfaceFilter::SetSingleSided)
    .function("GetSingleSided", &vtkDataSetRegionSurfaceFilter::GetSingleSided)
    .function("SetMaterialPropertiesName", emscripten::optional_override([](vtkDataSetRegionSurfaceFilter& self, const std::string & arg_0) -> void {  return self.SetMaterialPropertiesName( arg_0.c_str());}))
    .function("GetMaterialPropertiesName", emscripten::optional_override([](vtkDataSetRegionSurfaceFilter& self) -> std::string {  return self.GetMaterialPropertiesName();}))
    .function("SetMaterialIDsName", emscripten::optional_override([](vtkDataSetRegionSurfaceFilter& self, const std::string & arg_0) -> void {  return self.SetMaterialIDsName( arg_0.c_str());}))
    .function("GetMaterialIDsName", emscripten::optional_override([](vtkDataSetRegionSurfaceFilter& self) -> std::string {  return self.GetMaterialIDsName();}))
    .function("SetMaterialPIDsName", emscripten::optional_override([](vtkDataSetRegionSurfaceFilter& self, const std::string & arg_0) -> void {  return self.SetMaterialPIDsName( arg_0.c_str());}))
    .function("GetMaterialPIDsName", emscripten::optional_override([](vtkDataSetRegionSurfaceFilter& self) -> std::string {  return self.GetMaterialPIDsName();}))
    .function("SetInterfaceIDsName", emscripten::optional_override([](vtkDataSetRegionSurfaceFilter& self, const std::string & arg_0) -> void {  return self.SetInterfaceIDsName( arg_0.c_str());}))
    .function("GetInterfaceIDsName", emscripten::optional_override([](vtkDataSetRegionSurfaceFilter& self) -> std::string {  return self.GetInterfaceIDsName();}))
    .function("RecordOrigCellId", emscripten::select_overload<void(vtkDataSetRegionSurfaceFilter&, int, int)>([](vtkDataSetRegionSurfaceFilter& self, int arg_0, int arg_1) -> void { return self.RecordOrigCellId( arg_0, arg_1); }));
}
