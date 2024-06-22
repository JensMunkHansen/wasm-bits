// JavaScript wrapper for vtkBlankStructuredGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkBlankStructuredGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkBlankStructuredGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBlankStructuredGrid.h"

template<> void emscripten::internal::raw_destructor<vtkBlankStructuredGrid>(vtkBlankStructuredGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBlankStructuredGrid_class) {
  emscripten::class_<vtkBlankStructuredGrid, emscripten::base<vtkStructuredGridAlgorithm>>("vtkBlankStructuredGrid")
    .smart_ptr<vtkSmartPointer<vtkBlankStructuredGrid>>("vtkSmartPointer<vtkBlankStructuredGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBlankStructuredGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBlankStructuredGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBlankStructuredGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBlankStructuredGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBlankStructuredGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBlankStructuredGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBlankStructuredGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMinBlankingValue", &vtkBlankStructuredGrid::SetMinBlankingValue)
    .function("GetMinBlankingValue", &vtkBlankStructuredGrid::GetMinBlankingValue)
    .function("SetMaxBlankingValue", &vtkBlankStructuredGrid::SetMaxBlankingValue)
    .function("GetMaxBlankingValue", &vtkBlankStructuredGrid::GetMaxBlankingValue)
    .function("SetArrayName", emscripten::optional_override([](vtkBlankStructuredGrid& self, const std::string & arg_0) -> void {  return self.SetArrayName( arg_0.c_str());}))
    .function("GetArrayName", emscripten::optional_override([](vtkBlankStructuredGrid& self) -> std::string {  return self.GetArrayName();}))
    .function("SetArrayId", &vtkBlankStructuredGrid::SetArrayId)
    .function("GetArrayId", &vtkBlankStructuredGrid::GetArrayId)
    .function("SetComponent", &vtkBlankStructuredGrid::SetComponent)
    .function("GetComponentMinValue", &vtkBlankStructuredGrid::GetComponentMinValue)
    .function("GetComponentMaxValue", &vtkBlankStructuredGrid::GetComponentMaxValue)
    .function("GetComponent", &vtkBlankStructuredGrid::GetComponent);
}
