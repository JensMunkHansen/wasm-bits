// JavaScript wrapper for vtkTableToStructuredGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkTableToStructuredGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkTableToStructuredGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTableToStructuredGrid.h"

template<> void emscripten::internal::raw_destructor<vtkTableToStructuredGrid>(vtkTableToStructuredGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTableToStructuredGrid_class) {
  emscripten::class_<vtkTableToStructuredGrid, emscripten::base<vtkStructuredGridAlgorithm>>("vtkTableToStructuredGrid")
    .smart_ptr<vtkSmartPointer<vtkTableToStructuredGrid>>("vtkSmartPointer<vtkTableToStructuredGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTableToStructuredGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToStructuredGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTableToStructuredGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTableToStructuredGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTableToStructuredGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToStructuredGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTableToStructuredGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWholeExtent", emscripten::select_overload<void(vtkTableToStructuredGrid&, int, int, int, int, int, int)>([](vtkTableToStructuredGrid& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetXColumn", emscripten::optional_override([](vtkTableToStructuredGrid& self, const std::string & arg_0) -> void {  return self.SetXColumn( arg_0.c_str());}))
    .function("GetXColumn", emscripten::optional_override([](vtkTableToStructuredGrid& self) -> std::string {  return self.GetXColumn();}))
    .function("SetXComponent", &vtkTableToStructuredGrid::SetXComponent)
    .function("GetXComponentMinValue", &vtkTableToStructuredGrid::GetXComponentMinValue)
    .function("GetXComponentMaxValue", &vtkTableToStructuredGrid::GetXComponentMaxValue)
    .function("GetXComponent", &vtkTableToStructuredGrid::GetXComponent)
    .function("SetYColumn", emscripten::optional_override([](vtkTableToStructuredGrid& self, const std::string & arg_0) -> void {  return self.SetYColumn( arg_0.c_str());}))
    .function("GetYColumn", emscripten::optional_override([](vtkTableToStructuredGrid& self) -> std::string {  return self.GetYColumn();}))
    .function("SetYComponent", &vtkTableToStructuredGrid::SetYComponent)
    .function("GetYComponentMinValue", &vtkTableToStructuredGrid::GetYComponentMinValue)
    .function("GetYComponentMaxValue", &vtkTableToStructuredGrid::GetYComponentMaxValue)
    .function("GetYComponent", &vtkTableToStructuredGrid::GetYComponent)
    .function("SetZColumn", emscripten::optional_override([](vtkTableToStructuredGrid& self, const std::string & arg_0) -> void {  return self.SetZColumn( arg_0.c_str());}))
    .function("GetZColumn", emscripten::optional_override([](vtkTableToStructuredGrid& self) -> std::string {  return self.GetZColumn();}))
    .function("SetZComponent", &vtkTableToStructuredGrid::SetZComponent)
    .function("GetZComponentMinValue", &vtkTableToStructuredGrid::GetZComponentMinValue)
    .function("GetZComponentMaxValue", &vtkTableToStructuredGrid::GetZComponentMaxValue)
    .function("GetZComponent", &vtkTableToStructuredGrid::GetZComponent);
}
