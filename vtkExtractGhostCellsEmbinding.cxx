// JavaScript wrapper for vtkExtractGhostCells with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkExtractGhostCellsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkExtractGhostCells.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractGhostCells.h"

template<> void emscripten::internal::raw_destructor<vtkExtractGhostCells>(vtkExtractGhostCells * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractGhostCells_class) {
  emscripten::class_<vtkExtractGhostCells, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkExtractGhostCells")
    .smart_ptr<vtkSmartPointer<vtkExtractGhostCells>>("vtkSmartPointer<vtkExtractGhostCells>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractGhostCells>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractGhostCells::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractGhostCells& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractGhostCells::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractGhostCells::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractGhostCells::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractGhostCells& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputGhostArrayName", emscripten::optional_override([](vtkExtractGhostCells& self, const std::string & arg_0) -> void {  return self.SetOutputGhostArrayName( arg_0.c_str());}))
    .function("GetOutputGhostArrayName", emscripten::optional_override([](vtkExtractGhostCells& self) -> std::string {  return self.GetOutputGhostArrayName();}));
}
