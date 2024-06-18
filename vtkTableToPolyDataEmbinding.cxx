// JavaScript wrapper for vtkTableToPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkTableToPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkTableToPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTableToPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkTableToPolyData>(vtkTableToPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTableToPolyData_class) {
  emscripten::class_<vtkTableToPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkTableToPolyData")
    .smart_ptr<vtkSmartPointer<vtkTableToPolyData>>("vtkSmartPointer<vtkTableToPolyData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTableToPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTableToPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTableToPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTableToPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTableToPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetXColumn", emscripten::optional_override([](vtkTableToPolyData& self, const std::string & arg_0) -> void {  return self.SetXColumn( arg_0.c_str());}))
    .function("GetXColumn", emscripten::optional_override([](vtkTableToPolyData& self) -> std::string {  return self.GetXColumn();}))
    .function("SetXColumnIndex", &vtkTableToPolyData::SetXColumnIndex)
    .function("GetXColumnIndexMinValue", &vtkTableToPolyData::GetXColumnIndexMinValue)
    .function("GetXColumnIndexMaxValue", &vtkTableToPolyData::GetXColumnIndexMaxValue)
    .function("GetXColumnIndex", &vtkTableToPolyData::GetXColumnIndex)
    .function("SetXComponent", &vtkTableToPolyData::SetXComponent)
    .function("GetXComponentMinValue", &vtkTableToPolyData::GetXComponentMinValue)
    .function("GetXComponentMaxValue", &vtkTableToPolyData::GetXComponentMaxValue)
    .function("GetXComponent", &vtkTableToPolyData::GetXComponent)
    .function("SetYColumn", emscripten::optional_override([](vtkTableToPolyData& self, const std::string & arg_0) -> void {  return self.SetYColumn( arg_0.c_str());}))
    .function("GetYColumn", emscripten::optional_override([](vtkTableToPolyData& self) -> std::string {  return self.GetYColumn();}))
    .function("SetYColumnIndex", &vtkTableToPolyData::SetYColumnIndex)
    .function("GetYColumnIndexMinValue", &vtkTableToPolyData::GetYColumnIndexMinValue)
    .function("GetYColumnIndexMaxValue", &vtkTableToPolyData::GetYColumnIndexMaxValue)
    .function("GetYColumnIndex", &vtkTableToPolyData::GetYColumnIndex)
    .function("SetYComponent", &vtkTableToPolyData::SetYComponent)
    .function("GetYComponentMinValue", &vtkTableToPolyData::GetYComponentMinValue)
    .function("GetYComponentMaxValue", &vtkTableToPolyData::GetYComponentMaxValue)
    .function("GetYComponent", &vtkTableToPolyData::GetYComponent)
    .function("SetZColumn", emscripten::optional_override([](vtkTableToPolyData& self, const std::string & arg_0) -> void {  return self.SetZColumn( arg_0.c_str());}))
    .function("GetZColumn", emscripten::optional_override([](vtkTableToPolyData& self) -> std::string {  return self.GetZColumn();}))
    .function("SetZColumnIndex", &vtkTableToPolyData::SetZColumnIndex)
    .function("GetZColumnIndexMinValue", &vtkTableToPolyData::GetZColumnIndexMinValue)
    .function("GetZColumnIndexMaxValue", &vtkTableToPolyData::GetZColumnIndexMaxValue)
    .function("GetZColumnIndex", &vtkTableToPolyData::GetZColumnIndex)
    .function("SetZComponent", &vtkTableToPolyData::SetZComponent)
    .function("GetZComponentMinValue", &vtkTableToPolyData::GetZComponentMinValue)
    .function("GetZComponentMaxValue", &vtkTableToPolyData::GetZComponentMaxValue)
    .function("GetZComponent", &vtkTableToPolyData::GetZComponent)
    .function("SetCreate2DPoints", &vtkTableToPolyData::SetCreate2DPoints)
    .function("GetCreate2DPoints", &vtkTableToPolyData::GetCreate2DPoints)
    .function("Create2DPointsOn", &vtkTableToPolyData::Create2DPointsOn)
    .function("Create2DPointsOff", &vtkTableToPolyData::Create2DPointsOff)
    .function("SetPreserveCoordinateColumnsAsDataArrays", &vtkTableToPolyData::SetPreserveCoordinateColumnsAsDataArrays)
    .function("GetPreserveCoordinateColumnsAsDataArrays", &vtkTableToPolyData::GetPreserveCoordinateColumnsAsDataArrays)
    .function("PreserveCoordinateColumnsAsDataArraysOn", &vtkTableToPolyData::PreserveCoordinateColumnsAsDataArraysOn)
    .function("PreserveCoordinateColumnsAsDataArraysOff", &vtkTableToPolyData::PreserveCoordinateColumnsAsDataArraysOff);
}
